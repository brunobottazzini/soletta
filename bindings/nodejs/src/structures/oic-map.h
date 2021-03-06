/*
 * This file is part of the Soletta™ Project
 *
 * Copyright (C) 2015 Intel Corporation. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <v8.h>
#include <sol-oic-client.h>

v8::Local<v8::Value> js_sol_oic_map_reader(const struct sol_oic_map_reader *representation);

bool c_sol_oic_map_writer(v8::Local<v8::Object> payload, struct sol_oic_map_writer *map);

/* @p data is a Nan::Persistent<Object> * */
bool oic_map_writer_callback(void *data, struct sol_oic_map_writer *map);

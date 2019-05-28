/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/ms/v20180408/model/CreateCosSecKeyInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ms::V20180408::Model;
using namespace rapidjson;
using namespace std;

CreateCosSecKeyInstanceRequest::CreateCosSecKeyInstanceRequest() :
    m_cosRegionHasBeenSet(false),
    m_durationHasBeenSet(false)
{
}

string CreateCosSecKeyInstanceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cosRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CosRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cosRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_duration, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCosSecKeyInstanceRequest::GetCosRegion() const
{
    return m_cosRegion;
}

void CreateCosSecKeyInstanceRequest::SetCosRegion(const string& _cosRegion)
{
    m_cosRegion = _cosRegion;
    m_cosRegionHasBeenSet = true;
}

bool CreateCosSecKeyInstanceRequest::CosRegionHasBeenSet() const
{
    return m_cosRegionHasBeenSet;
}

uint64_t CreateCosSecKeyInstanceRequest::GetDuration() const
{
    return m_duration;
}

void CreateCosSecKeyInstanceRequest::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool CreateCosSecKeyInstanceRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}



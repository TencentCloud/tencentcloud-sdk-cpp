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

#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeBindSceneDevicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

DescribeBindSceneDevicesRequest::DescribeBindSceneDevicesRequest() :
    m_sceneIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeBindSceneDevicesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sceneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sceneId, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeBindSceneDevicesRequest::GetSceneId() const
{
    return m_sceneId;
}

void DescribeBindSceneDevicesRequest::SetSceneId(const int64_t& _sceneId)
{
    m_sceneId = _sceneId;
    m_sceneIdHasBeenSet = true;
}

bool DescribeBindSceneDevicesRequest::SceneIdHasBeenSet() const
{
    return m_sceneIdHasBeenSet;
}

int64_t DescribeBindSceneDevicesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBindSceneDevicesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBindSceneDevicesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeBindSceneDevicesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBindSceneDevicesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBindSceneDevicesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}



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

#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardApplicationConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

DescribeWhiteboardApplicationConfigRequest::DescribeWhiteboardApplicationConfigRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_taskTypesHasBeenSet(false),
    m_sdkAppIdsHasBeenSet(false)
{
}

string DescribeWhiteboardApplicationConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_taskTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskTypes.begin(); itr != m_taskTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sdkAppIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sdkAppIds.begin(); itr != m_sdkAppIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeWhiteboardApplicationConfigRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DescribeWhiteboardApplicationConfigRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DescribeWhiteboardApplicationConfigRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

vector<string> DescribeWhiteboardApplicationConfigRequest::GetTaskTypes() const
{
    return m_taskTypes;
}

void DescribeWhiteboardApplicationConfigRequest::SetTaskTypes(const vector<string>& _taskTypes)
{
    m_taskTypes = _taskTypes;
    m_taskTypesHasBeenSet = true;
}

bool DescribeWhiteboardApplicationConfigRequest::TaskTypesHasBeenSet() const
{
    return m_taskTypesHasBeenSet;
}

vector<int64_t> DescribeWhiteboardApplicationConfigRequest::GetSdkAppIds() const
{
    return m_sdkAppIds;
}

void DescribeWhiteboardApplicationConfigRequest::SetSdkAppIds(const vector<int64_t>& _sdkAppIds)
{
    m_sdkAppIds = _sdkAppIds;
    m_sdkAppIdsHasBeenSet = true;
}

bool DescribeWhiteboardApplicationConfigRequest::SdkAppIdsHasBeenSet() const
{
    return m_sdkAppIdsHasBeenSet;
}



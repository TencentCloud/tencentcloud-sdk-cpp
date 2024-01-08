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

#include <tencentcloud/vod/v20180717/model/CreateCLSTopicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateCLSTopicRequest::CreateCLSTopicRequest() :
    m_cLSRegionHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_logsetIdHasBeenSet(false)
{
}

string CreateCLSTopicRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cLSRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLSRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cLSRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCLSTopicRequest::GetCLSRegion() const
{
    return m_cLSRegion;
}

void CreateCLSTopicRequest::SetCLSRegion(const string& _cLSRegion)
{
    m_cLSRegion = _cLSRegion;
    m_cLSRegionHasBeenSet = true;
}

bool CreateCLSTopicRequest::CLSRegionHasBeenSet() const
{
    return m_cLSRegionHasBeenSet;
}

string CreateCLSTopicRequest::GetTopicName() const
{
    return m_topicName;
}

void CreateCLSTopicRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool CreateCLSTopicRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string CreateCLSTopicRequest::GetLogsetId() const
{
    return m_logsetId;
}

void CreateCLSTopicRequest::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool CreateCLSTopicRequest::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}



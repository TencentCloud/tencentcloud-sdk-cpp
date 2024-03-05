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

#include <tencentcloud/teo/v20220901/model/CLSTopic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CLSTopic::CLSTopic() :
    m_logSetIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_logSetRegionHasBeenSet(false)
{
}

CoreInternalOutcome CLSTopic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogSetId") && !value["LogSetId"].IsNull())
    {
        if (!value["LogSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSTopic.LogSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSetId = string(value["LogSetId"].GetString());
        m_logSetIdHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSTopic.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("LogSetRegion") && !value["LogSetRegion"].IsNull())
    {
        if (!value["LogSetRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSTopic.LogSetRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSetRegion = string(value["LogSetRegion"].GetString());
        m_logSetRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CLSTopic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSetRegion.c_str(), allocator).Move(), allocator);
    }

}


string CLSTopic::GetLogSetId() const
{
    return m_logSetId;
}

void CLSTopic::SetLogSetId(const string& _logSetId)
{
    m_logSetId = _logSetId;
    m_logSetIdHasBeenSet = true;
}

bool CLSTopic::LogSetIdHasBeenSet() const
{
    return m_logSetIdHasBeenSet;
}

string CLSTopic::GetTopicId() const
{
    return m_topicId;
}

void CLSTopic::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CLSTopic::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string CLSTopic::GetLogSetRegion() const
{
    return m_logSetRegion;
}

void CLSTopic::SetLogSetRegion(const string& _logSetRegion)
{
    m_logSetRegion = _logSetRegion;
    m_logSetRegionHasBeenSet = true;
}

bool CLSTopic::LogSetRegionHasBeenSet() const
{
    return m_logSetRegionHasBeenSet;
}


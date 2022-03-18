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

#include <tencentcloud/monitor/v20180724/model/CLSNotice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

CLSNotice::CLSNotice() :
    m_regionHasBeenSet(false),
    m_logSetIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_enableHasBeenSet(false)
{
}

CoreInternalOutcome CLSNotice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSNotice.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("LogSetId") && !value["LogSetId"].IsNull())
    {
        if (!value["LogSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSNotice.LogSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSetId = string(value["LogSetId"].GetString());
        m_logSetIdHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSNotice.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CLSNotice.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CLSNotice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

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

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

}


string CLSNotice::GetRegion() const
{
    return m_region;
}

void CLSNotice::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CLSNotice::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string CLSNotice::GetLogSetId() const
{
    return m_logSetId;
}

void CLSNotice::SetLogSetId(const string& _logSetId)
{
    m_logSetId = _logSetId;
    m_logSetIdHasBeenSet = true;
}

bool CLSNotice::LogSetIdHasBeenSet() const
{
    return m_logSetIdHasBeenSet;
}

string CLSNotice::GetTopicId() const
{
    return m_topicId;
}

void CLSNotice::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CLSNotice::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

int64_t CLSNotice::GetEnable() const
{
    return m_enable;
}

void CLSNotice::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool CLSNotice::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}


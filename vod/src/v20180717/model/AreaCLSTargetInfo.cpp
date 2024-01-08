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

#include <tencentcloud/vod/v20180717/model/AreaCLSTargetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AreaCLSTargetInfo::AreaCLSTargetInfo() :
    m_cLSRegionHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_switchHasBeenSet(false)
{
}

CoreInternalOutcome AreaCLSTargetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CLSRegion") && !value["CLSRegion"].IsNull())
    {
        if (!value["CLSRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AreaCLSTargetInfo.CLSRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cLSRegion = string(value["CLSRegion"].GetString());
        m_cLSRegionHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AreaCLSTargetInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AreaCLSTargetInfo.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AreaCLSTargetInfo.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AreaCLSTargetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cLSRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLSRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cLSRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

}


string AreaCLSTargetInfo::GetCLSRegion() const
{
    return m_cLSRegion;
}

void AreaCLSTargetInfo::SetCLSRegion(const string& _cLSRegion)
{
    m_cLSRegion = _cLSRegion;
    m_cLSRegionHasBeenSet = true;
}

bool AreaCLSTargetInfo::CLSRegionHasBeenSet() const
{
    return m_cLSRegionHasBeenSet;
}

string AreaCLSTargetInfo::GetTopicId() const
{
    return m_topicId;
}

void AreaCLSTargetInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool AreaCLSTargetInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string AreaCLSTargetInfo::GetLogsetId() const
{
    return m_logsetId;
}

void AreaCLSTargetInfo::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool AreaCLSTargetInfo::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string AreaCLSTargetInfo::GetSwitch() const
{
    return m_switch;
}

void AreaCLSTargetInfo::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool AreaCLSTargetInfo::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}


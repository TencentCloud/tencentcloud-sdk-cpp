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

#include <tencentcloud/tcss/v20201101/model/SecLogDeliveryClsSettingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

SecLogDeliveryClsSettingInfo::SecLogDeliveryClsSettingInfo() :
    m_logTypeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_logSetHasBeenSet(false),
    m_topicIDHasBeenSet(false),
    m_logSetNameHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_subLogTypeHasBeenSet(false),
    m_errMsgHasBeenSet(false)
{
}

CoreInternalOutcome SecLogDeliveryClsSettingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogDeliveryClsSettingInfo.LogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logType = string(value["LogType"].GetString());
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogDeliveryClsSettingInfo.State` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetBool();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogDeliveryClsSettingInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("LogSet") && !value["LogSet"].IsNull())
    {
        if (!value["LogSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogDeliveryClsSettingInfo.LogSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSet = string(value["LogSet"].GetString());
        m_logSetHasBeenSet = true;
    }

    if (value.HasMember("TopicID") && !value["TopicID"].IsNull())
    {
        if (!value["TopicID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogDeliveryClsSettingInfo.TopicID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicID = string(value["TopicID"].GetString());
        m_topicIDHasBeenSet = true;
    }

    if (value.HasMember("LogSetName") && !value["LogSetName"].IsNull())
    {
        if (!value["LogSetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogDeliveryClsSettingInfo.LogSetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSetName = string(value["LogSetName"].GetString());
        m_logSetNameHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogDeliveryClsSettingInfo.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("SubLogType") && !value["SubLogType"].IsNull())
    {
        if (!value["SubLogType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecLogDeliveryClsSettingInfo.SubLogType` is not array type"));

        const rapidjson::Value &tmpValue = value["SubLogType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subLogType.push_back((*itr).GetString());
        }
        m_subLogTypeHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogDeliveryClsSettingInfo.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecLogDeliveryClsSettingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSet.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicID.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSetName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_subLogTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubLogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subLogType.begin(); itr != m_subLogType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

}


string SecLogDeliveryClsSettingInfo::GetLogType() const
{
    return m_logType;
}

void SecLogDeliveryClsSettingInfo::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool SecLogDeliveryClsSettingInfo::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

bool SecLogDeliveryClsSettingInfo::GetState() const
{
    return m_state;
}

void SecLogDeliveryClsSettingInfo::SetState(const bool& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool SecLogDeliveryClsSettingInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string SecLogDeliveryClsSettingInfo::GetRegion() const
{
    return m_region;
}

void SecLogDeliveryClsSettingInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SecLogDeliveryClsSettingInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string SecLogDeliveryClsSettingInfo::GetLogSet() const
{
    return m_logSet;
}

void SecLogDeliveryClsSettingInfo::SetLogSet(const string& _logSet)
{
    m_logSet = _logSet;
    m_logSetHasBeenSet = true;
}

bool SecLogDeliveryClsSettingInfo::LogSetHasBeenSet() const
{
    return m_logSetHasBeenSet;
}

string SecLogDeliveryClsSettingInfo::GetTopicID() const
{
    return m_topicID;
}

void SecLogDeliveryClsSettingInfo::SetTopicID(const string& _topicID)
{
    m_topicID = _topicID;
    m_topicIDHasBeenSet = true;
}

bool SecLogDeliveryClsSettingInfo::TopicIDHasBeenSet() const
{
    return m_topicIDHasBeenSet;
}

string SecLogDeliveryClsSettingInfo::GetLogSetName() const
{
    return m_logSetName;
}

void SecLogDeliveryClsSettingInfo::SetLogSetName(const string& _logSetName)
{
    m_logSetName = _logSetName;
    m_logSetNameHasBeenSet = true;
}

bool SecLogDeliveryClsSettingInfo::LogSetNameHasBeenSet() const
{
    return m_logSetNameHasBeenSet;
}

string SecLogDeliveryClsSettingInfo::GetTopicName() const
{
    return m_topicName;
}

void SecLogDeliveryClsSettingInfo::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool SecLogDeliveryClsSettingInfo::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

vector<string> SecLogDeliveryClsSettingInfo::GetSubLogType() const
{
    return m_subLogType;
}

void SecLogDeliveryClsSettingInfo::SetSubLogType(const vector<string>& _subLogType)
{
    m_subLogType = _subLogType;
    m_subLogTypeHasBeenSet = true;
}

bool SecLogDeliveryClsSettingInfo::SubLogTypeHasBeenSet() const
{
    return m_subLogTypeHasBeenSet;
}

string SecLogDeliveryClsSettingInfo::GetErrMsg() const
{
    return m_errMsg;
}

void SecLogDeliveryClsSettingInfo::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool SecLogDeliveryClsSettingInfo::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}


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

#include <tencentcloud/gpm/v20200820/model/MatchInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gpm::V20200820::Model;
using namespace std;

MatchInfo::MatchInfo() :
    m_matchCodeHasBeenSet(false),
    m_matchNameHasBeenSet(false),
    m_matchDescHasBeenSet(false),
    m_ruleCodeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_notifyUrlHasBeenSet(false),
    m_serverTypeHasBeenSet(false),
    m_serverRegionHasBeenSet(false),
    m_serverQueueHasBeenSet(false),
    m_customPushDataHasBeenSet(false),
    m_serverSessionDataHasBeenSet(false),
    m_gamePropertiesHasBeenSet(false),
    m_logSwitchHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_logsetNameHasBeenSet(false),
    m_logTopicIdHasBeenSet(false),
    m_logTopicNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_createUinHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_logStatusHasBeenSet(false)
{
}

CoreInternalOutcome MatchInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MatchCode") && !value["MatchCode"].IsNull())
    {
        if (!value["MatchCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchInfo.MatchCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchCode = string(value["MatchCode"].GetString());
        m_matchCodeHasBeenSet = true;
    }

    if (value.HasMember("MatchName") && !value["MatchName"].IsNull())
    {
        if (!value["MatchName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchInfo.MatchName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchName = string(value["MatchName"].GetString());
        m_matchNameHasBeenSet = true;
    }

    if (value.HasMember("MatchDesc") && !value["MatchDesc"].IsNull())
    {
        if (!value["MatchDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchInfo.MatchDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchDesc = string(value["MatchDesc"].GetString());
        m_matchDescHasBeenSet = true;
    }

    if (value.HasMember("RuleCode") && !value["RuleCode"].IsNull())
    {
        if (!value["RuleCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchInfo.RuleCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleCode = string(value["RuleCode"].GetString());
        m_ruleCodeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MatchInfo.Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("NotifyUrl") && !value["NotifyUrl"].IsNull())
    {
        if (!value["NotifyUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchInfo.NotifyUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notifyUrl = string(value["NotifyUrl"].GetString());
        m_notifyUrlHasBeenSet = true;
    }

    if (value.HasMember("ServerType") && !value["ServerType"].IsNull())
    {
        if (!value["ServerType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MatchInfo.ServerType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serverType = value["ServerType"].GetInt64();
        m_serverTypeHasBeenSet = true;
    }

    if (value.HasMember("ServerRegion") && !value["ServerRegion"].IsNull())
    {
        if (!value["ServerRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchInfo.ServerRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverRegion = string(value["ServerRegion"].GetString());
        m_serverRegionHasBeenSet = true;
    }

    if (value.HasMember("ServerQueue") && !value["ServerQueue"].IsNull())
    {
        if (!value["ServerQueue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchInfo.ServerQueue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverQueue = string(value["ServerQueue"].GetString());
        m_serverQueueHasBeenSet = true;
    }

    if (value.HasMember("CustomPushData") && !value["CustomPushData"].IsNull())
    {
        if (!value["CustomPushData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchInfo.CustomPushData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customPushData = string(value["CustomPushData"].GetString());
        m_customPushDataHasBeenSet = true;
    }

    if (value.HasMember("ServerSessionData") && !value["ServerSessionData"].IsNull())
    {
        if (!value["ServerSessionData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchInfo.ServerSessionData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverSessionData = string(value["ServerSessionData"].GetString());
        m_serverSessionDataHasBeenSet = true;
    }

    if (value.HasMember("GameProperties") && !value["GameProperties"].IsNull())
    {
        if (!value["GameProperties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MatchInfo.GameProperties` is not array type"));

        const rapidjson::Value &tmpValue = value["GameProperties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StringKV item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_gameProperties.push_back(item);
        }
        m_gamePropertiesHasBeenSet = true;
    }

    if (value.HasMember("LogSwitch") && !value["LogSwitch"].IsNull())
    {
        if (!value["LogSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MatchInfo.LogSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logSwitch = value["LogSwitch"].GetInt64();
        m_logSwitchHasBeenSet = true;
    }

    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchInfo.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("LogsetName") && !value["LogsetName"].IsNull())
    {
        if (!value["LogsetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchInfo.LogsetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetName = string(value["LogsetName"].GetString());
        m_logsetNameHasBeenSet = true;
    }

    if (value.HasMember("LogTopicId") && !value["LogTopicId"].IsNull())
    {
        if (!value["LogTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchInfo.LogTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logTopicId = string(value["LogTopicId"].GetString());
        m_logTopicIdHasBeenSet = true;
    }

    if (value.HasMember("LogTopicName") && !value["LogTopicName"].IsNull())
    {
        if (!value["LogTopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchInfo.LogTopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logTopicName = string(value["LogTopicName"].GetString());
        m_logTopicNameHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MatchInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StringKV item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchInfo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("CreateUin") && !value["CreateUin"].IsNull())
    {
        if (!value["CreateUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchInfo.CreateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUin = string(value["CreateUin"].GetString());
        m_createUinHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchInfo.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("LogStatus") && !value["LogStatus"].IsNull())
    {
        if (!value["LogStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MatchInfo.LogStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logStatus = value["LogStatus"].GetInt64();
        m_logStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MatchInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_matchCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchCode.c_str(), allocator).Move(), allocator);
    }

    if (m_matchNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchName.c_str(), allocator).Move(), allocator);
    }

    if (m_matchDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleCode.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_notifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_serverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serverType, allocator);
    }

    if (m_serverRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_serverQueueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerQueue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverQueue.c_str(), allocator).Move(), allocator);
    }

    if (m_customPushDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomPushData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customPushData.c_str(), allocator).Move(), allocator);
    }

    if (m_serverSessionDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerSessionData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverSessionData.c_str(), allocator).Move(), allocator);
    }

    if (m_gamePropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameProperties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_gameProperties.begin(); itr != m_gameProperties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_logSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logSwitch, allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetName.c_str(), allocator).Move(), allocator);
    }

    if (m_logTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_logTopicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logTopicName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_createUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUin.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_logStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logStatus, allocator);
    }

}


string MatchInfo::GetMatchCode() const
{
    return m_matchCode;
}

void MatchInfo::SetMatchCode(const string& _matchCode)
{
    m_matchCode = _matchCode;
    m_matchCodeHasBeenSet = true;
}

bool MatchInfo::MatchCodeHasBeenSet() const
{
    return m_matchCodeHasBeenSet;
}

string MatchInfo::GetMatchName() const
{
    return m_matchName;
}

void MatchInfo::SetMatchName(const string& _matchName)
{
    m_matchName = _matchName;
    m_matchNameHasBeenSet = true;
}

bool MatchInfo::MatchNameHasBeenSet() const
{
    return m_matchNameHasBeenSet;
}

string MatchInfo::GetMatchDesc() const
{
    return m_matchDesc;
}

void MatchInfo::SetMatchDesc(const string& _matchDesc)
{
    m_matchDesc = _matchDesc;
    m_matchDescHasBeenSet = true;
}

bool MatchInfo::MatchDescHasBeenSet() const
{
    return m_matchDescHasBeenSet;
}

string MatchInfo::GetRuleCode() const
{
    return m_ruleCode;
}

void MatchInfo::SetRuleCode(const string& _ruleCode)
{
    m_ruleCode = _ruleCode;
    m_ruleCodeHasBeenSet = true;
}

bool MatchInfo::RuleCodeHasBeenSet() const
{
    return m_ruleCodeHasBeenSet;
}

string MatchInfo::GetCreateTime() const
{
    return m_createTime;
}

void MatchInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MatchInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t MatchInfo::GetTimeout() const
{
    return m_timeout;
}

void MatchInfo::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool MatchInfo::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string MatchInfo::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void MatchInfo::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool MatchInfo::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}

int64_t MatchInfo::GetServerType() const
{
    return m_serverType;
}

void MatchInfo::SetServerType(const int64_t& _serverType)
{
    m_serverType = _serverType;
    m_serverTypeHasBeenSet = true;
}

bool MatchInfo::ServerTypeHasBeenSet() const
{
    return m_serverTypeHasBeenSet;
}

string MatchInfo::GetServerRegion() const
{
    return m_serverRegion;
}

void MatchInfo::SetServerRegion(const string& _serverRegion)
{
    m_serverRegion = _serverRegion;
    m_serverRegionHasBeenSet = true;
}

bool MatchInfo::ServerRegionHasBeenSet() const
{
    return m_serverRegionHasBeenSet;
}

string MatchInfo::GetServerQueue() const
{
    return m_serverQueue;
}

void MatchInfo::SetServerQueue(const string& _serverQueue)
{
    m_serverQueue = _serverQueue;
    m_serverQueueHasBeenSet = true;
}

bool MatchInfo::ServerQueueHasBeenSet() const
{
    return m_serverQueueHasBeenSet;
}

string MatchInfo::GetCustomPushData() const
{
    return m_customPushData;
}

void MatchInfo::SetCustomPushData(const string& _customPushData)
{
    m_customPushData = _customPushData;
    m_customPushDataHasBeenSet = true;
}

bool MatchInfo::CustomPushDataHasBeenSet() const
{
    return m_customPushDataHasBeenSet;
}

string MatchInfo::GetServerSessionData() const
{
    return m_serverSessionData;
}

void MatchInfo::SetServerSessionData(const string& _serverSessionData)
{
    m_serverSessionData = _serverSessionData;
    m_serverSessionDataHasBeenSet = true;
}

bool MatchInfo::ServerSessionDataHasBeenSet() const
{
    return m_serverSessionDataHasBeenSet;
}

vector<StringKV> MatchInfo::GetGameProperties() const
{
    return m_gameProperties;
}

void MatchInfo::SetGameProperties(const vector<StringKV>& _gameProperties)
{
    m_gameProperties = _gameProperties;
    m_gamePropertiesHasBeenSet = true;
}

bool MatchInfo::GamePropertiesHasBeenSet() const
{
    return m_gamePropertiesHasBeenSet;
}

int64_t MatchInfo::GetLogSwitch() const
{
    return m_logSwitch;
}

void MatchInfo::SetLogSwitch(const int64_t& _logSwitch)
{
    m_logSwitch = _logSwitch;
    m_logSwitchHasBeenSet = true;
}

bool MatchInfo::LogSwitchHasBeenSet() const
{
    return m_logSwitchHasBeenSet;
}

string MatchInfo::GetLogsetId() const
{
    return m_logsetId;
}

void MatchInfo::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool MatchInfo::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string MatchInfo::GetLogsetName() const
{
    return m_logsetName;
}

void MatchInfo::SetLogsetName(const string& _logsetName)
{
    m_logsetName = _logsetName;
    m_logsetNameHasBeenSet = true;
}

bool MatchInfo::LogsetNameHasBeenSet() const
{
    return m_logsetNameHasBeenSet;
}

string MatchInfo::GetLogTopicId() const
{
    return m_logTopicId;
}

void MatchInfo::SetLogTopicId(const string& _logTopicId)
{
    m_logTopicId = _logTopicId;
    m_logTopicIdHasBeenSet = true;
}

bool MatchInfo::LogTopicIdHasBeenSet() const
{
    return m_logTopicIdHasBeenSet;
}

string MatchInfo::GetLogTopicName() const
{
    return m_logTopicName;
}

void MatchInfo::SetLogTopicName(const string& _logTopicName)
{
    m_logTopicName = _logTopicName;
    m_logTopicNameHasBeenSet = true;
}

bool MatchInfo::LogTopicNameHasBeenSet() const
{
    return m_logTopicNameHasBeenSet;
}

vector<StringKV> MatchInfo::GetTags() const
{
    return m_tags;
}

void MatchInfo::SetTags(const vector<StringKV>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool MatchInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string MatchInfo::GetRegion() const
{
    return m_region;
}

void MatchInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool MatchInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string MatchInfo::GetAppId() const
{
    return m_appId;
}

void MatchInfo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool MatchInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string MatchInfo::GetUin() const
{
    return m_uin;
}

void MatchInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool MatchInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string MatchInfo::GetCreateUin() const
{
    return m_createUin;
}

void MatchInfo::SetCreateUin(const string& _createUin)
{
    m_createUin = _createUin;
    m_createUinHasBeenSet = true;
}

bool MatchInfo::CreateUinHasBeenSet() const
{
    return m_createUinHasBeenSet;
}

string MatchInfo::GetRuleName() const
{
    return m_ruleName;
}

void MatchInfo::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool MatchInfo::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

int64_t MatchInfo::GetLogStatus() const
{
    return m_logStatus;
}

void MatchInfo::SetLogStatus(const int64_t& _logStatus)
{
    m_logStatus = _logStatus;
    m_logStatusHasBeenSet = true;
}

bool MatchInfo::LogStatusHasBeenSet() const
{
    return m_logStatusHasBeenSet;
}


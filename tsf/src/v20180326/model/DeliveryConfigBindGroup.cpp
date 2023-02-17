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

#include <tencentcloud/tsf/v20180326/model/DeliveryConfigBindGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DeliveryConfigBindGroup::DeliveryConfigBindGroup() :
    m_configIdHasBeenSet(false),
    m_configNameHasBeenSet(false),
    m_collectPathHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_kafkaVIpHasBeenSet(false),
    m_kafkaAddressHasBeenSet(false),
    m_kafkaVPortHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_lineRuleHasBeenSet(false),
    m_customRuleHasBeenSet(false),
    m_enableGlobalLineRuleHasBeenSet(false),
    m_enableAuthHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_kafkaInfosHasBeenSet(false)
{
}

CoreInternalOutcome DeliveryConfigBindGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryConfigBindGroup.ConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configId = string(value["ConfigId"].GetString());
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigName") && !value["ConfigName"].IsNull())
    {
        if (!value["ConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryConfigBindGroup.ConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configName = string(value["ConfigName"].GetString());
        m_configNameHasBeenSet = true;
    }

    if (value.HasMember("CollectPath") && !value["CollectPath"].IsNull())
    {
        if (!value["CollectPath"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeliveryConfigBindGroup.CollectPath` is not array type"));

        const rapidjson::Value &tmpValue = value["CollectPath"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_collectPath.push_back((*itr).GetString());
        }
        m_collectPathHasBeenSet = true;
    }

    if (value.HasMember("Groups") && !value["Groups"].IsNull())
    {
        if (!value["Groups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeliveryConfigBindGroup.Groups` is not array type"));

        const rapidjson::Value &tmpValue = value["Groups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GroupInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groups.push_back(item);
        }
        m_groupsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryConfigBindGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("KafkaVIp") && !value["KafkaVIp"].IsNull())
    {
        if (!value["KafkaVIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryConfigBindGroup.KafkaVIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaVIp = string(value["KafkaVIp"].GetString());
        m_kafkaVIpHasBeenSet = true;
    }

    if (value.HasMember("KafkaAddress") && !value["KafkaAddress"].IsNull())
    {
        if (!value["KafkaAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryConfigBindGroup.KafkaAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaAddress = string(value["KafkaAddress"].GetString());
        m_kafkaAddressHasBeenSet = true;
    }

    if (value.HasMember("KafkaVPort") && !value["KafkaVPort"].IsNull())
    {
        if (!value["KafkaVPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryConfigBindGroup.KafkaVPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaVPort = string(value["KafkaVPort"].GetString());
        m_kafkaVPortHasBeenSet = true;
    }

    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryConfigBindGroup.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("LineRule") && !value["LineRule"].IsNull())
    {
        if (!value["LineRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryConfigBindGroup.LineRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineRule = string(value["LineRule"].GetString());
        m_lineRuleHasBeenSet = true;
    }

    if (value.HasMember("CustomRule") && !value["CustomRule"].IsNull())
    {
        if (!value["CustomRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryConfigBindGroup.CustomRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customRule = string(value["CustomRule"].GetString());
        m_customRuleHasBeenSet = true;
    }

    if (value.HasMember("EnableGlobalLineRule") && !value["EnableGlobalLineRule"].IsNull())
    {
        if (!value["EnableGlobalLineRule"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryConfigBindGroup.EnableGlobalLineRule` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableGlobalLineRule = value["EnableGlobalLineRule"].GetBool();
        m_enableGlobalLineRuleHasBeenSet = true;
    }

    if (value.HasMember("EnableAuth") && !value["EnableAuth"].IsNull())
    {
        if (!value["EnableAuth"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryConfigBindGroup.EnableAuth` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableAuth = value["EnableAuth"].GetBool();
        m_enableAuthHasBeenSet = true;
    }

    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryConfigBindGroup.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryConfigBindGroup.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("KafkaInfos") && !value["KafkaInfos"].IsNull())
    {
        if (!value["KafkaInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeliveryConfigBindGroup.KafkaInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["KafkaInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeliveryKafkaInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_kafkaInfos.push_back(item);
        }
        m_kafkaInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeliveryConfigBindGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_configNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configName.c_str(), allocator).Move(), allocator);
    }

    if (m_collectPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_collectPath.begin(); itr != m_collectPath.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_groupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Groups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groups.begin(); itr != m_groups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaVIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaVIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaVIp.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaVPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaVPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaVPort.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_lineRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineRule.c_str(), allocator).Move(), allocator);
    }

    if (m_customRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customRule.c_str(), allocator).Move(), allocator);
    }

    if (m_enableGlobalLineRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableGlobalLineRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableGlobalLineRule, allocator);
    }

    if (m_enableAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableAuth, allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_kafkaInfos.begin(); itr != m_kafkaInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DeliveryConfigBindGroup::GetConfigId() const
{
    return m_configId;
}

void DeliveryConfigBindGroup::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool DeliveryConfigBindGroup::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string DeliveryConfigBindGroup::GetConfigName() const
{
    return m_configName;
}

void DeliveryConfigBindGroup::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool DeliveryConfigBindGroup::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

vector<string> DeliveryConfigBindGroup::GetCollectPath() const
{
    return m_collectPath;
}

void DeliveryConfigBindGroup::SetCollectPath(const vector<string>& _collectPath)
{
    m_collectPath = _collectPath;
    m_collectPathHasBeenSet = true;
}

bool DeliveryConfigBindGroup::CollectPathHasBeenSet() const
{
    return m_collectPathHasBeenSet;
}

vector<GroupInfo> DeliveryConfigBindGroup::GetGroups() const
{
    return m_groups;
}

void DeliveryConfigBindGroup::SetGroups(const vector<GroupInfo>& _groups)
{
    m_groups = _groups;
    m_groupsHasBeenSet = true;
}

bool DeliveryConfigBindGroup::GroupsHasBeenSet() const
{
    return m_groupsHasBeenSet;
}

string DeliveryConfigBindGroup::GetCreateTime() const
{
    return m_createTime;
}

void DeliveryConfigBindGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DeliveryConfigBindGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DeliveryConfigBindGroup::GetKafkaVIp() const
{
    return m_kafkaVIp;
}

void DeliveryConfigBindGroup::SetKafkaVIp(const string& _kafkaVIp)
{
    m_kafkaVIp = _kafkaVIp;
    m_kafkaVIpHasBeenSet = true;
}

bool DeliveryConfigBindGroup::KafkaVIpHasBeenSet() const
{
    return m_kafkaVIpHasBeenSet;
}

string DeliveryConfigBindGroup::GetKafkaAddress() const
{
    return m_kafkaAddress;
}

void DeliveryConfigBindGroup::SetKafkaAddress(const string& _kafkaAddress)
{
    m_kafkaAddress = _kafkaAddress;
    m_kafkaAddressHasBeenSet = true;
}

bool DeliveryConfigBindGroup::KafkaAddressHasBeenSet() const
{
    return m_kafkaAddressHasBeenSet;
}

string DeliveryConfigBindGroup::GetKafkaVPort() const
{
    return m_kafkaVPort;
}

void DeliveryConfigBindGroup::SetKafkaVPort(const string& _kafkaVPort)
{
    m_kafkaVPort = _kafkaVPort;
    m_kafkaVPortHasBeenSet = true;
}

bool DeliveryConfigBindGroup::KafkaVPortHasBeenSet() const
{
    return m_kafkaVPortHasBeenSet;
}

string DeliveryConfigBindGroup::GetTopic() const
{
    return m_topic;
}

void DeliveryConfigBindGroup::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool DeliveryConfigBindGroup::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string DeliveryConfigBindGroup::GetLineRule() const
{
    return m_lineRule;
}

void DeliveryConfigBindGroup::SetLineRule(const string& _lineRule)
{
    m_lineRule = _lineRule;
    m_lineRuleHasBeenSet = true;
}

bool DeliveryConfigBindGroup::LineRuleHasBeenSet() const
{
    return m_lineRuleHasBeenSet;
}

string DeliveryConfigBindGroup::GetCustomRule() const
{
    return m_customRule;
}

void DeliveryConfigBindGroup::SetCustomRule(const string& _customRule)
{
    m_customRule = _customRule;
    m_customRuleHasBeenSet = true;
}

bool DeliveryConfigBindGroup::CustomRuleHasBeenSet() const
{
    return m_customRuleHasBeenSet;
}

bool DeliveryConfigBindGroup::GetEnableGlobalLineRule() const
{
    return m_enableGlobalLineRule;
}

void DeliveryConfigBindGroup::SetEnableGlobalLineRule(const bool& _enableGlobalLineRule)
{
    m_enableGlobalLineRule = _enableGlobalLineRule;
    m_enableGlobalLineRuleHasBeenSet = true;
}

bool DeliveryConfigBindGroup::EnableGlobalLineRuleHasBeenSet() const
{
    return m_enableGlobalLineRuleHasBeenSet;
}

bool DeliveryConfigBindGroup::GetEnableAuth() const
{
    return m_enableAuth;
}

void DeliveryConfigBindGroup::SetEnableAuth(const bool& _enableAuth)
{
    m_enableAuth = _enableAuth;
    m_enableAuthHasBeenSet = true;
}

bool DeliveryConfigBindGroup::EnableAuthHasBeenSet() const
{
    return m_enableAuthHasBeenSet;
}

string DeliveryConfigBindGroup::GetUsername() const
{
    return m_username;
}

void DeliveryConfigBindGroup::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool DeliveryConfigBindGroup::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string DeliveryConfigBindGroup::GetPassword() const
{
    return m_password;
}

void DeliveryConfigBindGroup::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool DeliveryConfigBindGroup::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

vector<DeliveryKafkaInfo> DeliveryConfigBindGroup::GetKafkaInfos() const
{
    return m_kafkaInfos;
}

void DeliveryConfigBindGroup::SetKafkaInfos(const vector<DeliveryKafkaInfo>& _kafkaInfos)
{
    m_kafkaInfos = _kafkaInfos;
    m_kafkaInfosHasBeenSet = true;
}

bool DeliveryConfigBindGroup::KafkaInfosHasBeenSet() const
{
    return m_kafkaInfosHasBeenSet;
}


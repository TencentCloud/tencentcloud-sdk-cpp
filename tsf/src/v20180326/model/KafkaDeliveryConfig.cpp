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

#include <tencentcloud/tsf/v20180326/model/KafkaDeliveryConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

KafkaDeliveryConfig::KafkaDeliveryConfig() :
    m_configIdHasBeenSet(false),
    m_configNameHasBeenSet(false),
    m_collectPathHasBeenSet(false),
    m_kafkaVIpHasBeenSet(false),
    m_kafkaVPortHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_lineRuleHasBeenSet(false),
    m_enableAuthHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_kafkaInfosHasBeenSet(false),
    m_enableGlobalLineRuleHasBeenSet(false),
    m_customRuleHasBeenSet(false),
    m_kafkaAddressHasBeenSet(false)
{
}

CoreInternalOutcome KafkaDeliveryConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaDeliveryConfig.ConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configId = string(value["ConfigId"].GetString());
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigName") && !value["ConfigName"].IsNull())
    {
        if (!value["ConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaDeliveryConfig.ConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configName = string(value["ConfigName"].GetString());
        m_configNameHasBeenSet = true;
    }

    if (value.HasMember("CollectPath") && !value["CollectPath"].IsNull())
    {
        if (!value["CollectPath"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KafkaDeliveryConfig.CollectPath` is not array type"));

        const rapidjson::Value &tmpValue = value["CollectPath"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_collectPath.push_back((*itr).GetString());
        }
        m_collectPathHasBeenSet = true;
    }

    if (value.HasMember("KafkaVIp") && !value["KafkaVIp"].IsNull())
    {
        if (!value["KafkaVIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaDeliveryConfig.KafkaVIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaVIp = string(value["KafkaVIp"].GetString());
        m_kafkaVIpHasBeenSet = true;
    }

    if (value.HasMember("KafkaVPort") && !value["KafkaVPort"].IsNull())
    {
        if (!value["KafkaVPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaDeliveryConfig.KafkaVPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaVPort = string(value["KafkaVPort"].GetString());
        m_kafkaVPortHasBeenSet = true;
    }

    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaDeliveryConfig.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("LineRule") && !value["LineRule"].IsNull())
    {
        if (!value["LineRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaDeliveryConfig.LineRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineRule = string(value["LineRule"].GetString());
        m_lineRuleHasBeenSet = true;
    }

    if (value.HasMember("EnableAuth") && !value["EnableAuth"].IsNull())
    {
        if (!value["EnableAuth"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaDeliveryConfig.EnableAuth` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableAuth = value["EnableAuth"].GetBool();
        m_enableAuthHasBeenSet = true;
    }

    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaDeliveryConfig.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaDeliveryConfig.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("KafkaInfos") && !value["KafkaInfos"].IsNull())
    {
        if (!value["KafkaInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KafkaDeliveryConfig.KafkaInfos` is not array type"));

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

    if (value.HasMember("EnableGlobalLineRule") && !value["EnableGlobalLineRule"].IsNull())
    {
        if (!value["EnableGlobalLineRule"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaDeliveryConfig.EnableGlobalLineRule` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableGlobalLineRule = value["EnableGlobalLineRule"].GetBool();
        m_enableGlobalLineRuleHasBeenSet = true;
    }

    if (value.HasMember("CustomRule") && !value["CustomRule"].IsNull())
    {
        if (!value["CustomRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaDeliveryConfig.CustomRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customRule = string(value["CustomRule"].GetString());
        m_customRuleHasBeenSet = true;
    }

    if (value.HasMember("KafkaAddress") && !value["KafkaAddress"].IsNull())
    {
        if (!value["KafkaAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaDeliveryConfig.KafkaAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaAddress = string(value["KafkaAddress"].GetString());
        m_kafkaAddressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KafkaDeliveryConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_kafkaVIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaVIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaVIp.c_str(), allocator).Move(), allocator);
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

    if (m_enableGlobalLineRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableGlobalLineRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableGlobalLineRule, allocator);
    }

    if (m_customRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customRule.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaAddress.c_str(), allocator).Move(), allocator);
    }

}


string KafkaDeliveryConfig::GetConfigId() const
{
    return m_configId;
}

void KafkaDeliveryConfig::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool KafkaDeliveryConfig::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string KafkaDeliveryConfig::GetConfigName() const
{
    return m_configName;
}

void KafkaDeliveryConfig::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool KafkaDeliveryConfig::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

vector<string> KafkaDeliveryConfig::GetCollectPath() const
{
    return m_collectPath;
}

void KafkaDeliveryConfig::SetCollectPath(const vector<string>& _collectPath)
{
    m_collectPath = _collectPath;
    m_collectPathHasBeenSet = true;
}

bool KafkaDeliveryConfig::CollectPathHasBeenSet() const
{
    return m_collectPathHasBeenSet;
}

string KafkaDeliveryConfig::GetKafkaVIp() const
{
    return m_kafkaVIp;
}

void KafkaDeliveryConfig::SetKafkaVIp(const string& _kafkaVIp)
{
    m_kafkaVIp = _kafkaVIp;
    m_kafkaVIpHasBeenSet = true;
}

bool KafkaDeliveryConfig::KafkaVIpHasBeenSet() const
{
    return m_kafkaVIpHasBeenSet;
}

string KafkaDeliveryConfig::GetKafkaVPort() const
{
    return m_kafkaVPort;
}

void KafkaDeliveryConfig::SetKafkaVPort(const string& _kafkaVPort)
{
    m_kafkaVPort = _kafkaVPort;
    m_kafkaVPortHasBeenSet = true;
}

bool KafkaDeliveryConfig::KafkaVPortHasBeenSet() const
{
    return m_kafkaVPortHasBeenSet;
}

string KafkaDeliveryConfig::GetTopic() const
{
    return m_topic;
}

void KafkaDeliveryConfig::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool KafkaDeliveryConfig::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string KafkaDeliveryConfig::GetLineRule() const
{
    return m_lineRule;
}

void KafkaDeliveryConfig::SetLineRule(const string& _lineRule)
{
    m_lineRule = _lineRule;
    m_lineRuleHasBeenSet = true;
}

bool KafkaDeliveryConfig::LineRuleHasBeenSet() const
{
    return m_lineRuleHasBeenSet;
}

bool KafkaDeliveryConfig::GetEnableAuth() const
{
    return m_enableAuth;
}

void KafkaDeliveryConfig::SetEnableAuth(const bool& _enableAuth)
{
    m_enableAuth = _enableAuth;
    m_enableAuthHasBeenSet = true;
}

bool KafkaDeliveryConfig::EnableAuthHasBeenSet() const
{
    return m_enableAuthHasBeenSet;
}

string KafkaDeliveryConfig::GetUsername() const
{
    return m_username;
}

void KafkaDeliveryConfig::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool KafkaDeliveryConfig::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string KafkaDeliveryConfig::GetPassword() const
{
    return m_password;
}

void KafkaDeliveryConfig::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool KafkaDeliveryConfig::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

vector<DeliveryKafkaInfo> KafkaDeliveryConfig::GetKafkaInfos() const
{
    return m_kafkaInfos;
}

void KafkaDeliveryConfig::SetKafkaInfos(const vector<DeliveryKafkaInfo>& _kafkaInfos)
{
    m_kafkaInfos = _kafkaInfos;
    m_kafkaInfosHasBeenSet = true;
}

bool KafkaDeliveryConfig::KafkaInfosHasBeenSet() const
{
    return m_kafkaInfosHasBeenSet;
}

bool KafkaDeliveryConfig::GetEnableGlobalLineRule() const
{
    return m_enableGlobalLineRule;
}

void KafkaDeliveryConfig::SetEnableGlobalLineRule(const bool& _enableGlobalLineRule)
{
    m_enableGlobalLineRule = _enableGlobalLineRule;
    m_enableGlobalLineRuleHasBeenSet = true;
}

bool KafkaDeliveryConfig::EnableGlobalLineRuleHasBeenSet() const
{
    return m_enableGlobalLineRuleHasBeenSet;
}

string KafkaDeliveryConfig::GetCustomRule() const
{
    return m_customRule;
}

void KafkaDeliveryConfig::SetCustomRule(const string& _customRule)
{
    m_customRule = _customRule;
    m_customRuleHasBeenSet = true;
}

bool KafkaDeliveryConfig::CustomRuleHasBeenSet() const
{
    return m_customRuleHasBeenSet;
}

string KafkaDeliveryConfig::GetKafkaAddress() const
{
    return m_kafkaAddress;
}

void KafkaDeliveryConfig::SetKafkaAddress(const string& _kafkaAddress)
{
    m_kafkaAddress = _kafkaAddress;
    m_kafkaAddressHasBeenSet = true;
}

bool KafkaDeliveryConfig::KafkaAddressHasBeenSet() const
{
    return m_kafkaAddressHasBeenSet;
}


/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/apis/v20240801/model/DescribeAgentAppResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

DescribeAgentAppResp::DescribeAgentAppResp() :
    m_appIDHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_apiKeysHasBeenSet(false),
    m_secretKeysHasBeenSet(false),
    m_oAuth2ResourceServerIDHasBeenSet(false),
    m_mcpServersNumHasBeenSet(false),
    m_modelServicesNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAgentAppResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentAppResp.AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentAppResp.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentAppResp.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentAppResp.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentAppResp.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentAppResp.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentAppResp.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentAppResp.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentAppResp.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentAppResp.AuthType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authType = string(value["AuthType"].GetString());
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("ApiKeys") && !value["ApiKeys"].IsNull())
    {
        if (!value["ApiKeys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeAgentAppResp.ApiKeys` is not array type"));

        const rapidjson::Value &tmpValue = value["ApiKeys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_apiKeys.push_back((*itr).GetString());
        }
        m_apiKeysHasBeenSet = true;
    }

    if (value.HasMember("SecretKeys") && !value["SecretKeys"].IsNull())
    {
        if (!value["SecretKeys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeAgentAppResp.SecretKeys` is not array type"));

        const rapidjson::Value &tmpValue = value["SecretKeys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentAppSecretKeyVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_secretKeys.push_back(item);
        }
        m_secretKeysHasBeenSet = true;
    }

    if (value.HasMember("OAuth2ResourceServerID") && !value["OAuth2ResourceServerID"].IsNull())
    {
        if (!value["OAuth2ResourceServerID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentAppResp.OAuth2ResourceServerID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oAuth2ResourceServerID = string(value["OAuth2ResourceServerID"].GetString());
        m_oAuth2ResourceServerIDHasBeenSet = true;
    }

    if (value.HasMember("McpServersNum") && !value["McpServersNum"].IsNull())
    {
        if (!value["McpServersNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentAppResp.McpServersNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mcpServersNum = value["McpServersNum"].GetInt64();
        m_mcpServersNumHasBeenSet = true;
    }

    if (value.HasMember("ModelServicesNum") && !value["ModelServicesNum"].IsNull())
    {
        if (!value["ModelServicesNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentAppResp.ModelServicesNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modelServicesNum = value["ModelServicesNum"].GetInt64();
        m_modelServicesNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeAgentAppResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_apiKeys.begin(); itr != m_apiKeys.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_secretKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_secretKeys.begin(); itr != m_secretKeys.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_oAuth2ResourceServerIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OAuth2ResourceServerID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oAuth2ResourceServerID.c_str(), allocator).Move(), allocator);
    }

    if (m_mcpServersNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McpServersNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mcpServersNum, allocator);
    }

    if (m_modelServicesNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelServicesNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modelServicesNum, allocator);
    }

}


int64_t DescribeAgentAppResp::GetAppID() const
{
    return m_appID;
}

void DescribeAgentAppResp::SetAppID(const int64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool DescribeAgentAppResp::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string DescribeAgentAppResp::GetUin() const
{
    return m_uin;
}

void DescribeAgentAppResp::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DescribeAgentAppResp::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DescribeAgentAppResp::GetInstanceID() const
{
    return m_instanceID;
}

void DescribeAgentAppResp::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool DescribeAgentAppResp::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string DescribeAgentAppResp::GetID() const
{
    return m_iD;
}

void DescribeAgentAppResp::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DescribeAgentAppResp::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string DescribeAgentAppResp::GetName() const
{
    return m_name;
}

void DescribeAgentAppResp::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeAgentAppResp::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeAgentAppResp::GetDescription() const
{
    return m_description;
}

void DescribeAgentAppResp::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DescribeAgentAppResp::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeAgentAppResp::GetStatus() const
{
    return m_status;
}

void DescribeAgentAppResp::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeAgentAppResp::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeAgentAppResp::GetCreateTime() const
{
    return m_createTime;
}

void DescribeAgentAppResp::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeAgentAppResp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeAgentAppResp::GetUpdateTime() const
{
    return m_updateTime;
}

void DescribeAgentAppResp::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DescribeAgentAppResp::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DescribeAgentAppResp::GetAuthType() const
{
    return m_authType;
}

void DescribeAgentAppResp::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool DescribeAgentAppResp::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

vector<string> DescribeAgentAppResp::GetApiKeys() const
{
    return m_apiKeys;
}

void DescribeAgentAppResp::SetApiKeys(const vector<string>& _apiKeys)
{
    m_apiKeys = _apiKeys;
    m_apiKeysHasBeenSet = true;
}

bool DescribeAgentAppResp::ApiKeysHasBeenSet() const
{
    return m_apiKeysHasBeenSet;
}

vector<AgentAppSecretKeyVO> DescribeAgentAppResp::GetSecretKeys() const
{
    return m_secretKeys;
}

void DescribeAgentAppResp::SetSecretKeys(const vector<AgentAppSecretKeyVO>& _secretKeys)
{
    m_secretKeys = _secretKeys;
    m_secretKeysHasBeenSet = true;
}

bool DescribeAgentAppResp::SecretKeysHasBeenSet() const
{
    return m_secretKeysHasBeenSet;
}

string DescribeAgentAppResp::GetOAuth2ResourceServerID() const
{
    return m_oAuth2ResourceServerID;
}

void DescribeAgentAppResp::SetOAuth2ResourceServerID(const string& _oAuth2ResourceServerID)
{
    m_oAuth2ResourceServerID = _oAuth2ResourceServerID;
    m_oAuth2ResourceServerIDHasBeenSet = true;
}

bool DescribeAgentAppResp::OAuth2ResourceServerIDHasBeenSet() const
{
    return m_oAuth2ResourceServerIDHasBeenSet;
}

int64_t DescribeAgentAppResp::GetMcpServersNum() const
{
    return m_mcpServersNum;
}

void DescribeAgentAppResp::SetMcpServersNum(const int64_t& _mcpServersNum)
{
    m_mcpServersNum = _mcpServersNum;
    m_mcpServersNumHasBeenSet = true;
}

bool DescribeAgentAppResp::McpServersNumHasBeenSet() const
{
    return m_mcpServersNumHasBeenSet;
}

int64_t DescribeAgentAppResp::GetModelServicesNum() const
{
    return m_modelServicesNum;
}

void DescribeAgentAppResp::SetModelServicesNum(const int64_t& _modelServicesNum)
{
    m_modelServicesNum = _modelServicesNum;
    m_modelServicesNumHasBeenSet = true;
}

bool DescribeAgentAppResp::ModelServicesNumHasBeenSet() const
{
    return m_modelServicesNumHasBeenSet;
}


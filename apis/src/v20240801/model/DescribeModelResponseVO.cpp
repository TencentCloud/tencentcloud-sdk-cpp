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

#include <tencentcloud/apis/v20240801/model/DescribeModelResponseVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

DescribeModelResponseVO::DescribeModelResponseVO() :
    m_appIDHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_credentialIDHasBeenSet(false),
    m_credentialNameHasBeenSet(false),
    m_httpProtocolTypeHasBeenSet(false),
    m_checkTargetCertsErrorHasBeenSet(false),
    m_httpProtocolVersionHasBeenSet(false),
    m_targetPathHasBeenSet(false),
    m_targetHostsHasBeenSet(false),
    m_modelServiceCountHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeModelResponseVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelResponseVO.AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelResponseVO.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelResponseVO.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelResponseVO.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelResponseVO.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CredentialID") && !value["CredentialID"].IsNull())
    {
        if (!value["CredentialID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelResponseVO.CredentialID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_credentialID = string(value["CredentialID"].GetString());
        m_credentialIDHasBeenSet = true;
    }

    if (value.HasMember("CredentialName") && !value["CredentialName"].IsNull())
    {
        if (!value["CredentialName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelResponseVO.CredentialName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_credentialName = string(value["CredentialName"].GetString());
        m_credentialNameHasBeenSet = true;
    }

    if (value.HasMember("HttpProtocolType") && !value["HttpProtocolType"].IsNull())
    {
        if (!value["HttpProtocolType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelResponseVO.HttpProtocolType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpProtocolType = string(value["HttpProtocolType"].GetString());
        m_httpProtocolTypeHasBeenSet = true;
    }

    if (value.HasMember("CheckTargetCertsError") && !value["CheckTargetCertsError"].IsNull())
    {
        if (!value["CheckTargetCertsError"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelResponseVO.CheckTargetCertsError` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_checkTargetCertsError = value["CheckTargetCertsError"].GetBool();
        m_checkTargetCertsErrorHasBeenSet = true;
    }

    if (value.HasMember("HttpProtocolVersion") && !value["HttpProtocolVersion"].IsNull())
    {
        if (!value["HttpProtocolVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelResponseVO.HttpProtocolVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpProtocolVersion = string(value["HttpProtocolVersion"].GetString());
        m_httpProtocolVersionHasBeenSet = true;
    }

    if (value.HasMember("TargetPath") && !value["TargetPath"].IsNull())
    {
        if (!value["TargetPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelResponseVO.TargetPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetPath = string(value["TargetPath"].GetString());
        m_targetPathHasBeenSet = true;
    }

    if (value.HasMember("TargetHosts") && !value["TargetHosts"].IsNull())
    {
        if (!value["TargetHosts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeModelResponseVO.TargetHosts` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetHosts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TargetHostDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_targetHosts.push_back(item);
        }
        m_targetHostsHasBeenSet = true;
    }

    if (value.HasMember("ModelServiceCount") && !value["ModelServiceCount"].IsNull())
    {
        if (!value["ModelServiceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelResponseVO.ModelServiceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modelServiceCount = value["ModelServiceCount"].GetInt64();
        m_modelServiceCountHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelResponseVO.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelResponseVO.LastUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = string(value["LastUpdateTime"].GetString());
        m_lastUpdateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeModelResponseVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_credentialIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_credentialID.c_str(), allocator).Move(), allocator);
    }

    if (m_credentialNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_credentialName.c_str(), allocator).Move(), allocator);
    }

    if (m_httpProtocolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpProtocolType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpProtocolType.c_str(), allocator).Move(), allocator);
    }

    if (m_checkTargetCertsErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckTargetCertsError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkTargetCertsError, allocator);
    }

    if (m_httpProtocolVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpProtocolVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpProtocolVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_targetPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetPath.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetHosts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targetHosts.begin(); itr != m_targetHosts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_modelServiceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelServiceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modelServiceCount, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUpdateTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t DescribeModelResponseVO::GetAppID() const
{
    return m_appID;
}

void DescribeModelResponseVO::SetAppID(const int64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool DescribeModelResponseVO::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string DescribeModelResponseVO::GetUin() const
{
    return m_uin;
}

void DescribeModelResponseVO::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DescribeModelResponseVO::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DescribeModelResponseVO::GetInstanceID() const
{
    return m_instanceID;
}

void DescribeModelResponseVO::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool DescribeModelResponseVO::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string DescribeModelResponseVO::GetID() const
{
    return m_iD;
}

void DescribeModelResponseVO::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DescribeModelResponseVO::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string DescribeModelResponseVO::GetName() const
{
    return m_name;
}

void DescribeModelResponseVO::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeModelResponseVO::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeModelResponseVO::GetCredentialID() const
{
    return m_credentialID;
}

void DescribeModelResponseVO::SetCredentialID(const string& _credentialID)
{
    m_credentialID = _credentialID;
    m_credentialIDHasBeenSet = true;
}

bool DescribeModelResponseVO::CredentialIDHasBeenSet() const
{
    return m_credentialIDHasBeenSet;
}

string DescribeModelResponseVO::GetCredentialName() const
{
    return m_credentialName;
}

void DescribeModelResponseVO::SetCredentialName(const string& _credentialName)
{
    m_credentialName = _credentialName;
    m_credentialNameHasBeenSet = true;
}

bool DescribeModelResponseVO::CredentialNameHasBeenSet() const
{
    return m_credentialNameHasBeenSet;
}

string DescribeModelResponseVO::GetHttpProtocolType() const
{
    return m_httpProtocolType;
}

void DescribeModelResponseVO::SetHttpProtocolType(const string& _httpProtocolType)
{
    m_httpProtocolType = _httpProtocolType;
    m_httpProtocolTypeHasBeenSet = true;
}

bool DescribeModelResponseVO::HttpProtocolTypeHasBeenSet() const
{
    return m_httpProtocolTypeHasBeenSet;
}

bool DescribeModelResponseVO::GetCheckTargetCertsError() const
{
    return m_checkTargetCertsError;
}

void DescribeModelResponseVO::SetCheckTargetCertsError(const bool& _checkTargetCertsError)
{
    m_checkTargetCertsError = _checkTargetCertsError;
    m_checkTargetCertsErrorHasBeenSet = true;
}

bool DescribeModelResponseVO::CheckTargetCertsErrorHasBeenSet() const
{
    return m_checkTargetCertsErrorHasBeenSet;
}

string DescribeModelResponseVO::GetHttpProtocolVersion() const
{
    return m_httpProtocolVersion;
}

void DescribeModelResponseVO::SetHttpProtocolVersion(const string& _httpProtocolVersion)
{
    m_httpProtocolVersion = _httpProtocolVersion;
    m_httpProtocolVersionHasBeenSet = true;
}

bool DescribeModelResponseVO::HttpProtocolVersionHasBeenSet() const
{
    return m_httpProtocolVersionHasBeenSet;
}

string DescribeModelResponseVO::GetTargetPath() const
{
    return m_targetPath;
}

void DescribeModelResponseVO::SetTargetPath(const string& _targetPath)
{
    m_targetPath = _targetPath;
    m_targetPathHasBeenSet = true;
}

bool DescribeModelResponseVO::TargetPathHasBeenSet() const
{
    return m_targetPathHasBeenSet;
}

vector<TargetHostDTO> DescribeModelResponseVO::GetTargetHosts() const
{
    return m_targetHosts;
}

void DescribeModelResponseVO::SetTargetHosts(const vector<TargetHostDTO>& _targetHosts)
{
    m_targetHosts = _targetHosts;
    m_targetHostsHasBeenSet = true;
}

bool DescribeModelResponseVO::TargetHostsHasBeenSet() const
{
    return m_targetHostsHasBeenSet;
}

int64_t DescribeModelResponseVO::GetModelServiceCount() const
{
    return m_modelServiceCount;
}

void DescribeModelResponseVO::SetModelServiceCount(const int64_t& _modelServiceCount)
{
    m_modelServiceCount = _modelServiceCount;
    m_modelServiceCountHasBeenSet = true;
}

bool DescribeModelResponseVO::ModelServiceCountHasBeenSet() const
{
    return m_modelServiceCountHasBeenSet;
}

string DescribeModelResponseVO::GetCreateTime() const
{
    return m_createTime;
}

void DescribeModelResponseVO::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeModelResponseVO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeModelResponseVO::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void DescribeModelResponseVO::SetLastUpdateTime(const string& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool DescribeModelResponseVO::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}


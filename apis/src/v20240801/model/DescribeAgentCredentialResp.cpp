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

#include <tencentcloud/apis/v20240801/model/DescribeAgentCredentialResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

DescribeAgentCredentialResp::DescribeAgentCredentialResp() :
    m_appIDHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_relateAgentAppNumHasBeenSet(false),
    m_relateMcpServerNumHasBeenSet(false),
    m_relateModelNumHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAgentCredentialResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentCredentialResp.AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentCredentialResp.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentCredentialResp.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentCredentialResp.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentCredentialResp.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentCredentialResp.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RelateAgentAppNum") && !value["RelateAgentAppNum"].IsNull())
    {
        if (!value["RelateAgentAppNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentCredentialResp.RelateAgentAppNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_relateAgentAppNum = value["RelateAgentAppNum"].GetInt64();
        m_relateAgentAppNumHasBeenSet = true;
    }

    if (value.HasMember("RelateMcpServerNum") && !value["RelateMcpServerNum"].IsNull())
    {
        if (!value["RelateMcpServerNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentCredentialResp.RelateMcpServerNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_relateMcpServerNum = value["RelateMcpServerNum"].GetInt64();
        m_relateMcpServerNumHasBeenSet = true;
    }

    if (value.HasMember("RelateModelNum") && !value["RelateModelNum"].IsNull())
    {
        if (!value["RelateModelNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentCredentialResp.RelateModelNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_relateModelNum = value["RelateModelNum"].GetInt64();
        m_relateModelNumHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentCredentialResp.Content` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_content.Deserialize(value["Content"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_contentHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentCredentialResp.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentCredentialResp.LastUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = string(value["LastUpdateTime"].GetString());
        m_lastUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAgentCredentialResp.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeAgentCredentialResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_relateAgentAppNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateAgentAppNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relateAgentAppNum, allocator);
    }

    if (m_relateMcpServerNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateMcpServerNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relateMcpServerNum, allocator);
    }

    if (m_relateModelNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateModelNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relateModelNum, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_content.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


int64_t DescribeAgentCredentialResp::GetAppID() const
{
    return m_appID;
}

void DescribeAgentCredentialResp::SetAppID(const int64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool DescribeAgentCredentialResp::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string DescribeAgentCredentialResp::GetUin() const
{
    return m_uin;
}

void DescribeAgentCredentialResp::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DescribeAgentCredentialResp::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DescribeAgentCredentialResp::GetInstanceID() const
{
    return m_instanceID;
}

void DescribeAgentCredentialResp::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool DescribeAgentCredentialResp::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string DescribeAgentCredentialResp::GetID() const
{
    return m_iD;
}

void DescribeAgentCredentialResp::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DescribeAgentCredentialResp::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string DescribeAgentCredentialResp::GetName() const
{
    return m_name;
}

void DescribeAgentCredentialResp::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeAgentCredentialResp::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeAgentCredentialResp::GetStatus() const
{
    return m_status;
}

void DescribeAgentCredentialResp::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeAgentCredentialResp::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeAgentCredentialResp::GetRelateAgentAppNum() const
{
    return m_relateAgentAppNum;
}

void DescribeAgentCredentialResp::SetRelateAgentAppNum(const int64_t& _relateAgentAppNum)
{
    m_relateAgentAppNum = _relateAgentAppNum;
    m_relateAgentAppNumHasBeenSet = true;
}

bool DescribeAgentCredentialResp::RelateAgentAppNumHasBeenSet() const
{
    return m_relateAgentAppNumHasBeenSet;
}

int64_t DescribeAgentCredentialResp::GetRelateMcpServerNum() const
{
    return m_relateMcpServerNum;
}

void DescribeAgentCredentialResp::SetRelateMcpServerNum(const int64_t& _relateMcpServerNum)
{
    m_relateMcpServerNum = _relateMcpServerNum;
    m_relateMcpServerNumHasBeenSet = true;
}

bool DescribeAgentCredentialResp::RelateMcpServerNumHasBeenSet() const
{
    return m_relateMcpServerNumHasBeenSet;
}

int64_t DescribeAgentCredentialResp::GetRelateModelNum() const
{
    return m_relateModelNum;
}

void DescribeAgentCredentialResp::SetRelateModelNum(const int64_t& _relateModelNum)
{
    m_relateModelNum = _relateModelNum;
    m_relateModelNumHasBeenSet = true;
}

bool DescribeAgentCredentialResp::RelateModelNumHasBeenSet() const
{
    return m_relateModelNumHasBeenSet;
}

AgentCredentialContentDTO DescribeAgentCredentialResp::GetContent() const
{
    return m_content;
}

void DescribeAgentCredentialResp::SetContent(const AgentCredentialContentDTO& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool DescribeAgentCredentialResp::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string DescribeAgentCredentialResp::GetCreateTime() const
{
    return m_createTime;
}

void DescribeAgentCredentialResp::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeAgentCredentialResp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeAgentCredentialResp::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void DescribeAgentCredentialResp::SetLastUpdateTime(const string& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool DescribeAgentCredentialResp::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

string DescribeAgentCredentialResp::GetType() const
{
    return m_type;
}

void DescribeAgentCredentialResp::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeAgentCredentialResp::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


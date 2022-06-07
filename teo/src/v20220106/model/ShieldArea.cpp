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

#include <tencentcloud/teo/v20220106/model/ShieldArea.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

ShieldArea::ShieldArea() :
    m_zoneIdHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_entityNameHasBeenSet(false),
    m_applicationHasBeenSet(false),
    m_tcpNumHasBeenSet(false),
    m_udpNumHasBeenSet(false),
    m_entityHasBeenSet(false),
    m_shareHasBeenSet(false)
{
}

CoreInternalOutcome ShieldArea::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldArea.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldArea.PolicyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = value["PolicyId"].GetInt64();
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldArea.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("EntityName") && !value["EntityName"].IsNull())
    {
        if (!value["EntityName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldArea.EntityName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entityName = string(value["EntityName"].GetString());
        m_entityNameHasBeenSet = true;
    }

    if (value.HasMember("Application") && !value["Application"].IsNull())
    {
        if (!value["Application"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ShieldArea.Application` is not array type"));

        const rapidjson::Value &tmpValue = value["Application"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DDoSApplication item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_application.push_back(item);
        }
        m_applicationHasBeenSet = true;
    }

    if (value.HasMember("TcpNum") && !value["TcpNum"].IsNull())
    {
        if (!value["TcpNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldArea.TcpNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tcpNum = value["TcpNum"].GetInt64();
        m_tcpNumHasBeenSet = true;
    }

    if (value.HasMember("UdpNum") && !value["UdpNum"].IsNull())
    {
        if (!value["UdpNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldArea.UdpNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_udpNum = value["UdpNum"].GetInt64();
        m_udpNumHasBeenSet = true;
    }

    if (value.HasMember("Entity") && !value["Entity"].IsNull())
    {
        if (!value["Entity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldArea.Entity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entity = string(value["Entity"].GetString());
        m_entityHasBeenSet = true;
    }

    if (value.HasMember("Share") && !value["Share"].IsNull())
    {
        if (!value["Share"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldArea.Share` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_share = value["Share"].GetBool();
        m_shareHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShieldArea::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyId, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_entityNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entityName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Application";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_application.begin(); itr != m_application.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tcpNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcpNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tcpNum, allocator);
    }

    if (m_udpNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UdpNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_udpNum, allocator);
    }

    if (m_entityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entity.c_str(), allocator).Move(), allocator);
    }

    if (m_shareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Share";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_share, allocator);
    }

}


string ShieldArea::GetZoneId() const
{
    return m_zoneId;
}

void ShieldArea::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ShieldArea::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

int64_t ShieldArea::GetPolicyId() const
{
    return m_policyId;
}

void ShieldArea::SetPolicyId(const int64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool ShieldArea::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string ShieldArea::GetType() const
{
    return m_type;
}

void ShieldArea::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ShieldArea::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ShieldArea::GetEntityName() const
{
    return m_entityName;
}

void ShieldArea::SetEntityName(const string& _entityName)
{
    m_entityName = _entityName;
    m_entityNameHasBeenSet = true;
}

bool ShieldArea::EntityNameHasBeenSet() const
{
    return m_entityNameHasBeenSet;
}

vector<DDoSApplication> ShieldArea::GetApplication() const
{
    return m_application;
}

void ShieldArea::SetApplication(const vector<DDoSApplication>& _application)
{
    m_application = _application;
    m_applicationHasBeenSet = true;
}

bool ShieldArea::ApplicationHasBeenSet() const
{
    return m_applicationHasBeenSet;
}

int64_t ShieldArea::GetTcpNum() const
{
    return m_tcpNum;
}

void ShieldArea::SetTcpNum(const int64_t& _tcpNum)
{
    m_tcpNum = _tcpNum;
    m_tcpNumHasBeenSet = true;
}

bool ShieldArea::TcpNumHasBeenSet() const
{
    return m_tcpNumHasBeenSet;
}

int64_t ShieldArea::GetUdpNum() const
{
    return m_udpNum;
}

void ShieldArea::SetUdpNum(const int64_t& _udpNum)
{
    m_udpNum = _udpNum;
    m_udpNumHasBeenSet = true;
}

bool ShieldArea::UdpNumHasBeenSet() const
{
    return m_udpNumHasBeenSet;
}

string ShieldArea::GetEntity() const
{
    return m_entity;
}

void ShieldArea::SetEntity(const string& _entity)
{
    m_entity = _entity;
    m_entityHasBeenSet = true;
}

bool ShieldArea::EntityHasBeenSet() const
{
    return m_entityHasBeenSet;
}

bool ShieldArea::GetShare() const
{
    return m_share;
}

void ShieldArea::SetShare(const bool& _share)
{
    m_share = _share;
    m_shareHasBeenSet = true;
}

bool ShieldArea::ShareHasBeenSet() const
{
    return m_shareHasBeenSet;
}


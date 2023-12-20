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

#include <tencentcloud/ssl/v20191205/model/OperationLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

OperationLog::OperationLog() :
    m_actionHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome OperationLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationLog.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationLog.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationLog.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationLog.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationLog.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationLog.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OperationLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


string OperationLog::GetAction() const
{
    return m_action;
}

void OperationLog::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool OperationLog::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string OperationLog::GetCreatedOn() const
{
    return m_createdOn;
}

void OperationLog::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool OperationLog::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string OperationLog::GetUin() const
{
    return m_uin;
}

void OperationLog::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool OperationLog::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string OperationLog::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void OperationLog::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool OperationLog::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

string OperationLog::GetCertId() const
{
    return m_certId;
}

void OperationLog::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool OperationLog::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string OperationLog::GetType() const
{
    return m_type;
}

void OperationLog::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool OperationLog::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


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

#include <tencentcloud/rum/v20210622/model/Whitelist.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

Whitelist::Whitelist() :
    m_remarkHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_ttlHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_whitelistUinHasBeenSet(false),
    m_createUserHasBeenSet(false),
    m_aidHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome Whitelist::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Whitelist.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Whitelist.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("Ttl") && !value["Ttl"].IsNull())
    {
        if (!value["Ttl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Whitelist.Ttl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ttl = string(value["Ttl"].GetString());
        m_ttlHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Whitelist.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("WhitelistUin") && !value["WhitelistUin"].IsNull())
    {
        if (!value["WhitelistUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Whitelist.WhitelistUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_whitelistUin = string(value["WhitelistUin"].GetString());
        m_whitelistUinHasBeenSet = true;
    }

    if (value.HasMember("CreateUser") && !value["CreateUser"].IsNull())
    {
        if (!value["CreateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Whitelist.CreateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUser = string(value["CreateUser"].GetString());
        m_createUserHasBeenSet = true;
    }

    if (value.HasMember("Aid") && !value["Aid"].IsNull())
    {
        if (!value["Aid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Whitelist.Aid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aid = string(value["Aid"].GetString());
        m_aidHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Whitelist.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Whitelist::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_ttlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ttl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ttl.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_whitelistUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhitelistUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_whitelistUin.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUser.c_str(), allocator).Move(), allocator);
    }

    if (m_aidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Aid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aid.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string Whitelist::GetRemark() const
{
    return m_remark;
}

void Whitelist::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool Whitelist::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string Whitelist::GetInstanceID() const
{
    return m_instanceID;
}

void Whitelist::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool Whitelist::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string Whitelist::GetTtl() const
{
    return m_ttl;
}

void Whitelist::SetTtl(const string& _ttl)
{
    m_ttl = _ttl;
    m_ttlHasBeenSet = true;
}

bool Whitelist::TtlHasBeenSet() const
{
    return m_ttlHasBeenSet;
}

string Whitelist::GetID() const
{
    return m_iD;
}

void Whitelist::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool Whitelist::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string Whitelist::GetWhitelistUin() const
{
    return m_whitelistUin;
}

void Whitelist::SetWhitelistUin(const string& _whitelistUin)
{
    m_whitelistUin = _whitelistUin;
    m_whitelistUinHasBeenSet = true;
}

bool Whitelist::WhitelistUinHasBeenSet() const
{
    return m_whitelistUinHasBeenSet;
}

string Whitelist::GetCreateUser() const
{
    return m_createUser;
}

void Whitelist::SetCreateUser(const string& _createUser)
{
    m_createUser = _createUser;
    m_createUserHasBeenSet = true;
}

bool Whitelist::CreateUserHasBeenSet() const
{
    return m_createUserHasBeenSet;
}

string Whitelist::GetAid() const
{
    return m_aid;
}

void Whitelist::SetAid(const string& _aid)
{
    m_aid = _aid;
    m_aidHasBeenSet = true;
}

bool Whitelist::AidHasBeenSet() const
{
    return m_aidHasBeenSet;
}

string Whitelist::GetCreateTime() const
{
    return m_createTime;
}

void Whitelist::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Whitelist::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}


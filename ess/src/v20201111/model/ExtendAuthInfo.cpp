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

#include <tencentcloud/ess/v20201111/model/ExtendAuthInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ExtendAuthInfo::ExtendAuthInfo() :
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_operatorUserIdHasBeenSet(false),
    m_operateOnHasBeenSet(false),
    m_hasAuthUserListHasBeenSet(false)
{
}

CoreInternalOutcome ExtendAuthInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtendAuthInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtendAuthInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtendAuthInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OperatorUserId") && !value["OperatorUserId"].IsNull())
    {
        if (!value["OperatorUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtendAuthInfo.OperatorUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorUserId = string(value["OperatorUserId"].GetString());
        m_operatorUserIdHasBeenSet = true;
    }

    if (value.HasMember("OperateOn") && !value["OperateOn"].IsNull())
    {
        if (!value["OperateOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExtendAuthInfo.OperateOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_operateOn = value["OperateOn"].GetInt64();
        m_operateOnHasBeenSet = true;
    }

    if (value.HasMember("HasAuthUserList") && !value["HasAuthUserList"].IsNull())
    {
        if (!value["HasAuthUserList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExtendAuthInfo.HasAuthUserList` is not array type"));

        const rapidjson::Value &tmpValue = value["HasAuthUserList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HasAuthUser item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_hasAuthUserList.push_back(item);
        }
        m_hasAuthUserListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtendAuthInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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

    if (m_operatorUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_operateOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operateOn, allocator);
    }

    if (m_hasAuthUserListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasAuthUserList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hasAuthUserList.begin(); itr != m_hasAuthUserList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ExtendAuthInfo::GetType() const
{
    return m_type;
}

void ExtendAuthInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ExtendAuthInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ExtendAuthInfo::GetName() const
{
    return m_name;
}

void ExtendAuthInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ExtendAuthInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ExtendAuthInfo::GetStatus() const
{
    return m_status;
}

void ExtendAuthInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ExtendAuthInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ExtendAuthInfo::GetOperatorUserId() const
{
    return m_operatorUserId;
}

void ExtendAuthInfo::SetOperatorUserId(const string& _operatorUserId)
{
    m_operatorUserId = _operatorUserId;
    m_operatorUserIdHasBeenSet = true;
}

bool ExtendAuthInfo::OperatorUserIdHasBeenSet() const
{
    return m_operatorUserIdHasBeenSet;
}

int64_t ExtendAuthInfo::GetOperateOn() const
{
    return m_operateOn;
}

void ExtendAuthInfo::SetOperateOn(const int64_t& _operateOn)
{
    m_operateOn = _operateOn;
    m_operateOnHasBeenSet = true;
}

bool ExtendAuthInfo::OperateOnHasBeenSet() const
{
    return m_operateOnHasBeenSet;
}

vector<HasAuthUser> ExtendAuthInfo::GetHasAuthUserList() const
{
    return m_hasAuthUserList;
}

void ExtendAuthInfo::SetHasAuthUserList(const vector<HasAuthUser>& _hasAuthUserList)
{
    m_hasAuthUserList = _hasAuthUserList;
    m_hasAuthUserListHasBeenSet = true;
}

bool ExtendAuthInfo::HasAuthUserListHasBeenSet() const
{
    return m_hasAuthUserListHasBeenSet;
}


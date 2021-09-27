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

#include <tencentcloud/wav/v20210129/model/ExternalContactSimpleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

ExternalContactSimpleInfo::ExternalContactSimpleInfo() :
    m_externalUserIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_salesNameHasBeenSet(false),
    m_departmentIdListHasBeenSet(false)
{
}

CoreInternalOutcome ExternalContactSimpleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExternalUserId") && !value["ExternalUserId"].IsNull())
    {
        if (!value["ExternalUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalContactSimpleInfo.ExternalUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalUserId = string(value["ExternalUserId"].GetString());
        m_externalUserIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalContactSimpleInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("SalesName") && !value["SalesName"].IsNull())
    {
        if (!value["SalesName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalContactSimpleInfo.SalesName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_salesName = string(value["SalesName"].GetString());
        m_salesNameHasBeenSet = true;
    }

    if (value.HasMember("DepartmentIdList") && !value["DepartmentIdList"].IsNull())
    {
        if (!value["DepartmentIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExternalContactSimpleInfo.DepartmentIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["DepartmentIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_departmentIdList.push_back((*itr).GetInt64());
        }
        m_departmentIdListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExternalContactSimpleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_externalUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_salesNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_salesName.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_departmentIdList.begin(); itr != m_departmentIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string ExternalContactSimpleInfo::GetExternalUserId() const
{
    return m_externalUserId;
}

void ExternalContactSimpleInfo::SetExternalUserId(const string& _externalUserId)
{
    m_externalUserId = _externalUserId;
    m_externalUserIdHasBeenSet = true;
}

bool ExternalContactSimpleInfo::ExternalUserIdHasBeenSet() const
{
    return m_externalUserIdHasBeenSet;
}

string ExternalContactSimpleInfo::GetUserId() const
{
    return m_userId;
}

void ExternalContactSimpleInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ExternalContactSimpleInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string ExternalContactSimpleInfo::GetSalesName() const
{
    return m_salesName;
}

void ExternalContactSimpleInfo::SetSalesName(const string& _salesName)
{
    m_salesName = _salesName;
    m_salesNameHasBeenSet = true;
}

bool ExternalContactSimpleInfo::SalesNameHasBeenSet() const
{
    return m_salesNameHasBeenSet;
}

vector<int64_t> ExternalContactSimpleInfo::GetDepartmentIdList() const
{
    return m_departmentIdList;
}

void ExternalContactSimpleInfo::SetDepartmentIdList(const vector<int64_t>& _departmentIdList)
{
    m_departmentIdList = _departmentIdList;
    m_departmentIdListHasBeenSet = true;
}

bool ExternalContactSimpleInfo::DepartmentIdListHasBeenSet() const
{
    return m_departmentIdListHasBeenSet;
}


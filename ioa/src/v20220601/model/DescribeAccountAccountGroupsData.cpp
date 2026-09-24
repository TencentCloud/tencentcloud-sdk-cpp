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

#include <tencentcloud/ioa/v20220601/model/DescribeAccountAccountGroupsData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeAccountAccountGroupsData::DescribeAccountAccountGroupsData() :
    m_accountGroupIdHasBeenSet(false),
    m_accountGroupNameHasBeenSet(false),
    m_masterFlagHasBeenSet(false),
    m_accountGroupNamePathsHasBeenSet(false),
    m_accountGroupPathIdsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAccountAccountGroupsData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountGroupId") && !value["AccountGroupId"].IsNull())
    {
        if (!value["AccountGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountAccountGroupsData.AccountGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountGroupId = value["AccountGroupId"].GetInt64();
        m_accountGroupIdHasBeenSet = true;
    }

    if (value.HasMember("AccountGroupName") && !value["AccountGroupName"].IsNull())
    {
        if (!value["AccountGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountAccountGroupsData.AccountGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountGroupName = string(value["AccountGroupName"].GetString());
        m_accountGroupNameHasBeenSet = true;
    }

    if (value.HasMember("MasterFlag") && !value["MasterFlag"].IsNull())
    {
        if (!value["MasterFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountAccountGroupsData.MasterFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_masterFlag = value["MasterFlag"].GetInt64();
        m_masterFlagHasBeenSet = true;
    }

    if (value.HasMember("AccountGroupNamePaths") && !value["AccountGroupNamePaths"].IsNull())
    {
        if (!value["AccountGroupNamePaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeAccountAccountGroupsData.AccountGroupNamePaths` is not array type"));

        const rapidjson::Value &tmpValue = value["AccountGroupNamePaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_accountGroupNamePaths.push_back((*itr).GetString());
        }
        m_accountGroupNamePathsHasBeenSet = true;
    }

    if (value.HasMember("AccountGroupPathIds") && !value["AccountGroupPathIds"].IsNull())
    {
        if (!value["AccountGroupPathIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeAccountAccountGroupsData.AccountGroupPathIds` is not array type"));

        const rapidjson::Value &tmpValue = value["AccountGroupPathIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_accountGroupPathIds.push_back((*itr).GetInt64());
        }
        m_accountGroupPathIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeAccountAccountGroupsData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountGroupId, allocator);
    }

    if (m_accountGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_masterFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_masterFlag, allocator);
    }

    if (m_accountGroupNamePathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupNamePaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accountGroupNamePaths.begin(); itr != m_accountGroupNamePaths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_accountGroupPathIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupPathIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accountGroupPathIds.begin(); itr != m_accountGroupPathIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


int64_t DescribeAccountAccountGroupsData::GetAccountGroupId() const
{
    return m_accountGroupId;
}

void DescribeAccountAccountGroupsData::SetAccountGroupId(const int64_t& _accountGroupId)
{
    m_accountGroupId = _accountGroupId;
    m_accountGroupIdHasBeenSet = true;
}

bool DescribeAccountAccountGroupsData::AccountGroupIdHasBeenSet() const
{
    return m_accountGroupIdHasBeenSet;
}

string DescribeAccountAccountGroupsData::GetAccountGroupName() const
{
    return m_accountGroupName;
}

void DescribeAccountAccountGroupsData::SetAccountGroupName(const string& _accountGroupName)
{
    m_accountGroupName = _accountGroupName;
    m_accountGroupNameHasBeenSet = true;
}

bool DescribeAccountAccountGroupsData::AccountGroupNameHasBeenSet() const
{
    return m_accountGroupNameHasBeenSet;
}

int64_t DescribeAccountAccountGroupsData::GetMasterFlag() const
{
    return m_masterFlag;
}

void DescribeAccountAccountGroupsData::SetMasterFlag(const int64_t& _masterFlag)
{
    m_masterFlag = _masterFlag;
    m_masterFlagHasBeenSet = true;
}

bool DescribeAccountAccountGroupsData::MasterFlagHasBeenSet() const
{
    return m_masterFlagHasBeenSet;
}

vector<string> DescribeAccountAccountGroupsData::GetAccountGroupNamePaths() const
{
    return m_accountGroupNamePaths;
}

void DescribeAccountAccountGroupsData::SetAccountGroupNamePaths(const vector<string>& _accountGroupNamePaths)
{
    m_accountGroupNamePaths = _accountGroupNamePaths;
    m_accountGroupNamePathsHasBeenSet = true;
}

bool DescribeAccountAccountGroupsData::AccountGroupNamePathsHasBeenSet() const
{
    return m_accountGroupNamePathsHasBeenSet;
}

vector<int64_t> DescribeAccountAccountGroupsData::GetAccountGroupPathIds() const
{
    return m_accountGroupPathIds;
}

void DescribeAccountAccountGroupsData::SetAccountGroupPathIds(const vector<int64_t>& _accountGroupPathIds)
{
    m_accountGroupPathIds = _accountGroupPathIds;
    m_accountGroupPathIdsHasBeenSet = true;
}

bool DescribeAccountAccountGroupsData::AccountGroupPathIdsHasBeenSet() const
{
    return m_accountGroupPathIdsHasBeenSet;
}


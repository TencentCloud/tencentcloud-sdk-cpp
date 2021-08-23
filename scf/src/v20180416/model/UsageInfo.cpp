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

#include <tencentcloud/scf/v20180416/model/UsageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

UsageInfo::UsageInfo() :
    m_namespacesCountHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_totalConcurrencyMemHasBeenSet(false),
    m_totalAllocatedConcurrencyMemHasBeenSet(false),
    m_userConcurrencyMemLimitHasBeenSet(false)
{
}

CoreInternalOutcome UsageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NamespacesCount") && !value["NamespacesCount"].IsNull())
    {
        if (!value["NamespacesCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageInfo.NamespacesCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_namespacesCount = value["NamespacesCount"].GetInt64();
        m_namespacesCountHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UsageInfo.Namespace` is not array type"));

        const rapidjson::Value &tmpValue = value["Namespace"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NamespaceUsage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_namespace.push_back(item);
        }
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("TotalConcurrencyMem") && !value["TotalConcurrencyMem"].IsNull())
    {
        if (!value["TotalConcurrencyMem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageInfo.TotalConcurrencyMem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalConcurrencyMem = value["TotalConcurrencyMem"].GetInt64();
        m_totalConcurrencyMemHasBeenSet = true;
    }

    if (value.HasMember("TotalAllocatedConcurrencyMem") && !value["TotalAllocatedConcurrencyMem"].IsNull())
    {
        if (!value["TotalAllocatedConcurrencyMem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageInfo.TotalAllocatedConcurrencyMem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalAllocatedConcurrencyMem = value["TotalAllocatedConcurrencyMem"].GetInt64();
        m_totalAllocatedConcurrencyMemHasBeenSet = true;
    }

    if (value.HasMember("UserConcurrencyMemLimit") && !value["UserConcurrencyMemLimit"].IsNull())
    {
        if (!value["UserConcurrencyMemLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageInfo.UserConcurrencyMemLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userConcurrencyMemLimit = value["UserConcurrencyMemLimit"].GetInt64();
        m_userConcurrencyMemLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namespacesCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespacesCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_namespacesCount, allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_namespace.begin(); itr != m_namespace.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalConcurrencyMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalConcurrencyMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalConcurrencyMem, allocator);
    }

    if (m_totalAllocatedConcurrencyMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAllocatedConcurrencyMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAllocatedConcurrencyMem, allocator);
    }

    if (m_userConcurrencyMemLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserConcurrencyMemLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userConcurrencyMemLimit, allocator);
    }

}


int64_t UsageInfo::GetNamespacesCount() const
{
    return m_namespacesCount;
}

void UsageInfo::SetNamespacesCount(const int64_t& _namespacesCount)
{
    m_namespacesCount = _namespacesCount;
    m_namespacesCountHasBeenSet = true;
}

bool UsageInfo::NamespacesCountHasBeenSet() const
{
    return m_namespacesCountHasBeenSet;
}

vector<NamespaceUsage> UsageInfo::GetNamespace() const
{
    return m_namespace;
}

void UsageInfo::SetNamespace(const vector<NamespaceUsage>& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool UsageInfo::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

int64_t UsageInfo::GetTotalConcurrencyMem() const
{
    return m_totalConcurrencyMem;
}

void UsageInfo::SetTotalConcurrencyMem(const int64_t& _totalConcurrencyMem)
{
    m_totalConcurrencyMem = _totalConcurrencyMem;
    m_totalConcurrencyMemHasBeenSet = true;
}

bool UsageInfo::TotalConcurrencyMemHasBeenSet() const
{
    return m_totalConcurrencyMemHasBeenSet;
}

int64_t UsageInfo::GetTotalAllocatedConcurrencyMem() const
{
    return m_totalAllocatedConcurrencyMem;
}

void UsageInfo::SetTotalAllocatedConcurrencyMem(const int64_t& _totalAllocatedConcurrencyMem)
{
    m_totalAllocatedConcurrencyMem = _totalAllocatedConcurrencyMem;
    m_totalAllocatedConcurrencyMemHasBeenSet = true;
}

bool UsageInfo::TotalAllocatedConcurrencyMemHasBeenSet() const
{
    return m_totalAllocatedConcurrencyMemHasBeenSet;
}

int64_t UsageInfo::GetUserConcurrencyMemLimit() const
{
    return m_userConcurrencyMemLimit;
}

void UsageInfo::SetUserConcurrencyMemLimit(const int64_t& _userConcurrencyMemLimit)
{
    m_userConcurrencyMemLimit = _userConcurrencyMemLimit;
    m_userConcurrencyMemLimitHasBeenSet = true;
}

bool UsageInfo::UserConcurrencyMemLimitHasBeenSet() const
{
    return m_userConcurrencyMemLimitHasBeenSet;
}


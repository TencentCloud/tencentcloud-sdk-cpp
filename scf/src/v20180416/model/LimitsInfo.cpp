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

#include <tencentcloud/scf/v20180416/model/LimitsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

LimitsInfo::LimitsInfo() :
    m_namespacesCountHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

CoreInternalOutcome LimitsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NamespacesCount") && !value["NamespacesCount"].IsNull())
    {
        if (!value["NamespacesCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LimitsInfo.NamespacesCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_namespacesCount = value["NamespacesCount"].GetInt64();
        m_namespacesCountHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LimitsInfo.Namespace` is not array type"));

        const rapidjson::Value &tmpValue = value["Namespace"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NamespaceLimit item;
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


    return CoreInternalOutcome(true);
}

void LimitsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


int64_t LimitsInfo::GetNamespacesCount() const
{
    return m_namespacesCount;
}

void LimitsInfo::SetNamespacesCount(const int64_t& _namespacesCount)
{
    m_namespacesCount = _namespacesCount;
    m_namespacesCountHasBeenSet = true;
}

bool LimitsInfo::NamespacesCountHasBeenSet() const
{
    return m_namespacesCountHasBeenSet;
}

vector<NamespaceLimit> LimitsInfo::GetNamespace() const
{
    return m_namespace;
}

void LimitsInfo::SetNamespace(const vector<NamespaceLimit>& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool LimitsInfo::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}


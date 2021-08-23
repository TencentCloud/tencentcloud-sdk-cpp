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

#include <tencentcloud/tcr/v20190924/model/NamespaceInfoResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

NamespaceInfoResp::NamespaceInfoResp() :
    m_namespaceCountHasBeenSet(false),
    m_namespaceInfoHasBeenSet(false)
{
}

CoreInternalOutcome NamespaceInfoResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NamespaceCount") && !value["NamespaceCount"].IsNull())
    {
        if (!value["NamespaceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceInfoResp.NamespaceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceCount = value["NamespaceCount"].GetInt64();
        m_namespaceCountHasBeenSet = true;
    }

    if (value.HasMember("NamespaceInfo") && !value["NamespaceInfo"].IsNull())
    {
        if (!value["NamespaceInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NamespaceInfoResp.NamespaceInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["NamespaceInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NamespaceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_namespaceInfo.push_back(item);
        }
        m_namespaceInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NamespaceInfoResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namespaceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_namespaceCount, allocator);
    }

    if (m_namespaceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_namespaceInfo.begin(); itr != m_namespaceInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t NamespaceInfoResp::GetNamespaceCount() const
{
    return m_namespaceCount;
}

void NamespaceInfoResp::SetNamespaceCount(const int64_t& _namespaceCount)
{
    m_namespaceCount = _namespaceCount;
    m_namespaceCountHasBeenSet = true;
}

bool NamespaceInfoResp::NamespaceCountHasBeenSet() const
{
    return m_namespaceCountHasBeenSet;
}

vector<NamespaceInfo> NamespaceInfoResp::GetNamespaceInfo() const
{
    return m_namespaceInfo;
}

void NamespaceInfoResp::SetNamespaceInfo(const vector<NamespaceInfo>& _namespaceInfo)
{
    m_namespaceInfo = _namespaceInfo;
    m_namespaceInfoHasBeenSet = true;
}

bool NamespaceInfoResp::NamespaceInfoHasBeenSet() const
{
    return m_namespaceInfoHasBeenSet;
}


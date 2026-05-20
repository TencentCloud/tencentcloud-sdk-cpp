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

#include <tencentcloud/tse/v20201207/model/CNAPIGwSecretKeyList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CNAPIGwSecretKeyList::CNAPIGwSecretKeyList() :
    m_totalCountHasBeenSet(false),
    m_secretKeysHasBeenSet(false)
{
}

CoreInternalOutcome CNAPIGwSecretKeyList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwSecretKeyList.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("SecretKeys") && !value["SecretKeys"].IsNull())
    {
        if (!value["SecretKeys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CNAPIGwSecretKeyList.SecretKeys` is not array type"));

        const rapidjson::Value &tmpValue = value["SecretKeys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CNAPIGwSecretKey item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_secretKeys.push_back(item);
        }
        m_secretKeysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CNAPIGwSecretKeyList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_secretKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_secretKeys.begin(); itr != m_secretKeys.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t CNAPIGwSecretKeyList::GetTotalCount() const
{
    return m_totalCount;
}

void CNAPIGwSecretKeyList::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool CNAPIGwSecretKeyList::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<CNAPIGwSecretKey> CNAPIGwSecretKeyList::GetSecretKeys() const
{
    return m_secretKeys;
}

void CNAPIGwSecretKeyList::SetSecretKeys(const vector<CNAPIGwSecretKey>& _secretKeys)
{
    m_secretKeys = _secretKeys;
    m_secretKeysHasBeenSet = true;
}

bool CNAPIGwSecretKeyList::SecretKeysHasBeenSet() const
{
    return m_secretKeysHasBeenSet;
}


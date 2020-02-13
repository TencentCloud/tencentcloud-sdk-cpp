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

#include <tencentcloud/ckafka/v20190819/model/AclResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace rapidjson;
using namespace std;

AclResponse::AclResponse() :
    m_totalCountHasBeenSet(false),
    m_aclListHasBeenSet(false)
{
}

CoreInternalOutcome AclResponse::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AclResponse.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("AclList") && !value["AclList"].IsNull())
    {
        if (!value["AclList"].IsArray())
            return CoreInternalOutcome(Error("response `AclResponse.AclList` is not array type"));

        const Value &tmpValue = value["AclList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Acl item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aclList.push_back(item);
        }
        m_aclListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AclResponse::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_aclListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AclList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aclList.begin(); itr != m_aclList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t AclResponse::GetTotalCount() const
{
    return m_totalCount;
}

void AclResponse::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool AclResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<Acl> AclResponse::GetAclList() const
{
    return m_aclList;
}

void AclResponse::SetAclList(const vector<Acl>& _aclList)
{
    m_aclList = _aclList;
    m_aclListHasBeenSet = true;
}

bool AclResponse::AclListHasBeenSet() const
{
    return m_aclListHasBeenSet;
}


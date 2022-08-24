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

#include <tencentcloud/apigateway/v20180808/model/CreateApiRspSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

CreateApiRspSet::CreateApiRspSet() :
    m_totalCountHasBeenSet(false),
    m_apiSetHasBeenSet(false)
{
}

CoreInternalOutcome CreateApiRspSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateApiRspSet.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("ApiSet") && !value["ApiSet"].IsNull())
    {
        if (!value["ApiSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateApiRspSet.ApiSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ApiSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CreateApiRsp item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_apiSet.push_back(item);
        }
        m_apiSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateApiRspSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_apiSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_apiSet.begin(); itr != m_apiSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t CreateApiRspSet::GetTotalCount() const
{
    return m_totalCount;
}

void CreateApiRspSet::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool CreateApiRspSet::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<CreateApiRsp> CreateApiRspSet::GetApiSet() const
{
    return m_apiSet;
}

void CreateApiRspSet::SetApiSet(const vector<CreateApiRsp>& _apiSet)
{
    m_apiSet = _apiSet;
    m_apiSetHasBeenSet = true;
}

bool CreateApiRspSet::ApiSetHasBeenSet() const
{
    return m_apiSetHasBeenSet;
}


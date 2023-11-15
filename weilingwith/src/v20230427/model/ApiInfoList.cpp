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

#include <tencentcloud/weilingwith/v20230427/model/ApiInfoList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

ApiInfoList::ApiInfoList() :
    m_apiInfoHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome ApiInfoList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiInfo") && !value["ApiInfo"].IsNull())
    {
        if (!value["ApiInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiInfoList.ApiInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ApiInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_apiInfo.push_back(item);
        }
        m_apiInfoHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfoList.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiInfoList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_apiInfo.begin(); itr != m_apiInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

}


vector<ApiInfo> ApiInfoList::GetApiInfo() const
{
    return m_apiInfo;
}

void ApiInfoList::SetApiInfo(const vector<ApiInfo>& _apiInfo)
{
    m_apiInfo = _apiInfo;
    m_apiInfoHasBeenSet = true;
}

bool ApiInfoList::ApiInfoHasBeenSet() const
{
    return m_apiInfoHasBeenSet;
}

uint64_t ApiInfoList::GetTotalCount() const
{
    return m_totalCount;
}

void ApiInfoList::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ApiInfoList::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}


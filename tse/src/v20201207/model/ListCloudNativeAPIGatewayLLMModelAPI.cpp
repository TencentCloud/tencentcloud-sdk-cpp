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

#include <tencentcloud/tse/v20201207/model/ListCloudNativeAPIGatewayLLMModelAPI.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ListCloudNativeAPIGatewayLLMModelAPI::ListCloudNativeAPIGatewayLLMModelAPI() :
    m_totalCountHasBeenSet(false),
    m_dataListHasBeenSet(false)
{
}

CoreInternalOutcome ListCloudNativeAPIGatewayLLMModelAPI::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListCloudNativeAPIGatewayLLMModelAPI.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("DataList") && !value["DataList"].IsNull())
    {
        if (!value["DataList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListCloudNativeAPIGatewayLLMModelAPI.DataList` is not array type"));

        const rapidjson::Value &tmpValue = value["DataList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudNativeAPIGatewayLLMModelAPI item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataList.push_back(item);
        }
        m_dataListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListCloudNativeAPIGatewayLLMModelAPI::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_dataListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataList.begin(); itr != m_dataList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t ListCloudNativeAPIGatewayLLMModelAPI::GetTotalCount() const
{
    return m_totalCount;
}

void ListCloudNativeAPIGatewayLLMModelAPI::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ListCloudNativeAPIGatewayLLMModelAPI::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<CloudNativeAPIGatewayLLMModelAPI> ListCloudNativeAPIGatewayLLMModelAPI::GetDataList() const
{
    return m_dataList;
}

void ListCloudNativeAPIGatewayLLMModelAPI::SetDataList(const vector<CloudNativeAPIGatewayLLMModelAPI>& _dataList)
{
    m_dataList = _dataList;
    m_dataListHasBeenSet = true;
}

bool ListCloudNativeAPIGatewayLLMModelAPI::DataListHasBeenSet() const
{
    return m_dataListHasBeenSet;
}


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

#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherListByUinItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

QueryVoucherListByUinItem::QueryVoucherListByUinItem() :
    m_clientUinHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome QueryVoucherListByUinItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientUin") && !value["ClientUin"].IsNull())
    {
        if (!value["ClientUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryVoucherListByUinItem.ClientUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clientUin = value["ClientUin"].GetInt64();
        m_clientUinHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryVoucherListByUinItem.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueryVoucherListByUinItem.Data` is not array type"));

        const rapidjson::Value &tmpValue = value["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QueryVoucherListByUinVoucherItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_data.push_back(item);
        }
        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryVoucherListByUinItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientUin, allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t QueryVoucherListByUinItem::GetClientUin() const
{
    return m_clientUin;
}

void QueryVoucherListByUinItem::SetClientUin(const int64_t& _clientUin)
{
    m_clientUin = _clientUin;
    m_clientUinHasBeenSet = true;
}

bool QueryVoucherListByUinItem::ClientUinHasBeenSet() const
{
    return m_clientUinHasBeenSet;
}

int64_t QueryVoucherListByUinItem::GetTotalCount() const
{
    return m_totalCount;
}

void QueryVoucherListByUinItem::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool QueryVoucherListByUinItem::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<QueryVoucherListByUinVoucherItem> QueryVoucherListByUinItem::GetData() const
{
    return m_data;
}

void QueryVoucherListByUinItem::SetData(const vector<QueryVoucherListByUinVoucherItem>& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool QueryVoucherListByUinItem::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}


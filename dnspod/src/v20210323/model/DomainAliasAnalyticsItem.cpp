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

#include <tencentcloud/dnspod/v20210323/model/DomainAliasAnalyticsItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

DomainAliasAnalyticsItem::DomainAliasAnalyticsItem() :
    m_infoHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome DomainAliasAnalyticsItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Info") && !value["Info"].IsNull())
    {
        if (!value["Info"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAliasAnalyticsItem.Info` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_info.Deserialize(value["Info"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_infoHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainAliasAnalyticsItem.Data` is not array type"));

        const rapidjson::Value &tmpValue = value["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DomainAnalyticsDetail item;
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

void DomainAliasAnalyticsItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_infoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Info";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_info.ToJsonObject(value[key.c_str()], allocator);
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


DomainAnalyticsInfo DomainAliasAnalyticsItem::GetInfo() const
{
    return m_info;
}

void DomainAliasAnalyticsItem::SetInfo(const DomainAnalyticsInfo& _info)
{
    m_info = _info;
    m_infoHasBeenSet = true;
}

bool DomainAliasAnalyticsItem::InfoHasBeenSet() const
{
    return m_infoHasBeenSet;
}

vector<DomainAnalyticsDetail> DomainAliasAnalyticsItem::GetData() const
{
    return m_data;
}

void DomainAliasAnalyticsItem::SetData(const vector<DomainAnalyticsDetail>& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool DomainAliasAnalyticsItem::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}


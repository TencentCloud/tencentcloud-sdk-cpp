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

#include <tencentcloud/gme/v20180711/model/StatisticsItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

StatisticsItem::StatisticsItem() :
    m_statDateHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome StatisticsItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StatDate") && !value["StatDate"].IsNull())
    {
        if (!value["StatDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticsItem.StatDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statDate = string(value["StatDate"].GetString());
        m_statDateHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticsItem.Data` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_data = value["Data"].GetUint64();
        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StatisticsItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statDate.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_data, allocator);
    }

}


string StatisticsItem::GetStatDate() const
{
    return m_statDate;
}

void StatisticsItem::SetStatDate(const string& _statDate)
{
    m_statDate = _statDate;
    m_statDateHasBeenSet = true;
}

bool StatisticsItem::StatDateHasBeenSet() const
{
    return m_statDateHasBeenSet;
}

uint64_t StatisticsItem::GetData() const
{
    return m_data;
}

void StatisticsItem::SetData(const uint64_t& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool StatisticsItem::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}


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

#include <tencentcloud/iotvideoindustry/v20201201/model/StatisticItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

StatisticItem::StatisticItem() :
    m_dateHasBeenSet(false),
    m_sumHasBeenSet(false)
{
}

CoreInternalOutcome StatisticItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticItem.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("Sum") && !value["Sum"].IsNull())
    {
        if (!value["Sum"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticItem.Sum` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sum = value["Sum"].GetDouble();
        m_sumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StatisticItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_sumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sum, allocator);
    }

}


string StatisticItem::GetDate() const
{
    return m_date;
}

void StatisticItem::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool StatisticItem::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

double StatisticItem::GetSum() const
{
    return m_sum;
}

void StatisticItem::SetSum(const double& _sum)
{
    m_sum = _sum;
    m_sumHasBeenSet = true;
}

bool StatisticItem::SumHasBeenSet() const
{
    return m_sumHasBeenSet;
}


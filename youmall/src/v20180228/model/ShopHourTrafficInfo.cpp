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

#include <tencentcloud/youmall/v20180228/model/ShopHourTrafficInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

ShopHourTrafficInfo::ShopHourTrafficInfo() :
    m_dateHasBeenSet(false),
    m_hourTrafficInfoDetailSetHasBeenSet(false)
{
}

CoreInternalOutcome ShopHourTrafficInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShopHourTrafficInfo.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("HourTrafficInfoDetailSet") && !value["HourTrafficInfoDetailSet"].IsNull())
    {
        if (!value["HourTrafficInfoDetailSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ShopHourTrafficInfo.HourTrafficInfoDetailSet` is not array type"));

        const rapidjson::Value &tmpValue = value["HourTrafficInfoDetailSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HourTrafficInfoDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_hourTrafficInfoDetailSet.push_back(item);
        }
        m_hourTrafficInfoDetailSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShopHourTrafficInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_hourTrafficInfoDetailSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HourTrafficInfoDetailSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hourTrafficInfoDetailSet.begin(); itr != m_hourTrafficInfoDetailSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ShopHourTrafficInfo::GetDate() const
{
    return m_date;
}

void ShopHourTrafficInfo::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool ShopHourTrafficInfo::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

vector<HourTrafficInfoDetail> ShopHourTrafficInfo::GetHourTrafficInfoDetailSet() const
{
    return m_hourTrafficInfoDetailSet;
}

void ShopHourTrafficInfo::SetHourTrafficInfoDetailSet(const vector<HourTrafficInfoDetail>& _hourTrafficInfoDetailSet)
{
    m_hourTrafficInfoDetailSet = _hourTrafficInfoDetailSet;
    m_hourTrafficInfoDetailSetHasBeenSet = true;
}

bool ShopHourTrafficInfo::HourTrafficInfoDetailSetHasBeenSet() const
{
    return m_hourTrafficInfoDetailSetHasBeenSet;
}


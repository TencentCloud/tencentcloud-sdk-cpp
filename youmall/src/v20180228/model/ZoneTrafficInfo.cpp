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

#include <tencentcloud/youmall/v20180228/model/ZoneTrafficInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

ZoneTrafficInfo::ZoneTrafficInfo() :
    m_dateHasBeenSet(false),
    m_zoneTrafficInfoDetailSetHasBeenSet(false)
{
}

CoreInternalOutcome ZoneTrafficInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneTrafficInfo.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("ZoneTrafficInfoDetailSet") && !value["ZoneTrafficInfoDetailSet"].IsNull())
    {
        if (!value["ZoneTrafficInfoDetailSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneTrafficInfo.ZoneTrafficInfoDetailSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ZoneTrafficInfoDetailSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ZoneTrafficInfoDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_zoneTrafficInfoDetailSet.push_back(item);
        }
        m_zoneTrafficInfoDetailSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneTrafficInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneTrafficInfoDetailSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneTrafficInfoDetailSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zoneTrafficInfoDetailSet.begin(); itr != m_zoneTrafficInfoDetailSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ZoneTrafficInfo::GetDate() const
{
    return m_date;
}

void ZoneTrafficInfo::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool ZoneTrafficInfo::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

vector<ZoneTrafficInfoDetail> ZoneTrafficInfo::GetZoneTrafficInfoDetailSet() const
{
    return m_zoneTrafficInfoDetailSet;
}

void ZoneTrafficInfo::SetZoneTrafficInfoDetailSet(const vector<ZoneTrafficInfoDetail>& _zoneTrafficInfoDetailSet)
{
    m_zoneTrafficInfoDetailSet = _zoneTrafficInfoDetailSet;
    m_zoneTrafficInfoDetailSetHasBeenSet = true;
}

bool ZoneTrafficInfo::ZoneTrafficInfoDetailSetHasBeenSet() const
{
    return m_zoneTrafficInfoDetailSetHasBeenSet;
}


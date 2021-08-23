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

#include <tencentcloud/live/v20180801/model/BillCountryInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

BillCountryInfo::BillCountryInfo() :
    m_nameHasBeenSet(false),
    m_bandInfoListHasBeenSet(false)
{
}

CoreInternalOutcome BillCountryInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillCountryInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("BandInfoList") && !value["BandInfoList"].IsNull())
    {
        if (!value["BandInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BillCountryInfo.BandInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["BandInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillDataInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bandInfoList.push_back(item);
        }
        m_bandInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BillCountryInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_bandInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bandInfoList.begin(); itr != m_bandInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string BillCountryInfo::GetName() const
{
    return m_name;
}

void BillCountryInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BillCountryInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<BillDataInfo> BillCountryInfo::GetBandInfoList() const
{
    return m_bandInfoList;
}

void BillCountryInfo::SetBandInfoList(const vector<BillDataInfo>& _bandInfoList)
{
    m_bandInfoList = _bandInfoList;
    m_bandInfoListHasBeenSet = true;
}

bool BillCountryInfo::BandInfoListHasBeenSet() const
{
    return m_bandInfoListHasBeenSet;
}


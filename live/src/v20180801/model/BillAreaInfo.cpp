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

#include <tencentcloud/live/v20180801/model/BillAreaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

BillAreaInfo::BillAreaInfo() :
    m_nameHasBeenSet(false),
    m_countrysHasBeenSet(false)
{
}

CoreInternalOutcome BillAreaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillAreaInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Countrys") && !value["Countrys"].IsNull())
    {
        if (!value["Countrys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BillAreaInfo.Countrys` is not array type"));

        const rapidjson::Value &tmpValue = value["Countrys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillCountryInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_countrys.push_back(item);
        }
        m_countrysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BillAreaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_countrysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Countrys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_countrys.begin(); itr != m_countrys.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string BillAreaInfo::GetName() const
{
    return m_name;
}

void BillAreaInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BillAreaInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<BillCountryInfo> BillAreaInfo::GetCountrys() const
{
    return m_countrys;
}

void BillAreaInfo::SetCountrys(const vector<BillCountryInfo>& _countrys)
{
    m_countrys = _countrys;
    m_countrysHasBeenSet = true;
}

bool BillAreaInfo::CountrysHasBeenSet() const
{
    return m_countrysHasBeenSet;
}


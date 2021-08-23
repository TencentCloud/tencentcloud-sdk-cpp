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

#include <tencentcloud/gaap/v20180529/model/AccessRegionDomainConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

AccessRegionDomainConf::AccessRegionDomainConf() :
    m_regionIdHasBeenSet(false),
    m_nationCountryInnerListHasBeenSet(false)
{
}

CoreInternalOutcome AccessRegionDomainConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessRegionDomainConf.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("NationCountryInnerList") && !value["NationCountryInnerList"].IsNull())
    {
        if (!value["NationCountryInnerList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessRegionDomainConf.NationCountryInnerList` is not array type"));

        const rapidjson::Value &tmpValue = value["NationCountryInnerList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nationCountryInnerList.push_back((*itr).GetString());
        }
        m_nationCountryInnerListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessRegionDomainConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_nationCountryInnerListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NationCountryInnerList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nationCountryInnerList.begin(); itr != m_nationCountryInnerList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AccessRegionDomainConf::GetRegionId() const
{
    return m_regionId;
}

void AccessRegionDomainConf::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool AccessRegionDomainConf::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

vector<string> AccessRegionDomainConf::GetNationCountryInnerList() const
{
    return m_nationCountryInnerList;
}

void AccessRegionDomainConf::SetNationCountryInnerList(const vector<string>& _nationCountryInnerList)
{
    m_nationCountryInnerList = _nationCountryInnerList;
    m_nationCountryInnerListHasBeenSet = true;
}

bool AccessRegionDomainConf::NationCountryInnerListHasBeenSet() const
{
    return m_nationCountryInnerListHasBeenSet;
}


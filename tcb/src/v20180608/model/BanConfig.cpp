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

#include <tencentcloud/tcb/v20180608/model/BanConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

BanConfig::BanConfig() :
    m_ipWhiteListHasBeenSet(false),
    m_ipBlackListHasBeenSet(false),
    m_countryWhiteListHasBeenSet(false),
    m_countryBlackListHasBeenSet(false)
{
}

CoreInternalOutcome BanConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IpWhiteList") && !value["IpWhiteList"].IsNull())
    {
        if (!value["IpWhiteList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BanConfig.IpWhiteList` is not array type"));

        const rapidjson::Value &tmpValue = value["IpWhiteList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipWhiteList.push_back((*itr).GetString());
        }
        m_ipWhiteListHasBeenSet = true;
    }

    if (value.HasMember("IpBlackList") && !value["IpBlackList"].IsNull())
    {
        if (!value["IpBlackList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BanConfig.IpBlackList` is not array type"));

        const rapidjson::Value &tmpValue = value["IpBlackList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipBlackList.push_back((*itr).GetString());
        }
        m_ipBlackListHasBeenSet = true;
    }

    if (value.HasMember("CountryWhiteList") && !value["CountryWhiteList"].IsNull())
    {
        if (!value["CountryWhiteList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BanConfig.CountryWhiteList` is not array type"));

        const rapidjson::Value &tmpValue = value["CountryWhiteList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_countryWhiteList.push_back((*itr).GetString());
        }
        m_countryWhiteListHasBeenSet = true;
    }

    if (value.HasMember("CountryBlackList") && !value["CountryBlackList"].IsNull())
    {
        if (!value["CountryBlackList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BanConfig.CountryBlackList` is not array type"));

        const rapidjson::Value &tmpValue = value["CountryBlackList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_countryBlackList.push_back((*itr).GetString());
        }
        m_countryBlackListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BanConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipWhiteListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpWhiteList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipWhiteList.begin(); itr != m_ipWhiteList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ipBlackListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpBlackList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipBlackList.begin(); itr != m_ipBlackList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_countryWhiteListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryWhiteList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_countryWhiteList.begin(); itr != m_countryWhiteList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_countryBlackListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryBlackList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_countryBlackList.begin(); itr != m_countryBlackList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> BanConfig::GetIpWhiteList() const
{
    return m_ipWhiteList;
}

void BanConfig::SetIpWhiteList(const vector<string>& _ipWhiteList)
{
    m_ipWhiteList = _ipWhiteList;
    m_ipWhiteListHasBeenSet = true;
}

bool BanConfig::IpWhiteListHasBeenSet() const
{
    return m_ipWhiteListHasBeenSet;
}

vector<string> BanConfig::GetIpBlackList() const
{
    return m_ipBlackList;
}

void BanConfig::SetIpBlackList(const vector<string>& _ipBlackList)
{
    m_ipBlackList = _ipBlackList;
    m_ipBlackListHasBeenSet = true;
}

bool BanConfig::IpBlackListHasBeenSet() const
{
    return m_ipBlackListHasBeenSet;
}

vector<string> BanConfig::GetCountryWhiteList() const
{
    return m_countryWhiteList;
}

void BanConfig::SetCountryWhiteList(const vector<string>& _countryWhiteList)
{
    m_countryWhiteList = _countryWhiteList;
    m_countryWhiteListHasBeenSet = true;
}

bool BanConfig::CountryWhiteListHasBeenSet() const
{
    return m_countryWhiteListHasBeenSet;
}

vector<string> BanConfig::GetCountryBlackList() const
{
    return m_countryBlackList;
}

void BanConfig::SetCountryBlackList(const vector<string>& _countryBlackList)
{
    m_countryBlackList = _countryBlackList;
    m_countryBlackListHasBeenSet = true;
}

bool BanConfig::CountryBlackListHasBeenSet() const
{
    return m_countryBlackListHasBeenSet;
}


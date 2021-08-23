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

#include <tencentcloud/ecm/v20190719/model/Country.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

Country::Country() :
    m_countryIdHasBeenSet(false),
    m_countryNameHasBeenSet(false)
{
}

CoreInternalOutcome Country::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CountryId") && !value["CountryId"].IsNull())
    {
        if (!value["CountryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Country.CountryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countryId = string(value["CountryId"].GetString());
        m_countryIdHasBeenSet = true;
    }

    if (value.HasMember("CountryName") && !value["CountryName"].IsNull())
    {
        if (!value["CountryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Country.CountryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countryName = string(value["CountryName"].GetString());
        m_countryNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Country::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countryId.c_str(), allocator).Move(), allocator);
    }

    if (m_countryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countryName.c_str(), allocator).Move(), allocator);
    }

}


string Country::GetCountryId() const
{
    return m_countryId;
}

void Country::SetCountryId(const string& _countryId)
{
    m_countryId = _countryId;
    m_countryIdHasBeenSet = true;
}

bool Country::CountryIdHasBeenSet() const
{
    return m_countryIdHasBeenSet;
}

string Country::GetCountryName() const
{
    return m_countryName;
}

void Country::SetCountryName(const string& _countryName)
{
    m_countryName = _countryName;
    m_countryNameHasBeenSet = true;
}

bool Country::CountryNameHasBeenSet() const
{
    return m_countryNameHasBeenSet;
}


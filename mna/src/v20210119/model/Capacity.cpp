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

#include <tencentcloud/mna/v20210119/model/Capacity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

Capacity::Capacity() :
    m_cTCCTokenHasBeenSet(false),
    m_provinceHasBeenSet(false)
{
}

CoreInternalOutcome Capacity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CTCCToken") && !value["CTCCToken"].IsNull())
    {
        if (!value["CTCCToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Capacity.CTCCToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cTCCToken = string(value["CTCCToken"].GetString());
        m_cTCCTokenHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Capacity.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Capacity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cTCCTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CTCCToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cTCCToken.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

}


string Capacity::GetCTCCToken() const
{
    return m_cTCCToken;
}

void Capacity::SetCTCCToken(const string& _cTCCToken)
{
    m_cTCCToken = _cTCCToken;
    m_cTCCTokenHasBeenSet = true;
}

bool Capacity::CTCCTokenHasBeenSet() const
{
    return m_cTCCTokenHasBeenSet;
}

string Capacity::GetProvince() const
{
    return m_province;
}

void Capacity::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool Capacity::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}


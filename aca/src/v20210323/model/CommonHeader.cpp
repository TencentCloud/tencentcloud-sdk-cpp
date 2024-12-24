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

#include <tencentcloud/aca/v20210323/model/CommonHeader.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

CommonHeader::CommonHeader() :
    m_hospitalIdHasBeenSet(false),
    m_tokenHasBeenSet(false)
{
}

CoreInternalOutcome CommonHeader::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HospitalId") && !value["HospitalId"].IsNull())
    {
        if (!value["HospitalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonHeader.HospitalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hospitalId = string(value["HospitalId"].GetString());
        m_hospitalIdHasBeenSet = true;
    }

    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonHeader.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommonHeader::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hospitalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HospitalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hospitalId.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

}


string CommonHeader::GetHospitalId() const
{
    return m_hospitalId;
}

void CommonHeader::SetHospitalId(const string& _hospitalId)
{
    m_hospitalId = _hospitalId;
    m_hospitalIdHasBeenSet = true;
}

bool CommonHeader::HospitalIdHasBeenSet() const
{
    return m_hospitalIdHasBeenSet;
}

string CommonHeader::GetToken() const
{
    return m_token;
}

void CommonHeader::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool CommonHeader::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}


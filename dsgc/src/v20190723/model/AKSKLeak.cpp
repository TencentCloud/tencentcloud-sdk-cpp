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

#include <tencentcloud/dsgc/v20190723/model/AKSKLeak.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

AKSKLeak::AKSKLeak() :
    m_aKHasBeenSet(false),
    m_sKHasBeenSet(false),
    m_uRLHasBeenSet(false)
{
}

CoreInternalOutcome AKSKLeak::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AK") && !value["AK"].IsNull())
    {
        if (!value["AK"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AKSKLeak.AK` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aK = string(value["AK"].GetString());
        m_aKHasBeenSet = true;
    }

    if (value.HasMember("SK") && !value["SK"].IsNull())
    {
        if (!value["SK"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AKSKLeak.SK` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sK = string(value["SK"].GetString());
        m_sKHasBeenSet = true;
    }

    if (value.HasMember("URL") && !value["URL"].IsNull())
    {
        if (!value["URL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AKSKLeak.URL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uRL = string(value["URL"].GetString());
        m_uRLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AKSKLeak::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aKHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AK";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aK.c_str(), allocator).Move(), allocator);
    }

    if (m_sKHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SK";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sK.c_str(), allocator).Move(), allocator);
    }

    if (m_uRLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uRL.c_str(), allocator).Move(), allocator);
    }

}


string AKSKLeak::GetAK() const
{
    return m_aK;
}

void AKSKLeak::SetAK(const string& _aK)
{
    m_aK = _aK;
    m_aKHasBeenSet = true;
}

bool AKSKLeak::AKHasBeenSet() const
{
    return m_aKHasBeenSet;
}

string AKSKLeak::GetSK() const
{
    return m_sK;
}

void AKSKLeak::SetSK(const string& _sK)
{
    m_sK = _sK;
    m_sKHasBeenSet = true;
}

bool AKSKLeak::SKHasBeenSet() const
{
    return m_sKHasBeenSet;
}

string AKSKLeak::GetURL() const
{
    return m_uRL;
}

void AKSKLeak::SetURL(const string& _uRL)
{
    m_uRL = _uRL;
    m_uRLHasBeenSet = true;
}

bool AKSKLeak::URLHasBeenSet() const
{
    return m_uRLHasBeenSet;
}


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

#include <tencentcloud/rce/v20201103/model/InputCryptoManageMarketingRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

InputCryptoManageMarketingRisk::InputCryptoManageMarketingRisk() :
    m_isAuthorizedHasBeenSet(false),
    m_cryptoTypeHasBeenSet(false),
    m_cryptoContentHasBeenSet(false)
{
}

CoreInternalOutcome InputCryptoManageMarketingRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsAuthorized") && !value["IsAuthorized"].IsNull())
    {
        if (!value["IsAuthorized"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputCryptoManageMarketingRisk.IsAuthorized` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isAuthorized = string(value["IsAuthorized"].GetString());
        m_isAuthorizedHasBeenSet = true;
    }

    if (value.HasMember("CryptoType") && !value["CryptoType"].IsNull())
    {
        if (!value["CryptoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputCryptoManageMarketingRisk.CryptoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cryptoType = string(value["CryptoType"].GetString());
        m_cryptoTypeHasBeenSet = true;
    }

    if (value.HasMember("CryptoContent") && !value["CryptoContent"].IsNull())
    {
        if (!value["CryptoContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputCryptoManageMarketingRisk.CryptoContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cryptoContent = string(value["CryptoContent"].GetString());
        m_cryptoContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputCryptoManageMarketingRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isAuthorizedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAuthorized";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isAuthorized.c_str(), allocator).Move(), allocator);
    }

    if (m_cryptoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CryptoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cryptoType.c_str(), allocator).Move(), allocator);
    }

    if (m_cryptoContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CryptoContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cryptoContent.c_str(), allocator).Move(), allocator);
    }

}


string InputCryptoManageMarketingRisk::GetIsAuthorized() const
{
    return m_isAuthorized;
}

void InputCryptoManageMarketingRisk::SetIsAuthorized(const string& _isAuthorized)
{
    m_isAuthorized = _isAuthorized;
    m_isAuthorizedHasBeenSet = true;
}

bool InputCryptoManageMarketingRisk::IsAuthorizedHasBeenSet() const
{
    return m_isAuthorizedHasBeenSet;
}

string InputCryptoManageMarketingRisk::GetCryptoType() const
{
    return m_cryptoType;
}

void InputCryptoManageMarketingRisk::SetCryptoType(const string& _cryptoType)
{
    m_cryptoType = _cryptoType;
    m_cryptoTypeHasBeenSet = true;
}

bool InputCryptoManageMarketingRisk::CryptoTypeHasBeenSet() const
{
    return m_cryptoTypeHasBeenSet;
}

string InputCryptoManageMarketingRisk::GetCryptoContent() const
{
    return m_cryptoContent;
}

void InputCryptoManageMarketingRisk::SetCryptoContent(const string& _cryptoContent)
{
    m_cryptoContent = _cryptoContent;
    m_cryptoContentHasBeenSet = true;
}

bool InputCryptoManageMarketingRisk::CryptoContentHasBeenSet() const
{
    return m_cryptoContentHasBeenSet;
}


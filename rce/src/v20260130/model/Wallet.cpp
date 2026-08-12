/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/rce/v20260130/model/Wallet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

Wallet::Wallet() :
    m_walletTypeHasBeenSet(false),
    m_walletAddressHasBeenSet(false),
    m_walletHolderNameHasBeenSet(false),
    m_walletProviderHasBeenSet(false)
{
}

CoreInternalOutcome Wallet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WalletType") && !value["WalletType"].IsNull())
    {
        if (!value["WalletType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Wallet.WalletType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_walletType = string(value["WalletType"].GetString());
        m_walletTypeHasBeenSet = true;
    }

    if (value.HasMember("WalletAddress") && !value["WalletAddress"].IsNull())
    {
        if (!value["WalletAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Wallet.WalletAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_walletAddress = string(value["WalletAddress"].GetString());
        m_walletAddressHasBeenSet = true;
    }

    if (value.HasMember("WalletHolderName") && !value["WalletHolderName"].IsNull())
    {
        if (!value["WalletHolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Wallet.WalletHolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_walletHolderName = string(value["WalletHolderName"].GetString());
        m_walletHolderNameHasBeenSet = true;
    }

    if (value.HasMember("WalletProvider") && !value["WalletProvider"].IsNull())
    {
        if (!value["WalletProvider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Wallet.WalletProvider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_walletProvider = string(value["WalletProvider"].GetString());
        m_walletProviderHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Wallet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_walletTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WalletType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_walletType.c_str(), allocator).Move(), allocator);
    }

    if (m_walletAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WalletAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_walletAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_walletHolderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WalletHolderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_walletHolderName.c_str(), allocator).Move(), allocator);
    }

    if (m_walletProviderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WalletProvider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_walletProvider.c_str(), allocator).Move(), allocator);
    }

}


string Wallet::GetWalletType() const
{
    return m_walletType;
}

void Wallet::SetWalletType(const string& _walletType)
{
    m_walletType = _walletType;
    m_walletTypeHasBeenSet = true;
}

bool Wallet::WalletTypeHasBeenSet() const
{
    return m_walletTypeHasBeenSet;
}

string Wallet::GetWalletAddress() const
{
    return m_walletAddress;
}

void Wallet::SetWalletAddress(const string& _walletAddress)
{
    m_walletAddress = _walletAddress;
    m_walletAddressHasBeenSet = true;
}

bool Wallet::WalletAddressHasBeenSet() const
{
    return m_walletAddressHasBeenSet;
}

string Wallet::GetWalletHolderName() const
{
    return m_walletHolderName;
}

void Wallet::SetWalletHolderName(const string& _walletHolderName)
{
    m_walletHolderName = _walletHolderName;
    m_walletHolderNameHasBeenSet = true;
}

bool Wallet::WalletHolderNameHasBeenSet() const
{
    return m_walletHolderNameHasBeenSet;
}

string Wallet::GetWalletProvider() const
{
    return m_walletProvider;
}

void Wallet::SetWalletProvider(const string& _walletProvider)
{
    m_walletProvider = _walletProvider;
    m_walletProviderHasBeenSet = true;
}

bool Wallet::WalletProviderHasBeenSet() const
{
    return m_walletProviderHasBeenSet;
}


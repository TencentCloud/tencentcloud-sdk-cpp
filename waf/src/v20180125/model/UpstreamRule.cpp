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

#include <tencentcloud/waf/v20180125/model/UpstreamRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

UpstreamRule::UpstreamRule() :
    m_keyNameHasBeenSet(false),
    m_symbolHasBeenSet(false),
    m_contentListHasBeenSet(false),
    m_addressListHasBeenSet(false),
    m_balanceTypeHasBeenSet(false)
{
}

CoreInternalOutcome UpstreamRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyName") && !value["KeyName"].IsNull())
    {
        if (!value["KeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamRule.KeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyName = string(value["KeyName"].GetString());
        m_keyNameHasBeenSet = true;
    }

    if (value.HasMember("Symbol") && !value["Symbol"].IsNull())
    {
        if (!value["Symbol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamRule.Symbol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_symbol = string(value["Symbol"].GetString());
        m_symbolHasBeenSet = true;
    }

    if (value.HasMember("ContentList") && !value["ContentList"].IsNull())
    {
        if (!value["ContentList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpstreamRule.ContentList` is not array type"));

        const rapidjson::Value &tmpValue = value["ContentList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_contentList.push_back((*itr).GetString());
        }
        m_contentListHasBeenSet = true;
    }

    if (value.HasMember("AddressList") && !value["AddressList"].IsNull())
    {
        if (!value["AddressList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpstreamRule.AddressList` is not array type"));

        const rapidjson::Value &tmpValue = value["AddressList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_addressList.push_back((*itr).GetString());
        }
        m_addressListHasBeenSet = true;
    }

    if (value.HasMember("BalanceType") && !value["BalanceType"].IsNull())
    {
        if (!value["BalanceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamRule.BalanceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_balanceType = value["BalanceType"].GetUint64();
        m_balanceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpstreamRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyName.c_str(), allocator).Move(), allocator);
    }

    if (m_symbolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Symbol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_symbol.c_str(), allocator).Move(), allocator);
    }

    if (m_contentListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_contentList.begin(); itr != m_contentList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_addressListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_addressList.begin(); itr != m_addressList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_balanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BalanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_balanceType, allocator);
    }

}


string UpstreamRule::GetKeyName() const
{
    return m_keyName;
}

void UpstreamRule::SetKeyName(const string& _keyName)
{
    m_keyName = _keyName;
    m_keyNameHasBeenSet = true;
}

bool UpstreamRule::KeyNameHasBeenSet() const
{
    return m_keyNameHasBeenSet;
}

string UpstreamRule::GetSymbol() const
{
    return m_symbol;
}

void UpstreamRule::SetSymbol(const string& _symbol)
{
    m_symbol = _symbol;
    m_symbolHasBeenSet = true;
}

bool UpstreamRule::SymbolHasBeenSet() const
{
    return m_symbolHasBeenSet;
}

vector<string> UpstreamRule::GetContentList() const
{
    return m_contentList;
}

void UpstreamRule::SetContentList(const vector<string>& _contentList)
{
    m_contentList = _contentList;
    m_contentListHasBeenSet = true;
}

bool UpstreamRule::ContentListHasBeenSet() const
{
    return m_contentListHasBeenSet;
}

vector<string> UpstreamRule::GetAddressList() const
{
    return m_addressList;
}

void UpstreamRule::SetAddressList(const vector<string>& _addressList)
{
    m_addressList = _addressList;
    m_addressListHasBeenSet = true;
}

bool UpstreamRule::AddressListHasBeenSet() const
{
    return m_addressListHasBeenSet;
}

uint64_t UpstreamRule::GetBalanceType() const
{
    return m_balanceType;
}

void UpstreamRule::SetBalanceType(const uint64_t& _balanceType)
{
    m_balanceType = _balanceType;
    m_balanceTypeHasBeenSet = true;
}

bool UpstreamRule::BalanceTypeHasBeenSet() const
{
    return m_balanceTypeHasBeenSet;
}


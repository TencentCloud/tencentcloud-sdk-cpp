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

#include <tencentcloud/vod/v20180717/model/RefererAuthPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

RefererAuthPolicy::RefererAuthPolicy() :
    m_statusHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_referersHasBeenSet(false),
    m_blankRefererAllowedHasBeenSet(false)
{
}

CoreInternalOutcome RefererAuthPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefererAuthPolicy.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefererAuthPolicy.AuthType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authType = string(value["AuthType"].GetString());
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("Referers") && !value["Referers"].IsNull())
    {
        if (!value["Referers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RefererAuthPolicy.Referers` is not array type"));

        const rapidjson::Value &tmpValue = value["Referers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_referers.push_back((*itr).GetString());
        }
        m_referersHasBeenSet = true;
    }

    if (value.HasMember("BlankRefererAllowed") && !value["BlankRefererAllowed"].IsNull())
    {
        if (!value["BlankRefererAllowed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefererAuthPolicy.BlankRefererAllowed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blankRefererAllowed = string(value["BlankRefererAllowed"].GetString());
        m_blankRefererAllowedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RefererAuthPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_referersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Referers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_referers.begin(); itr != m_referers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_blankRefererAllowedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlankRefererAllowed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blankRefererAllowed.c_str(), allocator).Move(), allocator);
    }

}


string RefererAuthPolicy::GetStatus() const
{
    return m_status;
}

void RefererAuthPolicy::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RefererAuthPolicy::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RefererAuthPolicy::GetAuthType() const
{
    return m_authType;
}

void RefererAuthPolicy::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool RefererAuthPolicy::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

vector<string> RefererAuthPolicy::GetReferers() const
{
    return m_referers;
}

void RefererAuthPolicy::SetReferers(const vector<string>& _referers)
{
    m_referers = _referers;
    m_referersHasBeenSet = true;
}

bool RefererAuthPolicy::ReferersHasBeenSet() const
{
    return m_referersHasBeenSet;
}

string RefererAuthPolicy::GetBlankRefererAllowed() const
{
    return m_blankRefererAllowed;
}

void RefererAuthPolicy::SetBlankRefererAllowed(const string& _blankRefererAllowed)
{
    m_blankRefererAllowed = _blankRefererAllowed;
    m_blankRefererAllowedHasBeenSet = true;
}

bool RefererAuthPolicy::BlankRefererAllowedHasBeenSet() const
{
    return m_blankRefererAllowedHasBeenSet;
}


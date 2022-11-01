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

#include <tencentcloud/es/v20180416/model/IndexPolicyField.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

IndexPolicyField::IndexPolicyField() :
    m_warmEnableHasBeenSet(false),
    m_warmMinAgeHasBeenSet(false),
    m_coldEnableHasBeenSet(false),
    m_coldMinAgeHasBeenSet(false),
    m_frozenEnableHasBeenSet(false),
    m_frozenMinAgeHasBeenSet(false),
    m_coldActionHasBeenSet(false)
{
}

CoreInternalOutcome IndexPolicyField::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WarmEnable") && !value["WarmEnable"].IsNull())
    {
        if (!value["WarmEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexPolicyField.WarmEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_warmEnable = string(value["WarmEnable"].GetString());
        m_warmEnableHasBeenSet = true;
    }

    if (value.HasMember("WarmMinAge") && !value["WarmMinAge"].IsNull())
    {
        if (!value["WarmMinAge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexPolicyField.WarmMinAge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_warmMinAge = string(value["WarmMinAge"].GetString());
        m_warmMinAgeHasBeenSet = true;
    }

    if (value.HasMember("ColdEnable") && !value["ColdEnable"].IsNull())
    {
        if (!value["ColdEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexPolicyField.ColdEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coldEnable = string(value["ColdEnable"].GetString());
        m_coldEnableHasBeenSet = true;
    }

    if (value.HasMember("ColdMinAge") && !value["ColdMinAge"].IsNull())
    {
        if (!value["ColdMinAge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexPolicyField.ColdMinAge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coldMinAge = string(value["ColdMinAge"].GetString());
        m_coldMinAgeHasBeenSet = true;
    }

    if (value.HasMember("FrozenEnable") && !value["FrozenEnable"].IsNull())
    {
        if (!value["FrozenEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexPolicyField.FrozenEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frozenEnable = string(value["FrozenEnable"].GetString());
        m_frozenEnableHasBeenSet = true;
    }

    if (value.HasMember("FrozenMinAge") && !value["FrozenMinAge"].IsNull())
    {
        if (!value["FrozenMinAge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexPolicyField.FrozenMinAge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frozenMinAge = string(value["FrozenMinAge"].GetString());
        m_frozenMinAgeHasBeenSet = true;
    }

    if (value.HasMember("ColdAction") && !value["ColdAction"].IsNull())
    {
        if (!value["ColdAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexPolicyField.ColdAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coldAction = string(value["ColdAction"].GetString());
        m_coldActionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IndexPolicyField::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_warmEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarmEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_warmEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_warmMinAgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarmMinAge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_warmMinAge.c_str(), allocator).Move(), allocator);
    }

    if (m_coldEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColdEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coldEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_coldMinAgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColdMinAge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coldMinAge.c_str(), allocator).Move(), allocator);
    }

    if (m_frozenEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrozenEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frozenEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_frozenMinAgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrozenMinAge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frozenMinAge.c_str(), allocator).Move(), allocator);
    }

    if (m_coldActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColdAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coldAction.c_str(), allocator).Move(), allocator);
    }

}


string IndexPolicyField::GetWarmEnable() const
{
    return m_warmEnable;
}

void IndexPolicyField::SetWarmEnable(const string& _warmEnable)
{
    m_warmEnable = _warmEnable;
    m_warmEnableHasBeenSet = true;
}

bool IndexPolicyField::WarmEnableHasBeenSet() const
{
    return m_warmEnableHasBeenSet;
}

string IndexPolicyField::GetWarmMinAge() const
{
    return m_warmMinAge;
}

void IndexPolicyField::SetWarmMinAge(const string& _warmMinAge)
{
    m_warmMinAge = _warmMinAge;
    m_warmMinAgeHasBeenSet = true;
}

bool IndexPolicyField::WarmMinAgeHasBeenSet() const
{
    return m_warmMinAgeHasBeenSet;
}

string IndexPolicyField::GetColdEnable() const
{
    return m_coldEnable;
}

void IndexPolicyField::SetColdEnable(const string& _coldEnable)
{
    m_coldEnable = _coldEnable;
    m_coldEnableHasBeenSet = true;
}

bool IndexPolicyField::ColdEnableHasBeenSet() const
{
    return m_coldEnableHasBeenSet;
}

string IndexPolicyField::GetColdMinAge() const
{
    return m_coldMinAge;
}

void IndexPolicyField::SetColdMinAge(const string& _coldMinAge)
{
    m_coldMinAge = _coldMinAge;
    m_coldMinAgeHasBeenSet = true;
}

bool IndexPolicyField::ColdMinAgeHasBeenSet() const
{
    return m_coldMinAgeHasBeenSet;
}

string IndexPolicyField::GetFrozenEnable() const
{
    return m_frozenEnable;
}

void IndexPolicyField::SetFrozenEnable(const string& _frozenEnable)
{
    m_frozenEnable = _frozenEnable;
    m_frozenEnableHasBeenSet = true;
}

bool IndexPolicyField::FrozenEnableHasBeenSet() const
{
    return m_frozenEnableHasBeenSet;
}

string IndexPolicyField::GetFrozenMinAge() const
{
    return m_frozenMinAge;
}

void IndexPolicyField::SetFrozenMinAge(const string& _frozenMinAge)
{
    m_frozenMinAge = _frozenMinAge;
    m_frozenMinAgeHasBeenSet = true;
}

bool IndexPolicyField::FrozenMinAgeHasBeenSet() const
{
    return m_frozenMinAgeHasBeenSet;
}

string IndexPolicyField::GetColdAction() const
{
    return m_coldAction;
}

void IndexPolicyField::SetColdAction(const string& _coldAction)
{
    m_coldAction = _coldAction;
    m_coldActionHasBeenSet = true;
}

bool IndexPolicyField::ColdActionHasBeenSet() const
{
    return m_coldActionHasBeenSet;
}


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

#include <tencentcloud/essbasic/v20210526/model/PresetApproverInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

PresetApproverInfo::PresetApproverInfo() :
    m_nameHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_idCardTypeHasBeenSet(false)
{
}

CoreInternalOutcome PresetApproverInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetApproverInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetApproverInfo.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("IdCardNumber") && !value["IdCardNumber"].IsNull())
    {
        if (!value["IdCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetApproverInfo.IdCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardNumber = string(value["IdCardNumber"].GetString());
        m_idCardNumberHasBeenSet = true;
    }

    if (value.HasMember("IdCardType") && !value["IdCardType"].IsNull())
    {
        if (!value["IdCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetApproverInfo.IdCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardType = string(value["IdCardType"].GetString());
        m_idCardTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PresetApproverInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardType.c_str(), allocator).Move(), allocator);
    }

}


string PresetApproverInfo::GetName() const
{
    return m_name;
}

void PresetApproverInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PresetApproverInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PresetApproverInfo::GetMobile() const
{
    return m_mobile;
}

void PresetApproverInfo::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool PresetApproverInfo::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string PresetApproverInfo::GetIdCardNumber() const
{
    return m_idCardNumber;
}

void PresetApproverInfo::SetIdCardNumber(const string& _idCardNumber)
{
    m_idCardNumber = _idCardNumber;
    m_idCardNumberHasBeenSet = true;
}

bool PresetApproverInfo::IdCardNumberHasBeenSet() const
{
    return m_idCardNumberHasBeenSet;
}

string PresetApproverInfo::GetIdCardType() const
{
    return m_idCardType;
}

void PresetApproverInfo::SetIdCardType(const string& _idCardType)
{
    m_idCardType = _idCardType;
    m_idCardTypeHasBeenSet = true;
}

bool PresetApproverInfo::IdCardTypeHasBeenSet() const
{
    return m_idCardTypeHasBeenSet;
}


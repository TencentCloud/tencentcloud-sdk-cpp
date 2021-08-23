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

#include <tencentcloud/npp/v20190823/model/CallBackPhoneCode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Npp::V20190823::Model;
using namespace std;

CallBackPhoneCode::CallBackPhoneCode() :
    m_nationHasBeenSet(false),
    m_phoneHasBeenSet(false)
{
}

CoreInternalOutcome CallBackPhoneCode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Nation") && !value["Nation"].IsNull())
    {
        if (!value["Nation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackPhoneCode.Nation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nation = string(value["Nation"].GetString());
        m_nationHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackPhoneCode.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CallBackPhoneCode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nation.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

}


string CallBackPhoneCode::GetNation() const
{
    return m_nation;
}

void CallBackPhoneCode::SetNation(const string& _nation)
{
    m_nation = _nation;
    m_nationHasBeenSet = true;
}

bool CallBackPhoneCode::NationHasBeenSet() const
{
    return m_nationHasBeenSet;
}

string CallBackPhoneCode::GetPhone() const
{
    return m_phone;
}

void CallBackPhoneCode::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool CallBackPhoneCode::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}


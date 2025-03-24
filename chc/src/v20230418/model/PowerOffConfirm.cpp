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

#include <tencentcloud/chc/v20230418/model/PowerOffConfirm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

PowerOffConfirm::PowerOffConfirm() :
    m_confirmContactHasBeenSet(false),
    m_confirmContactNumberHasBeenSet(false)
{
}

CoreInternalOutcome PowerOffConfirm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfirmContact") && !value["ConfirmContact"].IsNull())
    {
        if (!value["ConfirmContact"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PowerOffConfirm.ConfirmContact` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_confirmContact = string(value["ConfirmContact"].GetString());
        m_confirmContactHasBeenSet = true;
    }

    if (value.HasMember("ConfirmContactNumber") && !value["ConfirmContactNumber"].IsNull())
    {
        if (!value["ConfirmContactNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PowerOffConfirm.ConfirmContactNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_confirmContactNumber = string(value["ConfirmContactNumber"].GetString());
        m_confirmContactNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PowerOffConfirm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_confirmContactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfirmContact";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_confirmContact.c_str(), allocator).Move(), allocator);
    }

    if (m_confirmContactNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfirmContactNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_confirmContactNumber.c_str(), allocator).Move(), allocator);
    }

}


string PowerOffConfirm::GetConfirmContact() const
{
    return m_confirmContact;
}

void PowerOffConfirm::SetConfirmContact(const string& _confirmContact)
{
    m_confirmContact = _confirmContact;
    m_confirmContactHasBeenSet = true;
}

bool PowerOffConfirm::ConfirmContactHasBeenSet() const
{
    return m_confirmContactHasBeenSet;
}

string PowerOffConfirm::GetConfirmContactNumber() const
{
    return m_confirmContactNumber;
}

void PowerOffConfirm::SetConfirmContactNumber(const string& _confirmContactNumber)
{
    m_confirmContactNumber = _confirmContactNumber;
    m_confirmContactNumberHasBeenSet = true;
}

bool PowerOffConfirm::ConfirmContactNumberHasBeenSet() const
{
    return m_confirmContactNumberHasBeenSet;
}


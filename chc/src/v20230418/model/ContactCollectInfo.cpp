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

#include <tencentcloud/chc/v20230418/model/ContactCollectInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

ContactCollectInfo::ContactCollectInfo() :
    m_contactNameHasBeenSet(false),
    m_contactPhoneHasBeenSet(false)
{
}

CoreInternalOutcome ContactCollectInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContactName") && !value["ContactName"].IsNull())
    {
        if (!value["ContactName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContactCollectInfo.ContactName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contactName = string(value["ContactName"].GetString());
        m_contactNameHasBeenSet = true;
    }

    if (value.HasMember("ContactPhone") && !value["ContactPhone"].IsNull())
    {
        if (!value["ContactPhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContactCollectInfo.ContactPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contactPhone = string(value["ContactPhone"].GetString());
        m_contactPhoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContactCollectInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contactNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contactName.c_str(), allocator).Move(), allocator);
    }

    if (m_contactPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contactPhone.c_str(), allocator).Move(), allocator);
    }

}


string ContactCollectInfo::GetContactName() const
{
    return m_contactName;
}

void ContactCollectInfo::SetContactName(const string& _contactName)
{
    m_contactName = _contactName;
    m_contactNameHasBeenSet = true;
}

bool ContactCollectInfo::ContactNameHasBeenSet() const
{
    return m_contactNameHasBeenSet;
}

string ContactCollectInfo::GetContactPhone() const
{
    return m_contactPhone;
}

void ContactCollectInfo::SetContactPhone(const string& _contactPhone)
{
    m_contactPhone = _contactPhone;
    m_contactPhoneHasBeenSet = true;
}

bool ContactCollectInfo::ContactPhoneHasBeenSet() const
{
    return m_contactPhoneHasBeenSet;
}


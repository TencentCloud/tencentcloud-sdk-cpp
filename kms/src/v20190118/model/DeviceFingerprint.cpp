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

#include <tencentcloud/kms/v20190118/model/DeviceFingerprint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

DeviceFingerprint::DeviceFingerprint() :
    m_identityHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome DeviceFingerprint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Identity") && !value["Identity"].IsNull())
    {
        if (!value["Identity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceFingerprint.Identity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identity = string(value["Identity"].GetString());
        m_identityHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceFingerprint.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceFingerprint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_identityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Identity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identity.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string DeviceFingerprint::GetIdentity() const
{
    return m_identity;
}

void DeviceFingerprint::SetIdentity(const string& _identity)
{
    m_identity = _identity;
    m_identityHasBeenSet = true;
}

bool DeviceFingerprint::IdentityHasBeenSet() const
{
    return m_identityHasBeenSet;
}

string DeviceFingerprint::GetDescription() const
{
    return m_description;
}

void DeviceFingerprint::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DeviceFingerprint::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


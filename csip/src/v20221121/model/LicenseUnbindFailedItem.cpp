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

#include <tencentcloud/csip/v20221121/model/LicenseUnbindFailedItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

LicenseUnbindFailedItem::LicenseUnbindFailedItem() :
    m_instanceIdHasBeenSet(false),
    m_exceptionMessageHasBeenSet(false)
{
}

CoreInternalOutcome LicenseUnbindFailedItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseUnbindFailedItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ExceptionMessage") && !value["ExceptionMessage"].IsNull())
    {
        if (!value["ExceptionMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseUnbindFailedItem.ExceptionMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionMessage = string(value["ExceptionMessage"].GetString());
        m_exceptionMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LicenseUnbindFailedItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_exceptionMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptionMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exceptionMessage.c_str(), allocator).Move(), allocator);
    }

}


string LicenseUnbindFailedItem::GetInstanceId() const
{
    return m_instanceId;
}

void LicenseUnbindFailedItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool LicenseUnbindFailedItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string LicenseUnbindFailedItem::GetExceptionMessage() const
{
    return m_exceptionMessage;
}

void LicenseUnbindFailedItem::SetExceptionMessage(const string& _exceptionMessage)
{
    m_exceptionMessage = _exceptionMessage;
    m_exceptionMessageHasBeenSet = true;
}

bool LicenseUnbindFailedItem::ExceptionMessageHasBeenSet() const
{
    return m_exceptionMessageHasBeenSet;
}


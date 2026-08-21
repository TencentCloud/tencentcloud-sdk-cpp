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

#include <tencentcloud/csip/v20221121/model/LicenseBindFailedItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

LicenseBindFailedItem::LicenseBindFailedItem() :
    m_instanceIdHasBeenSet(false),
    m_exceptionMessageHasBeenSet(false),
    m_fixMessageHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false)
{
}

CoreInternalOutcome LicenseBindFailedItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseBindFailedItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ExceptionMessage") && !value["ExceptionMessage"].IsNull())
    {
        if (!value["ExceptionMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseBindFailedItem.ExceptionMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionMessage = string(value["ExceptionMessage"].GetString());
        m_exceptionMessageHasBeenSet = true;
    }

    if (value.HasMember("FixMessage") && !value["FixMessage"].IsNull())
    {
        if (!value["FixMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseBindFailedItem.FixMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixMessage = string(value["FixMessage"].GetString());
        m_fixMessageHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseBindFailedItem.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LicenseBindFailedItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_fixMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string LicenseBindFailedItem::GetInstanceId() const
{
    return m_instanceId;
}

void LicenseBindFailedItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool LicenseBindFailedItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string LicenseBindFailedItem::GetExceptionMessage() const
{
    return m_exceptionMessage;
}

void LicenseBindFailedItem::SetExceptionMessage(const string& _exceptionMessage)
{
    m_exceptionMessage = _exceptionMessage;
    m_exceptionMessageHasBeenSet = true;
}

bool LicenseBindFailedItem::ExceptionMessageHasBeenSet() const
{
    return m_exceptionMessageHasBeenSet;
}

string LicenseBindFailedItem::GetFixMessage() const
{
    return m_fixMessage;
}

void LicenseBindFailedItem::SetFixMessage(const string& _fixMessage)
{
    m_fixMessage = _fixMessage;
    m_fixMessageHasBeenSet = true;
}

bool LicenseBindFailedItem::FixMessageHasBeenSet() const
{
    return m_fixMessageHasBeenSet;
}

MachineExtraInfo LicenseBindFailedItem::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void LicenseBindFailedItem::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool LicenseBindFailedItem::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}


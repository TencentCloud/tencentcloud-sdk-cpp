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

#include <tencentcloud/as/v20180419/model/DetailedStatusMessage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

DetailedStatusMessage::DetailedStatusMessage() :
    m_codeHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_instanceTypeHasBeenSet(false)
{
}

CoreInternalOutcome DetailedStatusMessage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailedStatusMessage.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailedStatusMessage.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailedStatusMessage.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailedStatusMessage.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailedStatusMessage.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailedStatusMessage.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailedStatusMessage.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetailedStatusMessage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

}


string DetailedStatusMessage::GetCode() const
{
    return m_code;
}

void DetailedStatusMessage::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool DetailedStatusMessage::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string DetailedStatusMessage::GetZone() const
{
    return m_zone;
}

void DetailedStatusMessage::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DetailedStatusMessage::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DetailedStatusMessage::GetInstanceId() const
{
    return m_instanceId;
}

void DetailedStatusMessage::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DetailedStatusMessage::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DetailedStatusMessage::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void DetailedStatusMessage::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool DetailedStatusMessage::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

string DetailedStatusMessage::GetSubnetId() const
{
    return m_subnetId;
}

void DetailedStatusMessage::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DetailedStatusMessage::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string DetailedStatusMessage::GetMessage() const
{
    return m_message;
}

void DetailedStatusMessage::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool DetailedStatusMessage::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string DetailedStatusMessage::GetInstanceType() const
{
    return m_instanceType;
}

void DetailedStatusMessage::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool DetailedStatusMessage::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}


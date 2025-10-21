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

#include <tencentcloud/mqtt/v20240516/model/DescribeDeviceIdentityResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

DescribeDeviceIdentityResponse::DescribeDeviceIdentityResponse() :
    m_instanceIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_primaryKeyHasBeenSet(false),
    m_secondaryKeyHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_propagatingPropertiesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDeviceIdentityResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("DeviceId") && !rsp["DeviceId"].IsNull())
    {
        if (!rsp["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(rsp["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("PrimaryKey") && !rsp["PrimaryKey"].IsNull())
    {
        if (!rsp["PrimaryKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrimaryKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_primaryKey = string(rsp["PrimaryKey"].GetString());
        m_primaryKeyHasBeenSet = true;
    }

    if (rsp.HasMember("SecondaryKey") && !rsp["SecondaryKey"].IsNull())
    {
        if (!rsp["SecondaryKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecondaryKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryKey = string(rsp["SecondaryKey"].GetString());
        m_secondaryKeyHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedTime") && !rsp["CreatedTime"].IsNull())
    {
        if (!rsp["CreatedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = rsp["CreatedTime"].GetInt64();
        m_createdTimeHasBeenSet = true;
    }

    if (rsp.HasMember("PropagatingProperties") && !rsp["PropagatingProperties"].IsNull())
    {
        if (!rsp["PropagatingProperties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PropagatingProperties` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PropagatingProperties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PropagatingProperty item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_propagatingProperties.push_back(item);
        }
        m_propagatingPropertiesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDeviceIdentityResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_primaryKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_primaryKey.c_str(), allocator).Move(), allocator);
    }

    if (m_secondaryKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondaryKey.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdTime, allocator);
    }

    if (m_propagatingPropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropagatingProperties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_propagatingProperties.begin(); itr != m_propagatingProperties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeDeviceIdentityResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeDeviceIdentityResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeDeviceIdentityResponse::GetDeviceId() const
{
    return m_deviceId;
}

bool DescribeDeviceIdentityResponse::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

int64_t DescribeDeviceIdentityResponse::GetStatus() const
{
    return m_status;
}

bool DescribeDeviceIdentityResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeDeviceIdentityResponse::GetPrimaryKey() const
{
    return m_primaryKey;
}

bool DescribeDeviceIdentityResponse::PrimaryKeyHasBeenSet() const
{
    return m_primaryKeyHasBeenSet;
}

string DescribeDeviceIdentityResponse::GetSecondaryKey() const
{
    return m_secondaryKey;
}

bool DescribeDeviceIdentityResponse::SecondaryKeyHasBeenSet() const
{
    return m_secondaryKeyHasBeenSet;
}

int64_t DescribeDeviceIdentityResponse::GetCreatedTime() const
{
    return m_createdTime;
}

bool DescribeDeviceIdentityResponse::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

vector<PropagatingProperty> DescribeDeviceIdentityResponse::GetPropagatingProperties() const
{
    return m_propagatingProperties;
}

bool DescribeDeviceIdentityResponse::PropagatingPropertiesHasBeenSet() const
{
    return m_propagatingPropertiesHasBeenSet;
}



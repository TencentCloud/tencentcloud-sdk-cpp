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

#include <tencentcloud/iotexplorer/v20190423/model/TalkActivateRecordLogInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TalkActivateRecordLogInfo::TalkActivateRecordLogInfo() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_activeTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errorMsgHasBeenSet(false)
{
}

CoreInternalOutcome TalkActivateRecordLogInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkActivateRecordLogInfo.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkActivateRecordLogInfo.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("ActiveTime") && !value["ActiveTime"].IsNull())
    {
        if (!value["ActiveTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkActivateRecordLogInfo.ActiveTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activeTime = value["ActiveTime"].GetInt64();
        m_activeTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkActivateRecordLogInfo.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkActivateRecordLogInfo.ServiceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = value["ServiceType"].GetInt64();
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkActivateRecordLogInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrorMsg") && !value["ErrorMsg"].IsNull())
    {
        if (!value["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkActivateRecordLogInfo.ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(value["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TalkActivateRecordLogInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_activeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeTime, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceType, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

}


string TalkActivateRecordLogInfo::GetProductId() const
{
    return m_productId;
}

void TalkActivateRecordLogInfo::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool TalkActivateRecordLogInfo::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string TalkActivateRecordLogInfo::GetDeviceName() const
{
    return m_deviceName;
}

void TalkActivateRecordLogInfo::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool TalkActivateRecordLogInfo::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

int64_t TalkActivateRecordLogInfo::GetActiveTime() const
{
    return m_activeTime;
}

void TalkActivateRecordLogInfo::SetActiveTime(const int64_t& _activeTime)
{
    m_activeTime = _activeTime;
    m_activeTimeHasBeenSet = true;
}

bool TalkActivateRecordLogInfo::ActiveTimeHasBeenSet() const
{
    return m_activeTimeHasBeenSet;
}

int64_t TalkActivateRecordLogInfo::GetExpireTime() const
{
    return m_expireTime;
}

void TalkActivateRecordLogInfo::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool TalkActivateRecordLogInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t TalkActivateRecordLogInfo::GetServiceType() const
{
    return m_serviceType;
}

void TalkActivateRecordLogInfo::SetServiceType(const int64_t& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool TalkActivateRecordLogInfo::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

int64_t TalkActivateRecordLogInfo::GetStatus() const
{
    return m_status;
}

void TalkActivateRecordLogInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TalkActivateRecordLogInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TalkActivateRecordLogInfo::GetErrorMsg() const
{
    return m_errorMsg;
}

void TalkActivateRecordLogInfo::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool TalkActivateRecordLogInfo::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}


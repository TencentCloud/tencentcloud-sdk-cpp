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

#include <tencentcloud/cdn/v20180606/model/HttpsPackage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

HttpsPackage::HttpsPackage() :
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_sizeUsedHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_enableTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_lifeTimeMonthHasBeenSet(false),
    m_refundAvailableHasBeenSet(false),
    m_configIdHasBeenSet(false),
    m_trueEnableTimeHasBeenSet(false),
    m_trueExpireTimeHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_contractExtensionHasBeenSet(false),
    m_extensionAvailableHasBeenSet(false),
    m_extensionModeHasBeenSet(false),
    m_autoExtensionHasBeenSet(false)
{
}

CoreInternalOutcome HttpsPackage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HttpsPackage.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpsPackage.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HttpsPackage.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("SizeUsed") && !value["SizeUsed"].IsNull())
    {
        if (!value["SizeUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HttpsPackage.SizeUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sizeUsed = value["SizeUsed"].GetInt64();
        m_sizeUsedHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpsPackage.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpsPackage.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("EnableTime") && !value["EnableTime"].IsNull())
    {
        if (!value["EnableTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpsPackage.EnableTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enableTime = string(value["EnableTime"].GetString());
        m_enableTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpsPackage.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("Channel") && !value["Channel"].IsNull())
    {
        if (!value["Channel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpsPackage.Channel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channel = string(value["Channel"].GetString());
        m_channelHasBeenSet = true;
    }

    if (value.HasMember("LifeTimeMonth") && !value["LifeTimeMonth"].IsNull())
    {
        if (!value["LifeTimeMonth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HttpsPackage.LifeTimeMonth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lifeTimeMonth = value["LifeTimeMonth"].GetInt64();
        m_lifeTimeMonthHasBeenSet = true;
    }

    if (value.HasMember("RefundAvailable") && !value["RefundAvailable"].IsNull())
    {
        if (!value["RefundAvailable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HttpsPackage.RefundAvailable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_refundAvailable = value["RefundAvailable"].GetBool();
        m_refundAvailableHasBeenSet = true;
    }

    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HttpsPackage.ConfigId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_configId = value["ConfigId"].GetInt64();
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("TrueEnableTime") && !value["TrueEnableTime"].IsNull())
    {
        if (!value["TrueEnableTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpsPackage.TrueEnableTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trueEnableTime = string(value["TrueEnableTime"].GetString());
        m_trueEnableTimeHasBeenSet = true;
    }

    if (value.HasMember("TrueExpireTime") && !value["TrueExpireTime"].IsNull())
    {
        if (!value["TrueExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpsPackage.TrueExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trueExpireTime = string(value["TrueExpireTime"].GetString());
        m_trueExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpsPackage.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("ContractExtension") && !value["ContractExtension"].IsNull())
    {
        if (!value["ContractExtension"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HttpsPackage.ContractExtension` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_contractExtension = value["ContractExtension"].GetBool();
        m_contractExtensionHasBeenSet = true;
    }

    if (value.HasMember("ExtensionAvailable") && !value["ExtensionAvailable"].IsNull())
    {
        if (!value["ExtensionAvailable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HttpsPackage.ExtensionAvailable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_extensionAvailable = value["ExtensionAvailable"].GetBool();
        m_extensionAvailableHasBeenSet = true;
    }

    if (value.HasMember("ExtensionMode") && !value["ExtensionMode"].IsNull())
    {
        if (!value["ExtensionMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HttpsPackage.ExtensionMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_extensionMode = value["ExtensionMode"].GetUint64();
        m_extensionModeHasBeenSet = true;
    }

    if (value.HasMember("AutoExtension") && !value["AutoExtension"].IsNull())
    {
        if (!value["AutoExtension"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HttpsPackage.AutoExtension` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoExtension = value["AutoExtension"].GetBool();
        m_autoExtensionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HttpsPackage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_sizeUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SizeUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sizeUsed, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_enableTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enableTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeTimeMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeTimeMonth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lifeTimeMonth, allocator);
    }

    if (m_refundAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refundAvailable, allocator);
    }

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configId, allocator);
    }

    if (m_trueEnableTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrueEnableTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trueEnableTime.c_str(), allocator).Move(), allocator);
    }

    if (m_trueExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrueExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trueExpireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_contractExtensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractExtension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contractExtension, allocator);
    }

    if (m_extensionAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensionAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_extensionAvailable, allocator);
    }

    if (m_extensionModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensionMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_extensionMode, allocator);
    }

    if (m_autoExtensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoExtension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoExtension, allocator);
    }

}


int64_t HttpsPackage::GetId() const
{
    return m_id;
}

void HttpsPackage::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool HttpsPackage::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string HttpsPackage::GetType() const
{
    return m_type;
}

void HttpsPackage::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool HttpsPackage::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t HttpsPackage::GetSize() const
{
    return m_size;
}

void HttpsPackage::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool HttpsPackage::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

int64_t HttpsPackage::GetSizeUsed() const
{
    return m_sizeUsed;
}

void HttpsPackage::SetSizeUsed(const int64_t& _sizeUsed)
{
    m_sizeUsed = _sizeUsed;
    m_sizeUsedHasBeenSet = true;
}

bool HttpsPackage::SizeUsedHasBeenSet() const
{
    return m_sizeUsedHasBeenSet;
}

string HttpsPackage::GetStatus() const
{
    return m_status;
}

void HttpsPackage::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool HttpsPackage::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string HttpsPackage::GetCreateTime() const
{
    return m_createTime;
}

void HttpsPackage::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool HttpsPackage::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string HttpsPackage::GetEnableTime() const
{
    return m_enableTime;
}

void HttpsPackage::SetEnableTime(const string& _enableTime)
{
    m_enableTime = _enableTime;
    m_enableTimeHasBeenSet = true;
}

bool HttpsPackage::EnableTimeHasBeenSet() const
{
    return m_enableTimeHasBeenSet;
}

string HttpsPackage::GetExpireTime() const
{
    return m_expireTime;
}

void HttpsPackage::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool HttpsPackage::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string HttpsPackage::GetChannel() const
{
    return m_channel;
}

void HttpsPackage::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool HttpsPackage::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

int64_t HttpsPackage::GetLifeTimeMonth() const
{
    return m_lifeTimeMonth;
}

void HttpsPackage::SetLifeTimeMonth(const int64_t& _lifeTimeMonth)
{
    m_lifeTimeMonth = _lifeTimeMonth;
    m_lifeTimeMonthHasBeenSet = true;
}

bool HttpsPackage::LifeTimeMonthHasBeenSet() const
{
    return m_lifeTimeMonthHasBeenSet;
}

bool HttpsPackage::GetRefundAvailable() const
{
    return m_refundAvailable;
}

void HttpsPackage::SetRefundAvailable(const bool& _refundAvailable)
{
    m_refundAvailable = _refundAvailable;
    m_refundAvailableHasBeenSet = true;
}

bool HttpsPackage::RefundAvailableHasBeenSet() const
{
    return m_refundAvailableHasBeenSet;
}

int64_t HttpsPackage::GetConfigId() const
{
    return m_configId;
}

void HttpsPackage::SetConfigId(const int64_t& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool HttpsPackage::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string HttpsPackage::GetTrueEnableTime() const
{
    return m_trueEnableTime;
}

void HttpsPackage::SetTrueEnableTime(const string& _trueEnableTime)
{
    m_trueEnableTime = _trueEnableTime;
    m_trueEnableTimeHasBeenSet = true;
}

bool HttpsPackage::TrueEnableTimeHasBeenSet() const
{
    return m_trueEnableTimeHasBeenSet;
}

string HttpsPackage::GetTrueExpireTime() const
{
    return m_trueExpireTime;
}

void HttpsPackage::SetTrueExpireTime(const string& _trueExpireTime)
{
    m_trueExpireTime = _trueExpireTime;
    m_trueExpireTimeHasBeenSet = true;
}

bool HttpsPackage::TrueExpireTimeHasBeenSet() const
{
    return m_trueExpireTimeHasBeenSet;
}

string HttpsPackage::GetArea() const
{
    return m_area;
}

void HttpsPackage::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool HttpsPackage::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

bool HttpsPackage::GetContractExtension() const
{
    return m_contractExtension;
}

void HttpsPackage::SetContractExtension(const bool& _contractExtension)
{
    m_contractExtension = _contractExtension;
    m_contractExtensionHasBeenSet = true;
}

bool HttpsPackage::ContractExtensionHasBeenSet() const
{
    return m_contractExtensionHasBeenSet;
}

bool HttpsPackage::GetExtensionAvailable() const
{
    return m_extensionAvailable;
}

void HttpsPackage::SetExtensionAvailable(const bool& _extensionAvailable)
{
    m_extensionAvailable = _extensionAvailable;
    m_extensionAvailableHasBeenSet = true;
}

bool HttpsPackage::ExtensionAvailableHasBeenSet() const
{
    return m_extensionAvailableHasBeenSet;
}

uint64_t HttpsPackage::GetExtensionMode() const
{
    return m_extensionMode;
}

void HttpsPackage::SetExtensionMode(const uint64_t& _extensionMode)
{
    m_extensionMode = _extensionMode;
    m_extensionModeHasBeenSet = true;
}

bool HttpsPackage::ExtensionModeHasBeenSet() const
{
    return m_extensionModeHasBeenSet;
}

bool HttpsPackage::GetAutoExtension() const
{
    return m_autoExtension;
}

void HttpsPackage::SetAutoExtension(const bool& _autoExtension)
{
    m_autoExtension = _autoExtension;
    m_autoExtensionHasBeenSet = true;
}

bool HttpsPackage::AutoExtensionHasBeenSet() const
{
    return m_autoExtensionHasBeenSet;
}


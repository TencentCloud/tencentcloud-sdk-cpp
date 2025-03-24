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

#include <tencentcloud/chc/v20230418/model/DeviceOrderBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

DeviceOrderBaseInfo::DeviceOrderBaseInfo() :
    m_idcIdHasBeenSet(false),
    m_idcNameHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_receivingOperationHasBeenSet(false),
    m_entryTimeHasBeenSet(false),
    m_isExpressDeliveryHasBeenSet(false),
    m_expressInfoHasBeenSet(false),
    m_stuffOptionHasBeenSet(false),
    m_selfOperationInfoHasBeenSet(false),
    m_withPowerOnHasBeenSet(false),
    m_isPowerOffConfirmHasBeenSet(false),
    m_powerOffConfirmInfoHasBeenSet(false),
    m_handoverMethodHasBeenSet(false),
    m_customerReceiptHasBeenSet(false),
    m_logisticsReceiptHasBeenSet(false)
{
}

CoreInternalOutcome DeviceOrderBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IdcId") && !value["IdcId"].IsNull())
    {
        if (!value["IdcId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOrderBaseInfo.IdcId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_idcId = value["IdcId"].GetUint64();
        m_idcIdHasBeenSet = true;
    }

    if (value.HasMember("IdcName") && !value["IdcName"].IsNull())
    {
        if (!value["IdcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOrderBaseInfo.IdcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcName = string(value["IdcName"].GetString());
        m_idcNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOrderBaseInfo.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOrderBaseInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("ReceivingOperation") && !value["ReceivingOperation"].IsNull())
    {
        if (!value["ReceivingOperation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOrderBaseInfo.ReceivingOperation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receivingOperation = string(value["ReceivingOperation"].GetString());
        m_receivingOperationHasBeenSet = true;
    }

    if (value.HasMember("EntryTime") && !value["EntryTime"].IsNull())
    {
        if (!value["EntryTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOrderBaseInfo.EntryTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entryTime = string(value["EntryTime"].GetString());
        m_entryTimeHasBeenSet = true;
    }

    if (value.HasMember("IsExpressDelivery") && !value["IsExpressDelivery"].IsNull())
    {
        if (!value["IsExpressDelivery"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOrderBaseInfo.IsExpressDelivery` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isExpressDelivery = value["IsExpressDelivery"].GetBool();
        m_isExpressDeliveryHasBeenSet = true;
    }

    if (value.HasMember("ExpressInfo") && !value["ExpressInfo"].IsNull())
    {
        if (!value["ExpressInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOrderBaseInfo.ExpressInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_expressInfo.Deserialize(value["ExpressInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_expressInfoHasBeenSet = true;
    }

    if (value.HasMember("StuffOption") && !value["StuffOption"].IsNull())
    {
        if (!value["StuffOption"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOrderBaseInfo.StuffOption` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stuffOption = string(value["StuffOption"].GetString());
        m_stuffOptionHasBeenSet = true;
    }

    if (value.HasMember("SelfOperationInfo") && !value["SelfOperationInfo"].IsNull())
    {
        if (!value["SelfOperationInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOrderBaseInfo.SelfOperationInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_selfOperationInfo.Deserialize(value["SelfOperationInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_selfOperationInfoHasBeenSet = true;
    }

    if (value.HasMember("WithPowerOn") && !value["WithPowerOn"].IsNull())
    {
        if (!value["WithPowerOn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOrderBaseInfo.WithPowerOn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_withPowerOn = value["WithPowerOn"].GetBool();
        m_withPowerOnHasBeenSet = true;
    }

    if (value.HasMember("IsPowerOffConfirm") && !value["IsPowerOffConfirm"].IsNull())
    {
        if (!value["IsPowerOffConfirm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOrderBaseInfo.IsPowerOffConfirm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isPowerOffConfirm = string(value["IsPowerOffConfirm"].GetString());
        m_isPowerOffConfirmHasBeenSet = true;
    }

    if (value.HasMember("PowerOffConfirmInfo") && !value["PowerOffConfirmInfo"].IsNull())
    {
        if (!value["PowerOffConfirmInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOrderBaseInfo.PowerOffConfirmInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_powerOffConfirmInfo.Deserialize(value["PowerOffConfirmInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_powerOffConfirmInfoHasBeenSet = true;
    }

    if (value.HasMember("HandoverMethod") && !value["HandoverMethod"].IsNull())
    {
        if (!value["HandoverMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOrderBaseInfo.HandoverMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_handoverMethod = string(value["HandoverMethod"].GetString());
        m_handoverMethodHasBeenSet = true;
    }

    if (value.HasMember("CustomerReceipt") && !value["CustomerReceipt"].IsNull())
    {
        if (!value["CustomerReceipt"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOrderBaseInfo.CustomerReceipt` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customerReceipt.Deserialize(value["CustomerReceipt"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customerReceiptHasBeenSet = true;
    }

    if (value.HasMember("LogisticsReceipt") && !value["LogisticsReceipt"].IsNull())
    {
        if (!value["LogisticsReceipt"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOrderBaseInfo.LogisticsReceipt` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_logisticsReceipt.Deserialize(value["LogisticsReceipt"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_logisticsReceiptHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceOrderBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idcId, allocator);
    }

    if (m_idcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idcName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_receivingOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceivingOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receivingOperation.c_str(), allocator).Move(), allocator);
    }

    if (m_entryTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntryTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entryTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isExpressDeliveryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExpressDelivery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isExpressDelivery, allocator);
    }

    if (m_expressInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpressInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_expressInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_stuffOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StuffOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stuffOption.c_str(), allocator).Move(), allocator);
    }

    if (m_selfOperationInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfOperationInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_selfOperationInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_withPowerOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithPowerOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_withPowerOn, allocator);
    }

    if (m_isPowerOffConfirmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPowerOffConfirm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isPowerOffConfirm.c_str(), allocator).Move(), allocator);
    }

    if (m_powerOffConfirmInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PowerOffConfirmInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_powerOffConfirmInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_handoverMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandoverMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_handoverMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_customerReceiptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerReceipt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customerReceipt.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_logisticsReceiptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogisticsReceipt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logisticsReceipt.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t DeviceOrderBaseInfo::GetIdcId() const
{
    return m_idcId;
}

void DeviceOrderBaseInfo::SetIdcId(const uint64_t& _idcId)
{
    m_idcId = _idcId;
    m_idcIdHasBeenSet = true;
}

bool DeviceOrderBaseInfo::IdcIdHasBeenSet() const
{
    return m_idcIdHasBeenSet;
}

string DeviceOrderBaseInfo::GetIdcName() const
{
    return m_idcName;
}

void DeviceOrderBaseInfo::SetIdcName(const string& _idcName)
{
    m_idcName = _idcName;
    m_idcNameHasBeenSet = true;
}

bool DeviceOrderBaseInfo::IdcNameHasBeenSet() const
{
    return m_idcNameHasBeenSet;
}

string DeviceOrderBaseInfo::GetDeviceType() const
{
    return m_deviceType;
}

void DeviceOrderBaseInfo::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool DeviceOrderBaseInfo::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string DeviceOrderBaseInfo::GetRemark() const
{
    return m_remark;
}

void DeviceOrderBaseInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DeviceOrderBaseInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DeviceOrderBaseInfo::GetReceivingOperation() const
{
    return m_receivingOperation;
}

void DeviceOrderBaseInfo::SetReceivingOperation(const string& _receivingOperation)
{
    m_receivingOperation = _receivingOperation;
    m_receivingOperationHasBeenSet = true;
}

bool DeviceOrderBaseInfo::ReceivingOperationHasBeenSet() const
{
    return m_receivingOperationHasBeenSet;
}

string DeviceOrderBaseInfo::GetEntryTime() const
{
    return m_entryTime;
}

void DeviceOrderBaseInfo::SetEntryTime(const string& _entryTime)
{
    m_entryTime = _entryTime;
    m_entryTimeHasBeenSet = true;
}

bool DeviceOrderBaseInfo::EntryTimeHasBeenSet() const
{
    return m_entryTimeHasBeenSet;
}

bool DeviceOrderBaseInfo::GetIsExpressDelivery() const
{
    return m_isExpressDelivery;
}

void DeviceOrderBaseInfo::SetIsExpressDelivery(const bool& _isExpressDelivery)
{
    m_isExpressDelivery = _isExpressDelivery;
    m_isExpressDeliveryHasBeenSet = true;
}

bool DeviceOrderBaseInfo::IsExpressDeliveryHasBeenSet() const
{
    return m_isExpressDeliveryHasBeenSet;
}

ExpressDelivery DeviceOrderBaseInfo::GetExpressInfo() const
{
    return m_expressInfo;
}

void DeviceOrderBaseInfo::SetExpressInfo(const ExpressDelivery& _expressInfo)
{
    m_expressInfo = _expressInfo;
    m_expressInfoHasBeenSet = true;
}

bool DeviceOrderBaseInfo::ExpressInfoHasBeenSet() const
{
    return m_expressInfoHasBeenSet;
}

string DeviceOrderBaseInfo::GetStuffOption() const
{
    return m_stuffOption;
}

void DeviceOrderBaseInfo::SetStuffOption(const string& _stuffOption)
{
    m_stuffOption = _stuffOption;
    m_stuffOptionHasBeenSet = true;
}

bool DeviceOrderBaseInfo::StuffOptionHasBeenSet() const
{
    return m_stuffOptionHasBeenSet;
}

SelfOperation DeviceOrderBaseInfo::GetSelfOperationInfo() const
{
    return m_selfOperationInfo;
}

void DeviceOrderBaseInfo::SetSelfOperationInfo(const SelfOperation& _selfOperationInfo)
{
    m_selfOperationInfo = _selfOperationInfo;
    m_selfOperationInfoHasBeenSet = true;
}

bool DeviceOrderBaseInfo::SelfOperationInfoHasBeenSet() const
{
    return m_selfOperationInfoHasBeenSet;
}

bool DeviceOrderBaseInfo::GetWithPowerOn() const
{
    return m_withPowerOn;
}

void DeviceOrderBaseInfo::SetWithPowerOn(const bool& _withPowerOn)
{
    m_withPowerOn = _withPowerOn;
    m_withPowerOnHasBeenSet = true;
}

bool DeviceOrderBaseInfo::WithPowerOnHasBeenSet() const
{
    return m_withPowerOnHasBeenSet;
}

string DeviceOrderBaseInfo::GetIsPowerOffConfirm() const
{
    return m_isPowerOffConfirm;
}

void DeviceOrderBaseInfo::SetIsPowerOffConfirm(const string& _isPowerOffConfirm)
{
    m_isPowerOffConfirm = _isPowerOffConfirm;
    m_isPowerOffConfirmHasBeenSet = true;
}

bool DeviceOrderBaseInfo::IsPowerOffConfirmHasBeenSet() const
{
    return m_isPowerOffConfirmHasBeenSet;
}

PowerOffConfirm DeviceOrderBaseInfo::GetPowerOffConfirmInfo() const
{
    return m_powerOffConfirmInfo;
}

void DeviceOrderBaseInfo::SetPowerOffConfirmInfo(const PowerOffConfirm& _powerOffConfirmInfo)
{
    m_powerOffConfirmInfo = _powerOffConfirmInfo;
    m_powerOffConfirmInfoHasBeenSet = true;
}

bool DeviceOrderBaseInfo::PowerOffConfirmInfoHasBeenSet() const
{
    return m_powerOffConfirmInfoHasBeenSet;
}

string DeviceOrderBaseInfo::GetHandoverMethod() const
{
    return m_handoverMethod;
}

void DeviceOrderBaseInfo::SetHandoverMethod(const string& _handoverMethod)
{
    m_handoverMethod = _handoverMethod;
    m_handoverMethodHasBeenSet = true;
}

bool DeviceOrderBaseInfo::HandoverMethodHasBeenSet() const
{
    return m_handoverMethodHasBeenSet;
}

CustomerReceipt DeviceOrderBaseInfo::GetCustomerReceipt() const
{
    return m_customerReceipt;
}

void DeviceOrderBaseInfo::SetCustomerReceipt(const CustomerReceipt& _customerReceipt)
{
    m_customerReceipt = _customerReceipt;
    m_customerReceiptHasBeenSet = true;
}

bool DeviceOrderBaseInfo::CustomerReceiptHasBeenSet() const
{
    return m_customerReceiptHasBeenSet;
}

LogisticsReceipt DeviceOrderBaseInfo::GetLogisticsReceipt() const
{
    return m_logisticsReceipt;
}

void DeviceOrderBaseInfo::SetLogisticsReceipt(const LogisticsReceipt& _logisticsReceipt)
{
    m_logisticsReceipt = _logisticsReceipt;
    m_logisticsReceiptHasBeenSet = true;
}

bool DeviceOrderBaseInfo::LogisticsReceiptHasBeenSet() const
{
    return m_logisticsReceiptHasBeenSet;
}


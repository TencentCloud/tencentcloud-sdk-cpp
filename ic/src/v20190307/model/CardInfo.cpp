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

#include <tencentcloud/ic/v20190307/model/CardInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ic::V20190307::Model;
using namespace std;

CardInfo::CardInfo() :
    m_iccidHasBeenSet(false),
    m_msisdnHasBeenSet(false),
    m_imsiHasBeenSet(false),
    m_imeiHasBeenSet(false),
    m_sdkappidHasBeenSet(false),
    m_teleoperatorHasBeenSet(false),
    m_cardStatusHasBeenSet(false),
    m_networkStatusHasBeenSet(false),
    m_activitedTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_poolIdHasBeenSet(false),
    m_dataUsedInPeriodHasBeenSet(false),
    m_dataTotalInPeriodHasBeenSet(false),
    m_productExpiredTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_preorderCntHasBeenSet(false),
    m_isActivatedHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_allowArrearsHasBeenSet(false),
    m_needSmsHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_certificationStateHasBeenSet(false),
    m_otherDataHasBeenSet(false)
{
}

CoreInternalOutcome CardInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Iccid") && !value["Iccid"].IsNull())
    {
        if (!value["Iccid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.Iccid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iccid = string(value["Iccid"].GetString());
        m_iccidHasBeenSet = true;
    }

    if (value.HasMember("Msisdn") && !value["Msisdn"].IsNull())
    {
        if (!value["Msisdn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.Msisdn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msisdn = string(value["Msisdn"].GetString());
        m_msisdnHasBeenSet = true;
    }

    if (value.HasMember("Imsi") && !value["Imsi"].IsNull())
    {
        if (!value["Imsi"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.Imsi` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imsi = string(value["Imsi"].GetString());
        m_imsiHasBeenSet = true;
    }

    if (value.HasMember("Imei") && !value["Imei"].IsNull())
    {
        if (!value["Imei"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.Imei` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imei = string(value["Imei"].GetString());
        m_imeiHasBeenSet = true;
    }

    if (value.HasMember("Sdkappid") && !value["Sdkappid"].IsNull())
    {
        if (!value["Sdkappid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.Sdkappid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdkappid = string(value["Sdkappid"].GetString());
        m_sdkappidHasBeenSet = true;
    }

    if (value.HasMember("Teleoperator") && !value["Teleoperator"].IsNull())
    {
        if (!value["Teleoperator"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.Teleoperator` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_teleoperator = value["Teleoperator"].GetInt64();
        m_teleoperatorHasBeenSet = true;
    }

    if (value.HasMember("CardStatus") && !value["CardStatus"].IsNull())
    {
        if (!value["CardStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.CardStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cardStatus = value["CardStatus"].GetInt64();
        m_cardStatusHasBeenSet = true;
    }

    if (value.HasMember("NetworkStatus") && !value["NetworkStatus"].IsNull())
    {
        if (!value["NetworkStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.NetworkStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_networkStatus = value["NetworkStatus"].GetInt64();
        m_networkStatusHasBeenSet = true;
    }

    if (value.HasMember("ActivitedTime") && !value["ActivitedTime"].IsNull())
    {
        if (!value["ActivitedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.ActivitedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activitedTime = string(value["ActivitedTime"].GetString());
        m_activitedTimeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("PoolId") && !value["PoolId"].IsNull())
    {
        if (!value["PoolId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.PoolId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_poolId = string(value["PoolId"].GetString());
        m_poolIdHasBeenSet = true;
    }

    if (value.HasMember("DataUsedInPeriod") && !value["DataUsedInPeriod"].IsNull())
    {
        if (!value["DataUsedInPeriod"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.DataUsedInPeriod` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_dataUsedInPeriod = value["DataUsedInPeriod"].GetDouble();
        m_dataUsedInPeriodHasBeenSet = true;
    }

    if (value.HasMember("DataTotalInPeriod") && !value["DataTotalInPeriod"].IsNull())
    {
        if (!value["DataTotalInPeriod"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.DataTotalInPeriod` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_dataTotalInPeriod = value["DataTotalInPeriod"].GetDouble();
        m_dataTotalInPeriodHasBeenSet = true;
    }

    if (value.HasMember("ProductExpiredTime") && !value["ProductExpiredTime"].IsNull())
    {
        if (!value["ProductExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.ProductExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productExpiredTime = string(value["ProductExpiredTime"].GetString());
        m_productExpiredTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("PreorderCnt") && !value["PreorderCnt"].IsNull())
    {
        if (!value["PreorderCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.PreorderCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_preorderCnt = value["PreorderCnt"].GetInt64();
        m_preorderCntHasBeenSet = true;
    }

    if (value.HasMember("IsActivated") && !value["IsActivated"].IsNull())
    {
        if (!value["IsActivated"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.IsActivated` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isActivated = value["IsActivated"].GetInt64();
        m_isActivatedHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("AutoRenew") && !value["AutoRenew"].IsNull())
    {
        if (!value["AutoRenew"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.AutoRenew` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenew = value["AutoRenew"].GetInt64();
        m_autoRenewHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("AllowArrears") && !value["AllowArrears"].IsNull())
    {
        if (!value["AllowArrears"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.AllowArrears` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allowArrears = value["AllowArrears"].GetInt64();
        m_allowArrearsHasBeenSet = true;
    }

    if (value.HasMember("NeedSms") && !value["NeedSms"].IsNull())
    {
        if (!value["NeedSms"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.NeedSms` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_needSms = value["NeedSms"].GetInt64();
        m_needSmsHasBeenSet = true;
    }

    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.Provider` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_provider = value["Provider"].GetInt64();
        m_providerHasBeenSet = true;
    }

    if (value.HasMember("CertificationState") && !value["CertificationState"].IsNull())
    {
        if (!value["CertificationState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.CertificationState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_certificationState = value["CertificationState"].GetInt64();
        m_certificationStateHasBeenSet = true;
    }

    if (value.HasMember("OtherData") && !value["OtherData"].IsNull())
    {
        if (!value["OtherData"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo.OtherData` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_otherData = value["OtherData"].GetDouble();
        m_otherDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CardInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iccidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Iccid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iccid.c_str(), allocator).Move(), allocator);
    }

    if (m_msisdnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Msisdn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msisdn.c_str(), allocator).Move(), allocator);
    }

    if (m_imsiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Imsi";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imsi.c_str(), allocator).Move(), allocator);
    }

    if (m_imeiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Imei";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imei.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkappidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sdkappid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sdkappid.c_str(), allocator).Move(), allocator);
    }

    if (m_teleoperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Teleoperator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_teleoperator, allocator);
    }

    if (m_cardStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cardStatus, allocator);
    }

    if (m_networkStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkStatus, allocator);
    }

    if (m_activitedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivitedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activitedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_poolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_poolId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataUsedInPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataUsedInPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataUsedInPeriod, allocator);
    }

    if (m_dataTotalInPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTotalInPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataTotalInPeriod, allocator);
    }

    if (m_productExpiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productExpiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_preorderCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreorderCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preorderCnt, allocator);
    }

    if (m_isActivatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsActivated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isActivated, allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenew, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_allowArrearsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowArrears";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowArrears, allocator);
    }

    if (m_needSmsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedSms";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needSms, allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_provider, allocator);
    }

    if (m_certificationStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificationState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certificationState, allocator);
    }

    if (m_otherDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_otherData, allocator);
    }

}


string CardInfo::GetIccid() const
{
    return m_iccid;
}

void CardInfo::SetIccid(const string& _iccid)
{
    m_iccid = _iccid;
    m_iccidHasBeenSet = true;
}

bool CardInfo::IccidHasBeenSet() const
{
    return m_iccidHasBeenSet;
}

string CardInfo::GetMsisdn() const
{
    return m_msisdn;
}

void CardInfo::SetMsisdn(const string& _msisdn)
{
    m_msisdn = _msisdn;
    m_msisdnHasBeenSet = true;
}

bool CardInfo::MsisdnHasBeenSet() const
{
    return m_msisdnHasBeenSet;
}

string CardInfo::GetImsi() const
{
    return m_imsi;
}

void CardInfo::SetImsi(const string& _imsi)
{
    m_imsi = _imsi;
    m_imsiHasBeenSet = true;
}

bool CardInfo::ImsiHasBeenSet() const
{
    return m_imsiHasBeenSet;
}

string CardInfo::GetImei() const
{
    return m_imei;
}

void CardInfo::SetImei(const string& _imei)
{
    m_imei = _imei;
    m_imeiHasBeenSet = true;
}

bool CardInfo::ImeiHasBeenSet() const
{
    return m_imeiHasBeenSet;
}

string CardInfo::GetSdkappid() const
{
    return m_sdkappid;
}

void CardInfo::SetSdkappid(const string& _sdkappid)
{
    m_sdkappid = _sdkappid;
    m_sdkappidHasBeenSet = true;
}

bool CardInfo::SdkappidHasBeenSet() const
{
    return m_sdkappidHasBeenSet;
}

int64_t CardInfo::GetTeleoperator() const
{
    return m_teleoperator;
}

void CardInfo::SetTeleoperator(const int64_t& _teleoperator)
{
    m_teleoperator = _teleoperator;
    m_teleoperatorHasBeenSet = true;
}

bool CardInfo::TeleoperatorHasBeenSet() const
{
    return m_teleoperatorHasBeenSet;
}

int64_t CardInfo::GetCardStatus() const
{
    return m_cardStatus;
}

void CardInfo::SetCardStatus(const int64_t& _cardStatus)
{
    m_cardStatus = _cardStatus;
    m_cardStatusHasBeenSet = true;
}

bool CardInfo::CardStatusHasBeenSet() const
{
    return m_cardStatusHasBeenSet;
}

int64_t CardInfo::GetNetworkStatus() const
{
    return m_networkStatus;
}

void CardInfo::SetNetworkStatus(const int64_t& _networkStatus)
{
    m_networkStatus = _networkStatus;
    m_networkStatusHasBeenSet = true;
}

bool CardInfo::NetworkStatusHasBeenSet() const
{
    return m_networkStatusHasBeenSet;
}

string CardInfo::GetActivitedTime() const
{
    return m_activitedTime;
}

void CardInfo::SetActivitedTime(const string& _activitedTime)
{
    m_activitedTime = _activitedTime;
    m_activitedTimeHasBeenSet = true;
}

bool CardInfo::ActivitedTimeHasBeenSet() const
{
    return m_activitedTimeHasBeenSet;
}

int64_t CardInfo::GetType() const
{
    return m_type;
}

void CardInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CardInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CardInfo::GetProductId() const
{
    return m_productId;
}

void CardInfo::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CardInfo::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string CardInfo::GetPoolId() const
{
    return m_poolId;
}

void CardInfo::SetPoolId(const string& _poolId)
{
    m_poolId = _poolId;
    m_poolIdHasBeenSet = true;
}

bool CardInfo::PoolIdHasBeenSet() const
{
    return m_poolIdHasBeenSet;
}

double CardInfo::GetDataUsedInPeriod() const
{
    return m_dataUsedInPeriod;
}

void CardInfo::SetDataUsedInPeriod(const double& _dataUsedInPeriod)
{
    m_dataUsedInPeriod = _dataUsedInPeriod;
    m_dataUsedInPeriodHasBeenSet = true;
}

bool CardInfo::DataUsedInPeriodHasBeenSet() const
{
    return m_dataUsedInPeriodHasBeenSet;
}

double CardInfo::GetDataTotalInPeriod() const
{
    return m_dataTotalInPeriod;
}

void CardInfo::SetDataTotalInPeriod(const double& _dataTotalInPeriod)
{
    m_dataTotalInPeriod = _dataTotalInPeriod;
    m_dataTotalInPeriodHasBeenSet = true;
}

bool CardInfo::DataTotalInPeriodHasBeenSet() const
{
    return m_dataTotalInPeriodHasBeenSet;
}

string CardInfo::GetProductExpiredTime() const
{
    return m_productExpiredTime;
}

void CardInfo::SetProductExpiredTime(const string& _productExpiredTime)
{
    m_productExpiredTime = _productExpiredTime;
    m_productExpiredTimeHasBeenSet = true;
}

bool CardInfo::ProductExpiredTimeHasBeenSet() const
{
    return m_productExpiredTimeHasBeenSet;
}

string CardInfo::GetDescription() const
{
    return m_description;
}

void CardInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CardInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CardInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void CardInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool CardInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string CardInfo::GetModifiedTime() const
{
    return m_modifiedTime;
}

void CardInfo::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool CardInfo::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

int64_t CardInfo::GetPreorderCnt() const
{
    return m_preorderCnt;
}

void CardInfo::SetPreorderCnt(const int64_t& _preorderCnt)
{
    m_preorderCnt = _preorderCnt;
    m_preorderCntHasBeenSet = true;
}

bool CardInfo::PreorderCntHasBeenSet() const
{
    return m_preorderCntHasBeenSet;
}

int64_t CardInfo::GetIsActivated() const
{
    return m_isActivated;
}

void CardInfo::SetIsActivated(const int64_t& _isActivated)
{
    m_isActivated = _isActivated;
    m_isActivatedHasBeenSet = true;
}

bool CardInfo::IsActivatedHasBeenSet() const
{
    return m_isActivatedHasBeenSet;
}

string CardInfo::GetOrderId() const
{
    return m_orderId;
}

void CardInfo::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool CardInfo::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

int64_t CardInfo::GetAutoRenew() const
{
    return m_autoRenew;
}

void CardInfo::SetAutoRenew(const int64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool CardInfo::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

string CardInfo::GetRemark() const
{
    return m_remark;
}

void CardInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CardInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t CardInfo::GetAllowArrears() const
{
    return m_allowArrears;
}

void CardInfo::SetAllowArrears(const int64_t& _allowArrears)
{
    m_allowArrears = _allowArrears;
    m_allowArrearsHasBeenSet = true;
}

bool CardInfo::AllowArrearsHasBeenSet() const
{
    return m_allowArrearsHasBeenSet;
}

int64_t CardInfo::GetNeedSms() const
{
    return m_needSms;
}

void CardInfo::SetNeedSms(const int64_t& _needSms)
{
    m_needSms = _needSms;
    m_needSmsHasBeenSet = true;
}

bool CardInfo::NeedSmsHasBeenSet() const
{
    return m_needSmsHasBeenSet;
}

int64_t CardInfo::GetProvider() const
{
    return m_provider;
}

void CardInfo::SetProvider(const int64_t& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool CardInfo::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

int64_t CardInfo::GetCertificationState() const
{
    return m_certificationState;
}

void CardInfo::SetCertificationState(const int64_t& _certificationState)
{
    m_certificationState = _certificationState;
    m_certificationStateHasBeenSet = true;
}

bool CardInfo::CertificationStateHasBeenSet() const
{
    return m_certificationStateHasBeenSet;
}

double CardInfo::GetOtherData() const
{
    return m_otherData;
}

void CardInfo::SetOtherData(const double& _otherData)
{
    m_otherData = _otherData;
    m_otherDataHasBeenSet = true;
}

bool CardInfo::OtherDataHasBeenSet() const
{
    return m_otherDataHasBeenSet;
}


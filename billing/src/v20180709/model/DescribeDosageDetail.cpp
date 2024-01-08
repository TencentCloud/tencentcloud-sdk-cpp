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

#include <tencentcloud/billing/v20180709/model/DescribeDosageDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeDosageDetail::DescribeDosageDetail() :
    m_dateHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_dosageTypeHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_subProductCodeHasBeenSet(false),
    m_billingItemCodeHasBeenSet(false),
    m_subBillingItemCodeHasBeenSet(false),
    m_productCodeNameHasBeenSet(false),
    m_subProductCodeNameHasBeenSet(false),
    m_billingItemCodeNameHasBeenSet(false),
    m_subBillingItemCodeNameHasBeenSet(false),
    m_dosageUnitHasBeenSet(false),
    m_dosageBeginTimeHasBeenSet(false),
    m_dosageEndTimeHasBeenSet(false),
    m_dosageValueHasBeenSet(false),
    m_deductValueHasBeenSet(false),
    m_remainValueHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_attrStrHasBeenSet(false),
    m_sheetNameHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDosageDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDosageDetail.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDosageDetail.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("DosageType") && !value["DosageType"].IsNull())
    {
        if (!value["DosageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDosageDetail.DosageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dosageType = string(value["DosageType"].GetString());
        m_dosageTypeHasBeenSet = true;
    }

    if (value.HasMember("ProductCode") && !value["ProductCode"].IsNull())
    {
        if (!value["ProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDosageDetail.ProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCode = string(value["ProductCode"].GetString());
        m_productCodeHasBeenSet = true;
    }

    if (value.HasMember("SubProductCode") && !value["SubProductCode"].IsNull())
    {
        if (!value["SubProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDosageDetail.SubProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductCode = string(value["SubProductCode"].GetString());
        m_subProductCodeHasBeenSet = true;
    }

    if (value.HasMember("BillingItemCode") && !value["BillingItemCode"].IsNull())
    {
        if (!value["BillingItemCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDosageDetail.BillingItemCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingItemCode = string(value["BillingItemCode"].GetString());
        m_billingItemCodeHasBeenSet = true;
    }

    if (value.HasMember("SubBillingItemCode") && !value["SubBillingItemCode"].IsNull())
    {
        if (!value["SubBillingItemCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDosageDetail.SubBillingItemCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subBillingItemCode = string(value["SubBillingItemCode"].GetString());
        m_subBillingItemCodeHasBeenSet = true;
    }

    if (value.HasMember("ProductCodeName") && !value["ProductCodeName"].IsNull())
    {
        if (!value["ProductCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDosageDetail.ProductCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCodeName = string(value["ProductCodeName"].GetString());
        m_productCodeNameHasBeenSet = true;
    }

    if (value.HasMember("SubProductCodeName") && !value["SubProductCodeName"].IsNull())
    {
        if (!value["SubProductCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDosageDetail.SubProductCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductCodeName = string(value["SubProductCodeName"].GetString());
        m_subProductCodeNameHasBeenSet = true;
    }

    if (value.HasMember("BillingItemCodeName") && !value["BillingItemCodeName"].IsNull())
    {
        if (!value["BillingItemCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDosageDetail.BillingItemCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingItemCodeName = string(value["BillingItemCodeName"].GetString());
        m_billingItemCodeNameHasBeenSet = true;
    }

    if (value.HasMember("SubBillingItemCodeName") && !value["SubBillingItemCodeName"].IsNull())
    {
        if (!value["SubBillingItemCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDosageDetail.SubBillingItemCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subBillingItemCodeName = string(value["SubBillingItemCodeName"].GetString());
        m_subBillingItemCodeNameHasBeenSet = true;
    }

    if (value.HasMember("DosageUnit") && !value["DosageUnit"].IsNull())
    {
        if (!value["DosageUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDosageDetail.DosageUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dosageUnit = string(value["DosageUnit"].GetString());
        m_dosageUnitHasBeenSet = true;
    }

    if (value.HasMember("DosageBeginTime") && !value["DosageBeginTime"].IsNull())
    {
        if (!value["DosageBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDosageDetail.DosageBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dosageBeginTime = string(value["DosageBeginTime"].GetString());
        m_dosageBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("DosageEndTime") && !value["DosageEndTime"].IsNull())
    {
        if (!value["DosageEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDosageDetail.DosageEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dosageEndTime = string(value["DosageEndTime"].GetString());
        m_dosageEndTimeHasBeenSet = true;
    }

    if (value.HasMember("DosageValue") && !value["DosageValue"].IsNull())
    {
        if (!value["DosageValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDosageDetail.DosageValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_dosageValue = value["DosageValue"].GetDouble();
        m_dosageValueHasBeenSet = true;
    }

    if (value.HasMember("DeductValue") && !value["DeductValue"].IsNull())
    {
        if (!value["DeductValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDosageDetail.DeductValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_deductValue = value["DeductValue"].GetDouble();
        m_deductValueHasBeenSet = true;
    }

    if (value.HasMember("RemainValue") && !value["RemainValue"].IsNull())
    {
        if (!value["RemainValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDosageDetail.RemainValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_remainValue = value["RemainValue"].GetDouble();
        m_remainValueHasBeenSet = true;
    }

    if (value.HasMember("SdkAppId") && !value["SdkAppId"].IsNull())
    {
        if (!value["SdkAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDosageDetail.SdkAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppId = string(value["SdkAppId"].GetString());
        m_sdkAppIdHasBeenSet = true;
    }

    if (value.HasMember("AttrStr") && !value["AttrStr"].IsNull())
    {
        if (!value["AttrStr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeDosageDetail.AttrStr` is not array type"));

        const rapidjson::Value &tmpValue = value["AttrStr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            JsonObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attrStr.push_back(item);
        }
        m_attrStrHasBeenSet = true;
    }

    if (value.HasMember("SheetName") && !value["SheetName"].IsNull())
    {
        if (!value["SheetName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeDosageDetail.SheetName` is not array type"));

        const rapidjson::Value &tmpValue = value["SheetName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sheetName.push_back((*itr).GetString());
        }
        m_sheetNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDosageDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_dosageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DosageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dosageType.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProductCode.c_str(), allocator).Move(), allocator);
    }

    if (m_billingItemCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingItemCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingItemCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subBillingItemCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubBillingItemCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subBillingItemCode.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProductCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_billingItemCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingItemCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingItemCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_subBillingItemCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubBillingItemCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subBillingItemCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_dosageUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DosageUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dosageUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_dosageBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DosageBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dosageBeginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dosageEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DosageEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dosageEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dosageValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DosageValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dosageValue, allocator);
    }

    if (m_deductValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deductValue, allocator);
    }

    if (m_remainValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainValue, allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sdkAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_attrStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attrStr.begin(); itr != m_attrStr.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sheetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SheetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sheetName.begin(); itr != m_sheetName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DescribeDosageDetail::GetDate() const
{
    return m_date;
}

void DescribeDosageDetail::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool DescribeDosageDetail::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string DescribeDosageDetail::GetUin() const
{
    return m_uin;
}

void DescribeDosageDetail::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DescribeDosageDetail::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DescribeDosageDetail::GetDosageType() const
{
    return m_dosageType;
}

void DescribeDosageDetail::SetDosageType(const string& _dosageType)
{
    m_dosageType = _dosageType;
    m_dosageTypeHasBeenSet = true;
}

bool DescribeDosageDetail::DosageTypeHasBeenSet() const
{
    return m_dosageTypeHasBeenSet;
}

string DescribeDosageDetail::GetProductCode() const
{
    return m_productCode;
}

void DescribeDosageDetail::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool DescribeDosageDetail::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string DescribeDosageDetail::GetSubProductCode() const
{
    return m_subProductCode;
}

void DescribeDosageDetail::SetSubProductCode(const string& _subProductCode)
{
    m_subProductCode = _subProductCode;
    m_subProductCodeHasBeenSet = true;
}

bool DescribeDosageDetail::SubProductCodeHasBeenSet() const
{
    return m_subProductCodeHasBeenSet;
}

string DescribeDosageDetail::GetBillingItemCode() const
{
    return m_billingItemCode;
}

void DescribeDosageDetail::SetBillingItemCode(const string& _billingItemCode)
{
    m_billingItemCode = _billingItemCode;
    m_billingItemCodeHasBeenSet = true;
}

bool DescribeDosageDetail::BillingItemCodeHasBeenSet() const
{
    return m_billingItemCodeHasBeenSet;
}

string DescribeDosageDetail::GetSubBillingItemCode() const
{
    return m_subBillingItemCode;
}

void DescribeDosageDetail::SetSubBillingItemCode(const string& _subBillingItemCode)
{
    m_subBillingItemCode = _subBillingItemCode;
    m_subBillingItemCodeHasBeenSet = true;
}

bool DescribeDosageDetail::SubBillingItemCodeHasBeenSet() const
{
    return m_subBillingItemCodeHasBeenSet;
}

string DescribeDosageDetail::GetProductCodeName() const
{
    return m_productCodeName;
}

void DescribeDosageDetail::SetProductCodeName(const string& _productCodeName)
{
    m_productCodeName = _productCodeName;
    m_productCodeNameHasBeenSet = true;
}

bool DescribeDosageDetail::ProductCodeNameHasBeenSet() const
{
    return m_productCodeNameHasBeenSet;
}

string DescribeDosageDetail::GetSubProductCodeName() const
{
    return m_subProductCodeName;
}

void DescribeDosageDetail::SetSubProductCodeName(const string& _subProductCodeName)
{
    m_subProductCodeName = _subProductCodeName;
    m_subProductCodeNameHasBeenSet = true;
}

bool DescribeDosageDetail::SubProductCodeNameHasBeenSet() const
{
    return m_subProductCodeNameHasBeenSet;
}

string DescribeDosageDetail::GetBillingItemCodeName() const
{
    return m_billingItemCodeName;
}

void DescribeDosageDetail::SetBillingItemCodeName(const string& _billingItemCodeName)
{
    m_billingItemCodeName = _billingItemCodeName;
    m_billingItemCodeNameHasBeenSet = true;
}

bool DescribeDosageDetail::BillingItemCodeNameHasBeenSet() const
{
    return m_billingItemCodeNameHasBeenSet;
}

string DescribeDosageDetail::GetSubBillingItemCodeName() const
{
    return m_subBillingItemCodeName;
}

void DescribeDosageDetail::SetSubBillingItemCodeName(const string& _subBillingItemCodeName)
{
    m_subBillingItemCodeName = _subBillingItemCodeName;
    m_subBillingItemCodeNameHasBeenSet = true;
}

bool DescribeDosageDetail::SubBillingItemCodeNameHasBeenSet() const
{
    return m_subBillingItemCodeNameHasBeenSet;
}

string DescribeDosageDetail::GetDosageUnit() const
{
    return m_dosageUnit;
}

void DescribeDosageDetail::SetDosageUnit(const string& _dosageUnit)
{
    m_dosageUnit = _dosageUnit;
    m_dosageUnitHasBeenSet = true;
}

bool DescribeDosageDetail::DosageUnitHasBeenSet() const
{
    return m_dosageUnitHasBeenSet;
}

string DescribeDosageDetail::GetDosageBeginTime() const
{
    return m_dosageBeginTime;
}

void DescribeDosageDetail::SetDosageBeginTime(const string& _dosageBeginTime)
{
    m_dosageBeginTime = _dosageBeginTime;
    m_dosageBeginTimeHasBeenSet = true;
}

bool DescribeDosageDetail::DosageBeginTimeHasBeenSet() const
{
    return m_dosageBeginTimeHasBeenSet;
}

string DescribeDosageDetail::GetDosageEndTime() const
{
    return m_dosageEndTime;
}

void DescribeDosageDetail::SetDosageEndTime(const string& _dosageEndTime)
{
    m_dosageEndTime = _dosageEndTime;
    m_dosageEndTimeHasBeenSet = true;
}

bool DescribeDosageDetail::DosageEndTimeHasBeenSet() const
{
    return m_dosageEndTimeHasBeenSet;
}

double DescribeDosageDetail::GetDosageValue() const
{
    return m_dosageValue;
}

void DescribeDosageDetail::SetDosageValue(const double& _dosageValue)
{
    m_dosageValue = _dosageValue;
    m_dosageValueHasBeenSet = true;
}

bool DescribeDosageDetail::DosageValueHasBeenSet() const
{
    return m_dosageValueHasBeenSet;
}

double DescribeDosageDetail::GetDeductValue() const
{
    return m_deductValue;
}

void DescribeDosageDetail::SetDeductValue(const double& _deductValue)
{
    m_deductValue = _deductValue;
    m_deductValueHasBeenSet = true;
}

bool DescribeDosageDetail::DeductValueHasBeenSet() const
{
    return m_deductValueHasBeenSet;
}

double DescribeDosageDetail::GetRemainValue() const
{
    return m_remainValue;
}

void DescribeDosageDetail::SetRemainValue(const double& _remainValue)
{
    m_remainValue = _remainValue;
    m_remainValueHasBeenSet = true;
}

bool DescribeDosageDetail::RemainValueHasBeenSet() const
{
    return m_remainValueHasBeenSet;
}

string DescribeDosageDetail::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DescribeDosageDetail::SetSdkAppId(const string& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DescribeDosageDetail::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

vector<JsonObject> DescribeDosageDetail::GetAttrStr() const
{
    return m_attrStr;
}

void DescribeDosageDetail::SetAttrStr(const vector<JsonObject>& _attrStr)
{
    m_attrStr = _attrStr;
    m_attrStrHasBeenSet = true;
}

bool DescribeDosageDetail::AttrStrHasBeenSet() const
{
    return m_attrStrHasBeenSet;
}

vector<string> DescribeDosageDetail::GetSheetName() const
{
    return m_sheetName;
}

void DescribeDosageDetail::SetSheetName(const vector<string>& _sheetName)
{
    m_sheetName = _sheetName;
    m_sheetNameHasBeenSet = true;
}

bool DescribeDosageDetail::SheetNameHasBeenSet() const
{
    return m_sheetNameHasBeenSet;
}


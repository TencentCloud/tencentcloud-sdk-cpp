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

#include <tencentcloud/billing/v20180709/model/CosDetailSets.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

CosDetailSets::CosDetailSets() :
    m_bucketNameHasBeenSet(false),
    m_dosageBeginTimeHasBeenSet(false),
    m_dosageEndTimeHasBeenSet(false),
    m_subProductCodeNameHasBeenSet(false),
    m_billingItemCodeNameHasBeenSet(false),
    m_dosageValueHasBeenSet(false),
    m_unitHasBeenSet(false)
{
}

CoreInternalOutcome CosDetailSets::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosDetailSets.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("DosageBeginTime") && !value["DosageBeginTime"].IsNull())
    {
        if (!value["DosageBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosDetailSets.DosageBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dosageBeginTime = string(value["DosageBeginTime"].GetString());
        m_dosageBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("DosageEndTime") && !value["DosageEndTime"].IsNull())
    {
        if (!value["DosageEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosDetailSets.DosageEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dosageEndTime = string(value["DosageEndTime"].GetString());
        m_dosageEndTimeHasBeenSet = true;
    }

    if (value.HasMember("SubProductCodeName") && !value["SubProductCodeName"].IsNull())
    {
        if (!value["SubProductCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosDetailSets.SubProductCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductCodeName = string(value["SubProductCodeName"].GetString());
        m_subProductCodeNameHasBeenSet = true;
    }

    if (value.HasMember("BillingItemCodeName") && !value["BillingItemCodeName"].IsNull())
    {
        if (!value["BillingItemCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosDetailSets.BillingItemCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingItemCodeName = string(value["BillingItemCodeName"].GetString());
        m_billingItemCodeNameHasBeenSet = true;
    }

    if (value.HasMember("DosageValue") && !value["DosageValue"].IsNull())
    {
        if (!value["DosageValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosDetailSets.DosageValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dosageValue = string(value["DosageValue"].GetString());
        m_dosageValueHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosDetailSets.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosDetailSets::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
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

    if (m_dosageValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DosageValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dosageValue.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

}


string CosDetailSets::GetBucketName() const
{
    return m_bucketName;
}

void CosDetailSets::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool CosDetailSets::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string CosDetailSets::GetDosageBeginTime() const
{
    return m_dosageBeginTime;
}

void CosDetailSets::SetDosageBeginTime(const string& _dosageBeginTime)
{
    m_dosageBeginTime = _dosageBeginTime;
    m_dosageBeginTimeHasBeenSet = true;
}

bool CosDetailSets::DosageBeginTimeHasBeenSet() const
{
    return m_dosageBeginTimeHasBeenSet;
}

string CosDetailSets::GetDosageEndTime() const
{
    return m_dosageEndTime;
}

void CosDetailSets::SetDosageEndTime(const string& _dosageEndTime)
{
    m_dosageEndTime = _dosageEndTime;
    m_dosageEndTimeHasBeenSet = true;
}

bool CosDetailSets::DosageEndTimeHasBeenSet() const
{
    return m_dosageEndTimeHasBeenSet;
}

string CosDetailSets::GetSubProductCodeName() const
{
    return m_subProductCodeName;
}

void CosDetailSets::SetSubProductCodeName(const string& _subProductCodeName)
{
    m_subProductCodeName = _subProductCodeName;
    m_subProductCodeNameHasBeenSet = true;
}

bool CosDetailSets::SubProductCodeNameHasBeenSet() const
{
    return m_subProductCodeNameHasBeenSet;
}

string CosDetailSets::GetBillingItemCodeName() const
{
    return m_billingItemCodeName;
}

void CosDetailSets::SetBillingItemCodeName(const string& _billingItemCodeName)
{
    m_billingItemCodeName = _billingItemCodeName;
    m_billingItemCodeNameHasBeenSet = true;
}

bool CosDetailSets::BillingItemCodeNameHasBeenSet() const
{
    return m_billingItemCodeNameHasBeenSet;
}

string CosDetailSets::GetDosageValue() const
{
    return m_dosageValue;
}

void CosDetailSets::SetDosageValue(const string& _dosageValue)
{
    m_dosageValue = _dosageValue;
    m_dosageValueHasBeenSet = true;
}

bool CosDetailSets::DosageValueHasBeenSet() const
{
    return m_dosageValueHasBeenSet;
}

string CosDetailSets::GetUnit() const
{
    return m_unit;
}

void CosDetailSets::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool CosDetailSets::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}


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

#include <tencentcloud/clb/v20180317/model/ModelRouterPackage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModelRouterPackage::ModelRouterPackage() :
    m_capacitySizeHasBeenSet(false),
    m_capacityRemainHasBeenSet(false),
    m_capacitySizePreciseHasBeenSet(false),
    m_capacityRemainPreciseHasBeenSet(false),
    m_autoPurchaseFlagHasBeenSet(false),
    m_modelRouterResourcePackageIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_deductionStartTimeHasBeenSet(false),
    m_deductionEndTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome ModelRouterPackage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CapacitySize") && !value["CapacitySize"].IsNull())
    {
        if (!value["CapacitySize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterPackage.CapacitySize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_capacitySize = string(value["CapacitySize"].GetString());
        m_capacitySizeHasBeenSet = true;
    }

    if (value.HasMember("CapacityRemain") && !value["CapacityRemain"].IsNull())
    {
        if (!value["CapacityRemain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterPackage.CapacityRemain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_capacityRemain = string(value["CapacityRemain"].GetString());
        m_capacityRemainHasBeenSet = true;
    }

    if (value.HasMember("CapacitySizePrecise") && !value["CapacitySizePrecise"].IsNull())
    {
        if (!value["CapacitySizePrecise"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterPackage.CapacitySizePrecise` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_capacitySizePrecise = string(value["CapacitySizePrecise"].GetString());
        m_capacitySizePreciseHasBeenSet = true;
    }

    if (value.HasMember("CapacityRemainPrecise") && !value["CapacityRemainPrecise"].IsNull())
    {
        if (!value["CapacityRemainPrecise"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterPackage.CapacityRemainPrecise` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_capacityRemainPrecise = string(value["CapacityRemainPrecise"].GetString());
        m_capacityRemainPreciseHasBeenSet = true;
    }

    if (value.HasMember("AutoPurchaseFlag") && !value["AutoPurchaseFlag"].IsNull())
    {
        if (!value["AutoPurchaseFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterPackage.AutoPurchaseFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoPurchaseFlag = value["AutoPurchaseFlag"].GetUint64();
        m_autoPurchaseFlagHasBeenSet = true;
    }

    if (value.HasMember("ModelRouterResourcePackageId") && !value["ModelRouterResourcePackageId"].IsNull())
    {
        if (!value["ModelRouterResourcePackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterPackage.ModelRouterResourcePackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelRouterResourcePackageId = string(value["ModelRouterResourcePackageId"].GetString());
        m_modelRouterResourcePackageIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterPackage.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DeductionStartTime") && !value["DeductionStartTime"].IsNull())
    {
        if (!value["DeductionStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterPackage.DeductionStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deductionStartTime = string(value["DeductionStartTime"].GetString());
        m_deductionStartTimeHasBeenSet = true;
    }

    if (value.HasMember("DeductionEndTime") && !value["DeductionEndTime"].IsNull())
    {
        if (!value["DeductionEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterPackage.DeductionEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deductionEndTime = string(value["DeductionEndTime"].GetString());
        m_deductionEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterPackage.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterPackage.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelRouterPackage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_capacitySizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacitySize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_capacitySize.c_str(), allocator).Move(), allocator);
    }

    if (m_capacityRemainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacityRemain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_capacityRemain.c_str(), allocator).Move(), allocator);
    }

    if (m_capacitySizePreciseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacitySizePrecise";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_capacitySizePrecise.c_str(), allocator).Move(), allocator);
    }

    if (m_capacityRemainPreciseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacityRemainPrecise";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_capacityRemainPrecise.c_str(), allocator).Move(), allocator);
    }

    if (m_autoPurchaseFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoPurchaseFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoPurchaseFlag, allocator);
    }

    if (m_modelRouterResourcePackageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterResourcePackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelRouterResourcePackageId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deductionStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductionStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deductionStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deductionEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductionEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deductionEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string ModelRouterPackage::GetCapacitySize() const
{
    return m_capacitySize;
}

void ModelRouterPackage::SetCapacitySize(const string& _capacitySize)
{
    m_capacitySize = _capacitySize;
    m_capacitySizeHasBeenSet = true;
}

bool ModelRouterPackage::CapacitySizeHasBeenSet() const
{
    return m_capacitySizeHasBeenSet;
}

string ModelRouterPackage::GetCapacityRemain() const
{
    return m_capacityRemain;
}

void ModelRouterPackage::SetCapacityRemain(const string& _capacityRemain)
{
    m_capacityRemain = _capacityRemain;
    m_capacityRemainHasBeenSet = true;
}

bool ModelRouterPackage::CapacityRemainHasBeenSet() const
{
    return m_capacityRemainHasBeenSet;
}

string ModelRouterPackage::GetCapacitySizePrecise() const
{
    return m_capacitySizePrecise;
}

void ModelRouterPackage::SetCapacitySizePrecise(const string& _capacitySizePrecise)
{
    m_capacitySizePrecise = _capacitySizePrecise;
    m_capacitySizePreciseHasBeenSet = true;
}

bool ModelRouterPackage::CapacitySizePreciseHasBeenSet() const
{
    return m_capacitySizePreciseHasBeenSet;
}

string ModelRouterPackage::GetCapacityRemainPrecise() const
{
    return m_capacityRemainPrecise;
}

void ModelRouterPackage::SetCapacityRemainPrecise(const string& _capacityRemainPrecise)
{
    m_capacityRemainPrecise = _capacityRemainPrecise;
    m_capacityRemainPreciseHasBeenSet = true;
}

bool ModelRouterPackage::CapacityRemainPreciseHasBeenSet() const
{
    return m_capacityRemainPreciseHasBeenSet;
}

uint64_t ModelRouterPackage::GetAutoPurchaseFlag() const
{
    return m_autoPurchaseFlag;
}

void ModelRouterPackage::SetAutoPurchaseFlag(const uint64_t& _autoPurchaseFlag)
{
    m_autoPurchaseFlag = _autoPurchaseFlag;
    m_autoPurchaseFlagHasBeenSet = true;
}

bool ModelRouterPackage::AutoPurchaseFlagHasBeenSet() const
{
    return m_autoPurchaseFlagHasBeenSet;
}

string ModelRouterPackage::GetModelRouterResourcePackageId() const
{
    return m_modelRouterResourcePackageId;
}

void ModelRouterPackage::SetModelRouterResourcePackageId(const string& _modelRouterResourcePackageId)
{
    m_modelRouterResourcePackageId = _modelRouterResourcePackageId;
    m_modelRouterResourcePackageIdHasBeenSet = true;
}

bool ModelRouterPackage::ModelRouterResourcePackageIdHasBeenSet() const
{
    return m_modelRouterResourcePackageIdHasBeenSet;
}

string ModelRouterPackage::GetCreateTime() const
{
    return m_createTime;
}

void ModelRouterPackage::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ModelRouterPackage::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ModelRouterPackage::GetDeductionStartTime() const
{
    return m_deductionStartTime;
}

void ModelRouterPackage::SetDeductionStartTime(const string& _deductionStartTime)
{
    m_deductionStartTime = _deductionStartTime;
    m_deductionStartTimeHasBeenSet = true;
}

bool ModelRouterPackage::DeductionStartTimeHasBeenSet() const
{
    return m_deductionStartTimeHasBeenSet;
}

string ModelRouterPackage::GetDeductionEndTime() const
{
    return m_deductionEndTime;
}

void ModelRouterPackage::SetDeductionEndTime(const string& _deductionEndTime)
{
    m_deductionEndTime = _deductionEndTime;
    m_deductionEndTimeHasBeenSet = true;
}

bool ModelRouterPackage::DeductionEndTimeHasBeenSet() const
{
    return m_deductionEndTimeHasBeenSet;
}

string ModelRouterPackage::GetExpiredTime() const
{
    return m_expiredTime;
}

void ModelRouterPackage::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool ModelRouterPackage::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

uint64_t ModelRouterPackage::GetStatus() const
{
    return m_status;
}

void ModelRouterPackage::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModelRouterPackage::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


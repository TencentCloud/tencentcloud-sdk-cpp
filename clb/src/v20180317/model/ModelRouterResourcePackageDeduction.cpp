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

#include <tencentcloud/clb/v20180317/model/ModelRouterResourcePackageDeduction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModelRouterResourcePackageDeduction::ModelRouterResourcePackageDeduction() :
    m_actualDosageHasBeenSet(false),
    m_afterDeductionRemainHasBeenSet(false),
    m_beforeDeductionRemainHasBeenSet(false),
    m_deductionTimeHasBeenSet(false),
    m_dosageHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_modelRouterIdHasBeenSet(false),
    m_modelRouterResourcePackageIdHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

CoreInternalOutcome ModelRouterResourcePackageDeduction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActualDosage") && !value["ActualDosage"].IsNull())
    {
        if (!value["ActualDosage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterResourcePackageDeduction.ActualDosage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actualDosage = string(value["ActualDosage"].GetString());
        m_actualDosageHasBeenSet = true;
    }

    if (value.HasMember("AfterDeductionRemain") && !value["AfterDeductionRemain"].IsNull())
    {
        if (!value["AfterDeductionRemain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterResourcePackageDeduction.AfterDeductionRemain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_afterDeductionRemain = string(value["AfterDeductionRemain"].GetString());
        m_afterDeductionRemainHasBeenSet = true;
    }

    if (value.HasMember("BeforeDeductionRemain") && !value["BeforeDeductionRemain"].IsNull())
    {
        if (!value["BeforeDeductionRemain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterResourcePackageDeduction.BeforeDeductionRemain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beforeDeductionRemain = string(value["BeforeDeductionRemain"].GetString());
        m_beforeDeductionRemainHasBeenSet = true;
    }

    if (value.HasMember("DeductionTime") && !value["DeductionTime"].IsNull())
    {
        if (!value["DeductionTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterResourcePackageDeduction.DeductionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deductionTime = string(value["DeductionTime"].GetString());
        m_deductionTimeHasBeenSet = true;
    }

    if (value.HasMember("Dosage") && !value["Dosage"].IsNull())
    {
        if (!value["Dosage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterResourcePackageDeduction.Dosage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dosage = string(value["Dosage"].GetString());
        m_dosageHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterResourcePackageDeduction.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ModelRouterId") && !value["ModelRouterId"].IsNull())
    {
        if (!value["ModelRouterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterResourcePackageDeduction.ModelRouterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelRouterId = string(value["ModelRouterId"].GetString());
        m_modelRouterIdHasBeenSet = true;
    }

    if (value.HasMember("ModelRouterResourcePackageId") && !value["ModelRouterResourcePackageId"].IsNull())
    {
        if (!value["ModelRouterResourcePackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterResourcePackageDeduction.ModelRouterResourcePackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelRouterResourcePackageId = string(value["ModelRouterResourcePackageId"].GetString());
        m_modelRouterResourcePackageIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterResourcePackageDeduction.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelRouterResourcePackageDeduction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actualDosageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActualDosage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actualDosage.c_str(), allocator).Move(), allocator);
    }

    if (m_afterDeductionRemainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AfterDeductionRemain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_afterDeductionRemain.c_str(), allocator).Move(), allocator);
    }

    if (m_beforeDeductionRemainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeforeDeductionRemain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beforeDeductionRemain.c_str(), allocator).Move(), allocator);
    }

    if (m_deductionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deductionTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dosageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dosage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dosage.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modelRouterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelRouterId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelRouterResourcePackageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterResourcePackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelRouterResourcePackageId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

}


string ModelRouterResourcePackageDeduction::GetActualDosage() const
{
    return m_actualDosage;
}

void ModelRouterResourcePackageDeduction::SetActualDosage(const string& _actualDosage)
{
    m_actualDosage = _actualDosage;
    m_actualDosageHasBeenSet = true;
}

bool ModelRouterResourcePackageDeduction::ActualDosageHasBeenSet() const
{
    return m_actualDosageHasBeenSet;
}

string ModelRouterResourcePackageDeduction::GetAfterDeductionRemain() const
{
    return m_afterDeductionRemain;
}

void ModelRouterResourcePackageDeduction::SetAfterDeductionRemain(const string& _afterDeductionRemain)
{
    m_afterDeductionRemain = _afterDeductionRemain;
    m_afterDeductionRemainHasBeenSet = true;
}

bool ModelRouterResourcePackageDeduction::AfterDeductionRemainHasBeenSet() const
{
    return m_afterDeductionRemainHasBeenSet;
}

string ModelRouterResourcePackageDeduction::GetBeforeDeductionRemain() const
{
    return m_beforeDeductionRemain;
}

void ModelRouterResourcePackageDeduction::SetBeforeDeductionRemain(const string& _beforeDeductionRemain)
{
    m_beforeDeductionRemain = _beforeDeductionRemain;
    m_beforeDeductionRemainHasBeenSet = true;
}

bool ModelRouterResourcePackageDeduction::BeforeDeductionRemainHasBeenSet() const
{
    return m_beforeDeductionRemainHasBeenSet;
}

string ModelRouterResourcePackageDeduction::GetDeductionTime() const
{
    return m_deductionTime;
}

void ModelRouterResourcePackageDeduction::SetDeductionTime(const string& _deductionTime)
{
    m_deductionTime = _deductionTime;
    m_deductionTimeHasBeenSet = true;
}

bool ModelRouterResourcePackageDeduction::DeductionTimeHasBeenSet() const
{
    return m_deductionTimeHasBeenSet;
}

string ModelRouterResourcePackageDeduction::GetDosage() const
{
    return m_dosage;
}

void ModelRouterResourcePackageDeduction::SetDosage(const string& _dosage)
{
    m_dosage = _dosage;
    m_dosageHasBeenSet = true;
}

bool ModelRouterResourcePackageDeduction::DosageHasBeenSet() const
{
    return m_dosageHasBeenSet;
}

string ModelRouterResourcePackageDeduction::GetEndTime() const
{
    return m_endTime;
}

void ModelRouterResourcePackageDeduction::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ModelRouterResourcePackageDeduction::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ModelRouterResourcePackageDeduction::GetModelRouterId() const
{
    return m_modelRouterId;
}

void ModelRouterResourcePackageDeduction::SetModelRouterId(const string& _modelRouterId)
{
    m_modelRouterId = _modelRouterId;
    m_modelRouterIdHasBeenSet = true;
}

bool ModelRouterResourcePackageDeduction::ModelRouterIdHasBeenSet() const
{
    return m_modelRouterIdHasBeenSet;
}

string ModelRouterResourcePackageDeduction::GetModelRouterResourcePackageId() const
{
    return m_modelRouterResourcePackageId;
}

void ModelRouterResourcePackageDeduction::SetModelRouterResourcePackageId(const string& _modelRouterResourcePackageId)
{
    m_modelRouterResourcePackageId = _modelRouterResourcePackageId;
    m_modelRouterResourcePackageIdHasBeenSet = true;
}

bool ModelRouterResourcePackageDeduction::ModelRouterResourcePackageIdHasBeenSet() const
{
    return m_modelRouterResourcePackageIdHasBeenSet;
}

string ModelRouterResourcePackageDeduction::GetStartTime() const
{
    return m_startTime;
}

void ModelRouterResourcePackageDeduction::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModelRouterResourcePackageDeduction::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}


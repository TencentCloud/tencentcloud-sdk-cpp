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

#include <tencentcloud/cpdp/v20190820/model/ExternalReturnContractInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ExternalReturnContractInfo::ExternalReturnContractInfo() :
    m_externalReturnAgreementIdHasBeenSet(false),
    m_externalReturnContractEffectiveTimestampHasBeenSet(false),
    m_externalReturnContractTerminationTimestampHasBeenSet(false),
    m_externalReturnContractStatusHasBeenSet(false),
    m_externalReturnRequestIdHasBeenSet(false),
    m_externalReturnContractSignedTimestampHasBeenSet(false),
    m_externalReturnContractExpiredTimestampHasBeenSet(false),
    m_externalReturnContractDataHasBeenSet(false),
    m_externalReturnContractTerminationRemarkHasBeenSet(false),
    m_externalReturnContractTerminationModeHasBeenSet(false)
{
}

CoreInternalOutcome ExternalReturnContractInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExternalReturnAgreementId") && !value["ExternalReturnAgreementId"].IsNull())
    {
        if (!value["ExternalReturnAgreementId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalReturnContractInfo.ExternalReturnAgreementId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalReturnAgreementId = string(value["ExternalReturnAgreementId"].GetString());
        m_externalReturnAgreementIdHasBeenSet = true;
    }

    if (value.HasMember("ExternalReturnContractEffectiveTimestamp") && !value["ExternalReturnContractEffectiveTimestamp"].IsNull())
    {
        if (!value["ExternalReturnContractEffectiveTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalReturnContractInfo.ExternalReturnContractEffectiveTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalReturnContractEffectiveTimestamp = string(value["ExternalReturnContractEffectiveTimestamp"].GetString());
        m_externalReturnContractEffectiveTimestampHasBeenSet = true;
    }

    if (value.HasMember("ExternalReturnContractTerminationTimestamp") && !value["ExternalReturnContractTerminationTimestamp"].IsNull())
    {
        if (!value["ExternalReturnContractTerminationTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalReturnContractInfo.ExternalReturnContractTerminationTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalReturnContractTerminationTimestamp = string(value["ExternalReturnContractTerminationTimestamp"].GetString());
        m_externalReturnContractTerminationTimestampHasBeenSet = true;
    }

    if (value.HasMember("ExternalReturnContractStatus") && !value["ExternalReturnContractStatus"].IsNull())
    {
        if (!value["ExternalReturnContractStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalReturnContractInfo.ExternalReturnContractStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalReturnContractStatus = string(value["ExternalReturnContractStatus"].GetString());
        m_externalReturnContractStatusHasBeenSet = true;
    }

    if (value.HasMember("ExternalReturnRequestId") && !value["ExternalReturnRequestId"].IsNull())
    {
        if (!value["ExternalReturnRequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalReturnContractInfo.ExternalReturnRequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalReturnRequestId = string(value["ExternalReturnRequestId"].GetString());
        m_externalReturnRequestIdHasBeenSet = true;
    }

    if (value.HasMember("ExternalReturnContractSignedTimestamp") && !value["ExternalReturnContractSignedTimestamp"].IsNull())
    {
        if (!value["ExternalReturnContractSignedTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalReturnContractInfo.ExternalReturnContractSignedTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalReturnContractSignedTimestamp = string(value["ExternalReturnContractSignedTimestamp"].GetString());
        m_externalReturnContractSignedTimestampHasBeenSet = true;
    }

    if (value.HasMember("ExternalReturnContractExpiredTimestamp") && !value["ExternalReturnContractExpiredTimestamp"].IsNull())
    {
        if (!value["ExternalReturnContractExpiredTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalReturnContractInfo.ExternalReturnContractExpiredTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalReturnContractExpiredTimestamp = string(value["ExternalReturnContractExpiredTimestamp"].GetString());
        m_externalReturnContractExpiredTimestampHasBeenSet = true;
    }

    if (value.HasMember("ExternalReturnContractData") && !value["ExternalReturnContractData"].IsNull())
    {
        if (!value["ExternalReturnContractData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalReturnContractInfo.ExternalReturnContractData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalReturnContractData = string(value["ExternalReturnContractData"].GetString());
        m_externalReturnContractDataHasBeenSet = true;
    }

    if (value.HasMember("ExternalReturnContractTerminationRemark") && !value["ExternalReturnContractTerminationRemark"].IsNull())
    {
        if (!value["ExternalReturnContractTerminationRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalReturnContractInfo.ExternalReturnContractTerminationRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalReturnContractTerminationRemark = string(value["ExternalReturnContractTerminationRemark"].GetString());
        m_externalReturnContractTerminationRemarkHasBeenSet = true;
    }

    if (value.HasMember("ExternalReturnContractTerminationMode") && !value["ExternalReturnContractTerminationMode"].IsNull())
    {
        if (!value["ExternalReturnContractTerminationMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalReturnContractInfo.ExternalReturnContractTerminationMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalReturnContractTerminationMode = string(value["ExternalReturnContractTerminationMode"].GetString());
        m_externalReturnContractTerminationModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExternalReturnContractInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_externalReturnAgreementIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalReturnAgreementId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalReturnAgreementId.c_str(), allocator).Move(), allocator);
    }

    if (m_externalReturnContractEffectiveTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalReturnContractEffectiveTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalReturnContractEffectiveTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_externalReturnContractTerminationTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalReturnContractTerminationTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalReturnContractTerminationTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_externalReturnContractStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalReturnContractStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalReturnContractStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_externalReturnRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalReturnRequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalReturnRequestId.c_str(), allocator).Move(), allocator);
    }

    if (m_externalReturnContractSignedTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalReturnContractSignedTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalReturnContractSignedTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_externalReturnContractExpiredTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalReturnContractExpiredTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalReturnContractExpiredTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_externalReturnContractDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalReturnContractData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalReturnContractData.c_str(), allocator).Move(), allocator);
    }

    if (m_externalReturnContractTerminationRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalReturnContractTerminationRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalReturnContractTerminationRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_externalReturnContractTerminationModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalReturnContractTerminationMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalReturnContractTerminationMode.c_str(), allocator).Move(), allocator);
    }

}


string ExternalReturnContractInfo::GetExternalReturnAgreementId() const
{
    return m_externalReturnAgreementId;
}

void ExternalReturnContractInfo::SetExternalReturnAgreementId(const string& _externalReturnAgreementId)
{
    m_externalReturnAgreementId = _externalReturnAgreementId;
    m_externalReturnAgreementIdHasBeenSet = true;
}

bool ExternalReturnContractInfo::ExternalReturnAgreementIdHasBeenSet() const
{
    return m_externalReturnAgreementIdHasBeenSet;
}

string ExternalReturnContractInfo::GetExternalReturnContractEffectiveTimestamp() const
{
    return m_externalReturnContractEffectiveTimestamp;
}

void ExternalReturnContractInfo::SetExternalReturnContractEffectiveTimestamp(const string& _externalReturnContractEffectiveTimestamp)
{
    m_externalReturnContractEffectiveTimestamp = _externalReturnContractEffectiveTimestamp;
    m_externalReturnContractEffectiveTimestampHasBeenSet = true;
}

bool ExternalReturnContractInfo::ExternalReturnContractEffectiveTimestampHasBeenSet() const
{
    return m_externalReturnContractEffectiveTimestampHasBeenSet;
}

string ExternalReturnContractInfo::GetExternalReturnContractTerminationTimestamp() const
{
    return m_externalReturnContractTerminationTimestamp;
}

void ExternalReturnContractInfo::SetExternalReturnContractTerminationTimestamp(const string& _externalReturnContractTerminationTimestamp)
{
    m_externalReturnContractTerminationTimestamp = _externalReturnContractTerminationTimestamp;
    m_externalReturnContractTerminationTimestampHasBeenSet = true;
}

bool ExternalReturnContractInfo::ExternalReturnContractTerminationTimestampHasBeenSet() const
{
    return m_externalReturnContractTerminationTimestampHasBeenSet;
}

string ExternalReturnContractInfo::GetExternalReturnContractStatus() const
{
    return m_externalReturnContractStatus;
}

void ExternalReturnContractInfo::SetExternalReturnContractStatus(const string& _externalReturnContractStatus)
{
    m_externalReturnContractStatus = _externalReturnContractStatus;
    m_externalReturnContractStatusHasBeenSet = true;
}

bool ExternalReturnContractInfo::ExternalReturnContractStatusHasBeenSet() const
{
    return m_externalReturnContractStatusHasBeenSet;
}

string ExternalReturnContractInfo::GetExternalReturnRequestId() const
{
    return m_externalReturnRequestId;
}

void ExternalReturnContractInfo::SetExternalReturnRequestId(const string& _externalReturnRequestId)
{
    m_externalReturnRequestId = _externalReturnRequestId;
    m_externalReturnRequestIdHasBeenSet = true;
}

bool ExternalReturnContractInfo::ExternalReturnRequestIdHasBeenSet() const
{
    return m_externalReturnRequestIdHasBeenSet;
}

string ExternalReturnContractInfo::GetExternalReturnContractSignedTimestamp() const
{
    return m_externalReturnContractSignedTimestamp;
}

void ExternalReturnContractInfo::SetExternalReturnContractSignedTimestamp(const string& _externalReturnContractSignedTimestamp)
{
    m_externalReturnContractSignedTimestamp = _externalReturnContractSignedTimestamp;
    m_externalReturnContractSignedTimestampHasBeenSet = true;
}

bool ExternalReturnContractInfo::ExternalReturnContractSignedTimestampHasBeenSet() const
{
    return m_externalReturnContractSignedTimestampHasBeenSet;
}

string ExternalReturnContractInfo::GetExternalReturnContractExpiredTimestamp() const
{
    return m_externalReturnContractExpiredTimestamp;
}

void ExternalReturnContractInfo::SetExternalReturnContractExpiredTimestamp(const string& _externalReturnContractExpiredTimestamp)
{
    m_externalReturnContractExpiredTimestamp = _externalReturnContractExpiredTimestamp;
    m_externalReturnContractExpiredTimestampHasBeenSet = true;
}

bool ExternalReturnContractInfo::ExternalReturnContractExpiredTimestampHasBeenSet() const
{
    return m_externalReturnContractExpiredTimestampHasBeenSet;
}

string ExternalReturnContractInfo::GetExternalReturnContractData() const
{
    return m_externalReturnContractData;
}

void ExternalReturnContractInfo::SetExternalReturnContractData(const string& _externalReturnContractData)
{
    m_externalReturnContractData = _externalReturnContractData;
    m_externalReturnContractDataHasBeenSet = true;
}

bool ExternalReturnContractInfo::ExternalReturnContractDataHasBeenSet() const
{
    return m_externalReturnContractDataHasBeenSet;
}

string ExternalReturnContractInfo::GetExternalReturnContractTerminationRemark() const
{
    return m_externalReturnContractTerminationRemark;
}

void ExternalReturnContractInfo::SetExternalReturnContractTerminationRemark(const string& _externalReturnContractTerminationRemark)
{
    m_externalReturnContractTerminationRemark = _externalReturnContractTerminationRemark;
    m_externalReturnContractTerminationRemarkHasBeenSet = true;
}

bool ExternalReturnContractInfo::ExternalReturnContractTerminationRemarkHasBeenSet() const
{
    return m_externalReturnContractTerminationRemarkHasBeenSet;
}

string ExternalReturnContractInfo::GetExternalReturnContractTerminationMode() const
{
    return m_externalReturnContractTerminationMode;
}

void ExternalReturnContractInfo::SetExternalReturnContractTerminationMode(const string& _externalReturnContractTerminationMode)
{
    m_externalReturnContractTerminationMode = _externalReturnContractTerminationMode;
    m_externalReturnContractTerminationModeHasBeenSet = true;
}

bool ExternalReturnContractInfo::ExternalReturnContractTerminationModeHasBeenSet() const
{
    return m_externalReturnContractTerminationModeHasBeenSet;
}


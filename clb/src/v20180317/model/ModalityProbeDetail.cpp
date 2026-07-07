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

#include <tencentcloud/clb/v20180317/model/ModalityProbeDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModalityProbeDetail::ModalityProbeDetail() :
    m_modalityHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errorInfoHasBeenSet(false)
{
}

CoreInternalOutcome ModalityProbeDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Modality") && !value["Modality"].IsNull())
    {
        if (!value["Modality"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModalityProbeDetail.Modality` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modality = string(value["Modality"].GetString());
        m_modalityHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModalityProbeDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrorInfo") && !value["ErrorInfo"].IsNull())
    {
        if (!value["ErrorInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModalityProbeDetail.ErrorInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_errorInfo.Deserialize(value["ErrorInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModalityProbeDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modalityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Modality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modality.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_errorInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_errorInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ModalityProbeDetail::GetModality() const
{
    return m_modality;
}

void ModalityProbeDetail::SetModality(const string& _modality)
{
    m_modality = _modality;
    m_modalityHasBeenSet = true;
}

bool ModalityProbeDetail::ModalityHasBeenSet() const
{
    return m_modalityHasBeenSet;
}

string ModalityProbeDetail::GetStatus() const
{
    return m_status;
}

void ModalityProbeDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModalityProbeDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

ProviderTestConnectionErrorInfo ModalityProbeDetail::GetErrorInfo() const
{
    return m_errorInfo;
}

void ModalityProbeDetail::SetErrorInfo(const ProviderTestConnectionErrorInfo& _errorInfo)
{
    m_errorInfo = _errorInfo;
    m_errorInfoHasBeenSet = true;
}

bool ModalityProbeDetail::ErrorInfoHasBeenSet() const
{
    return m_errorInfoHasBeenSet;
}


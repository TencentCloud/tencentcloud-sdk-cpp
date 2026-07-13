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

#include <tencentcloud/tokenhub/v20260322/model/ModelEndpointView.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

ModelEndpointView::ModelEndpointView() :
    m_endpointIdHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_paymentEnabledHasBeenSet(false),
    m_chargeDetailHasBeenSet(false),
    m_stopReasonHasBeenSet(false),
    m_rPMHasBeenSet(false),
    m_tPMHasBeenSet(false)
{
}

CoreInternalOutcome ModelEndpointView::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EndpointId") && !value["EndpointId"].IsNull())
    {
        if (!value["EndpointId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelEndpointView.EndpointId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointId = string(value["EndpointId"].GetString());
        m_endpointIdHasBeenSet = true;
    }

    if (value.HasMember("EndpointName") && !value["EndpointName"].IsNull())
    {
        if (!value["EndpointName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelEndpointView.EndpointName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointName = string(value["EndpointName"].GetString());
        m_endpointNameHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelEndpointView.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelEndpointView.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelEndpointView.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelEndpointView.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelEndpointView.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("PaymentEnabled") && !value["PaymentEnabled"].IsNull())
    {
        if (!value["PaymentEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ModelEndpointView.PaymentEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_paymentEnabled = value["PaymentEnabled"].GetBool();
        m_paymentEnabledHasBeenSet = true;
    }

    if (value.HasMember("ChargeDetail") && !value["ChargeDetail"].IsNull())
    {
        if (!value["ChargeDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelEndpointView.ChargeDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeDetail = string(value["ChargeDetail"].GetString());
        m_chargeDetailHasBeenSet = true;
    }

    if (value.HasMember("StopReason") && !value["StopReason"].IsNull())
    {
        if (!value["StopReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelEndpointView.StopReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stopReason = string(value["StopReason"].GetString());
        m_stopReasonHasBeenSet = true;
    }

    if (value.HasMember("RPM") && !value["RPM"].IsNull())
    {
        if (!value["RPM"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelEndpointView.RPM` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rPM = value["RPM"].GetInt64();
        m_rPMHasBeenSet = true;
    }

    if (value.HasMember("TPM") && !value["TPM"].IsNull())
    {
        if (!value["TPM"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelEndpointView.TPM` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tPM = value["TPM"].GetInt64();
        m_tPMHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelEndpointView::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endpointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointId.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_paymentEnabled, allocator);
    }

    if (m_chargeDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_stopReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stopReason.c_str(), allocator).Move(), allocator);
    }

    if (m_rPMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RPM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rPM, allocator);
    }

    if (m_tPMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tPM, allocator);
    }

}


string ModelEndpointView::GetEndpointId() const
{
    return m_endpointId;
}

void ModelEndpointView::SetEndpointId(const string& _endpointId)
{
    m_endpointId = _endpointId;
    m_endpointIdHasBeenSet = true;
}

bool ModelEndpointView::EndpointIdHasBeenSet() const
{
    return m_endpointIdHasBeenSet;
}

string ModelEndpointView::GetEndpointName() const
{
    return m_endpointName;
}

void ModelEndpointView::SetEndpointName(const string& _endpointName)
{
    m_endpointName = _endpointName;
    m_endpointNameHasBeenSet = true;
}

bool ModelEndpointView::EndpointNameHasBeenSet() const
{
    return m_endpointNameHasBeenSet;
}

string ModelEndpointView::GetModelId() const
{
    return m_modelId;
}

void ModelEndpointView::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool ModelEndpointView::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string ModelEndpointView::GetModelName() const
{
    return m_modelName;
}

void ModelEndpointView::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ModelEndpointView::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string ModelEndpointView::GetStatus() const
{
    return m_status;
}

void ModelEndpointView::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModelEndpointView::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModelEndpointView::GetServiceType() const
{
    return m_serviceType;
}

void ModelEndpointView::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool ModelEndpointView::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string ModelEndpointView::GetChargeType() const
{
    return m_chargeType;
}

void ModelEndpointView::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool ModelEndpointView::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

bool ModelEndpointView::GetPaymentEnabled() const
{
    return m_paymentEnabled;
}

void ModelEndpointView::SetPaymentEnabled(const bool& _paymentEnabled)
{
    m_paymentEnabled = _paymentEnabled;
    m_paymentEnabledHasBeenSet = true;
}

bool ModelEndpointView::PaymentEnabledHasBeenSet() const
{
    return m_paymentEnabledHasBeenSet;
}

string ModelEndpointView::GetChargeDetail() const
{
    return m_chargeDetail;
}

void ModelEndpointView::SetChargeDetail(const string& _chargeDetail)
{
    m_chargeDetail = _chargeDetail;
    m_chargeDetailHasBeenSet = true;
}

bool ModelEndpointView::ChargeDetailHasBeenSet() const
{
    return m_chargeDetailHasBeenSet;
}

string ModelEndpointView::GetStopReason() const
{
    return m_stopReason;
}

void ModelEndpointView::SetStopReason(const string& _stopReason)
{
    m_stopReason = _stopReason;
    m_stopReasonHasBeenSet = true;
}

bool ModelEndpointView::StopReasonHasBeenSet() const
{
    return m_stopReasonHasBeenSet;
}

int64_t ModelEndpointView::GetRPM() const
{
    return m_rPM;
}

void ModelEndpointView::SetRPM(const int64_t& _rPM)
{
    m_rPM = _rPM;
    m_rPMHasBeenSet = true;
}

bool ModelEndpointView::RPMHasBeenSet() const
{
    return m_rPMHasBeenSet;
}

int64_t ModelEndpointView::GetTPM() const
{
    return m_tPM;
}

void ModelEndpointView::SetTPM(const int64_t& _tPM)
{
    m_tPM = _tPM;
    m_tPMHasBeenSet = true;
}

bool ModelEndpointView::TPMHasBeenSet() const
{
    return m_tPMHasBeenSet;
}


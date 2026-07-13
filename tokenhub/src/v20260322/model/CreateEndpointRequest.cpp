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

#include <tencentcloud/tokenhub/v20260322/model/CreateEndpointRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

CreateEndpointRequest::CreateEndpointRequest() :
    m_endpointNameHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_rPMHasBeenSet(false),
    m_tPMHasBeenSet(false),
    m_autoAdjustQuotaHasBeenSet(false),
    m_endpointIdHasBeenSet(false)
{
}

string CreateEndpointRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_endpointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpointName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_rPMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RPM";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rPM, allocator);
    }

    if (m_tPMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPM";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tPM, allocator);
    }

    if (m_autoAdjustQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoAdjustQuota";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoAdjustQuota, allocator);
    }

    if (m_endpointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpointId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateEndpointRequest::GetEndpointName() const
{
    return m_endpointName;
}

void CreateEndpointRequest::SetEndpointName(const string& _endpointName)
{
    m_endpointName = _endpointName;
    m_endpointNameHasBeenSet = true;
}

bool CreateEndpointRequest::EndpointNameHasBeenSet() const
{
    return m_endpointNameHasBeenSet;
}

string CreateEndpointRequest::GetModelId() const
{
    return m_modelId;
}

void CreateEndpointRequest::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool CreateEndpointRequest::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string CreateEndpointRequest::GetChargeType() const
{
    return m_chargeType;
}

void CreateEndpointRequest::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool CreateEndpointRequest::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

int64_t CreateEndpointRequest::GetRPM() const
{
    return m_rPM;
}

void CreateEndpointRequest::SetRPM(const int64_t& _rPM)
{
    m_rPM = _rPM;
    m_rPMHasBeenSet = true;
}

bool CreateEndpointRequest::RPMHasBeenSet() const
{
    return m_rPMHasBeenSet;
}

int64_t CreateEndpointRequest::GetTPM() const
{
    return m_tPM;
}

void CreateEndpointRequest::SetTPM(const int64_t& _tPM)
{
    m_tPM = _tPM;
    m_tPMHasBeenSet = true;
}

bool CreateEndpointRequest::TPMHasBeenSet() const
{
    return m_tPMHasBeenSet;
}

int64_t CreateEndpointRequest::GetAutoAdjustQuota() const
{
    return m_autoAdjustQuota;
}

void CreateEndpointRequest::SetAutoAdjustQuota(const int64_t& _autoAdjustQuota)
{
    m_autoAdjustQuota = _autoAdjustQuota;
    m_autoAdjustQuotaHasBeenSet = true;
}

bool CreateEndpointRequest::AutoAdjustQuotaHasBeenSet() const
{
    return m_autoAdjustQuotaHasBeenSet;
}

string CreateEndpointRequest::GetEndpointId() const
{
    return m_endpointId;
}

void CreateEndpointRequest::SetEndpointId(const string& _endpointId)
{
    m_endpointId = _endpointId;
    m_endpointIdHasBeenSet = true;
}

bool CreateEndpointRequest::EndpointIdHasBeenSet() const
{
    return m_endpointIdHasBeenSet;
}



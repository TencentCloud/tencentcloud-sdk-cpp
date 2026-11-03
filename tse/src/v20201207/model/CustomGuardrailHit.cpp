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

#include <tencentcloud/tse/v20201207/model/CustomGuardrailHit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CustomGuardrailHit::CustomGuardrailHit() :
    m_requestIdHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_routeIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_streamingHasBeenSet(false),
    m_finalHasBeenSet(false),
    m_decisionHasBeenSet(false),
    m_configuredActionHasBeenSet(false),
    m_effectiveActionHasBeenSet(false),
    m_rewrittenHasBeenSet(false),
    m_blockedHasBeenSet(false),
    m_downgradedHasBeenSet(false),
    m_providerStatusCodeHasBeenSet(false),
    m_latencyMsHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome CustomGuardrailHit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailHit.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailHit.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("GatewayId") && !value["GatewayId"].IsNull())
    {
        if (!value["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailHit.GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(value["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailHit.PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(value["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailHit.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailHit.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailHit.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("RouteId") && !value["RouteId"].IsNull())
    {
        if (!value["RouteId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailHit.RouteId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeId = string(value["RouteId"].GetString());
        m_routeIdHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailHit.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailHit.Direction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_direction = string(value["Direction"].GetString());
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("Streaming") && !value["Streaming"].IsNull())
    {
        if (!value["Streaming"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailHit.Streaming` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_streaming = value["Streaming"].GetBool();
        m_streamingHasBeenSet = true;
    }

    if (value.HasMember("Final") && !value["Final"].IsNull())
    {
        if (!value["Final"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailHit.Final` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_final = value["Final"].GetBool();
        m_finalHasBeenSet = true;
    }

    if (value.HasMember("Decision") && !value["Decision"].IsNull())
    {
        if (!value["Decision"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailHit.Decision` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_decision = string(value["Decision"].GetString());
        m_decisionHasBeenSet = true;
    }

    if (value.HasMember("ConfiguredAction") && !value["ConfiguredAction"].IsNull())
    {
        if (!value["ConfiguredAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailHit.ConfiguredAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configuredAction = string(value["ConfiguredAction"].GetString());
        m_configuredActionHasBeenSet = true;
    }

    if (value.HasMember("EffectiveAction") && !value["EffectiveAction"].IsNull())
    {
        if (!value["EffectiveAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailHit.EffectiveAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveAction = string(value["EffectiveAction"].GetString());
        m_effectiveActionHasBeenSet = true;
    }

    if (value.HasMember("Rewritten") && !value["Rewritten"].IsNull())
    {
        if (!value["Rewritten"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailHit.Rewritten` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_rewritten = value["Rewritten"].GetBool();
        m_rewrittenHasBeenSet = true;
    }

    if (value.HasMember("Blocked") && !value["Blocked"].IsNull())
    {
        if (!value["Blocked"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailHit.Blocked` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_blocked = value["Blocked"].GetBool();
        m_blockedHasBeenSet = true;
    }

    if (value.HasMember("Downgraded") && !value["Downgraded"].IsNull())
    {
        if (!value["Downgraded"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailHit.Downgraded` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_downgraded = value["Downgraded"].GetBool();
        m_downgradedHasBeenSet = true;
    }

    if (value.HasMember("ProviderStatusCode") && !value["ProviderStatusCode"].IsNull())
    {
        if (!value["ProviderStatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailHit.ProviderStatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_providerStatusCode = value["ProviderStatusCode"].GetInt64();
        m_providerStatusCodeHasBeenSet = true;
    }

    if (value.HasMember("LatencyMs") && !value["LatencyMs"].IsNull())
    {
        if (!value["LatencyMs"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailHit.LatencyMs` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_latencyMs = value["LatencyMs"].GetDouble();
        m_latencyMsHasBeenSet = true;
    }

    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailHit.ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(value["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailHit.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomGuardrailHit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_requestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestId.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_routeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeId.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_direction.c_str(), allocator).Move(), allocator);
    }

    if (m_streamingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Streaming";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_streaming, allocator);
    }

    if (m_finalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Final";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_final, allocator);
    }

    if (m_decisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Decision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_decision.c_str(), allocator).Move(), allocator);
    }

    if (m_configuredActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfiguredAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configuredAction.c_str(), allocator).Move(), allocator);
    }

    if (m_effectiveActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectiveAction.c_str(), allocator).Move(), allocator);
    }

    if (m_rewrittenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rewritten";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rewritten, allocator);
    }

    if (m_blockedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Blocked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blocked, allocator);
    }

    if (m_downgradedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Downgraded";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_downgraded, allocator);
    }

    if (m_providerStatusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderStatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_providerStatusCode, allocator);
    }

    if (m_latencyMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatencyMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latencyMs, allocator);
    }

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

}


string CustomGuardrailHit::GetRequestId() const
{
    return m_requestId;
}

void CustomGuardrailHit::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool CustomGuardrailHit::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

int64_t CustomGuardrailHit::GetTimestamp() const
{
    return m_timestamp;
}

void CustomGuardrailHit::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool CustomGuardrailHit::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string CustomGuardrailHit::GetGatewayId() const
{
    return m_gatewayId;
}

void CustomGuardrailHit::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool CustomGuardrailHit::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string CustomGuardrailHit::GetPolicyId() const
{
    return m_policyId;
}

void CustomGuardrailHit::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool CustomGuardrailHit::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string CustomGuardrailHit::GetPolicyName() const
{
    return m_policyName;
}

void CustomGuardrailHit::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool CustomGuardrailHit::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string CustomGuardrailHit::GetResourceType() const
{
    return m_resourceType;
}

void CustomGuardrailHit::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool CustomGuardrailHit::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string CustomGuardrailHit::GetResourceId() const
{
    return m_resourceId;
}

void CustomGuardrailHit::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool CustomGuardrailHit::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string CustomGuardrailHit::GetRouteId() const
{
    return m_routeId;
}

void CustomGuardrailHit::SetRouteId(const string& _routeId)
{
    m_routeId = _routeId;
    m_routeIdHasBeenSet = true;
}

bool CustomGuardrailHit::RouteIdHasBeenSet() const
{
    return m_routeIdHasBeenSet;
}

string CustomGuardrailHit::GetProtocol() const
{
    return m_protocol;
}

void CustomGuardrailHit::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CustomGuardrailHit::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string CustomGuardrailHit::GetDirection() const
{
    return m_direction;
}

void CustomGuardrailHit::SetDirection(const string& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool CustomGuardrailHit::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

bool CustomGuardrailHit::GetStreaming() const
{
    return m_streaming;
}

void CustomGuardrailHit::SetStreaming(const bool& _streaming)
{
    m_streaming = _streaming;
    m_streamingHasBeenSet = true;
}

bool CustomGuardrailHit::StreamingHasBeenSet() const
{
    return m_streamingHasBeenSet;
}

bool CustomGuardrailHit::GetFinal() const
{
    return m_final;
}

void CustomGuardrailHit::SetFinal(const bool& _final)
{
    m_final = _final;
    m_finalHasBeenSet = true;
}

bool CustomGuardrailHit::FinalHasBeenSet() const
{
    return m_finalHasBeenSet;
}

string CustomGuardrailHit::GetDecision() const
{
    return m_decision;
}

void CustomGuardrailHit::SetDecision(const string& _decision)
{
    m_decision = _decision;
    m_decisionHasBeenSet = true;
}

bool CustomGuardrailHit::DecisionHasBeenSet() const
{
    return m_decisionHasBeenSet;
}

string CustomGuardrailHit::GetConfiguredAction() const
{
    return m_configuredAction;
}

void CustomGuardrailHit::SetConfiguredAction(const string& _configuredAction)
{
    m_configuredAction = _configuredAction;
    m_configuredActionHasBeenSet = true;
}

bool CustomGuardrailHit::ConfiguredActionHasBeenSet() const
{
    return m_configuredActionHasBeenSet;
}

string CustomGuardrailHit::GetEffectiveAction() const
{
    return m_effectiveAction;
}

void CustomGuardrailHit::SetEffectiveAction(const string& _effectiveAction)
{
    m_effectiveAction = _effectiveAction;
    m_effectiveActionHasBeenSet = true;
}

bool CustomGuardrailHit::EffectiveActionHasBeenSet() const
{
    return m_effectiveActionHasBeenSet;
}

bool CustomGuardrailHit::GetRewritten() const
{
    return m_rewritten;
}

void CustomGuardrailHit::SetRewritten(const bool& _rewritten)
{
    m_rewritten = _rewritten;
    m_rewrittenHasBeenSet = true;
}

bool CustomGuardrailHit::RewrittenHasBeenSet() const
{
    return m_rewrittenHasBeenSet;
}

bool CustomGuardrailHit::GetBlocked() const
{
    return m_blocked;
}

void CustomGuardrailHit::SetBlocked(const bool& _blocked)
{
    m_blocked = _blocked;
    m_blockedHasBeenSet = true;
}

bool CustomGuardrailHit::BlockedHasBeenSet() const
{
    return m_blockedHasBeenSet;
}

bool CustomGuardrailHit::GetDowngraded() const
{
    return m_downgraded;
}

void CustomGuardrailHit::SetDowngraded(const bool& _downgraded)
{
    m_downgraded = _downgraded;
    m_downgradedHasBeenSet = true;
}

bool CustomGuardrailHit::DowngradedHasBeenSet() const
{
    return m_downgradedHasBeenSet;
}

int64_t CustomGuardrailHit::GetProviderStatusCode() const
{
    return m_providerStatusCode;
}

void CustomGuardrailHit::SetProviderStatusCode(const int64_t& _providerStatusCode)
{
    m_providerStatusCode = _providerStatusCode;
    m_providerStatusCodeHasBeenSet = true;
}

bool CustomGuardrailHit::ProviderStatusCodeHasBeenSet() const
{
    return m_providerStatusCodeHasBeenSet;
}

double CustomGuardrailHit::GetLatencyMs() const
{
    return m_latencyMs;
}

void CustomGuardrailHit::SetLatencyMs(const double& _latencyMs)
{
    m_latencyMs = _latencyMs;
    m_latencyMsHasBeenSet = true;
}

bool CustomGuardrailHit::LatencyMsHasBeenSet() const
{
    return m_latencyMsHasBeenSet;
}

string CustomGuardrailHit::GetErrorCode() const
{
    return m_errorCode;
}

void CustomGuardrailHit::SetErrorCode(const string& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool CustomGuardrailHit::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string CustomGuardrailHit::GetReason() const
{
    return m_reason;
}

void CustomGuardrailHit::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool CustomGuardrailHit::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}


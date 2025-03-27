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

#include <tencentcloud/mqtt/v20240516/model/DescribeInstanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

DescribeInstanceResponse::DescribeInstanceResponse() :
    m_instanceTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_topicNumHasBeenSet(false),
    m_topicNumLimitHasBeenSet(false),
    m_tpsLimitHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_skuCodeHasBeenSet(false),
    m_maxSubscriptionPerClientHasBeenSet(false),
    m_authorizationPolicyLimitHasBeenSet(false),
    m_clientNumLimitHasBeenSet(false),
    m_deviceCertificateProvisionTypeHasBeenSet(false),
    m_automaticActivationHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_expiryTimeHasBeenSet(false),
    m_destroyTimeHasBeenSet(false),
    m_x509ModeHasBeenSet(false),
    m_maxCaNumHasBeenSet(false),
    m_registrationCodeHasBeenSet(false),
    m_maxSubscriptionHasBeenSet(false),
    m_authorizationPolicyHasBeenSet(false)
{
}

CoreInternalOutcome DescribeInstanceResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("InstanceType") && !rsp["InstanceType"].IsNull())
    {
        if (!rsp["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(rsp["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceName") && !rsp["InstanceName"].IsNull())
    {
        if (!rsp["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(rsp["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (rsp.HasMember("TopicNum") && !rsp["TopicNum"].IsNull())
    {
        if (!rsp["TopicNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNum = rsp["TopicNum"].GetInt64();
        m_topicNumHasBeenSet = true;
    }

    if (rsp.HasMember("TopicNumLimit") && !rsp["TopicNumLimit"].IsNull())
    {
        if (!rsp["TopicNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNumLimit = rsp["TopicNumLimit"].GetInt64();
        m_topicNumLimitHasBeenSet = true;
    }

    if (rsp.HasMember("TpsLimit") && !rsp["TpsLimit"].IsNull())
    {
        if (!rsp["TpsLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TpsLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tpsLimit = rsp["TpsLimit"].GetInt64();
        m_tpsLimitHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedTime") && !rsp["CreatedTime"].IsNull())
    {
        if (!rsp["CreatedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = rsp["CreatedTime"].GetInt64();
        m_createdTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceStatus") && !rsp["InstanceStatus"].IsNull())
    {
        if (!rsp["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(rsp["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (rsp.HasMember("SkuCode") && !rsp["SkuCode"].IsNull())
    {
        if (!rsp["SkuCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkuCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skuCode = string(rsp["SkuCode"].GetString());
        m_skuCodeHasBeenSet = true;
    }

    if (rsp.HasMember("MaxSubscriptionPerClient") && !rsp["MaxSubscriptionPerClient"].IsNull())
    {
        if (!rsp["MaxSubscriptionPerClient"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxSubscriptionPerClient` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSubscriptionPerClient = rsp["MaxSubscriptionPerClient"].GetInt64();
        m_maxSubscriptionPerClientHasBeenSet = true;
    }

    if (rsp.HasMember("AuthorizationPolicyLimit") && !rsp["AuthorizationPolicyLimit"].IsNull())
    {
        if (!rsp["AuthorizationPolicyLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationPolicyLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationPolicyLimit = rsp["AuthorizationPolicyLimit"].GetInt64();
        m_authorizationPolicyLimitHasBeenSet = true;
    }

    if (rsp.HasMember("ClientNumLimit") && !rsp["ClientNumLimit"].IsNull())
    {
        if (!rsp["ClientNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClientNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clientNumLimit = rsp["ClientNumLimit"].GetInt64();
        m_clientNumLimitHasBeenSet = true;
    }

    if (rsp.HasMember("DeviceCertificateProvisionType") && !rsp["DeviceCertificateProvisionType"].IsNull())
    {
        if (!rsp["DeviceCertificateProvisionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateProvisionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceCertificateProvisionType = string(rsp["DeviceCertificateProvisionType"].GetString());
        m_deviceCertificateProvisionTypeHasBeenSet = true;
    }

    if (rsp.HasMember("AutomaticActivation") && !rsp["AutomaticActivation"].IsNull())
    {
        if (!rsp["AutomaticActivation"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AutomaticActivation` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_automaticActivation = rsp["AutomaticActivation"].GetBool();
        m_automaticActivationHasBeenSet = true;
    }

    if (rsp.HasMember("RenewFlag") && !rsp["RenewFlag"].IsNull())
    {
        if (!rsp["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = rsp["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (rsp.HasMember("PayMode") && !rsp["PayMode"].IsNull())
    {
        if (!rsp["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(rsp["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (rsp.HasMember("ExpiryTime") && !rsp["ExpiryTime"].IsNull())
    {
        if (!rsp["ExpiryTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpiryTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiryTime = rsp["ExpiryTime"].GetInt64();
        m_expiryTimeHasBeenSet = true;
    }

    if (rsp.HasMember("DestroyTime") && !rsp["DestroyTime"].IsNull())
    {
        if (!rsp["DestroyTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DestroyTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_destroyTime = rsp["DestroyTime"].GetInt64();
        m_destroyTimeHasBeenSet = true;
    }

    if (rsp.HasMember("X509Mode") && !rsp["X509Mode"].IsNull())
    {
        if (!rsp["X509Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `X509Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_x509Mode = string(rsp["X509Mode"].GetString());
        m_x509ModeHasBeenSet = true;
    }

    if (rsp.HasMember("MaxCaNum") && !rsp["MaxCaNum"].IsNull())
    {
        if (!rsp["MaxCaNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxCaNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxCaNum = rsp["MaxCaNum"].GetInt64();
        m_maxCaNumHasBeenSet = true;
    }

    if (rsp.HasMember("RegistrationCode") && !rsp["RegistrationCode"].IsNull())
    {
        if (!rsp["RegistrationCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegistrationCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrationCode = string(rsp["RegistrationCode"].GetString());
        m_registrationCodeHasBeenSet = true;
    }

    if (rsp.HasMember("MaxSubscription") && !rsp["MaxSubscription"].IsNull())
    {
        if (!rsp["MaxSubscription"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxSubscription` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSubscription = rsp["MaxSubscription"].GetInt64();
        m_maxSubscriptionHasBeenSet = true;
    }

    if (rsp.HasMember("AuthorizationPolicy") && !rsp["AuthorizationPolicy"].IsNull())
    {
        if (!rsp["AuthorizationPolicy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationPolicy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationPolicy = rsp["AuthorizationPolicy"].GetBool();
        m_authorizationPolicyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeInstanceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicNum, allocator);
    }

    if (m_topicNumLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNumLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicNumLimit, allocator);
    }

    if (m_tpsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TpsLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tpsLimit, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdTime, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_skuCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkuCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skuCode.c_str(), allocator).Move(), allocator);
    }

    if (m_maxSubscriptionPerClientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSubscriptionPerClient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSubscriptionPerClient, allocator);
    }

    if (m_authorizationPolicyLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationPolicyLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorizationPolicyLimit, allocator);
    }

    if (m_clientNumLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientNumLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientNumLimit, allocator);
    }

    if (m_deviceCertificateProvisionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceCertificateProvisionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceCertificateProvisionType.c_str(), allocator).Move(), allocator);
    }

    if (m_automaticActivationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutomaticActivation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_automaticActivation, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_expiryTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiryTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiryTime, allocator);
    }

    if (m_destroyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestroyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_destroyTime, allocator);
    }

    if (m_x509ModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "X509Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_x509Mode.c_str(), allocator).Move(), allocator);
    }

    if (m_maxCaNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCaNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxCaNum, allocator);
    }

    if (m_registrationCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrationCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registrationCode.c_str(), allocator).Move(), allocator);
    }

    if (m_maxSubscriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSubscription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSubscription, allocator);
    }

    if (m_authorizationPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorizationPolicy, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeInstanceResponse::GetInstanceType() const
{
    return m_instanceType;
}

bool DescribeInstanceResponse::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string DescribeInstanceResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeInstanceResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeInstanceResponse::GetInstanceName() const
{
    return m_instanceName;
}

bool DescribeInstanceResponse::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t DescribeInstanceResponse::GetTopicNum() const
{
    return m_topicNum;
}

bool DescribeInstanceResponse::TopicNumHasBeenSet() const
{
    return m_topicNumHasBeenSet;
}

int64_t DescribeInstanceResponse::GetTopicNumLimit() const
{
    return m_topicNumLimit;
}

bool DescribeInstanceResponse::TopicNumLimitHasBeenSet() const
{
    return m_topicNumLimitHasBeenSet;
}

int64_t DescribeInstanceResponse::GetTpsLimit() const
{
    return m_tpsLimit;
}

bool DescribeInstanceResponse::TpsLimitHasBeenSet() const
{
    return m_tpsLimitHasBeenSet;
}

int64_t DescribeInstanceResponse::GetCreatedTime() const
{
    return m_createdTime;
}

bool DescribeInstanceResponse::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string DescribeInstanceResponse::GetRemark() const
{
    return m_remark;
}

bool DescribeInstanceResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DescribeInstanceResponse::GetInstanceStatus() const
{
    return m_instanceStatus;
}

bool DescribeInstanceResponse::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string DescribeInstanceResponse::GetSkuCode() const
{
    return m_skuCode;
}

bool DescribeInstanceResponse::SkuCodeHasBeenSet() const
{
    return m_skuCodeHasBeenSet;
}

int64_t DescribeInstanceResponse::GetMaxSubscriptionPerClient() const
{
    return m_maxSubscriptionPerClient;
}

bool DescribeInstanceResponse::MaxSubscriptionPerClientHasBeenSet() const
{
    return m_maxSubscriptionPerClientHasBeenSet;
}

int64_t DescribeInstanceResponse::GetAuthorizationPolicyLimit() const
{
    return m_authorizationPolicyLimit;
}

bool DescribeInstanceResponse::AuthorizationPolicyLimitHasBeenSet() const
{
    return m_authorizationPolicyLimitHasBeenSet;
}

int64_t DescribeInstanceResponse::GetClientNumLimit() const
{
    return m_clientNumLimit;
}

bool DescribeInstanceResponse::ClientNumLimitHasBeenSet() const
{
    return m_clientNumLimitHasBeenSet;
}

string DescribeInstanceResponse::GetDeviceCertificateProvisionType() const
{
    return m_deviceCertificateProvisionType;
}

bool DescribeInstanceResponse::DeviceCertificateProvisionTypeHasBeenSet() const
{
    return m_deviceCertificateProvisionTypeHasBeenSet;
}

bool DescribeInstanceResponse::GetAutomaticActivation() const
{
    return m_automaticActivation;
}

bool DescribeInstanceResponse::AutomaticActivationHasBeenSet() const
{
    return m_automaticActivationHasBeenSet;
}

int64_t DescribeInstanceResponse::GetRenewFlag() const
{
    return m_renewFlag;
}

bool DescribeInstanceResponse::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string DescribeInstanceResponse::GetPayMode() const
{
    return m_payMode;
}

bool DescribeInstanceResponse::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t DescribeInstanceResponse::GetExpiryTime() const
{
    return m_expiryTime;
}

bool DescribeInstanceResponse::ExpiryTimeHasBeenSet() const
{
    return m_expiryTimeHasBeenSet;
}

int64_t DescribeInstanceResponse::GetDestroyTime() const
{
    return m_destroyTime;
}

bool DescribeInstanceResponse::DestroyTimeHasBeenSet() const
{
    return m_destroyTimeHasBeenSet;
}

string DescribeInstanceResponse::GetX509Mode() const
{
    return m_x509Mode;
}

bool DescribeInstanceResponse::X509ModeHasBeenSet() const
{
    return m_x509ModeHasBeenSet;
}

int64_t DescribeInstanceResponse::GetMaxCaNum() const
{
    return m_maxCaNum;
}

bool DescribeInstanceResponse::MaxCaNumHasBeenSet() const
{
    return m_maxCaNumHasBeenSet;
}

string DescribeInstanceResponse::GetRegistrationCode() const
{
    return m_registrationCode;
}

bool DescribeInstanceResponse::RegistrationCodeHasBeenSet() const
{
    return m_registrationCodeHasBeenSet;
}

int64_t DescribeInstanceResponse::GetMaxSubscription() const
{
    return m_maxSubscription;
}

bool DescribeInstanceResponse::MaxSubscriptionHasBeenSet() const
{
    return m_maxSubscriptionHasBeenSet;
}

bool DescribeInstanceResponse::GetAuthorizationPolicy() const
{
    return m_authorizationPolicy;
}

bool DescribeInstanceResponse::AuthorizationPolicyHasBeenSet() const
{
    return m_authorizationPolicyHasBeenSet;
}



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

#include <tencentcloud/ssm/v20190923/model/GetServiceStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssm::V20190923::Model;
using namespace std;

GetServiceStatusResponse::GetServiceStatusResponse() :
    m_serviceEnabledHasBeenSet(false),
    m_invalidTypeHasBeenSet(false),
    m_accessKeyEscrowEnabledHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_qPSLimitHasBeenSet(false),
    m_secretLimitHasBeenSet(false),
    m_payModelHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome GetServiceStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ServiceEnabled") && !rsp["ServiceEnabled"].IsNull())
    {
        if (!rsp["ServiceEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_serviceEnabled = rsp["ServiceEnabled"].GetBool();
        m_serviceEnabledHasBeenSet = true;
    }

    if (rsp.HasMember("InvalidType") && !rsp["InvalidType"].IsNull())
    {
        if (!rsp["InvalidType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InvalidType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invalidType = rsp["InvalidType"].GetInt64();
        m_invalidTypeHasBeenSet = true;
    }

    if (rsp.HasMember("AccessKeyEscrowEnabled") && !rsp["AccessKeyEscrowEnabled"].IsNull())
    {
        if (!rsp["AccessKeyEscrowEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyEscrowEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_accessKeyEscrowEnabled = rsp["AccessKeyEscrowEnabled"].GetBool();
        m_accessKeyEscrowEnabledHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(rsp["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("QPSLimit") && !rsp["QPSLimit"].IsNull())
    {
        if (!rsp["QPSLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QPSLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qPSLimit = rsp["QPSLimit"].GetInt64();
        m_qPSLimitHasBeenSet = true;
    }

    if (rsp.HasMember("SecretLimit") && !rsp["SecretLimit"].IsNull())
    {
        if (!rsp["SecretLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecretLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_secretLimit = rsp["SecretLimit"].GetInt64();
        m_secretLimitHasBeenSet = true;
    }

    if (rsp.HasMember("PayModel") && !rsp["PayModel"].IsNull())
    {
        if (!rsp["PayModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payModel = string(rsp["PayModel"].GetString());
        m_payModelHasBeenSet = true;
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

    if (rsp.HasMember("ResourceId") && !rsp["ResourceId"].IsNull())
    {
        if (!rsp["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(rsp["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetServiceStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_serviceEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceEnabled, allocator);
    }

    if (m_invalidTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvalidType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invalidType, allocator);
    }

    if (m_accessKeyEscrowEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeyEscrowEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessKeyEscrowEnabled, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_qPSLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QPSLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qPSLimit, allocator);
    }

    if (m_secretLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_secretLimit, allocator);
    }

    if (m_payModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payModel.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
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


bool GetServiceStatusResponse::GetServiceEnabled() const
{
    return m_serviceEnabled;
}

bool GetServiceStatusResponse::ServiceEnabledHasBeenSet() const
{
    return m_serviceEnabledHasBeenSet;
}

int64_t GetServiceStatusResponse::GetInvalidType() const
{
    return m_invalidType;
}

bool GetServiceStatusResponse::InvalidTypeHasBeenSet() const
{
    return m_invalidTypeHasBeenSet;
}

bool GetServiceStatusResponse::GetAccessKeyEscrowEnabled() const
{
    return m_accessKeyEscrowEnabled;
}

bool GetServiceStatusResponse::AccessKeyEscrowEnabledHasBeenSet() const
{
    return m_accessKeyEscrowEnabledHasBeenSet;
}

string GetServiceStatusResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool GetServiceStatusResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t GetServiceStatusResponse::GetQPSLimit() const
{
    return m_qPSLimit;
}

bool GetServiceStatusResponse::QPSLimitHasBeenSet() const
{
    return m_qPSLimitHasBeenSet;
}

int64_t GetServiceStatusResponse::GetSecretLimit() const
{
    return m_secretLimit;
}

bool GetServiceStatusResponse::SecretLimitHasBeenSet() const
{
    return m_secretLimitHasBeenSet;
}

string GetServiceStatusResponse::GetPayModel() const
{
    return m_payModel;
}

bool GetServiceStatusResponse::PayModelHasBeenSet() const
{
    return m_payModelHasBeenSet;
}

int64_t GetServiceStatusResponse::GetRenewFlag() const
{
    return m_renewFlag;
}

bool GetServiceStatusResponse::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string GetServiceStatusResponse::GetResourceId() const
{
    return m_resourceId;
}

bool GetServiceStatusResponse::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

int64_t GetServiceStatusResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool GetServiceStatusResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}



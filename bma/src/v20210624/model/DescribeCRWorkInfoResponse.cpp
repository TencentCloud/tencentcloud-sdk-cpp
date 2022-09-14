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

#include <tencentcloud/bma/v20210624/model/DescribeCRWorkInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

DescribeCRWorkInfoResponse::DescribeCRWorkInfoResponse() :
    m_workNameHasBeenSet(false),
    m_monitorStatusHasBeenSet(false),
    m_authStatusHasBeenSet(false),
    m_commStatusHasBeenSet(false),
    m_isProducerHasBeenSet(false),
    m_evidenceStatusHasBeenSet(false),
    m_workCategoryHasBeenSet(false),
    m_isOriginalHasBeenSet(false),
    m_isReleaseHasBeenSet(false),
    m_producerNameHasBeenSet(false),
    m_produceTimeHasBeenSet(false),
    m_whiteListsHasBeenSet(false),
    m_workDescHasBeenSet(false),
    m_authorizationHasBeenSet(false),
    m_authorizationStartTimeHasBeenSet(false),
    m_authorizationEndTimeHasBeenSet(false),
    m_commissionHasBeenSet(false),
    m_commissionStartTimeHasBeenSet(false),
    m_commissionEndTimeHasBeenSet(false),
    m_evidenceUrlHasBeenSet(false),
    m_evidenceStartTimeHasBeenSet(false),
    m_evidenceEndTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCRWorkInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("WorkName") && !rsp["WorkName"].IsNull())
    {
        if (!rsp["WorkName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workName = string(rsp["WorkName"].GetString());
        m_workNameHasBeenSet = true;
    }

    if (rsp.HasMember("MonitorStatus") && !rsp["MonitorStatus"].IsNull())
    {
        if (!rsp["MonitorStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorStatus = rsp["MonitorStatus"].GetInt64();
        m_monitorStatusHasBeenSet = true;
    }

    if (rsp.HasMember("AuthStatus") && !rsp["AuthStatus"].IsNull())
    {
        if (!rsp["AuthStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authStatus = rsp["AuthStatus"].GetInt64();
        m_authStatusHasBeenSet = true;
    }

    if (rsp.HasMember("CommStatus") && !rsp["CommStatus"].IsNull())
    {
        if (!rsp["CommStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CommStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_commStatus = rsp["CommStatus"].GetInt64();
        m_commStatusHasBeenSet = true;
    }

    if (rsp.HasMember("IsProducer") && !rsp["IsProducer"].IsNull())
    {
        if (!rsp["IsProducer"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsProducer` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isProducer = rsp["IsProducer"].GetInt64();
        m_isProducerHasBeenSet = true;
    }

    if (rsp.HasMember("EvidenceStatus") && !rsp["EvidenceStatus"].IsNull())
    {
        if (!rsp["EvidenceStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EvidenceStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evidenceStatus = rsp["EvidenceStatus"].GetInt64();
        m_evidenceStatusHasBeenSet = true;
    }

    if (rsp.HasMember("WorkCategory") && !rsp["WorkCategory"].IsNull())
    {
        if (!rsp["WorkCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workCategory = string(rsp["WorkCategory"].GetString());
        m_workCategoryHasBeenSet = true;
    }

    if (rsp.HasMember("IsOriginal") && !rsp["IsOriginal"].IsNull())
    {
        if (!rsp["IsOriginal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IsOriginal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isOriginal = string(rsp["IsOriginal"].GetString());
        m_isOriginalHasBeenSet = true;
    }

    if (rsp.HasMember("IsRelease") && !rsp["IsRelease"].IsNull())
    {
        if (!rsp["IsRelease"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IsRelease` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isRelease = string(rsp["IsRelease"].GetString());
        m_isReleaseHasBeenSet = true;
    }

    if (rsp.HasMember("ProducerName") && !rsp["ProducerName"].IsNull())
    {
        if (!rsp["ProducerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProducerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_producerName = string(rsp["ProducerName"].GetString());
        m_producerNameHasBeenSet = true;
    }

    if (rsp.HasMember("ProduceTime") && !rsp["ProduceTime"].IsNull())
    {
        if (!rsp["ProduceTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProduceTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_produceTime = string(rsp["ProduceTime"].GetString());
        m_produceTimeHasBeenSet = true;
    }

    if (rsp.HasMember("WhiteLists") && !rsp["WhiteLists"].IsNull())
    {
        if (!rsp["WhiteLists"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WhiteLists` is not array type"));

        const rapidjson::Value &tmpValue = rsp["WhiteLists"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_whiteLists.push_back((*itr).GetString());
        }
        m_whiteListsHasBeenSet = true;
    }

    if (rsp.HasMember("WorkDesc") && !rsp["WorkDesc"].IsNull())
    {
        if (!rsp["WorkDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workDesc = string(rsp["WorkDesc"].GetString());
        m_workDescHasBeenSet = true;
    }

    if (rsp.HasMember("Authorization") && !rsp["Authorization"].IsNull())
    {
        if (!rsp["Authorization"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Authorization` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorization = string(rsp["Authorization"].GetString());
        m_authorizationHasBeenSet = true;
    }

    if (rsp.HasMember("AuthorizationStartTime") && !rsp["AuthorizationStartTime"].IsNull())
    {
        if (!rsp["AuthorizationStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationStartTime = string(rsp["AuthorizationStartTime"].GetString());
        m_authorizationStartTimeHasBeenSet = true;
    }

    if (rsp.HasMember("AuthorizationEndTime") && !rsp["AuthorizationEndTime"].IsNull())
    {
        if (!rsp["AuthorizationEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationEndTime = string(rsp["AuthorizationEndTime"].GetString());
        m_authorizationEndTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Commission") && !rsp["Commission"].IsNull())
    {
        if (!rsp["Commission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Commission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commission = string(rsp["Commission"].GetString());
        m_commissionHasBeenSet = true;
    }

    if (rsp.HasMember("CommissionStartTime") && !rsp["CommissionStartTime"].IsNull())
    {
        if (!rsp["CommissionStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommissionStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commissionStartTime = string(rsp["CommissionStartTime"].GetString());
        m_commissionStartTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CommissionEndTime") && !rsp["CommissionEndTime"].IsNull())
    {
        if (!rsp["CommissionEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommissionEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commissionEndTime = string(rsp["CommissionEndTime"].GetString());
        m_commissionEndTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EvidenceUrl") && !rsp["EvidenceUrl"].IsNull())
    {
        if (!rsp["EvidenceUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvidenceUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evidenceUrl = string(rsp["EvidenceUrl"].GetString());
        m_evidenceUrlHasBeenSet = true;
    }

    if (rsp.HasMember("EvidenceStartTime") && !rsp["EvidenceStartTime"].IsNull())
    {
        if (!rsp["EvidenceStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvidenceStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evidenceStartTime = string(rsp["EvidenceStartTime"].GetString());
        m_evidenceStartTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EvidenceEndTime") && !rsp["EvidenceEndTime"].IsNull())
    {
        if (!rsp["EvidenceEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvidenceEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evidenceEndTime = string(rsp["EvidenceEndTime"].GetString());
        m_evidenceEndTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCRWorkInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_workNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workName.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorStatus, allocator);
    }

    if (m_authStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authStatus, allocator);
    }

    if (m_commStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_commStatus, allocator);
    }

    if (m_isProducerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsProducer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isProducer, allocator);
    }

    if (m_evidenceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvidenceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evidenceStatus, allocator);
    }

    if (m_workCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_isOriginalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOriginal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isOriginal.c_str(), allocator).Move(), allocator);
    }

    if (m_isReleaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRelease";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isRelease.c_str(), allocator).Move(), allocator);
    }

    if (m_producerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProducerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_producerName.c_str(), allocator).Move(), allocator);
    }

    if (m_produceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProduceTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_produceTime.c_str(), allocator).Move(), allocator);
    }

    if (m_whiteListsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteLists";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_whiteLists.begin(); itr != m_whiteLists.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_workDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authorization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorization.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizationStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizationEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_commissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Commission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commission.c_str(), allocator).Move(), allocator);
    }

    if (m_commissionStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommissionStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commissionStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_commissionEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommissionEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commissionEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_evidenceUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvidenceUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_evidenceUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_evidenceStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvidenceStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_evidenceStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_evidenceEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvidenceEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_evidenceEndTime.c_str(), allocator).Move(), allocator);
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


string DescribeCRWorkInfoResponse::GetWorkName() const
{
    return m_workName;
}

bool DescribeCRWorkInfoResponse::WorkNameHasBeenSet() const
{
    return m_workNameHasBeenSet;
}

int64_t DescribeCRWorkInfoResponse::GetMonitorStatus() const
{
    return m_monitorStatus;
}

bool DescribeCRWorkInfoResponse::MonitorStatusHasBeenSet() const
{
    return m_monitorStatusHasBeenSet;
}

int64_t DescribeCRWorkInfoResponse::GetAuthStatus() const
{
    return m_authStatus;
}

bool DescribeCRWorkInfoResponse::AuthStatusHasBeenSet() const
{
    return m_authStatusHasBeenSet;
}

int64_t DescribeCRWorkInfoResponse::GetCommStatus() const
{
    return m_commStatus;
}

bool DescribeCRWorkInfoResponse::CommStatusHasBeenSet() const
{
    return m_commStatusHasBeenSet;
}

int64_t DescribeCRWorkInfoResponse::GetIsProducer() const
{
    return m_isProducer;
}

bool DescribeCRWorkInfoResponse::IsProducerHasBeenSet() const
{
    return m_isProducerHasBeenSet;
}

int64_t DescribeCRWorkInfoResponse::GetEvidenceStatus() const
{
    return m_evidenceStatus;
}

bool DescribeCRWorkInfoResponse::EvidenceStatusHasBeenSet() const
{
    return m_evidenceStatusHasBeenSet;
}

string DescribeCRWorkInfoResponse::GetWorkCategory() const
{
    return m_workCategory;
}

bool DescribeCRWorkInfoResponse::WorkCategoryHasBeenSet() const
{
    return m_workCategoryHasBeenSet;
}

string DescribeCRWorkInfoResponse::GetIsOriginal() const
{
    return m_isOriginal;
}

bool DescribeCRWorkInfoResponse::IsOriginalHasBeenSet() const
{
    return m_isOriginalHasBeenSet;
}

string DescribeCRWorkInfoResponse::GetIsRelease() const
{
    return m_isRelease;
}

bool DescribeCRWorkInfoResponse::IsReleaseHasBeenSet() const
{
    return m_isReleaseHasBeenSet;
}

string DescribeCRWorkInfoResponse::GetProducerName() const
{
    return m_producerName;
}

bool DescribeCRWorkInfoResponse::ProducerNameHasBeenSet() const
{
    return m_producerNameHasBeenSet;
}

string DescribeCRWorkInfoResponse::GetProduceTime() const
{
    return m_produceTime;
}

bool DescribeCRWorkInfoResponse::ProduceTimeHasBeenSet() const
{
    return m_produceTimeHasBeenSet;
}

vector<string> DescribeCRWorkInfoResponse::GetWhiteLists() const
{
    return m_whiteLists;
}

bool DescribeCRWorkInfoResponse::WhiteListsHasBeenSet() const
{
    return m_whiteListsHasBeenSet;
}

string DescribeCRWorkInfoResponse::GetWorkDesc() const
{
    return m_workDesc;
}

bool DescribeCRWorkInfoResponse::WorkDescHasBeenSet() const
{
    return m_workDescHasBeenSet;
}

string DescribeCRWorkInfoResponse::GetAuthorization() const
{
    return m_authorization;
}

bool DescribeCRWorkInfoResponse::AuthorizationHasBeenSet() const
{
    return m_authorizationHasBeenSet;
}

string DescribeCRWorkInfoResponse::GetAuthorizationStartTime() const
{
    return m_authorizationStartTime;
}

bool DescribeCRWorkInfoResponse::AuthorizationStartTimeHasBeenSet() const
{
    return m_authorizationStartTimeHasBeenSet;
}

string DescribeCRWorkInfoResponse::GetAuthorizationEndTime() const
{
    return m_authorizationEndTime;
}

bool DescribeCRWorkInfoResponse::AuthorizationEndTimeHasBeenSet() const
{
    return m_authorizationEndTimeHasBeenSet;
}

string DescribeCRWorkInfoResponse::GetCommission() const
{
    return m_commission;
}

bool DescribeCRWorkInfoResponse::CommissionHasBeenSet() const
{
    return m_commissionHasBeenSet;
}

string DescribeCRWorkInfoResponse::GetCommissionStartTime() const
{
    return m_commissionStartTime;
}

bool DescribeCRWorkInfoResponse::CommissionStartTimeHasBeenSet() const
{
    return m_commissionStartTimeHasBeenSet;
}

string DescribeCRWorkInfoResponse::GetCommissionEndTime() const
{
    return m_commissionEndTime;
}

bool DescribeCRWorkInfoResponse::CommissionEndTimeHasBeenSet() const
{
    return m_commissionEndTimeHasBeenSet;
}

string DescribeCRWorkInfoResponse::GetEvidenceUrl() const
{
    return m_evidenceUrl;
}

bool DescribeCRWorkInfoResponse::EvidenceUrlHasBeenSet() const
{
    return m_evidenceUrlHasBeenSet;
}

string DescribeCRWorkInfoResponse::GetEvidenceStartTime() const
{
    return m_evidenceStartTime;
}

bool DescribeCRWorkInfoResponse::EvidenceStartTimeHasBeenSet() const
{
    return m_evidenceStartTimeHasBeenSet;
}

string DescribeCRWorkInfoResponse::GetEvidenceEndTime() const
{
    return m_evidenceEndTime;
}

bool DescribeCRWorkInfoResponse::EvidenceEndTimeHasBeenSet() const
{
    return m_evidenceEndTimeHasBeenSet;
}



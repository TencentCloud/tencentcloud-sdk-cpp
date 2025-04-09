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

#include <tencentcloud/tcss/v20201101/model/DescribePurchaseStateInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribePurchaseStateInfoResponse::DescribePurchaseStateInfoResponse() :
    m_stateHasBeenSet(false),
    m_allCoresCntHasBeenSet(false),
    m_coresCntHasBeenSet(false),
    m_undefendCoresCntHasBeenSet(false),
    m_authorizedCoresCntHasBeenSet(false),
    m_givenAuthorizedCoresCntHasBeenSet(false),
    m_currentFlexibleCoresCntHasBeenSet(false),
    m_imageCntHasBeenSet(false),
    m_authorizedImageCntHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_purchasedAuthorizedCntHasBeenSet(false),
    m_automaticRenewalHasBeenSet(false),
    m_givenAuthorizedCntHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_subStateHasBeenSet(false),
    m_inquireKeyHasBeenSet(false),
    m_defendPolicyHasBeenSet(false),
    m_flexibleCoresLimitHasBeenSet(false),
    m_defendClusterCoresCntHasBeenSet(false),
    m_defendHostCoresCntHasBeenSet(false),
    m_trialCoresCntHasBeenSet(false)
{
}

CoreInternalOutcome DescribePurchaseStateInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("State") && !rsp["State"].IsNull())
    {
        if (!rsp["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = rsp["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (rsp.HasMember("AllCoresCnt") && !rsp["AllCoresCnt"].IsNull())
    {
        if (!rsp["AllCoresCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AllCoresCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_allCoresCnt = rsp["AllCoresCnt"].GetUint64();
        m_allCoresCntHasBeenSet = true;
    }

    if (rsp.HasMember("CoresCnt") && !rsp["CoresCnt"].IsNull())
    {
        if (!rsp["CoresCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CoresCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_coresCnt = rsp["CoresCnt"].GetUint64();
        m_coresCntHasBeenSet = true;
    }

    if (rsp.HasMember("UndefendCoresCnt") && !rsp["UndefendCoresCnt"].IsNull())
    {
        if (!rsp["UndefendCoresCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UndefendCoresCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_undefendCoresCnt = rsp["UndefendCoresCnt"].GetUint64();
        m_undefendCoresCntHasBeenSet = true;
    }

    if (rsp.HasMember("AuthorizedCoresCnt") && !rsp["AuthorizedCoresCnt"].IsNull())
    {
        if (!rsp["AuthorizedCoresCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizedCoresCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_authorizedCoresCnt = rsp["AuthorizedCoresCnt"].GetUint64();
        m_authorizedCoresCntHasBeenSet = true;
    }

    if (rsp.HasMember("GivenAuthorizedCoresCnt") && !rsp["GivenAuthorizedCoresCnt"].IsNull())
    {
        if (!rsp["GivenAuthorizedCoresCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GivenAuthorizedCoresCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_givenAuthorizedCoresCnt = rsp["GivenAuthorizedCoresCnt"].GetInt64();
        m_givenAuthorizedCoresCntHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentFlexibleCoresCnt") && !rsp["CurrentFlexibleCoresCnt"].IsNull())
    {
        if (!rsp["CurrentFlexibleCoresCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentFlexibleCoresCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_currentFlexibleCoresCnt = rsp["CurrentFlexibleCoresCnt"].GetUint64();
        m_currentFlexibleCoresCntHasBeenSet = true;
    }

    if (rsp.HasMember("ImageCnt") && !rsp["ImageCnt"].IsNull())
    {
        if (!rsp["ImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageCnt = rsp["ImageCnt"].GetUint64();
        m_imageCntHasBeenSet = true;
    }

    if (rsp.HasMember("AuthorizedImageCnt") && !rsp["AuthorizedImageCnt"].IsNull())
    {
        if (!rsp["AuthorizedImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizedImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_authorizedImageCnt = rsp["AuthorizedImageCnt"].GetUint64();
        m_authorizedImageCntHasBeenSet = true;
    }

    if (rsp.HasMember("ExpirationTime") && !rsp["ExpirationTime"].IsNull())
    {
        if (!rsp["ExpirationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpirationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expirationTime = string(rsp["ExpirationTime"].GetString());
        m_expirationTimeHasBeenSet = true;
    }

    if (rsp.HasMember("PurchasedAuthorizedCnt") && !rsp["PurchasedAuthorizedCnt"].IsNull())
    {
        if (!rsp["PurchasedAuthorizedCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PurchasedAuthorizedCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_purchasedAuthorizedCnt = rsp["PurchasedAuthorizedCnt"].GetUint64();
        m_purchasedAuthorizedCntHasBeenSet = true;
    }

    if (rsp.HasMember("AutomaticRenewal") && !rsp["AutomaticRenewal"].IsNull())
    {
        if (!rsp["AutomaticRenewal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutomaticRenewal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_automaticRenewal = rsp["AutomaticRenewal"].GetInt64();
        m_automaticRenewalHasBeenSet = true;
    }

    if (rsp.HasMember("GivenAuthorizedCnt") && !rsp["GivenAuthorizedCnt"].IsNull())
    {
        if (!rsp["GivenAuthorizedCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GivenAuthorizedCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_givenAuthorizedCnt = rsp["GivenAuthorizedCnt"].GetUint64();
        m_givenAuthorizedCntHasBeenSet = true;
    }

    if (rsp.HasMember("BeginTime") && !rsp["BeginTime"].IsNull())
    {
        if (!rsp["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(rsp["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (rsp.HasMember("SubState") && !rsp["SubState"].IsNull())
    {
        if (!rsp["SubState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subState = string(rsp["SubState"].GetString());
        m_subStateHasBeenSet = true;
    }

    if (rsp.HasMember("InquireKey") && !rsp["InquireKey"].IsNull())
    {
        if (!rsp["InquireKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InquireKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inquireKey = string(rsp["InquireKey"].GetString());
        m_inquireKeyHasBeenSet = true;
    }

    if (rsp.HasMember("DefendPolicy") && !rsp["DefendPolicy"].IsNull())
    {
        if (!rsp["DefendPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefendPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defendPolicy = string(rsp["DefendPolicy"].GetString());
        m_defendPolicyHasBeenSet = true;
    }

    if (rsp.HasMember("FlexibleCoresLimit") && !rsp["FlexibleCoresLimit"].IsNull())
    {
        if (!rsp["FlexibleCoresLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FlexibleCoresLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_flexibleCoresLimit = rsp["FlexibleCoresLimit"].GetUint64();
        m_flexibleCoresLimitHasBeenSet = true;
    }

    if (rsp.HasMember("DefendClusterCoresCnt") && !rsp["DefendClusterCoresCnt"].IsNull())
    {
        if (!rsp["DefendClusterCoresCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DefendClusterCoresCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_defendClusterCoresCnt = rsp["DefendClusterCoresCnt"].GetUint64();
        m_defendClusterCoresCntHasBeenSet = true;
    }

    if (rsp.HasMember("DefendHostCoresCnt") && !rsp["DefendHostCoresCnt"].IsNull())
    {
        if (!rsp["DefendHostCoresCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DefendHostCoresCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_defendHostCoresCnt = rsp["DefendHostCoresCnt"].GetUint64();
        m_defendHostCoresCntHasBeenSet = true;
    }

    if (rsp.HasMember("TrialCoresCnt") && !rsp["TrialCoresCnt"].IsNull())
    {
        if (!rsp["TrialCoresCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrialCoresCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_trialCoresCnt = rsp["TrialCoresCnt"].GetUint64();
        m_trialCoresCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePurchaseStateInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_allCoresCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllCoresCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allCoresCnt, allocator);
    }

    if (m_coresCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoresCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coresCnt, allocator);
    }

    if (m_undefendCoresCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UndefendCoresCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_undefendCoresCnt, allocator);
    }

    if (m_authorizedCoresCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedCoresCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorizedCoresCnt, allocator);
    }

    if (m_givenAuthorizedCoresCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GivenAuthorizedCoresCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_givenAuthorizedCoresCnt, allocator);
    }

    if (m_currentFlexibleCoresCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentFlexibleCoresCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentFlexibleCoresCnt, allocator);
    }

    if (m_imageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageCnt, allocator);
    }

    if (m_authorizedImageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorizedImageCnt, allocator);
    }

    if (m_expirationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expirationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_purchasedAuthorizedCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PurchasedAuthorizedCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_purchasedAuthorizedCnt, allocator);
    }

    if (m_automaticRenewalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutomaticRenewal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_automaticRenewal, allocator);
    }

    if (m_givenAuthorizedCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GivenAuthorizedCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_givenAuthorizedCnt, allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_subStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subState.c_str(), allocator).Move(), allocator);
    }

    if (m_inquireKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InquireKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inquireKey.c_str(), allocator).Move(), allocator);
    }

    if (m_defendPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defendPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_flexibleCoresLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlexibleCoresLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flexibleCoresLimit, allocator);
    }

    if (m_defendClusterCoresCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendClusterCoresCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defendClusterCoresCnt, allocator);
    }

    if (m_defendHostCoresCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendHostCoresCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defendHostCoresCnt, allocator);
    }

    if (m_trialCoresCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrialCoresCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trialCoresCnt, allocator);
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


int64_t DescribePurchaseStateInfoResponse::GetState() const
{
    return m_state;
}

bool DescribePurchaseStateInfoResponse::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

uint64_t DescribePurchaseStateInfoResponse::GetAllCoresCnt() const
{
    return m_allCoresCnt;
}

bool DescribePurchaseStateInfoResponse::AllCoresCntHasBeenSet() const
{
    return m_allCoresCntHasBeenSet;
}

uint64_t DescribePurchaseStateInfoResponse::GetCoresCnt() const
{
    return m_coresCnt;
}

bool DescribePurchaseStateInfoResponse::CoresCntHasBeenSet() const
{
    return m_coresCntHasBeenSet;
}

uint64_t DescribePurchaseStateInfoResponse::GetUndefendCoresCnt() const
{
    return m_undefendCoresCnt;
}

bool DescribePurchaseStateInfoResponse::UndefendCoresCntHasBeenSet() const
{
    return m_undefendCoresCntHasBeenSet;
}

uint64_t DescribePurchaseStateInfoResponse::GetAuthorizedCoresCnt() const
{
    return m_authorizedCoresCnt;
}

bool DescribePurchaseStateInfoResponse::AuthorizedCoresCntHasBeenSet() const
{
    return m_authorizedCoresCntHasBeenSet;
}

int64_t DescribePurchaseStateInfoResponse::GetGivenAuthorizedCoresCnt() const
{
    return m_givenAuthorizedCoresCnt;
}

bool DescribePurchaseStateInfoResponse::GivenAuthorizedCoresCntHasBeenSet() const
{
    return m_givenAuthorizedCoresCntHasBeenSet;
}

uint64_t DescribePurchaseStateInfoResponse::GetCurrentFlexibleCoresCnt() const
{
    return m_currentFlexibleCoresCnt;
}

bool DescribePurchaseStateInfoResponse::CurrentFlexibleCoresCntHasBeenSet() const
{
    return m_currentFlexibleCoresCntHasBeenSet;
}

uint64_t DescribePurchaseStateInfoResponse::GetImageCnt() const
{
    return m_imageCnt;
}

bool DescribePurchaseStateInfoResponse::ImageCntHasBeenSet() const
{
    return m_imageCntHasBeenSet;
}

uint64_t DescribePurchaseStateInfoResponse::GetAuthorizedImageCnt() const
{
    return m_authorizedImageCnt;
}

bool DescribePurchaseStateInfoResponse::AuthorizedImageCntHasBeenSet() const
{
    return m_authorizedImageCntHasBeenSet;
}

string DescribePurchaseStateInfoResponse::GetExpirationTime() const
{
    return m_expirationTime;
}

bool DescribePurchaseStateInfoResponse::ExpirationTimeHasBeenSet() const
{
    return m_expirationTimeHasBeenSet;
}

uint64_t DescribePurchaseStateInfoResponse::GetPurchasedAuthorizedCnt() const
{
    return m_purchasedAuthorizedCnt;
}

bool DescribePurchaseStateInfoResponse::PurchasedAuthorizedCntHasBeenSet() const
{
    return m_purchasedAuthorizedCntHasBeenSet;
}

int64_t DescribePurchaseStateInfoResponse::GetAutomaticRenewal() const
{
    return m_automaticRenewal;
}

bool DescribePurchaseStateInfoResponse::AutomaticRenewalHasBeenSet() const
{
    return m_automaticRenewalHasBeenSet;
}

uint64_t DescribePurchaseStateInfoResponse::GetGivenAuthorizedCnt() const
{
    return m_givenAuthorizedCnt;
}

bool DescribePurchaseStateInfoResponse::GivenAuthorizedCntHasBeenSet() const
{
    return m_givenAuthorizedCntHasBeenSet;
}

string DescribePurchaseStateInfoResponse::GetBeginTime() const
{
    return m_beginTime;
}

bool DescribePurchaseStateInfoResponse::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string DescribePurchaseStateInfoResponse::GetSubState() const
{
    return m_subState;
}

bool DescribePurchaseStateInfoResponse::SubStateHasBeenSet() const
{
    return m_subStateHasBeenSet;
}

string DescribePurchaseStateInfoResponse::GetInquireKey() const
{
    return m_inquireKey;
}

bool DescribePurchaseStateInfoResponse::InquireKeyHasBeenSet() const
{
    return m_inquireKeyHasBeenSet;
}

string DescribePurchaseStateInfoResponse::GetDefendPolicy() const
{
    return m_defendPolicy;
}

bool DescribePurchaseStateInfoResponse::DefendPolicyHasBeenSet() const
{
    return m_defendPolicyHasBeenSet;
}

uint64_t DescribePurchaseStateInfoResponse::GetFlexibleCoresLimit() const
{
    return m_flexibleCoresLimit;
}

bool DescribePurchaseStateInfoResponse::FlexibleCoresLimitHasBeenSet() const
{
    return m_flexibleCoresLimitHasBeenSet;
}

uint64_t DescribePurchaseStateInfoResponse::GetDefendClusterCoresCnt() const
{
    return m_defendClusterCoresCnt;
}

bool DescribePurchaseStateInfoResponse::DefendClusterCoresCntHasBeenSet() const
{
    return m_defendClusterCoresCntHasBeenSet;
}

uint64_t DescribePurchaseStateInfoResponse::GetDefendHostCoresCnt() const
{
    return m_defendHostCoresCnt;
}

bool DescribePurchaseStateInfoResponse::DefendHostCoresCntHasBeenSet() const
{
    return m_defendHostCoresCntHasBeenSet;
}

uint64_t DescribePurchaseStateInfoResponse::GetTrialCoresCnt() const
{
    return m_trialCoresCnt;
}

bool DescribePurchaseStateInfoResponse::TrialCoresCntHasBeenSet() const
{
    return m_trialCoresCntHasBeenSet;
}



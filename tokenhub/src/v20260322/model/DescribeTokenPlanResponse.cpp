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

#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

DescribeTokenPlanResponse::DescribeTokenPlanResponse() :
    m_teamIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_stopReasonHasBeenSet(false),
    m_apiKeyMaxHasBeenSet(false),
    m_prepayResourceIDHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_packageInfoHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_apiKeyCountHasBeenSet(false),
    m_tokenSummaryHasBeenSet(false),
    m_productTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTokenPlanResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TeamId") && !rsp["TeamId"].IsNull())
    {
        if (!rsp["TeamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TeamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamId = string(rsp["TeamId"].GetString());
        m_teamIdHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("AppId") && !rsp["AppId"].IsNull())
    {
        if (!rsp["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(rsp["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (rsp.HasMember("Uin") && !rsp["Uin"].IsNull())
    {
        if (!rsp["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(rsp["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("StopReason") && !rsp["StopReason"].IsNull())
    {
        if (!rsp["StopReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StopReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stopReason = string(rsp["StopReason"].GetString());
        m_stopReasonHasBeenSet = true;
    }

    if (rsp.HasMember("ApiKeyMax") && !rsp["ApiKeyMax"].IsNull())
    {
        if (!rsp["ApiKeyMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_apiKeyMax = rsp["ApiKeyMax"].GetInt64();
        m_apiKeyMaxHasBeenSet = true;
    }

    if (rsp.HasMember("PrepayResourceID") && !rsp["PrepayResourceID"].IsNull())
    {
        if (!rsp["PrepayResourceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrepayResourceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prepayResourceID = string(rsp["PrepayResourceID"].GetString());
        m_prepayResourceIDHasBeenSet = true;
    }

    if (rsp.HasMember("Creator") && !rsp["Creator"].IsNull())
    {
        if (!rsp["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(rsp["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedAt") && !rsp["CreatedAt"].IsNull())
    {
        if (!rsp["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(rsp["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (rsp.HasMember("UpdatedAt") && !rsp["UpdatedAt"].IsNull())
    {
        if (!rsp["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(rsp["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (rsp.HasMember("PackageInfo") && !rsp["PackageInfo"].IsNull())
    {
        if (!rsp["PackageInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_packageInfo.Deserialize(rsp["PackageInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_packageInfoHasBeenSet = true;
    }

    if (rsp.HasMember("AutoRenewFlag") && !rsp["AutoRenewFlag"].IsNull())
    {
        if (!rsp["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = rsp["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (rsp.HasMember("ApiKeyCount") && !rsp["ApiKeyCount"].IsNull())
    {
        if (!rsp["ApiKeyCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_apiKeyCount = rsp["ApiKeyCount"].GetInt64();
        m_apiKeyCountHasBeenSet = true;
    }

    if (rsp.HasMember("TokenSummary") && !rsp["TokenSummary"].IsNull())
    {
        if (!rsp["TokenSummary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TokenSummary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tokenSummary.Deserialize(rsp["TokenSummary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tokenSummaryHasBeenSet = true;
    }

    if (rsp.HasMember("ProductType") && !rsp["ProductType"].IsNull())
    {
        if (!rsp["ProductType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productType = string(rsp["ProductType"].GetString());
        m_productTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTokenPlanResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_teamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_teamId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_stopReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stopReason.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiKeyMax, allocator);
    }

    if (m_prepayResourceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrepayResourceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prepayResourceID.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_packageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_packageInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_apiKeyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiKeyCount, allocator);
    }

    if (m_tokenSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tokenSummary.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_productTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productType.c_str(), allocator).Move(), allocator);
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


string DescribeTokenPlanResponse::GetTeamId() const
{
    return m_teamId;
}

bool DescribeTokenPlanResponse::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}

string DescribeTokenPlanResponse::GetName() const
{
    return m_name;
}

bool DescribeTokenPlanResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeTokenPlanResponse::GetAppId() const
{
    return m_appId;
}

bool DescribeTokenPlanResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeTokenPlanResponse::GetUin() const
{
    return m_uin;
}

bool DescribeTokenPlanResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DescribeTokenPlanResponse::GetStatus() const
{
    return m_status;
}

bool DescribeTokenPlanResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeTokenPlanResponse::GetStopReason() const
{
    return m_stopReason;
}

bool DescribeTokenPlanResponse::StopReasonHasBeenSet() const
{
    return m_stopReasonHasBeenSet;
}

int64_t DescribeTokenPlanResponse::GetApiKeyMax() const
{
    return m_apiKeyMax;
}

bool DescribeTokenPlanResponse::ApiKeyMaxHasBeenSet() const
{
    return m_apiKeyMaxHasBeenSet;
}

string DescribeTokenPlanResponse::GetPrepayResourceID() const
{
    return m_prepayResourceID;
}

bool DescribeTokenPlanResponse::PrepayResourceIDHasBeenSet() const
{
    return m_prepayResourceIDHasBeenSet;
}

string DescribeTokenPlanResponse::GetCreator() const
{
    return m_creator;
}

bool DescribeTokenPlanResponse::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string DescribeTokenPlanResponse::GetCreatedAt() const
{
    return m_createdAt;
}

bool DescribeTokenPlanResponse::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string DescribeTokenPlanResponse::GetUpdatedAt() const
{
    return m_updatedAt;
}

bool DescribeTokenPlanResponse::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

TokenPlanPackageInfo DescribeTokenPlanResponse::GetPackageInfo() const
{
    return m_packageInfo;
}

bool DescribeTokenPlanResponse::PackageInfoHasBeenSet() const
{
    return m_packageInfoHasBeenSet;
}

int64_t DescribeTokenPlanResponse::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

bool DescribeTokenPlanResponse::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t DescribeTokenPlanResponse::GetApiKeyCount() const
{
    return m_apiKeyCount;
}

bool DescribeTokenPlanResponse::ApiKeyCountHasBeenSet() const
{
    return m_apiKeyCountHasBeenSet;
}

TokenSummary DescribeTokenPlanResponse::GetTokenSummary() const
{
    return m_tokenSummary;
}

bool DescribeTokenPlanResponse::TokenSummaryHasBeenSet() const
{
    return m_tokenSummaryHasBeenSet;
}

string DescribeTokenPlanResponse::GetProductType() const
{
    return m_productType;
}

bool DescribeTokenPlanResponse::ProductTypeHasBeenSet() const
{
    return m_productTypeHasBeenSet;
}



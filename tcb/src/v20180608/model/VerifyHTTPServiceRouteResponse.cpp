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

#include <tencentcloud/tcb/v20180608/model/VerifyHTTPServiceRouteResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

VerifyHTTPServiceRouteResponse::VerifyHTTPServiceRouteResponse() :
    m_passedHasBeenSet(false),
    m_ownershipHasBeenSet(false),
    m_certHasBeenSet(false),
    m_quotaHasBeenSet(false),
    m_routeConflictHasBeenSet(false),
    m_domainConflictHasBeenSet(false),
    m_internalAccountHasBeenSet(false),
    m_blacklistHasBeenSet(false),
    m_cDNResourceHasBeenSet(false),
    m_eOHasBeenSet(false)
{
}

CoreInternalOutcome VerifyHTTPServiceRouteResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Passed") && !rsp["Passed"].IsNull())
    {
        if (!rsp["Passed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Passed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_passed = rsp["Passed"].GetBool();
        m_passedHasBeenSet = true;
    }

    if (rsp.HasMember("Ownership") && !rsp["Ownership"].IsNull())
    {
        if (!rsp["Ownership"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Ownership` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ownership.Deserialize(rsp["Ownership"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownershipHasBeenSet = true;
    }

    if (rsp.HasMember("Cert") && !rsp["Cert"].IsNull())
    {
        if (!rsp["Cert"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Cert` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cert.Deserialize(rsp["Cert"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_certHasBeenSet = true;
    }

    if (rsp.HasMember("Quota") && !rsp["Quota"].IsNull())
    {
        if (!rsp["Quota"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Quota` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_quota.Deserialize(rsp["Quota"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_quotaHasBeenSet = true;
    }

    if (rsp.HasMember("RouteConflict") && !rsp["RouteConflict"].IsNull())
    {
        if (!rsp["RouteConflict"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RouteConflict` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_routeConflict.Deserialize(rsp["RouteConflict"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_routeConflictHasBeenSet = true;
    }

    if (rsp.HasMember("DomainConflict") && !rsp["DomainConflict"].IsNull())
    {
        if (!rsp["DomainConflict"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DomainConflict` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_domainConflict.Deserialize(rsp["DomainConflict"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_domainConflictHasBeenSet = true;
    }

    if (rsp.HasMember("InternalAccount") && !rsp["InternalAccount"].IsNull())
    {
        if (!rsp["InternalAccount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalAccount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_internalAccount.Deserialize(rsp["InternalAccount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_internalAccountHasBeenSet = true;
    }

    if (rsp.HasMember("Blacklist") && !rsp["Blacklist"].IsNull())
    {
        if (!rsp["Blacklist"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Blacklist` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_blacklist.Deserialize(rsp["Blacklist"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_blacklistHasBeenSet = true;
    }

    if (rsp.HasMember("CDNResource") && !rsp["CDNResource"].IsNull())
    {
        if (!rsp["CDNResource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CDNResource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cDNResource.Deserialize(rsp["CDNResource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cDNResourceHasBeenSet = true;
    }

    if (rsp.HasMember("EO") && !rsp["EO"].IsNull())
    {
        if (!rsp["EO"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EO` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eO.Deserialize(rsp["EO"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eOHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string VerifyHTTPServiceRouteResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_passedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Passed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passed, allocator);
    }

    if (m_ownershipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ownership";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ownership.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_certHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cert.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_quotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_quota.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_routeConflictHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteConflict";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_routeConflict.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_domainConflictHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainConflict";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_domainConflict.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_internalAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internalAccount.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_blacklistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Blacklist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_blacklist.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cDNResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CDNResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cDNResource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eOHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EO";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eO.ToJsonObject(value[key.c_str()], allocator);
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


bool VerifyHTTPServiceRouteResponse::GetPassed() const
{
    return m_passed;
}

bool VerifyHTTPServiceRouteResponse::PassedHasBeenSet() const
{
    return m_passedHasBeenSet;
}

VerifyHTTPServiceRouteCheckItem VerifyHTTPServiceRouteResponse::GetOwnership() const
{
    return m_ownership;
}

bool VerifyHTTPServiceRouteResponse::OwnershipHasBeenSet() const
{
    return m_ownershipHasBeenSet;
}

VerifyHTTPServiceRouteCheckItem VerifyHTTPServiceRouteResponse::GetCert() const
{
    return m_cert;
}

bool VerifyHTTPServiceRouteResponse::CertHasBeenSet() const
{
    return m_certHasBeenSet;
}

VerifyHTTPServiceRouteCheckItem VerifyHTTPServiceRouteResponse::GetQuota() const
{
    return m_quota;
}

bool VerifyHTTPServiceRouteResponse::QuotaHasBeenSet() const
{
    return m_quotaHasBeenSet;
}

VerifyHTTPServiceRouteCheckItem VerifyHTTPServiceRouteResponse::GetRouteConflict() const
{
    return m_routeConflict;
}

bool VerifyHTTPServiceRouteResponse::RouteConflictHasBeenSet() const
{
    return m_routeConflictHasBeenSet;
}

VerifyHTTPServiceRouteCheckItem VerifyHTTPServiceRouteResponse::GetDomainConflict() const
{
    return m_domainConflict;
}

bool VerifyHTTPServiceRouteResponse::DomainConflictHasBeenSet() const
{
    return m_domainConflictHasBeenSet;
}

VerifyHTTPServiceRouteCheckItem VerifyHTTPServiceRouteResponse::GetInternalAccount() const
{
    return m_internalAccount;
}

bool VerifyHTTPServiceRouteResponse::InternalAccountHasBeenSet() const
{
    return m_internalAccountHasBeenSet;
}

VerifyHTTPServiceRouteCheckItem VerifyHTTPServiceRouteResponse::GetBlacklist() const
{
    return m_blacklist;
}

bool VerifyHTTPServiceRouteResponse::BlacklistHasBeenSet() const
{
    return m_blacklistHasBeenSet;
}

VerifyHTTPServiceRouteCheckItem VerifyHTTPServiceRouteResponse::GetCDNResource() const
{
    return m_cDNResource;
}

bool VerifyHTTPServiceRouteResponse::CDNResourceHasBeenSet() const
{
    return m_cDNResourceHasBeenSet;
}

VerifyHTTPServiceRouteCheckItem VerifyHTTPServiceRouteResponse::GetEO() const
{
    return m_eO;
}

bool VerifyHTTPServiceRouteResponse::EOHasBeenSet() const
{
    return m_eOHasBeenSet;
}



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

#include <tencentcloud/domain/v20180808/model/DescribeUnPreDomainDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

DescribeUnPreDomainDetailResponse::DescribeUnPreDomainDetailResponse() :
    m_domainHasBeenSet(false),
    m_preCountHasBeenSet(false),
    m_regTimeHasBeenSet(false),
    m_deleteTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_currentPriceHasBeenSet(false),
    m_appointBondPriceHasBeenSet(false),
    m_isAppointHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_isDomainUserHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUnPreDomainDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Domain") && !rsp["Domain"].IsNull())
    {
        if (!rsp["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(rsp["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (rsp.HasMember("PreCount") && !rsp["PreCount"].IsNull())
    {
        if (!rsp["PreCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PreCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_preCount = rsp["PreCount"].GetInt64();
        m_preCountHasBeenSet = true;
    }

    if (rsp.HasMember("RegTime") && !rsp["RegTime"].IsNull())
    {
        if (!rsp["RegTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regTime = string(rsp["RegTime"].GetString());
        m_regTimeHasBeenSet = true;
    }

    if (rsp.HasMember("DeleteTime") && !rsp["DeleteTime"].IsNull())
    {
        if (!rsp["DeleteTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deleteTime = string(rsp["DeleteTime"].GetString());
        m_deleteTimeHasBeenSet = true;
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

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentPrice") && !rsp["CurrentPrice"].IsNull())
    {
        if (!rsp["CurrentPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_currentPrice = rsp["CurrentPrice"].GetDouble();
        m_currentPriceHasBeenSet = true;
    }

    if (rsp.HasMember("AppointBondPrice") && !rsp["AppointBondPrice"].IsNull())
    {
        if (!rsp["AppointBondPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AppointBondPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_appointBondPrice = rsp["AppointBondPrice"].GetDouble();
        m_appointBondPriceHasBeenSet = true;
    }

    if (rsp.HasMember("IsAppoint") && !rsp["IsAppoint"].IsNull())
    {
        if (!rsp["IsAppoint"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsAppoint` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAppoint = rsp["IsAppoint"].GetBool();
        m_isAppointHasBeenSet = true;
    }

    if (rsp.HasMember("BusinessId") && !rsp["BusinessId"].IsNull())
    {
        if (!rsp["BusinessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessId = string(rsp["BusinessId"].GetString());
        m_businessIdHasBeenSet = true;
    }

    if (rsp.HasMember("IsDomainUser") && !rsp["IsDomainUser"].IsNull())
    {
        if (!rsp["IsDomainUser"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsDomainUser` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDomainUser = rsp["IsDomainUser"].GetBool();
        m_isDomainUserHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUnPreDomainDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_preCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preCount, allocator);
    }

    if (m_regTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deleteTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_currentPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentPrice, allocator);
    }

    if (m_appointBondPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppointBondPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appointBondPrice, allocator);
    }

    if (m_isAppointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAppoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAppoint, allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessId.c_str(), allocator).Move(), allocator);
    }

    if (m_isDomainUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDomainUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDomainUser, allocator);
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


string DescribeUnPreDomainDetailResponse::GetDomain() const
{
    return m_domain;
}

bool DescribeUnPreDomainDetailResponse::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t DescribeUnPreDomainDetailResponse::GetPreCount() const
{
    return m_preCount;
}

bool DescribeUnPreDomainDetailResponse::PreCountHasBeenSet() const
{
    return m_preCountHasBeenSet;
}

string DescribeUnPreDomainDetailResponse::GetRegTime() const
{
    return m_regTime;
}

bool DescribeUnPreDomainDetailResponse::RegTimeHasBeenSet() const
{
    return m_regTimeHasBeenSet;
}

string DescribeUnPreDomainDetailResponse::GetDeleteTime() const
{
    return m_deleteTime;
}

bool DescribeUnPreDomainDetailResponse::DeleteTimeHasBeenSet() const
{
    return m_deleteTimeHasBeenSet;
}

string DescribeUnPreDomainDetailResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool DescribeUnPreDomainDetailResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string DescribeUnPreDomainDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeUnPreDomainDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

double DescribeUnPreDomainDetailResponse::GetCurrentPrice() const
{
    return m_currentPrice;
}

bool DescribeUnPreDomainDetailResponse::CurrentPriceHasBeenSet() const
{
    return m_currentPriceHasBeenSet;
}

double DescribeUnPreDomainDetailResponse::GetAppointBondPrice() const
{
    return m_appointBondPrice;
}

bool DescribeUnPreDomainDetailResponse::AppointBondPriceHasBeenSet() const
{
    return m_appointBondPriceHasBeenSet;
}

bool DescribeUnPreDomainDetailResponse::GetIsAppoint() const
{
    return m_isAppoint;
}

bool DescribeUnPreDomainDetailResponse::IsAppointHasBeenSet() const
{
    return m_isAppointHasBeenSet;
}

string DescribeUnPreDomainDetailResponse::GetBusinessId() const
{
    return m_businessId;
}

bool DescribeUnPreDomainDetailResponse::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

bool DescribeUnPreDomainDetailResponse::GetIsDomainUser() const
{
    return m_isDomainUser;
}

bool DescribeUnPreDomainDetailResponse::IsDomainUserHasBeenSet() const
{
    return m_isDomainUserHasBeenSet;
}



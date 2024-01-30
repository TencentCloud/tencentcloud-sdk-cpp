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

#include <tencentcloud/trro/v20220325/model/GetLicenseStatResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

GetLicenseStatResponse::GetLicenseStatResponse() :
    m_validHasBeenSet(false),
    m_boundHasBeenSet(false),
    m_unBoundHasBeenSet(false),
    m_expireHasBeenSet(false),
    m_monthlyExpireHasBeenSet(false)
{
}

CoreInternalOutcome GetLicenseStatResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Valid") && !rsp["Valid"].IsNull())
    {
        if (!rsp["Valid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Valid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_valid = rsp["Valid"].GetInt64();
        m_validHasBeenSet = true;
    }

    if (rsp.HasMember("Bound") && !rsp["Bound"].IsNull())
    {
        if (!rsp["Bound"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Bound` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bound = rsp["Bound"].GetInt64();
        m_boundHasBeenSet = true;
    }

    if (rsp.HasMember("UnBound") && !rsp["UnBound"].IsNull())
    {
        if (!rsp["UnBound"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UnBound` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unBound = rsp["UnBound"].GetInt64();
        m_unBoundHasBeenSet = true;
    }

    if (rsp.HasMember("Expire") && !rsp["Expire"].IsNull())
    {
        if (!rsp["Expire"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Expire` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expire = rsp["Expire"].GetInt64();
        m_expireHasBeenSet = true;
    }

    if (rsp.HasMember("MonthlyExpire") && !rsp["MonthlyExpire"].IsNull())
    {
        if (!rsp["MonthlyExpire"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonthlyExpire` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monthlyExpire = rsp["MonthlyExpire"].GetInt64();
        m_monthlyExpireHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetLicenseStatResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_validHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Valid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_valid, allocator);
    }

    if (m_boundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bound, allocator);
    }

    if (m_unBoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnBound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unBound, allocator);
    }

    if (m_expireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expire";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expire, allocator);
    }

    if (m_monthlyExpireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonthlyExpire";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monthlyExpire, allocator);
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


int64_t GetLicenseStatResponse::GetValid() const
{
    return m_valid;
}

bool GetLicenseStatResponse::ValidHasBeenSet() const
{
    return m_validHasBeenSet;
}

int64_t GetLicenseStatResponse::GetBound() const
{
    return m_bound;
}

bool GetLicenseStatResponse::BoundHasBeenSet() const
{
    return m_boundHasBeenSet;
}

int64_t GetLicenseStatResponse::GetUnBound() const
{
    return m_unBound;
}

bool GetLicenseStatResponse::UnBoundHasBeenSet() const
{
    return m_unBoundHasBeenSet;
}

int64_t GetLicenseStatResponse::GetExpire() const
{
    return m_expire;
}

bool GetLicenseStatResponse::ExpireHasBeenSet() const
{
    return m_expireHasBeenSet;
}

int64_t GetLicenseStatResponse::GetMonthlyExpire() const
{
    return m_monthlyExpire;
}

bool GetLicenseStatResponse::MonthlyExpireHasBeenSet() const
{
    return m_monthlyExpireHasBeenSet;
}



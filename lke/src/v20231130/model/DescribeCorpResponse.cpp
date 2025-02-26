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

#include <tencentcloud/lke/v20231130/model/DescribeCorpResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

DescribeCorpResponse::DescribeCorpResponse() :
    m_corpBizIdHasBeenSet(false),
    m_robotQuotaHasBeenSet(false),
    m_fullNameHasBeenSet(false),
    m_isTrialHasBeenSet(false),
    m_isTrialExpiredHasBeenSet(false),
    m_availableAppQuotaHasBeenSet(false),
    m_isSupportCustomModelHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCorpResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CorpBizId") && !rsp["CorpBizId"].IsNull())
    {
        if (!rsp["CorpBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CorpBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_corpBizId = string(rsp["CorpBizId"].GetString());
        m_corpBizIdHasBeenSet = true;
    }

    if (rsp.HasMember("RobotQuota") && !rsp["RobotQuota"].IsNull())
    {
        if (!rsp["RobotQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RobotQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_robotQuota = rsp["RobotQuota"].GetUint64();
        m_robotQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("FullName") && !rsp["FullName"].IsNull())
    {
        if (!rsp["FullName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FullName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullName = string(rsp["FullName"].GetString());
        m_fullNameHasBeenSet = true;
    }

    if (rsp.HasMember("IsTrial") && !rsp["IsTrial"].IsNull())
    {
        if (!rsp["IsTrial"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsTrial` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isTrial = rsp["IsTrial"].GetBool();
        m_isTrialHasBeenSet = true;
    }

    if (rsp.HasMember("IsTrialExpired") && !rsp["IsTrialExpired"].IsNull())
    {
        if (!rsp["IsTrialExpired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsTrialExpired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isTrialExpired = rsp["IsTrialExpired"].GetBool();
        m_isTrialExpiredHasBeenSet = true;
    }

    if (rsp.HasMember("AvailableAppQuota") && !rsp["AvailableAppQuota"].IsNull())
    {
        if (!rsp["AvailableAppQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableAppQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_availableAppQuota = rsp["AvailableAppQuota"].GetUint64();
        m_availableAppQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("IsSupportCustomModel") && !rsp["IsSupportCustomModel"].IsNull())
    {
        if (!rsp["IsSupportCustomModel"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsSupportCustomModel` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportCustomModel = rsp["IsSupportCustomModel"].GetBool();
        m_isSupportCustomModelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCorpResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_corpBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_corpBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_robotQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RobotQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_robotQuota, allocator);
    }

    if (m_fullNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullName.c_str(), allocator).Move(), allocator);
    }

    if (m_isTrialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTrial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTrial, allocator);
    }

    if (m_isTrialExpiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTrialExpired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTrialExpired, allocator);
    }

    if (m_availableAppQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableAppQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableAppQuota, allocator);
    }

    if (m_isSupportCustomModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportCustomModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportCustomModel, allocator);
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


string DescribeCorpResponse::GetCorpBizId() const
{
    return m_corpBizId;
}

bool DescribeCorpResponse::CorpBizIdHasBeenSet() const
{
    return m_corpBizIdHasBeenSet;
}

uint64_t DescribeCorpResponse::GetRobotQuota() const
{
    return m_robotQuota;
}

bool DescribeCorpResponse::RobotQuotaHasBeenSet() const
{
    return m_robotQuotaHasBeenSet;
}

string DescribeCorpResponse::GetFullName() const
{
    return m_fullName;
}

bool DescribeCorpResponse::FullNameHasBeenSet() const
{
    return m_fullNameHasBeenSet;
}

bool DescribeCorpResponse::GetIsTrial() const
{
    return m_isTrial;
}

bool DescribeCorpResponse::IsTrialHasBeenSet() const
{
    return m_isTrialHasBeenSet;
}

bool DescribeCorpResponse::GetIsTrialExpired() const
{
    return m_isTrialExpired;
}

bool DescribeCorpResponse::IsTrialExpiredHasBeenSet() const
{
    return m_isTrialExpiredHasBeenSet;
}

uint64_t DescribeCorpResponse::GetAvailableAppQuota() const
{
    return m_availableAppQuota;
}

bool DescribeCorpResponse::AvailableAppQuotaHasBeenSet() const
{
    return m_availableAppQuotaHasBeenSet;
}

bool DescribeCorpResponse::GetIsSupportCustomModel() const
{
    return m_isSupportCustomModel;
}

bool DescribeCorpResponse::IsSupportCustomModelHasBeenSet() const
{
    return m_isSupportCustomModelHasBeenSet;
}



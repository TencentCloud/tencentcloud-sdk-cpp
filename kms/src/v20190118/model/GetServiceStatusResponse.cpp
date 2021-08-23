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

#include <tencentcloud/kms/v20190118/model/GetServiceStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

GetServiceStatusResponse::GetServiceStatusResponse() :
    m_serviceEnabledHasBeenSet(false),
    m_invalidTypeHasBeenSet(false),
    m_userLevelHasBeenSet(false),
    m_proExpireTimeHasBeenSet(false),
    m_proRenewFlagHasBeenSet(false),
    m_proResourceIdHasBeenSet(false)
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

    if (rsp.HasMember("UserLevel") && !rsp["UserLevel"].IsNull())
    {
        if (!rsp["UserLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userLevel = rsp["UserLevel"].GetUint64();
        m_userLevelHasBeenSet = true;
    }

    if (rsp.HasMember("ProExpireTime") && !rsp["ProExpireTime"].IsNull())
    {
        if (!rsp["ProExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_proExpireTime = rsp["ProExpireTime"].GetUint64();
        m_proExpireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ProRenewFlag") && !rsp["ProRenewFlag"].IsNull())
    {
        if (!rsp["ProRenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProRenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_proRenewFlag = rsp["ProRenewFlag"].GetUint64();
        m_proRenewFlagHasBeenSet = true;
    }

    if (rsp.HasMember("ProResourceId") && !rsp["ProResourceId"].IsNull())
    {
        if (!rsp["ProResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proResourceId = string(rsp["ProResourceId"].GetString());
        m_proResourceIdHasBeenSet = true;
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

    if (m_userLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userLevel, allocator);
    }

    if (m_proExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proExpireTime, allocator);
    }

    if (m_proRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proRenewFlag, allocator);
    }

    if (m_proResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proResourceId.c_str(), allocator).Move(), allocator);
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

uint64_t GetServiceStatusResponse::GetUserLevel() const
{
    return m_userLevel;
}

bool GetServiceStatusResponse::UserLevelHasBeenSet() const
{
    return m_userLevelHasBeenSet;
}

uint64_t GetServiceStatusResponse::GetProExpireTime() const
{
    return m_proExpireTime;
}

bool GetServiceStatusResponse::ProExpireTimeHasBeenSet() const
{
    return m_proExpireTimeHasBeenSet;
}

uint64_t GetServiceStatusResponse::GetProRenewFlag() const
{
    return m_proRenewFlag;
}

bool GetServiceStatusResponse::ProRenewFlagHasBeenSet() const
{
    return m_proRenewFlagHasBeenSet;
}

string GetServiceStatusResponse::GetProResourceId() const
{
    return m_proResourceId;
}

bool GetServiceStatusResponse::ProResourceIdHasBeenSet() const
{
    return m_proResourceIdHasBeenSet;
}



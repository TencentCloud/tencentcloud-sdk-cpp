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

#include <tencentcloud/cpdp/v20190820/model/GetPayRollAuthResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

GetPayRollAuthResponse::GetPayRollAuthResponse() :
    m_authStatusHasBeenSet(false),
    m_authTimeHasBeenSet(false),
    m_cancelAuthTimeHasBeenSet(false),
    m_merchantIdHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_subMerchantIdHasBeenSet(false)
{
}

CoreInternalOutcome GetPayRollAuthResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AuthStatus") && !rsp["AuthStatus"].IsNull())
    {
        if (!rsp["AuthStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authStatus = string(rsp["AuthStatus"].GetString());
        m_authStatusHasBeenSet = true;
    }

    if (rsp.HasMember("AuthTime") && !rsp["AuthTime"].IsNull())
    {
        if (!rsp["AuthTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authTime = string(rsp["AuthTime"].GetString());
        m_authTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CancelAuthTime") && !rsp["CancelAuthTime"].IsNull())
    {
        if (!rsp["CancelAuthTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CancelAuthTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cancelAuthTime = string(rsp["CancelAuthTime"].GetString());
        m_cancelAuthTimeHasBeenSet = true;
    }

    if (rsp.HasMember("MerchantId") && !rsp["MerchantId"].IsNull())
    {
        if (!rsp["MerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantId = string(rsp["MerchantId"].GetString());
        m_merchantIdHasBeenSet = true;
    }

    if (rsp.HasMember("OpenId") && !rsp["OpenId"].IsNull())
    {
        if (!rsp["OpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openId = string(rsp["OpenId"].GetString());
        m_openIdHasBeenSet = true;
    }

    if (rsp.HasMember("SubMerchantId") && !rsp["SubMerchantId"].IsNull())
    {
        if (!rsp["SubMerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubMerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subMerchantId = string(rsp["SubMerchantId"].GetString());
        m_subMerchantIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetPayRollAuthResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_authStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_authTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cancelAuthTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CancelAuthTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cancelAuthTime.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_subMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subMerchantId.c_str(), allocator).Move(), allocator);
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


string GetPayRollAuthResponse::GetAuthStatus() const
{
    return m_authStatus;
}

bool GetPayRollAuthResponse::AuthStatusHasBeenSet() const
{
    return m_authStatusHasBeenSet;
}

string GetPayRollAuthResponse::GetAuthTime() const
{
    return m_authTime;
}

bool GetPayRollAuthResponse::AuthTimeHasBeenSet() const
{
    return m_authTimeHasBeenSet;
}

string GetPayRollAuthResponse::GetCancelAuthTime() const
{
    return m_cancelAuthTime;
}

bool GetPayRollAuthResponse::CancelAuthTimeHasBeenSet() const
{
    return m_cancelAuthTimeHasBeenSet;
}

string GetPayRollAuthResponse::GetMerchantId() const
{
    return m_merchantId;
}

bool GetPayRollAuthResponse::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string GetPayRollAuthResponse::GetOpenId() const
{
    return m_openId;
}

bool GetPayRollAuthResponse::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string GetPayRollAuthResponse::GetSubMerchantId() const
{
    return m_subMerchantId;
}

bool GetPayRollAuthResponse::SubMerchantIdHasBeenSet() const
{
    return m_subMerchantIdHasBeenSet;
}



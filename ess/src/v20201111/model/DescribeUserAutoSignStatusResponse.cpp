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

#include <tencentcloud/ess/v20201111/model/DescribeUserAutoSignStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

DescribeUserAutoSignStatusResponse::DescribeUserAutoSignStatusResponse() :
    m_isOpenHasBeenSet(false),
    m_licenseFromHasBeenSet(false),
    m_licenseToHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_sealIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUserAutoSignStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("IsOpen") && !rsp["IsOpen"].IsNull())
    {
        if (!rsp["IsOpen"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsOpen` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isOpen = rsp["IsOpen"].GetBool();
        m_isOpenHasBeenSet = true;
    }

    if (rsp.HasMember("LicenseFrom") && !rsp["LicenseFrom"].IsNull())
    {
        if (!rsp["LicenseFrom"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseFrom` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseFrom = rsp["LicenseFrom"].GetInt64();
        m_licenseFromHasBeenSet = true;
    }

    if (rsp.HasMember("LicenseTo") && !rsp["LicenseTo"].IsNull())
    {
        if (!rsp["LicenseTo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseTo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseTo = rsp["LicenseTo"].GetInt64();
        m_licenseToHasBeenSet = true;
    }

    if (rsp.HasMember("LicenseType") && !rsp["LicenseType"].IsNull())
    {
        if (!rsp["LicenseType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseType = rsp["LicenseType"].GetInt64();
        m_licenseTypeHasBeenSet = true;
    }

    if (rsp.HasMember("SealId") && !rsp["SealId"].IsNull())
    {
        if (!rsp["SealId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SealId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sealId = string(rsp["SealId"].GetString());
        m_sealIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUserAutoSignStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_isOpenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOpen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOpen, allocator);
    }

    if (m_licenseFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseFrom, allocator);
    }

    if (m_licenseToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseTo, allocator);
    }

    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseType, allocator);
    }

    if (m_sealIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sealId.c_str(), allocator).Move(), allocator);
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


bool DescribeUserAutoSignStatusResponse::GetIsOpen() const
{
    return m_isOpen;
}

bool DescribeUserAutoSignStatusResponse::IsOpenHasBeenSet() const
{
    return m_isOpenHasBeenSet;
}

int64_t DescribeUserAutoSignStatusResponse::GetLicenseFrom() const
{
    return m_licenseFrom;
}

bool DescribeUserAutoSignStatusResponse::LicenseFromHasBeenSet() const
{
    return m_licenseFromHasBeenSet;
}

int64_t DescribeUserAutoSignStatusResponse::GetLicenseTo() const
{
    return m_licenseTo;
}

bool DescribeUserAutoSignStatusResponse::LicenseToHasBeenSet() const
{
    return m_licenseToHasBeenSet;
}

int64_t DescribeUserAutoSignStatusResponse::GetLicenseType() const
{
    return m_licenseType;
}

bool DescribeUserAutoSignStatusResponse::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

string DescribeUserAutoSignStatusResponse::GetSealId() const
{
    return m_sealId;
}

bool DescribeUserAutoSignStatusResponse::SealIdHasBeenSet() const
{
    return m_sealIdHasBeenSet;
}



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

#include <tencentcloud/mna/v20210119/model/GetApplicationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

GetApplicationResponse::GetApplicationResponse() :
    m_mpApplicationIdHasBeenSet(false),
    m_mpApplicationKeyHasBeenSet(false),
    m_mpApplicationNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_accessScopeHasBeenSet(false)
{
}

CoreInternalOutcome GetApplicationResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MpApplicationId") && !rsp["MpApplicationId"].IsNull())
    {
        if (!rsp["MpApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MpApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mpApplicationId = string(rsp["MpApplicationId"].GetString());
        m_mpApplicationIdHasBeenSet = true;
    }

    if (rsp.HasMember("MpApplicationKey") && !rsp["MpApplicationKey"].IsNull())
    {
        if (!rsp["MpApplicationKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MpApplicationKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mpApplicationKey = string(rsp["MpApplicationKey"].GetString());
        m_mpApplicationKeyHasBeenSet = true;
    }

    if (rsp.HasMember("MpApplicationName") && !rsp["MpApplicationName"].IsNull())
    {
        if (!rsp["MpApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MpApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mpApplicationName = string(rsp["MpApplicationName"].GetString());
        m_mpApplicationNameHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (rsp.HasMember("AccessScope") && !rsp["AccessScope"].IsNull())
    {
        if (!rsp["AccessScope"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessScope` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessScope = rsp["AccessScope"].GetInt64();
        m_accessScopeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetApplicationResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_mpApplicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MpApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mpApplicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_mpApplicationKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MpApplicationKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mpApplicationKey.c_str(), allocator).Move(), allocator);
    }

    if (m_mpApplicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MpApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mpApplicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_accessScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessScope, allocator);
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


string GetApplicationResponse::GetMpApplicationId() const
{
    return m_mpApplicationId;
}

bool GetApplicationResponse::MpApplicationIdHasBeenSet() const
{
    return m_mpApplicationIdHasBeenSet;
}

string GetApplicationResponse::GetMpApplicationKey() const
{
    return m_mpApplicationKey;
}

bool GetApplicationResponse::MpApplicationKeyHasBeenSet() const
{
    return m_mpApplicationKeyHasBeenSet;
}

string GetApplicationResponse::GetMpApplicationName() const
{
    return m_mpApplicationName;
}

bool GetApplicationResponse::MpApplicationNameHasBeenSet() const
{
    return m_mpApplicationNameHasBeenSet;
}

string GetApplicationResponse::GetRemark() const
{
    return m_remark;
}

bool GetApplicationResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t GetApplicationResponse::GetAccessScope() const
{
    return m_accessScope;
}

bool GetApplicationResponse::AccessScopeHasBeenSet() const
{
    return m_accessScopeHasBeenSet;
}



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

#include <tencentcloud/lke/v20231130/model/GetAppSecretResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

GetAppSecretResponse::GetAppSecretResponse() :
    m_appKeyHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_isReleaseHasBeenSet(false),
    m_hasPermissionHasBeenSet(false)
{
}

CoreInternalOutcome GetAppSecretResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AppKey") && !rsp["AppKey"].IsNull())
    {
        if (!rsp["AppKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appKey = string(rsp["AppKey"].GetString());
        m_appKeyHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("IsRelease") && !rsp["IsRelease"].IsNull())
    {
        if (!rsp["IsRelease"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsRelease` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRelease = rsp["IsRelease"].GetBool();
        m_isReleaseHasBeenSet = true;
    }

    if (rsp.HasMember("HasPermission") && !rsp["HasPermission"].IsNull())
    {
        if (!rsp["HasPermission"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HasPermission` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasPermission = rsp["HasPermission"].GetBool();
        m_hasPermissionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetAppSecretResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_appKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appKey.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isReleaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRelease";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRelease, allocator);
    }

    if (m_hasPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasPermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasPermission, allocator);
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


string GetAppSecretResponse::GetAppKey() const
{
    return m_appKey;
}

bool GetAppSecretResponse::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

string GetAppSecretResponse::GetCreateTime() const
{
    return m_createTime;
}

bool GetAppSecretResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

bool GetAppSecretResponse::GetIsRelease() const
{
    return m_isRelease;
}

bool GetAppSecretResponse::IsReleaseHasBeenSet() const
{
    return m_isReleaseHasBeenSet;
}

bool GetAppSecretResponse::GetHasPermission() const
{
    return m_hasPermission;
}

bool GetAppSecretResponse::HasPermissionHasBeenSet() const
{
    return m_hasPermissionHasBeenSet;
}



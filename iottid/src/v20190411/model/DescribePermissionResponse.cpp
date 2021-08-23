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

#include <tencentcloud/iottid/v20190411/model/DescribePermissionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iottid::V20190411::Model;
using namespace std;

DescribePermissionResponse::DescribePermissionResponse() :
    m_enterpriseUserHasBeenSet(false),
    m_downloadPermissionHasBeenSet(false),
    m_usePermissionHasBeenSet(false)
{
}

CoreInternalOutcome DescribePermissionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EnterpriseUser") && !rsp["EnterpriseUser"].IsNull())
    {
        if (!rsp["EnterpriseUser"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseUser` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enterpriseUser = rsp["EnterpriseUser"].GetBool();
        m_enterpriseUserHasBeenSet = true;
    }

    if (rsp.HasMember("DownloadPermission") && !rsp["DownloadPermission"].IsNull())
    {
        if (!rsp["DownloadPermission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadPermission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadPermission = string(rsp["DownloadPermission"].GetString());
        m_downloadPermissionHasBeenSet = true;
    }

    if (rsp.HasMember("UsePermission") && !rsp["UsePermission"].IsNull())
    {
        if (!rsp["UsePermission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsePermission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usePermission = string(rsp["UsePermission"].GetString());
        m_usePermissionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePermissionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_enterpriseUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enterpriseUser, allocator);
    }

    if (m_downloadPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadPermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadPermission.c_str(), allocator).Move(), allocator);
    }

    if (m_usePermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsePermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usePermission.c_str(), allocator).Move(), allocator);
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


bool DescribePermissionResponse::GetEnterpriseUser() const
{
    return m_enterpriseUser;
}

bool DescribePermissionResponse::EnterpriseUserHasBeenSet() const
{
    return m_enterpriseUserHasBeenSet;
}

string DescribePermissionResponse::GetDownloadPermission() const
{
    return m_downloadPermission;
}

bool DescribePermissionResponse::DownloadPermissionHasBeenSet() const
{
    return m_downloadPermissionHasBeenSet;
}

string DescribePermissionResponse::GetUsePermission() const
{
    return m_usePermission;
}

bool DescribePermissionResponse::UsePermissionHasBeenSet() const
{
    return m_usePermissionHasBeenSet;
}



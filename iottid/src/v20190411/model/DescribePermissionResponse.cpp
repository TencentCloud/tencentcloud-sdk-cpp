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
using namespace rapidjson;
using namespace std;

DescribePermissionResponse::DescribePermissionResponse() :
    m_enterpriseUserHasBeenSet(false),
    m_downloadPermissionHasBeenSet(false),
    m_usePermissionHasBeenSet(false)
{
}

CoreInternalOutcome DescribePermissionResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("EnterpriseUser") && !rsp["EnterpriseUser"].IsNull())
    {
        if (!rsp["EnterpriseUser"].IsBool())
        {
            return CoreInternalOutcome(Error("response `EnterpriseUser` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enterpriseUser = rsp["EnterpriseUser"].GetBool();
        m_enterpriseUserHasBeenSet = true;
    }

    if (rsp.HasMember("DownloadPermission") && !rsp["DownloadPermission"].IsNull())
    {
        if (!rsp["DownloadPermission"].IsString())
        {
            return CoreInternalOutcome(Error("response `DownloadPermission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadPermission = string(rsp["DownloadPermission"].GetString());
        m_downloadPermissionHasBeenSet = true;
    }

    if (rsp.HasMember("UsePermission") && !rsp["UsePermission"].IsNull())
    {
        if (!rsp["UsePermission"].IsString())
        {
            return CoreInternalOutcome(Error("response `UsePermission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usePermission = string(rsp["UsePermission"].GetString());
        m_usePermissionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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



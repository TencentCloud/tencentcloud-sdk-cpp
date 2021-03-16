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

#include <tencentcloud/tcb/v20180608/model/CreateCloudBaseRunServerVersionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace rapidjson;
using namespace std;

CreateCloudBaseRunServerVersionResponse::CreateCloudBaseRunServerVersionResponse() :
    m_resultHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_runIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateCloudBaseRunServerVersionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsString())
        {
            return CoreInternalOutcome(Error("response `Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(rsp["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (rsp.HasMember("VersionName") && !rsp["VersionName"].IsNull())
    {
        if (!rsp["VersionName"].IsString())
        {
            return CoreInternalOutcome(Error("response `VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(rsp["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (rsp.HasMember("RunId") && !rsp["RunId"].IsNull())
    {
        if (!rsp["RunId"].IsString())
        {
            return CoreInternalOutcome(Error("response `RunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runId = string(rsp["RunId"].GetString());
        m_runIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CreateCloudBaseRunServerVersionResponse::GetResult() const
{
    return m_result;
}

bool CreateCloudBaseRunServerVersionResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string CreateCloudBaseRunServerVersionResponse::GetVersionName() const
{
    return m_versionName;
}

bool CreateCloudBaseRunServerVersionResponse::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

string CreateCloudBaseRunServerVersionResponse::GetRunId() const
{
    return m_runId;
}

bool CreateCloudBaseRunServerVersionResponse::RunIdHasBeenSet() const
{
    return m_runIdHasBeenSet;
}



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

#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseBuildServiceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace rapidjson;
using namespace std;

DescribeCloudBaseBuildServiceResponse::DescribeCloudBaseBuildServiceResponse() :
    m_uploadUrlHasBeenSet(false),
    m_uploadHeadersHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_packageVersionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCloudBaseBuildServiceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("UploadUrl") && !rsp["UploadUrl"].IsNull())
    {
        if (!rsp["UploadUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `UploadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadUrl = string(rsp["UploadUrl"].GetString());
        m_uploadUrlHasBeenSet = true;
    }

    if (rsp.HasMember("UploadHeaders") && !rsp["UploadHeaders"].IsNull())
    {
        if (!rsp["UploadHeaders"].IsArray())
            return CoreInternalOutcome(Error("response `UploadHeaders` is not array type"));

        const Value &tmpValue = rsp["UploadHeaders"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_uploadHeaders.push_back(item);
        }
        m_uploadHeadersHasBeenSet = true;
    }

    if (rsp.HasMember("PackageName") && !rsp["PackageName"].IsNull())
    {
        if (!rsp["PackageName"].IsString())
        {
            return CoreInternalOutcome(Error("response `PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(rsp["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (rsp.HasMember("PackageVersion") && !rsp["PackageVersion"].IsNull())
    {
        if (!rsp["PackageVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `PackageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageVersion = string(rsp["PackageVersion"].GetString());
        m_packageVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeCloudBaseBuildServiceResponse::GetUploadUrl() const
{
    return m_uploadUrl;
}

bool DescribeCloudBaseBuildServiceResponse::UploadUrlHasBeenSet() const
{
    return m_uploadUrlHasBeenSet;
}

vector<KVPair> DescribeCloudBaseBuildServiceResponse::GetUploadHeaders() const
{
    return m_uploadHeaders;
}

bool DescribeCloudBaseBuildServiceResponse::UploadHeadersHasBeenSet() const
{
    return m_uploadHeadersHasBeenSet;
}

string DescribeCloudBaseBuildServiceResponse::GetPackageName() const
{
    return m_packageName;
}

bool DescribeCloudBaseBuildServiceResponse::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string DescribeCloudBaseBuildServiceResponse::GetPackageVersion() const
{
    return m_packageVersion;
}

bool DescribeCloudBaseBuildServiceResponse::PackageVersionHasBeenSet() const
{
    return m_packageVersionHasBeenSet;
}



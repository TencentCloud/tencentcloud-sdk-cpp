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

#include <tencentcloud/lcic/v20220817/model/DescribeEditVersionsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

DescribeEditVersionsResponse::DescribeEditVersionsResponse() :
    m_classIdHasBeenSet(false),
    m_latestVersionNoHasBeenSet(false),
    m_mainVersionHasBeenSet(false),
    m_versionsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeEditVersionsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ClassId") && !rsp["ClassId"].IsNull())
    {
        if (!rsp["ClassId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_classId = rsp["ClassId"].GetUint64();
        m_classIdHasBeenSet = true;
    }

    if (rsp.HasMember("LatestVersionNo") && !rsp["LatestVersionNo"].IsNull())
    {
        if (!rsp["LatestVersionNo"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LatestVersionNo` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_latestVersionNo = rsp["LatestVersionNo"].GetUint64();
        m_latestVersionNoHasBeenSet = true;
    }

    if (rsp.HasMember("MainVersion") && !rsp["MainVersion"].IsNull())
    {
        if (!rsp["MainVersion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MainVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mainVersion = rsp["MainVersion"].GetUint64();
        m_mainVersionHasBeenSet = true;
    }

    if (rsp.HasMember("Versions") && !rsp["Versions"].IsNull())
    {
        if (!rsp["Versions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Versions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Versions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EditVersions item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_versions.push_back(item);
        }
        m_versionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeEditVersionsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_classIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_classId, allocator);
    }

    if (m_latestVersionNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestVersionNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latestVersionNo, allocator);
    }

    if (m_mainVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mainVersion, allocator);
    }

    if (m_versionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Versions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_versions.begin(); itr != m_versions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


uint64_t DescribeEditVersionsResponse::GetClassId() const
{
    return m_classId;
}

bool DescribeEditVersionsResponse::ClassIdHasBeenSet() const
{
    return m_classIdHasBeenSet;
}

uint64_t DescribeEditVersionsResponse::GetLatestVersionNo() const
{
    return m_latestVersionNo;
}

bool DescribeEditVersionsResponse::LatestVersionNoHasBeenSet() const
{
    return m_latestVersionNoHasBeenSet;
}

uint64_t DescribeEditVersionsResponse::GetMainVersion() const
{
    return m_mainVersion;
}

bool DescribeEditVersionsResponse::MainVersionHasBeenSet() const
{
    return m_mainVersionHasBeenSet;
}

vector<EditVersions> DescribeEditVersionsResponse::GetVersions() const
{
    return m_versions;
}

bool DescribeEditVersionsResponse::VersionsHasBeenSet() const
{
    return m_versionsHasBeenSet;
}



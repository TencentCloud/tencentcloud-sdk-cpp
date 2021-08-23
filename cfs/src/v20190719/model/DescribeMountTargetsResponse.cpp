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

#include <tencentcloud/cfs/v20190719/model/DescribeMountTargetsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

DescribeMountTargetsResponse::DescribeMountTargetsResponse() :
    m_mountTargetsHasBeenSet(false),
    m_numberOfMountTargetsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMountTargetsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MountTargets") && !rsp["MountTargets"].IsNull())
    {
        if (!rsp["MountTargets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MountTargets` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MountTargets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MountInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mountTargets.push_back(item);
        }
        m_mountTargetsHasBeenSet = true;
    }

    if (rsp.HasMember("NumberOfMountTargets") && !rsp["NumberOfMountTargets"].IsNull())
    {
        if (!rsp["NumberOfMountTargets"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NumberOfMountTargets` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numberOfMountTargets = rsp["NumberOfMountTargets"].GetInt64();
        m_numberOfMountTargetsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMountTargetsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_mountTargetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountTargets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mountTargets.begin(); itr != m_mountTargets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_numberOfMountTargetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumberOfMountTargets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numberOfMountTargets, allocator);
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


vector<MountInfo> DescribeMountTargetsResponse::GetMountTargets() const
{
    return m_mountTargets;
}

bool DescribeMountTargetsResponse::MountTargetsHasBeenSet() const
{
    return m_mountTargetsHasBeenSet;
}

int64_t DescribeMountTargetsResponse::GetNumberOfMountTargets() const
{
    return m_numberOfMountTargets;
}

bool DescribeMountTargetsResponse::NumberOfMountTargetsHasBeenSet() const
{
    return m_numberOfMountTargetsHasBeenSet;
}



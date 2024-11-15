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

#include <tencentcloud/cdz/v20221123/model/DescribeCloudDedicatedZoneResourceSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdz::V20221123::Model;
using namespace std;

DescribeCloudDedicatedZoneResourceSummaryResponse::DescribeCloudDedicatedZoneResourceSummaryResponse() :
    m_resourceSummarySetHasBeenSet(false),
    m_extraInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCloudDedicatedZoneResourceSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ResourceSummarySet") && !rsp["ResourceSummarySet"].IsNull())
    {
        if (!rsp["ResourceSummarySet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceSummarySet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ResourceSummarySet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudDedicatedZoneResourceSummaryInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceSummarySet.push_back(item);
        }
        m_resourceSummarySetHasBeenSet = true;
    }

    if (rsp.HasMember("ExtraInfo") && !rsp["ExtraInfo"].IsNull())
    {
        if (!rsp["ExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extraInfo.Deserialize(rsp["ExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extraInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCloudDedicatedZoneResourceSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_resourceSummarySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceSummarySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceSummarySet.begin(); itr != m_resourceSummarySet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_extraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extraInfo.ToJsonObject(value[key.c_str()], allocator);
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


vector<CloudDedicatedZoneResourceSummaryInfo> DescribeCloudDedicatedZoneResourceSummaryResponse::GetResourceSummarySet() const
{
    return m_resourceSummarySet;
}

bool DescribeCloudDedicatedZoneResourceSummaryResponse::ResourceSummarySetHasBeenSet() const
{
    return m_resourceSummarySetHasBeenSet;
}

ExtraInfo DescribeCloudDedicatedZoneResourceSummaryResponse::GetExtraInfo() const
{
    return m_extraInfo;
}

bool DescribeCloudDedicatedZoneResourceSummaryResponse::ExtraInfoHasBeenSet() const
{
    return m_extraInfoHasBeenSet;
}



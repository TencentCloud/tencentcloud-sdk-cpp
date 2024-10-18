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

#include <tencentcloud/emr/v20190103/model/DescribeHDFSStorageInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeHDFSStorageInfoResponse::DescribeHDFSStorageInfoResponse() :
    m_sampleTimeHasBeenSet(false),
    m_storageSummaryDistributionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeHDFSStorageInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SampleTime") && !rsp["SampleTime"].IsNull())
    {
        if (!rsp["SampleTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SampleTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sampleTime = rsp["SampleTime"].GetInt64();
        m_sampleTimeHasBeenSet = true;
    }

    if (rsp.HasMember("StorageSummaryDistribution") && !rsp["StorageSummaryDistribution"].IsNull())
    {
        if (!rsp["StorageSummaryDistribution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StorageSummaryDistribution` is not array type"));

        const rapidjson::Value &tmpValue = rsp["StorageSummaryDistribution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StorageSummaryDistribution item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_storageSummaryDistribution.push_back(item);
        }
        m_storageSummaryDistributionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeHDFSStorageInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_sampleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sampleTime, allocator);
    }

    if (m_storageSummaryDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSummaryDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_storageSummaryDistribution.begin(); itr != m_storageSummaryDistribution.end(); ++itr, ++i)
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


int64_t DescribeHDFSStorageInfoResponse::GetSampleTime() const
{
    return m_sampleTime;
}

bool DescribeHDFSStorageInfoResponse::SampleTimeHasBeenSet() const
{
    return m_sampleTimeHasBeenSet;
}

vector<StorageSummaryDistribution> DescribeHDFSStorageInfoResponse::GetStorageSummaryDistribution() const
{
    return m_storageSummaryDistribution;
}

bool DescribeHDFSStorageInfoResponse::StorageSummaryDistributionHasBeenSet() const
{
    return m_storageSummaryDistributionHasBeenSet;
}



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

#include <tencentcloud/tione/v20211111/model/DescribeDatasetsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DescribeDatasetsResponse::DescribeDatasetsResponse() :
    m_totalCountHasBeenSet(false),
    m_datasetGroupsHasBeenSet(false),
    m_datasetIdNumsHasBeenSet(false),
    m_cFSNotReadyHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDatasetsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("DatasetGroups") && !rsp["DatasetGroups"].IsNull())
    {
        if (!rsp["DatasetGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DatasetGroups` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DatasetGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DatasetGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_datasetGroups.push_back(item);
        }
        m_datasetGroupsHasBeenSet = true;
    }

    if (rsp.HasMember("DatasetIdNums") && !rsp["DatasetIdNums"].IsNull())
    {
        if (!rsp["DatasetIdNums"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetIdNums` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_datasetIdNums = rsp["DatasetIdNums"].GetUint64();
        m_datasetIdNumsHasBeenSet = true;
    }

    if (rsp.HasMember("CFSNotReady") && !rsp["CFSNotReady"].IsNull())
    {
        if (!rsp["CFSNotReady"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CFSNotReady` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_cFSNotReady = rsp["CFSNotReady"].GetBool();
        m_cFSNotReadyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDatasetsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_datasetGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_datasetGroups.begin(); itr != m_datasetGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_datasetIdNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetIdNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_datasetIdNums, allocator);
    }

    if (m_cFSNotReadyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFSNotReady";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cFSNotReady, allocator);
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


uint64_t DescribeDatasetsResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeDatasetsResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<DatasetGroup> DescribeDatasetsResponse::GetDatasetGroups() const
{
    return m_datasetGroups;
}

bool DescribeDatasetsResponse::DatasetGroupsHasBeenSet() const
{
    return m_datasetGroupsHasBeenSet;
}

uint64_t DescribeDatasetsResponse::GetDatasetIdNums() const
{
    return m_datasetIdNums;
}

bool DescribeDatasetsResponse::DatasetIdNumsHasBeenSet() const
{
    return m_datasetIdNumsHasBeenSet;
}

bool DescribeDatasetsResponse::GetCFSNotReady() const
{
    return m_cFSNotReady;
}

bool DescribeDatasetsResponse::CFSNotReadyHasBeenSet() const
{
    return m_cFSNotReadyHasBeenSet;
}



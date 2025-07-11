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

#include <tencentcloud/cat/v20180409/model/DescribeDetailedSingleProbeDataResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

DescribeDetailedSingleProbeDataResponse::DescribeDetailedSingleProbeDataResponse() :
    m_dataSetHasBeenSet(false),
    m_totalNumberHasBeenSet(false),
    m_scrollIDHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDetailedSingleProbeDataResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DataSet") && !rsp["DataSet"].IsNull())
    {
        if (!rsp["DataSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DataSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DetailedSingleDataDefine item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataSet.push_back(item);
        }
        m_dataSetHasBeenSet = true;
    }

    if (rsp.HasMember("TotalNumber") && !rsp["TotalNumber"].IsNull())
    {
        if (!rsp["TotalNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNumber = rsp["TotalNumber"].GetInt64();
        m_totalNumberHasBeenSet = true;
    }

    if (rsp.HasMember("ScrollID") && !rsp["ScrollID"].IsNull())
    {
        if (!rsp["ScrollID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScrollID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scrollID = string(rsp["ScrollID"].GetString());
        m_scrollIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDetailedSingleProbeDataResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dataSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataSet.begin(); itr != m_dataSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNumber, allocator);
    }

    if (m_scrollIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScrollID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scrollID.c_str(), allocator).Move(), allocator);
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


vector<DetailedSingleDataDefine> DescribeDetailedSingleProbeDataResponse::GetDataSet() const
{
    return m_dataSet;
}

bool DescribeDetailedSingleProbeDataResponse::DataSetHasBeenSet() const
{
    return m_dataSetHasBeenSet;
}

int64_t DescribeDetailedSingleProbeDataResponse::GetTotalNumber() const
{
    return m_totalNumber;
}

bool DescribeDetailedSingleProbeDataResponse::TotalNumberHasBeenSet() const
{
    return m_totalNumberHasBeenSet;
}

string DescribeDetailedSingleProbeDataResponse::GetScrollID() const
{
    return m_scrollID;
}

bool DescribeDetailedSingleProbeDataResponse::ScrollIDHasBeenSet() const
{
    return m_scrollIDHasBeenSet;
}



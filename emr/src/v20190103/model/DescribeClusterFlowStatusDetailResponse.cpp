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

#include <tencentcloud/emr/v20190103/model/DescribeClusterFlowStatusDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeClusterFlowStatusDetailResponse::DescribeClusterFlowStatusDetailResponse() :
    m_stageDetailsHasBeenSet(false),
    m_flowDescHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_flowTotalProgressHasBeenSet(false),
    m_flowTotalStatusHasBeenSet(false),
    m_flowExtraDetailHasBeenSet(false),
    m_flowInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeClusterFlowStatusDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("StageDetails") && !rsp["StageDetails"].IsNull())
    {
        if (!rsp["StageDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StageDetails` is not array type"));

        const rapidjson::Value &tmpValue = rsp["StageDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StageInfoDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_stageDetails.push_back(item);
        }
        m_stageDetailsHasBeenSet = true;
    }

    if (rsp.HasMember("FlowDesc") && !rsp["FlowDesc"].IsNull())
    {
        if (!rsp["FlowDesc"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowDesc` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FlowDesc"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlowParamsDesc item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_flowDesc.push_back(item);
        }
        m_flowDescHasBeenSet = true;
    }

    if (rsp.HasMember("FlowName") && !rsp["FlowName"].IsNull())
    {
        if (!rsp["FlowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowName = string(rsp["FlowName"].GetString());
        m_flowNameHasBeenSet = true;
    }

    if (rsp.HasMember("FlowTotalProgress") && !rsp["FlowTotalProgress"].IsNull())
    {
        if (!rsp["FlowTotalProgress"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlowTotalProgress` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_flowTotalProgress = rsp["FlowTotalProgress"].GetDouble();
        m_flowTotalProgressHasBeenSet = true;
    }

    if (rsp.HasMember("FlowTotalStatus") && !rsp["FlowTotalStatus"].IsNull())
    {
        if (!rsp["FlowTotalStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowTotalStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowTotalStatus = rsp["FlowTotalStatus"].GetInt64();
        m_flowTotalStatusHasBeenSet = true;
    }

    if (rsp.HasMember("FlowExtraDetail") && !rsp["FlowExtraDetail"].IsNull())
    {
        if (!rsp["FlowExtraDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowExtraDetail` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FlowExtraDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlowExtraDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_flowExtraDetail.push_back(item);
        }
        m_flowExtraDetailHasBeenSet = true;
    }

    if (rsp.HasMember("FlowInfo") && !rsp["FlowInfo"].IsNull())
    {
        if (!rsp["FlowInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowInfo = string(rsp["FlowInfo"].GetString());
        m_flowInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeClusterFlowStatusDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_stageDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StageDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_stageDetails.begin(); itr != m_stageDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_flowDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowDesc.begin(); itr != m_flowDesc.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_flowTotalProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowTotalProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowTotalProgress, allocator);
    }

    if (m_flowTotalStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowTotalStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowTotalStatus, allocator);
    }

    if (m_flowExtraDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowExtraDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowExtraDetail.begin(); itr != m_flowExtraDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_flowInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowInfo.c_str(), allocator).Move(), allocator);
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


vector<StageInfoDetail> DescribeClusterFlowStatusDetailResponse::GetStageDetails() const
{
    return m_stageDetails;
}

bool DescribeClusterFlowStatusDetailResponse::StageDetailsHasBeenSet() const
{
    return m_stageDetailsHasBeenSet;
}

vector<FlowParamsDesc> DescribeClusterFlowStatusDetailResponse::GetFlowDesc() const
{
    return m_flowDesc;
}

bool DescribeClusterFlowStatusDetailResponse::FlowDescHasBeenSet() const
{
    return m_flowDescHasBeenSet;
}

string DescribeClusterFlowStatusDetailResponse::GetFlowName() const
{
    return m_flowName;
}

bool DescribeClusterFlowStatusDetailResponse::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

double DescribeClusterFlowStatusDetailResponse::GetFlowTotalProgress() const
{
    return m_flowTotalProgress;
}

bool DescribeClusterFlowStatusDetailResponse::FlowTotalProgressHasBeenSet() const
{
    return m_flowTotalProgressHasBeenSet;
}

int64_t DescribeClusterFlowStatusDetailResponse::GetFlowTotalStatus() const
{
    return m_flowTotalStatus;
}

bool DescribeClusterFlowStatusDetailResponse::FlowTotalStatusHasBeenSet() const
{
    return m_flowTotalStatusHasBeenSet;
}

vector<FlowExtraDetail> DescribeClusterFlowStatusDetailResponse::GetFlowExtraDetail() const
{
    return m_flowExtraDetail;
}

bool DescribeClusterFlowStatusDetailResponse::FlowExtraDetailHasBeenSet() const
{
    return m_flowExtraDetailHasBeenSet;
}

string DescribeClusterFlowStatusDetailResponse::GetFlowInfo() const
{
    return m_flowInfo;
}

bool DescribeClusterFlowStatusDetailResponse::FlowInfoHasBeenSet() const
{
    return m_flowInfoHasBeenSet;
}



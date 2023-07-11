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

#include <tencentcloud/ess/v20201111/model/DescribeFlowInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

DescribeFlowInfoResponse::DescribeFlowInfoResponse() :
    m_flowDetailInfosHasBeenSet(false),
    m_flowGroupIdHasBeenSet(false),
    m_flowGroupNameHasBeenSet(false)
{
}

CoreInternalOutcome DescribeFlowInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FlowDetailInfos") && !rsp["FlowDetailInfos"].IsNull())
    {
        if (!rsp["FlowDetailInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowDetailInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FlowDetailInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlowDetailInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_flowDetailInfos.push_back(item);
        }
        m_flowDetailInfosHasBeenSet = true;
    }

    if (rsp.HasMember("FlowGroupId") && !rsp["FlowGroupId"].IsNull())
    {
        if (!rsp["FlowGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowGroupId = string(rsp["FlowGroupId"].GetString());
        m_flowGroupIdHasBeenSet = true;
    }

    if (rsp.HasMember("FlowGroupName") && !rsp["FlowGroupName"].IsNull())
    {
        if (!rsp["FlowGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowGroupName = string(rsp["FlowGroupName"].GetString());
        m_flowGroupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeFlowInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_flowDetailInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowDetailInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowDetailInfos.begin(); itr != m_flowDetailInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_flowGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowGroupName.c_str(), allocator).Move(), allocator);
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


vector<FlowDetailInfo> DescribeFlowInfoResponse::GetFlowDetailInfos() const
{
    return m_flowDetailInfos;
}

bool DescribeFlowInfoResponse::FlowDetailInfosHasBeenSet() const
{
    return m_flowDetailInfosHasBeenSet;
}

string DescribeFlowInfoResponse::GetFlowGroupId() const
{
    return m_flowGroupId;
}

bool DescribeFlowInfoResponse::FlowGroupIdHasBeenSet() const
{
    return m_flowGroupIdHasBeenSet;
}

string DescribeFlowInfoResponse::GetFlowGroupName() const
{
    return m_flowGroupName;
}

bool DescribeFlowInfoResponse::FlowGroupNameHasBeenSet() const
{
    return m_flowGroupNameHasBeenSet;
}



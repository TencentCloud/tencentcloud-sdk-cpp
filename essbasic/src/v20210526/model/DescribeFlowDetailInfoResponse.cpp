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

#include <tencentcloud/essbasic/v20210526/model/DescribeFlowDetailInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

DescribeFlowDetailInfoResponse::DescribeFlowDetailInfoResponse() :
    m_applicationIdHasBeenSet(false),
    m_proxyOrganizationOpenIdHasBeenSet(false),
    m_flowInfoHasBeenSet(false),
    m_flowGroupIdHasBeenSet(false),
    m_flowGroupNameHasBeenSet(false)
{
}

CoreInternalOutcome DescribeFlowDetailInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ApplicationId") && !rsp["ApplicationId"].IsNull())
    {
        if (!rsp["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(rsp["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (rsp.HasMember("ProxyOrganizationOpenId") && !rsp["ProxyOrganizationOpenId"].IsNull())
    {
        if (!rsp["ProxyOrganizationOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyOrganizationOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyOrganizationOpenId = string(rsp["ProxyOrganizationOpenId"].GetString());
        m_proxyOrganizationOpenIdHasBeenSet = true;
    }

    if (rsp.HasMember("FlowInfo") && !rsp["FlowInfo"].IsNull())
    {
        if (!rsp["FlowInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FlowInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlowDetailInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_flowInfo.push_back(item);
        }
        m_flowInfoHasBeenSet = true;
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

string DescribeFlowDetailInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyOrganizationOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyOrganizationOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyOrganizationOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowInfo.begin(); itr != m_flowInfo.end(); ++itr, ++i)
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


string DescribeFlowDetailInfoResponse::GetApplicationId() const
{
    return m_applicationId;
}

bool DescribeFlowDetailInfoResponse::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string DescribeFlowDetailInfoResponse::GetProxyOrganizationOpenId() const
{
    return m_proxyOrganizationOpenId;
}

bool DescribeFlowDetailInfoResponse::ProxyOrganizationOpenIdHasBeenSet() const
{
    return m_proxyOrganizationOpenIdHasBeenSet;
}

vector<FlowDetailInfo> DescribeFlowDetailInfoResponse::GetFlowInfo() const
{
    return m_flowInfo;
}

bool DescribeFlowDetailInfoResponse::FlowInfoHasBeenSet() const
{
    return m_flowInfoHasBeenSet;
}

string DescribeFlowDetailInfoResponse::GetFlowGroupId() const
{
    return m_flowGroupId;
}

bool DescribeFlowDetailInfoResponse::FlowGroupIdHasBeenSet() const
{
    return m_flowGroupIdHasBeenSet;
}

string DescribeFlowDetailInfoResponse::GetFlowGroupName() const
{
    return m_flowGroupName;
}

bool DescribeFlowDetailInfoResponse::FlowGroupNameHasBeenSet() const
{
    return m_flowGroupNameHasBeenSet;
}



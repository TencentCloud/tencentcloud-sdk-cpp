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

#include <tencentcloud/monitor/v20180724/model/DescribePrometheusInstanceInitStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribePrometheusInstanceInitStatusResponse::DescribePrometheusInstanceInitStatusResponse() :
    m_statusHasBeenSet(false),
    m_stepsHasBeenSet(false),
    m_eksClusterIdHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribePrometheusInstanceInitStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Steps") && !rsp["Steps"].IsNull())
    {
        if (!rsp["Steps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Steps` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Steps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskStepInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_steps.push_back(item);
        }
        m_stepsHasBeenSet = true;
    }

    if (rsp.HasMember("EksClusterId") && !rsp["EksClusterId"].IsNull())
    {
        if (!rsp["EksClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EksClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eksClusterId = string(rsp["EksClusterId"].GetString());
        m_eksClusterIdHasBeenSet = true;
    }

    if (rsp.HasMember("SecurityGroupId") && !rsp["SecurityGroupId"].IsNull())
    {
        if (!rsp["SecurityGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupId = string(rsp["SecurityGroupId"].GetString());
        m_securityGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePrometheusInstanceInitStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_stepsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Steps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_steps.begin(); itr != m_steps.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_eksClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EksClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eksClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityGroupId.c_str(), allocator).Move(), allocator);
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


string DescribePrometheusInstanceInitStatusResponse::GetStatus() const
{
    return m_status;
}

bool DescribePrometheusInstanceInitStatusResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<TaskStepInfo> DescribePrometheusInstanceInitStatusResponse::GetSteps() const
{
    return m_steps;
}

bool DescribePrometheusInstanceInitStatusResponse::StepsHasBeenSet() const
{
    return m_stepsHasBeenSet;
}

string DescribePrometheusInstanceInitStatusResponse::GetEksClusterId() const
{
    return m_eksClusterId;
}

bool DescribePrometheusInstanceInitStatusResponse::EksClusterIdHasBeenSet() const
{
    return m_eksClusterIdHasBeenSet;
}

string DescribePrometheusInstanceInitStatusResponse::GetSecurityGroupId() const
{
    return m_securityGroupId;
}

bool DescribePrometheusInstanceInitStatusResponse::SecurityGroupIdHasBeenSet() const
{
    return m_securityGroupIdHasBeenSet;
}



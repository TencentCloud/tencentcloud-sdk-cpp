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

#include <tencentcloud/cii/v20210408/model/DescribeUnderwriteTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cii::V20210408::Model;
using namespace std;

DescribeUnderwriteTaskResponse::DescribeUnderwriteTaskResponse() :
    m_uinHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_mainTaskIdHasBeenSet(false),
    m_underwriteTaskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_underwriteResultsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUnderwriteTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Uin") && !rsp["Uin"].IsNull())
    {
        if (!rsp["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(rsp["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (rsp.HasMember("SubAccountUin") && !rsp["SubAccountUin"].IsNull())
    {
        if (!rsp["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(rsp["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (rsp.HasMember("PolicyId") && !rsp["PolicyId"].IsNull())
    {
        if (!rsp["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(rsp["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (rsp.HasMember("MainTaskId") && !rsp["MainTaskId"].IsNull())
    {
        if (!rsp["MainTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MainTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainTaskId = string(rsp["MainTaskId"].GetString());
        m_mainTaskIdHasBeenSet = true;
    }

    if (rsp.HasMember("UnderwriteTaskId") && !rsp["UnderwriteTaskId"].IsNull())
    {
        if (!rsp["UnderwriteTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnderwriteTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_underwriteTaskId = string(rsp["UnderwriteTaskId"].GetString());
        m_underwriteTaskIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("UnderwriteResults") && !rsp["UnderwriteResults"].IsNull())
    {
        if (!rsp["UnderwriteResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UnderwriteResults` is not array type"));

        const rapidjson::Value &tmpValue = rsp["UnderwriteResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UnderwriteOutput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_underwriteResults.push_back(item);
        }
        m_underwriteResultsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUnderwriteTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_mainTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_underwriteTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnderwriteTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_underwriteTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_underwriteResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnderwriteResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_underwriteResults.begin(); itr != m_underwriteResults.end(); ++itr, ++i)
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


string DescribeUnderwriteTaskResponse::GetUin() const
{
    return m_uin;
}

bool DescribeUnderwriteTaskResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DescribeUnderwriteTaskResponse::GetSubAccountUin() const
{
    return m_subAccountUin;
}

bool DescribeUnderwriteTaskResponse::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

string DescribeUnderwriteTaskResponse::GetPolicyId() const
{
    return m_policyId;
}

bool DescribeUnderwriteTaskResponse::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string DescribeUnderwriteTaskResponse::GetMainTaskId() const
{
    return m_mainTaskId;
}

bool DescribeUnderwriteTaskResponse::MainTaskIdHasBeenSet() const
{
    return m_mainTaskIdHasBeenSet;
}

string DescribeUnderwriteTaskResponse::GetUnderwriteTaskId() const
{
    return m_underwriteTaskId;
}

bool DescribeUnderwriteTaskResponse::UnderwriteTaskIdHasBeenSet() const
{
    return m_underwriteTaskIdHasBeenSet;
}

uint64_t DescribeUnderwriteTaskResponse::GetStatus() const
{
    return m_status;
}

bool DescribeUnderwriteTaskResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<UnderwriteOutput> DescribeUnderwriteTaskResponse::GetUnderwriteResults() const
{
    return m_underwriteResults;
}

bool DescribeUnderwriteTaskResponse::UnderwriteResultsHasBeenSet() const
{
    return m_underwriteResultsHasBeenSet;
}



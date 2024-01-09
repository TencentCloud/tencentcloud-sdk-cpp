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

#include <tencentcloud/dts/v20211206/model/DescribeSubscribeCheckJobResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DescribeSubscribeCheckJobResponse::DescribeSubscribeCheckJobResponse() :
    m_subscribeIdHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_stepAllHasBeenSet(false),
    m_stepNowHasBeenSet(false),
    m_stepsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSubscribeCheckJobResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SubscribeId") && !rsp["SubscribeId"].IsNull())
    {
        if (!rsp["SubscribeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubscribeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subscribeId = string(rsp["SubscribeId"].GetString());
        m_subscribeIdHasBeenSet = true;
    }

    if (rsp.HasMember("Message") && !rsp["Message"].IsNull())
    {
        if (!rsp["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(rsp["Message"].GetString());
        m_messageHasBeenSet = true;
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

    if (rsp.HasMember("Progress") && !rsp["Progress"].IsNull())
    {
        if (!rsp["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = rsp["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }

    if (rsp.HasMember("StepAll") && !rsp["StepAll"].IsNull())
    {
        if (!rsp["StepAll"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StepAll` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stepAll = rsp["StepAll"].GetUint64();
        m_stepAllHasBeenSet = true;
    }

    if (rsp.HasMember("StepNow") && !rsp["StepNow"].IsNull())
    {
        if (!rsp["StepNow"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StepNow` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stepNow = rsp["StepNow"].GetUint64();
        m_stepNowHasBeenSet = true;
    }

    if (rsp.HasMember("Steps") && !rsp["Steps"].IsNull())
    {
        if (!rsp["Steps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Steps` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Steps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SubscribeCheckStepInfo item;
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


    return CoreInternalOutcome(true);
}

string DescribeSubscribeCheckJobResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_subscribeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subscribeId.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_stepAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepAll, allocator);
    }

    if (m_stepNowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepNow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepNow, allocator);
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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeSubscribeCheckJobResponse::GetSubscribeId() const
{
    return m_subscribeId;
}

bool DescribeSubscribeCheckJobResponse::SubscribeIdHasBeenSet() const
{
    return m_subscribeIdHasBeenSet;
}

string DescribeSubscribeCheckJobResponse::GetMessage() const
{
    return m_message;
}

bool DescribeSubscribeCheckJobResponse::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string DescribeSubscribeCheckJobResponse::GetStatus() const
{
    return m_status;
}

bool DescribeSubscribeCheckJobResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DescribeSubscribeCheckJobResponse::GetProgress() const
{
    return m_progress;
}

bool DescribeSubscribeCheckJobResponse::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

uint64_t DescribeSubscribeCheckJobResponse::GetStepAll() const
{
    return m_stepAll;
}

bool DescribeSubscribeCheckJobResponse::StepAllHasBeenSet() const
{
    return m_stepAllHasBeenSet;
}

uint64_t DescribeSubscribeCheckJobResponse::GetStepNow() const
{
    return m_stepNow;
}

bool DescribeSubscribeCheckJobResponse::StepNowHasBeenSet() const
{
    return m_stepNowHasBeenSet;
}

vector<SubscribeCheckStepInfo> DescribeSubscribeCheckJobResponse::GetSteps() const
{
    return m_steps;
}

bool DescribeSubscribeCheckJobResponse::StepsHasBeenSet() const
{
    return m_stepsHasBeenSet;
}



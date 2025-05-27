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

#include <tencentcloud/cynosdb/v20190107/model/DescribeServerlessStrategyResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeServerlessStrategyResponse::DescribeServerlessStrategyResponse() :
    m_autoPauseDelayHasBeenSet(false),
    m_autoScaleUpDelayHasBeenSet(false),
    m_autoScaleDownDelayHasBeenSet(false),
    m_autoPauseHasBeenSet(false),
    m_autoScaleUpHasBeenSet(false),
    m_autoScaleDownHasBeenSet(false),
    m_autoArchiveHasBeenSet(false)
{
}

CoreInternalOutcome DescribeServerlessStrategyResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AutoPauseDelay") && !rsp["AutoPauseDelay"].IsNull())
    {
        if (!rsp["AutoPauseDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoPauseDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoPauseDelay = rsp["AutoPauseDelay"].GetInt64();
        m_autoPauseDelayHasBeenSet = true;
    }

    if (rsp.HasMember("AutoScaleUpDelay") && !rsp["AutoScaleUpDelay"].IsNull())
    {
        if (!rsp["AutoScaleUpDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleUpDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoScaleUpDelay = rsp["AutoScaleUpDelay"].GetInt64();
        m_autoScaleUpDelayHasBeenSet = true;
    }

    if (rsp.HasMember("AutoScaleDownDelay") && !rsp["AutoScaleDownDelay"].IsNull())
    {
        if (!rsp["AutoScaleDownDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleDownDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoScaleDownDelay = rsp["AutoScaleDownDelay"].GetInt64();
        m_autoScaleDownDelayHasBeenSet = true;
    }

    if (rsp.HasMember("AutoPause") && !rsp["AutoPause"].IsNull())
    {
        if (!rsp["AutoPause"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoPause` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoPause = string(rsp["AutoPause"].GetString());
        m_autoPauseHasBeenSet = true;
    }

    if (rsp.HasMember("AutoScaleUp") && !rsp["AutoScaleUp"].IsNull())
    {
        if (!rsp["AutoScaleUp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleUp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScaleUp = string(rsp["AutoScaleUp"].GetString());
        m_autoScaleUpHasBeenSet = true;
    }

    if (rsp.HasMember("AutoScaleDown") && !rsp["AutoScaleDown"].IsNull())
    {
        if (!rsp["AutoScaleDown"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleDown` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScaleDown = string(rsp["AutoScaleDown"].GetString());
        m_autoScaleDownHasBeenSet = true;
    }

    if (rsp.HasMember("AutoArchive") && !rsp["AutoArchive"].IsNull())
    {
        if (!rsp["AutoArchive"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoArchive` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoArchive = string(rsp["AutoArchive"].GetString());
        m_autoArchiveHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeServerlessStrategyResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_autoPauseDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoPauseDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoPauseDelay, allocator);
    }

    if (m_autoScaleUpDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScaleUpDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoScaleUpDelay, allocator);
    }

    if (m_autoScaleDownDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScaleDownDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoScaleDownDelay, allocator);
    }

    if (m_autoPauseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoPause";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoPause.c_str(), allocator).Move(), allocator);
    }

    if (m_autoScaleUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScaleUp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoScaleUp.c_str(), allocator).Move(), allocator);
    }

    if (m_autoScaleDownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScaleDown";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoScaleDown.c_str(), allocator).Move(), allocator);
    }

    if (m_autoArchiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoArchive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoArchive.c_str(), allocator).Move(), allocator);
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


int64_t DescribeServerlessStrategyResponse::GetAutoPauseDelay() const
{
    return m_autoPauseDelay;
}

bool DescribeServerlessStrategyResponse::AutoPauseDelayHasBeenSet() const
{
    return m_autoPauseDelayHasBeenSet;
}

int64_t DescribeServerlessStrategyResponse::GetAutoScaleUpDelay() const
{
    return m_autoScaleUpDelay;
}

bool DescribeServerlessStrategyResponse::AutoScaleUpDelayHasBeenSet() const
{
    return m_autoScaleUpDelayHasBeenSet;
}

int64_t DescribeServerlessStrategyResponse::GetAutoScaleDownDelay() const
{
    return m_autoScaleDownDelay;
}

bool DescribeServerlessStrategyResponse::AutoScaleDownDelayHasBeenSet() const
{
    return m_autoScaleDownDelayHasBeenSet;
}

string DescribeServerlessStrategyResponse::GetAutoPause() const
{
    return m_autoPause;
}

bool DescribeServerlessStrategyResponse::AutoPauseHasBeenSet() const
{
    return m_autoPauseHasBeenSet;
}

string DescribeServerlessStrategyResponse::GetAutoScaleUp() const
{
    return m_autoScaleUp;
}

bool DescribeServerlessStrategyResponse::AutoScaleUpHasBeenSet() const
{
    return m_autoScaleUpHasBeenSet;
}

string DescribeServerlessStrategyResponse::GetAutoScaleDown() const
{
    return m_autoScaleDown;
}

bool DescribeServerlessStrategyResponse::AutoScaleDownHasBeenSet() const
{
    return m_autoScaleDownHasBeenSet;
}

string DescribeServerlessStrategyResponse::GetAutoArchive() const
{
    return m_autoArchive;
}

bool DescribeServerlessStrategyResponse::AutoArchiveHasBeenSet() const
{
    return m_autoArchiveHasBeenSet;
}



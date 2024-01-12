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

#include <tencentcloud/tdid/v20210519/model/GetOverSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

GetOverSummaryResponse::GetOverSummaryResponse() :
    m_appCounterHasBeenSet(false),
    m_userCounterHasBeenSet(false),
    m_appCntHasBeenSet(false),
    m_deployCntHasBeenSet(false),
    m_chainCntHasBeenSet(false)
{
}

CoreInternalOutcome GetOverSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AppCounter") && !rsp["AppCounter"].IsNull())
    {
        if (!rsp["AppCounter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppCounter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_appCounter.Deserialize(rsp["AppCounter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_appCounterHasBeenSet = true;
    }

    if (rsp.HasMember("UserCounter") && !rsp["UserCounter"].IsNull())
    {
        if (!rsp["UserCounter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UserCounter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userCounter.Deserialize(rsp["UserCounter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userCounterHasBeenSet = true;
    }

    if (rsp.HasMember("AppCnt") && !rsp["AppCnt"].IsNull())
    {
        if (!rsp["AppCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appCnt = rsp["AppCnt"].GetUint64();
        m_appCntHasBeenSet = true;
    }

    if (rsp.HasMember("DeployCnt") && !rsp["DeployCnt"].IsNull())
    {
        if (!rsp["DeployCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeployCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deployCnt = rsp["DeployCnt"].GetUint64();
        m_deployCntHasBeenSet = true;
    }

    if (rsp.HasMember("ChainCnt") && !rsp["ChainCnt"].IsNull())
    {
        if (!rsp["ChainCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ChainCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_chainCnt = rsp["ChainCnt"].GetUint64();
        m_chainCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetOverSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_appCounterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppCounter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_appCounter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_userCounterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserCounter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userCounter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_appCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appCnt, allocator);
    }

    if (m_deployCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deployCnt, allocator);
    }

    if (m_chainCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChainCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chainCnt, allocator);
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


ResourceCounterData GetOverSummaryResponse::GetAppCounter() const
{
    return m_appCounter;
}

bool GetOverSummaryResponse::AppCounterHasBeenSet() const
{
    return m_appCounterHasBeenSet;
}

ResourceCounterData GetOverSummaryResponse::GetUserCounter() const
{
    return m_userCounter;
}

bool GetOverSummaryResponse::UserCounterHasBeenSet() const
{
    return m_userCounterHasBeenSet;
}

uint64_t GetOverSummaryResponse::GetAppCnt() const
{
    return m_appCnt;
}

bool GetOverSummaryResponse::AppCntHasBeenSet() const
{
    return m_appCntHasBeenSet;
}

uint64_t GetOverSummaryResponse::GetDeployCnt() const
{
    return m_deployCnt;
}

bool GetOverSummaryResponse::DeployCntHasBeenSet() const
{
    return m_deployCntHasBeenSet;
}

uint64_t GetOverSummaryResponse::GetChainCnt() const
{
    return m_chainCnt;
}

bool GetOverSummaryResponse::ChainCntHasBeenSet() const
{
    return m_chainCntHasBeenSet;
}



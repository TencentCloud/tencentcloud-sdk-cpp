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

#include <tencentcloud/drm/v20181115/model/ModifyFairPlayPemResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Drm::V20181115::Model;
using namespace std;

ModifyFairPlayPemResponse::ModifyFairPlayPemResponse() :
    m_fairPlayPemIdHasBeenSet(false),
    m_priorityHasBeenSet(false)
{
}

CoreInternalOutcome ModifyFairPlayPemResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FairPlayPemId") && !rsp["FairPlayPemId"].IsNull())
    {
        if (!rsp["FairPlayPemId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FairPlayPemId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fairPlayPemId = rsp["FairPlayPemId"].GetUint64();
        m_fairPlayPemIdHasBeenSet = true;
    }

    if (rsp.HasMember("Priority") && !rsp["Priority"].IsNull())
    {
        if (!rsp["Priority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Priority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = rsp["Priority"].GetUint64();
        m_priorityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ModifyFairPlayPemResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_fairPlayPemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FairPlayPemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fairPlayPemId, allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
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


uint64_t ModifyFairPlayPemResponse::GetFairPlayPemId() const
{
    return m_fairPlayPemId;
}

bool ModifyFairPlayPemResponse::FairPlayPemIdHasBeenSet() const
{
    return m_fairPlayPemIdHasBeenSet;
}

uint64_t ModifyFairPlayPemResponse::GetPriority() const
{
    return m_priority;
}

bool ModifyFairPlayPemResponse::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}



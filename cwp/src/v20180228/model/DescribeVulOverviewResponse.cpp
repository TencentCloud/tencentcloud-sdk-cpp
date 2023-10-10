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

#include <tencentcloud/cwp/v20180228/model/DescribeVulOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeVulOverviewResponse::DescribeVulOverviewResponse() :
    m_followVulHasBeenSet(false),
    m_allVulHasBeenSet(false),
    m_effectHostHasBeenSet(false),
    m_vulAttackEventHasBeenSet(false),
    m_vulDefenceEventHasBeenSet(false),
    m_vulStoreHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVulOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FollowVul") && !rsp["FollowVul"].IsNull())
    {
        if (!rsp["FollowVul"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FollowVul` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_followVul.Deserialize(rsp["FollowVul"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_followVulHasBeenSet = true;
    }

    if (rsp.HasMember("AllVul") && !rsp["AllVul"].IsNull())
    {
        if (!rsp["AllVul"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AllVul` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_allVul.Deserialize(rsp["AllVul"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_allVulHasBeenSet = true;
    }

    if (rsp.HasMember("EffectHost") && !rsp["EffectHost"].IsNull())
    {
        if (!rsp["EffectHost"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EffectHost` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_effectHost.Deserialize(rsp["EffectHost"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_effectHostHasBeenSet = true;
    }

    if (rsp.HasMember("VulAttackEvent") && !rsp["VulAttackEvent"].IsNull())
    {
        if (!rsp["VulAttackEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VulAttackEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vulAttackEvent.Deserialize(rsp["VulAttackEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vulAttackEventHasBeenSet = true;
    }

    if (rsp.HasMember("VulDefenceEvent") && !rsp["VulDefenceEvent"].IsNull())
    {
        if (!rsp["VulDefenceEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vulDefenceEvent.Deserialize(rsp["VulDefenceEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vulDefenceEventHasBeenSet = true;
    }

    if (rsp.HasMember("VulStore") && !rsp["VulStore"].IsNull())
    {
        if (!rsp["VulStore"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VulStore` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vulStore.Deserialize(rsp["VulStore"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vulStoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVulOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_followVulHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowVul";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_followVul.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_allVulHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllVul";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_allVul.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_effectHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_effectHost.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vulAttackEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulAttackEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vulAttackEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vulDefenceEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulDefenceEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vulDefenceEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vulStoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulStore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vulStore.ToJsonObject(value[key.c_str()], allocator);
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


VulOverview DescribeVulOverviewResponse::GetFollowVul() const
{
    return m_followVul;
}

bool DescribeVulOverviewResponse::FollowVulHasBeenSet() const
{
    return m_followVulHasBeenSet;
}

VulOverview DescribeVulOverviewResponse::GetAllVul() const
{
    return m_allVul;
}

bool DescribeVulOverviewResponse::AllVulHasBeenSet() const
{
    return m_allVulHasBeenSet;
}

VulOverview DescribeVulOverviewResponse::GetEffectHost() const
{
    return m_effectHost;
}

bool DescribeVulOverviewResponse::EffectHostHasBeenSet() const
{
    return m_effectHostHasBeenSet;
}

VulOverview DescribeVulOverviewResponse::GetVulAttackEvent() const
{
    return m_vulAttackEvent;
}

bool DescribeVulOverviewResponse::VulAttackEventHasBeenSet() const
{
    return m_vulAttackEventHasBeenSet;
}

VulOverview DescribeVulOverviewResponse::GetVulDefenceEvent() const
{
    return m_vulDefenceEvent;
}

bool DescribeVulOverviewResponse::VulDefenceEventHasBeenSet() const
{
    return m_vulDefenceEventHasBeenSet;
}

VulOverview DescribeVulOverviewResponse::GetVulStore() const
{
    return m_vulStore;
}

bool DescribeVulOverviewResponse::VulStoreHasBeenSet() const
{
    return m_vulStoreHasBeenSet;
}



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

#include <tencentcloud/lke/v20231130/model/GetLikeDataCountResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

GetLikeDataCountResponse::GetLikeDataCountResponse() :
    m_totalHasBeenSet(false),
    m_appraisalTotalHasBeenSet(false),
    m_participationRateHasBeenSet(false),
    m_likeTotalHasBeenSet(false),
    m_likeRateHasBeenSet(false),
    m_dislikeTotalHasBeenSet(false),
    m_dislikeRateHasBeenSet(false)
{
}

CoreInternalOutcome GetLikeDataCountResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("AppraisalTotal") && !rsp["AppraisalTotal"].IsNull())
    {
        if (!rsp["AppraisalTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppraisalTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appraisalTotal = rsp["AppraisalTotal"].GetUint64();
        m_appraisalTotalHasBeenSet = true;
    }

    if (rsp.HasMember("ParticipationRate") && !rsp["ParticipationRate"].IsNull())
    {
        if (!rsp["ParticipationRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ParticipationRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_participationRate = rsp["ParticipationRate"].GetDouble();
        m_participationRateHasBeenSet = true;
    }

    if (rsp.HasMember("LikeTotal") && !rsp["LikeTotal"].IsNull())
    {
        if (!rsp["LikeTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LikeTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_likeTotal = rsp["LikeTotal"].GetUint64();
        m_likeTotalHasBeenSet = true;
    }

    if (rsp.HasMember("LikeRate") && !rsp["LikeRate"].IsNull())
    {
        if (!rsp["LikeRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LikeRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_likeRate = rsp["LikeRate"].GetDouble();
        m_likeRateHasBeenSet = true;
    }

    if (rsp.HasMember("DislikeTotal") && !rsp["DislikeTotal"].IsNull())
    {
        if (!rsp["DislikeTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DislikeTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dislikeTotal = rsp["DislikeTotal"].GetUint64();
        m_dislikeTotalHasBeenSet = true;
    }

    if (rsp.HasMember("DislikeRate") && !rsp["DislikeRate"].IsNull())
    {
        if (!rsp["DislikeRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DislikeRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_dislikeRate = rsp["DislikeRate"].GetDouble();
        m_dislikeRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetLikeDataCountResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_appraisalTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppraisalTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appraisalTotal, allocator);
    }

    if (m_participationRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParticipationRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_participationRate, allocator);
    }

    if (m_likeTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LikeTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_likeTotal, allocator);
    }

    if (m_likeRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LikeRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_likeRate, allocator);
    }

    if (m_dislikeTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DislikeTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dislikeTotal, allocator);
    }

    if (m_dislikeRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DislikeRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dislikeRate, allocator);
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


uint64_t GetLikeDataCountResponse::GetTotal() const
{
    return m_total;
}

bool GetLikeDataCountResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

uint64_t GetLikeDataCountResponse::GetAppraisalTotal() const
{
    return m_appraisalTotal;
}

bool GetLikeDataCountResponse::AppraisalTotalHasBeenSet() const
{
    return m_appraisalTotalHasBeenSet;
}

double GetLikeDataCountResponse::GetParticipationRate() const
{
    return m_participationRate;
}

bool GetLikeDataCountResponse::ParticipationRateHasBeenSet() const
{
    return m_participationRateHasBeenSet;
}

uint64_t GetLikeDataCountResponse::GetLikeTotal() const
{
    return m_likeTotal;
}

bool GetLikeDataCountResponse::LikeTotalHasBeenSet() const
{
    return m_likeTotalHasBeenSet;
}

double GetLikeDataCountResponse::GetLikeRate() const
{
    return m_likeRate;
}

bool GetLikeDataCountResponse::LikeRateHasBeenSet() const
{
    return m_likeRateHasBeenSet;
}

uint64_t GetLikeDataCountResponse::GetDislikeTotal() const
{
    return m_dislikeTotal;
}

bool GetLikeDataCountResponse::DislikeTotalHasBeenSet() const
{
    return m_dislikeTotalHasBeenSet;
}

double GetLikeDataCountResponse::GetDislikeRate() const
{
    return m_dislikeRate;
}

bool GetLikeDataCountResponse::DislikeRateHasBeenSet() const
{
    return m_dislikeRateHasBeenSet;
}



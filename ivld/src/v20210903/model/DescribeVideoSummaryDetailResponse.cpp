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

#include <tencentcloud/ivld/v20210903/model/DescribeVideoSummaryDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

DescribeVideoSummaryDetailResponse::DescribeVideoSummaryDetailResponse() :
    m_statusHasBeenSet(false),
    m_failedReasonHasBeenSet(false),
    m_asrSetHasBeenSet(false),
    m_textSummaryHasBeenSet(false),
    m_textSegSetHasBeenSet(false),
    m_shotSegSetHasBeenSet(false),
    m_textSegMatchShotScoreSetHasBeenSet(false),
    m_tTSResultURLSetHasBeenSet(false),
    m_videoResultURLHasBeenSet(false),
    m_videoRotateResultURLHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVideoSummaryDetailResponse::Deserialize(const string &payload)
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
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("FailedReason") && !rsp["FailedReason"].IsNull())
    {
        if (!rsp["FailedReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailedReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedReason = string(rsp["FailedReason"].GetString());
        m_failedReasonHasBeenSet = true;
    }

    if (rsp.HasMember("AsrSet") && !rsp["AsrSet"].IsNull())
    {
        if (!rsp["AsrSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AsrSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AsrSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AsrResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_asrSet.push_back(item);
        }
        m_asrSetHasBeenSet = true;
    }

    if (rsp.HasMember("TextSummary") && !rsp["TextSummary"].IsNull())
    {
        if (!rsp["TextSummary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextSummary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_textSummary = string(rsp["TextSummary"].GetString());
        m_textSummaryHasBeenSet = true;
    }

    if (rsp.HasMember("TextSegSet") && !rsp["TextSegSet"].IsNull())
    {
        if (!rsp["TextSegSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TextSegSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TextSegSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_textSegSet.push_back((*itr).GetString());
        }
        m_textSegSetHasBeenSet = true;
    }

    if (rsp.HasMember("ShotSegSet") && !rsp["ShotSegSet"].IsNull())
    {
        if (!rsp["ShotSegSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ShotSegSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ShotSegSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ShotInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_shotSegSet.push_back(item);
        }
        m_shotSegSetHasBeenSet = true;
    }

    if (rsp.HasMember("TextSegMatchShotScoreSet") && !rsp["TextSegMatchShotScoreSet"].IsNull())
    {
        if (!rsp["TextSegMatchShotScoreSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TextSegMatchShotScoreSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TextSegMatchShotScoreSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TextSegMatchShotScore item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_textSegMatchShotScoreSet.push_back(item);
        }
        m_textSegMatchShotScoreSetHasBeenSet = true;
    }

    if (rsp.HasMember("TTSResultURLSet") && !rsp["TTSResultURLSet"].IsNull())
    {
        if (!rsp["TTSResultURLSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TTSResultURLSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TTSResultURLSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tTSResultURLSet.push_back((*itr).GetString());
        }
        m_tTSResultURLSetHasBeenSet = true;
    }

    if (rsp.HasMember("VideoResultURL") && !rsp["VideoResultURL"].IsNull())
    {
        if (!rsp["VideoResultURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoResultURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoResultURL = string(rsp["VideoResultURL"].GetString());
        m_videoResultURLHasBeenSet = true;
    }

    if (rsp.HasMember("VideoRotateResultURL") && !rsp["VideoRotateResultURL"].IsNull())
    {
        if (!rsp["VideoRotateResultURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoRotateResultURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoRotateResultURL = string(rsp["VideoRotateResultURL"].GetString());
        m_videoRotateResultURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVideoSummaryDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_failedReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failedReason.c_str(), allocator).Move(), allocator);
    }

    if (m_asrSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_asrSet.begin(); itr != m_asrSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_textSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_textSummary.c_str(), allocator).Move(), allocator);
    }

    if (m_textSegSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextSegSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_textSegSet.begin(); itr != m_textSegSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_shotSegSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShotSegSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_shotSegSet.begin(); itr != m_shotSegSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_textSegMatchShotScoreSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextSegMatchShotScoreSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_textSegMatchShotScoreSet.begin(); itr != m_textSegMatchShotScoreSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tTSResultURLSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTSResultURLSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tTSResultURLSet.begin(); itr != m_tTSResultURLSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_videoResultURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoResultURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoResultURL.c_str(), allocator).Move(), allocator);
    }

    if (m_videoRotateResultURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoRotateResultURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoRotateResultURL.c_str(), allocator).Move(), allocator);
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


int64_t DescribeVideoSummaryDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeVideoSummaryDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeVideoSummaryDetailResponse::GetFailedReason() const
{
    return m_failedReason;
}

bool DescribeVideoSummaryDetailResponse::FailedReasonHasBeenSet() const
{
    return m_failedReasonHasBeenSet;
}

vector<AsrResult> DescribeVideoSummaryDetailResponse::GetAsrSet() const
{
    return m_asrSet;
}

bool DescribeVideoSummaryDetailResponse::AsrSetHasBeenSet() const
{
    return m_asrSetHasBeenSet;
}

string DescribeVideoSummaryDetailResponse::GetTextSummary() const
{
    return m_textSummary;
}

bool DescribeVideoSummaryDetailResponse::TextSummaryHasBeenSet() const
{
    return m_textSummaryHasBeenSet;
}

vector<string> DescribeVideoSummaryDetailResponse::GetTextSegSet() const
{
    return m_textSegSet;
}

bool DescribeVideoSummaryDetailResponse::TextSegSetHasBeenSet() const
{
    return m_textSegSetHasBeenSet;
}

vector<ShotInfo> DescribeVideoSummaryDetailResponse::GetShotSegSet() const
{
    return m_shotSegSet;
}

bool DescribeVideoSummaryDetailResponse::ShotSegSetHasBeenSet() const
{
    return m_shotSegSetHasBeenSet;
}

vector<TextSegMatchShotScore> DescribeVideoSummaryDetailResponse::GetTextSegMatchShotScoreSet() const
{
    return m_textSegMatchShotScoreSet;
}

bool DescribeVideoSummaryDetailResponse::TextSegMatchShotScoreSetHasBeenSet() const
{
    return m_textSegMatchShotScoreSetHasBeenSet;
}

vector<string> DescribeVideoSummaryDetailResponse::GetTTSResultURLSet() const
{
    return m_tTSResultURLSet;
}

bool DescribeVideoSummaryDetailResponse::TTSResultURLSetHasBeenSet() const
{
    return m_tTSResultURLSetHasBeenSet;
}

string DescribeVideoSummaryDetailResponse::GetVideoResultURL() const
{
    return m_videoResultURL;
}

bool DescribeVideoSummaryDetailResponse::VideoResultURLHasBeenSet() const
{
    return m_videoResultURLHasBeenSet;
}

string DescribeVideoSummaryDetailResponse::GetVideoRotateResultURL() const
{
    return m_videoRotateResultURL;
}

bool DescribeVideoSummaryDetailResponse::VideoRotateResultURLHasBeenSet() const
{
    return m_videoRotateResultURLHasBeenSet;
}



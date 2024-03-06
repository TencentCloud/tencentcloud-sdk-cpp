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

#include <tencentcloud/ess/v20201111/model/IntentionQuestionResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

IntentionQuestionResult::IntentionQuestionResult() :
    m_videoHasBeenSet(false),
    m_resultCodeHasBeenSet(false),
    m_asrResultHasBeenSet(false)
{
}

CoreInternalOutcome IntentionQuestionResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Video") && !value["Video"].IsNull())
    {
        if (!value["Video"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntentionQuestionResult.Video` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_video = string(value["Video"].GetString());
        m_videoHasBeenSet = true;
    }

    if (value.HasMember("ResultCode") && !value["ResultCode"].IsNull())
    {
        if (!value["ResultCode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntentionQuestionResult.ResultCode` is not array type"));

        const rapidjson::Value &tmpValue = value["ResultCode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resultCode.push_back((*itr).GetString());
        }
        m_resultCodeHasBeenSet = true;
    }

    if (value.HasMember("AsrResult") && !value["AsrResult"].IsNull())
    {
        if (!value["AsrResult"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntentionQuestionResult.AsrResult` is not array type"));

        const rapidjson::Value &tmpValue = value["AsrResult"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_asrResult.push_back((*itr).GetString());
        }
        m_asrResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntentionQuestionResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_videoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Video";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_video.c_str(), allocator).Move(), allocator);
    }

    if (m_resultCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resultCode.begin(); itr != m_resultCode.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_asrResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_asrResult.begin(); itr != m_asrResult.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string IntentionQuestionResult::GetVideo() const
{
    return m_video;
}

void IntentionQuestionResult::SetVideo(const string& _video)
{
    m_video = _video;
    m_videoHasBeenSet = true;
}

bool IntentionQuestionResult::VideoHasBeenSet() const
{
    return m_videoHasBeenSet;
}

vector<string> IntentionQuestionResult::GetResultCode() const
{
    return m_resultCode;
}

void IntentionQuestionResult::SetResultCode(const vector<string>& _resultCode)
{
    m_resultCode = _resultCode;
    m_resultCodeHasBeenSet = true;
}

bool IntentionQuestionResult::ResultCodeHasBeenSet() const
{
    return m_resultCodeHasBeenSet;
}

vector<string> IntentionQuestionResult::GetAsrResult() const
{
    return m_asrResult;
}

void IntentionQuestionResult::SetAsrResult(const vector<string>& _asrResult)
{
    m_asrResult = _asrResult;
    m_asrResultHasBeenSet = true;
}

bool IntentionQuestionResult::AsrResultHasBeenSet() const
{
    return m_asrResultHasBeenSet;
}


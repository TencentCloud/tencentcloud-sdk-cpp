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

#include <tencentcloud/ams/v20201229/model/CreateAudioModerationSyncTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ams::V20201229::Model;
using namespace std;

CreateAudioModerationSyncTaskResponse::CreateAudioModerationSyncTaskResponse() :
    m_dataIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_bizTypeHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_asrTextHasBeenSet(false),
    m_textResultsHasBeenSet(false),
    m_moanResultsHasBeenSet(false)
{
}

CoreInternalOutcome CreateAudioModerationSyncTaskResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("DataId") && !rsp["DataId"].IsNull())
    {
        if (!rsp["DataId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataId = string(rsp["DataId"].GetString());
        m_dataIdHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("BizType") && !rsp["BizType"].IsNull())
    {
        if (!rsp["BizType"].IsString())
        {
            return CoreInternalOutcome(Error("response `BizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizType = string(rsp["BizType"].GetString());
        m_bizTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Suggestion") && !rsp["Suggestion"].IsNull())
    {
        if (!rsp["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Error("response `Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(rsp["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (rsp.HasMember("Label") && !rsp["Label"].IsNull())
    {
        if (!rsp["Label"].IsString())
        {
            return CoreInternalOutcome(Error("response `Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(rsp["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (rsp.HasMember("AsrText") && !rsp["AsrText"].IsNull())
    {
        if (!rsp["AsrText"].IsString())
        {
            return CoreInternalOutcome(Error("response `AsrText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asrText = string(rsp["AsrText"].GetString());
        m_asrTextHasBeenSet = true;
    }

    if (rsp.HasMember("TextResults") && !rsp["TextResults"].IsNull())
    {
        if (!rsp["TextResults"].IsArray())
            return CoreInternalOutcome(Error("response `TextResults` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TextResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TextResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_textResults.push_back(item);
        }
        m_textResultsHasBeenSet = true;
    }

    if (rsp.HasMember("MoanResults") && !rsp["MoanResults"].IsNull())
    {
        if (!rsp["MoanResults"].IsArray())
            return CoreInternalOutcome(Error("response `MoanResults` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MoanResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MoanResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_moanResults.push_back(item);
        }
        m_moanResultsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateAudioModerationSyncTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dataIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_bizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizType.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_asrTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asrText.c_str(), allocator).Move(), allocator);
    }

    if (m_textResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_textResults.begin(); itr != m_textResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_moanResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MoanResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_moanResults.begin(); itr != m_moanResults.end(); ++itr, ++i)
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


string CreateAudioModerationSyncTaskResponse::GetDataId() const
{
    return m_dataId;
}

bool CreateAudioModerationSyncTaskResponse::DataIdHasBeenSet() const
{
    return m_dataIdHasBeenSet;
}

string CreateAudioModerationSyncTaskResponse::GetName() const
{
    return m_name;
}

bool CreateAudioModerationSyncTaskResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateAudioModerationSyncTaskResponse::GetBizType() const
{
    return m_bizType;
}

bool CreateAudioModerationSyncTaskResponse::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string CreateAudioModerationSyncTaskResponse::GetSuggestion() const
{
    return m_suggestion;
}

bool CreateAudioModerationSyncTaskResponse::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string CreateAudioModerationSyncTaskResponse::GetLabel() const
{
    return m_label;
}

bool CreateAudioModerationSyncTaskResponse::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string CreateAudioModerationSyncTaskResponse::GetAsrText() const
{
    return m_asrText;
}

bool CreateAudioModerationSyncTaskResponse::AsrTextHasBeenSet() const
{
    return m_asrTextHasBeenSet;
}

vector<TextResult> CreateAudioModerationSyncTaskResponse::GetTextResults() const
{
    return m_textResults;
}

bool CreateAudioModerationSyncTaskResponse::TextResultsHasBeenSet() const
{
    return m_textResultsHasBeenSet;
}

vector<MoanResult> CreateAudioModerationSyncTaskResponse::GetMoanResults() const
{
    return m_moanResults;
}

bool CreateAudioModerationSyncTaskResponse::MoanResultsHasBeenSet() const
{
    return m_moanResultsHasBeenSet;
}



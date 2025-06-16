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

#include <tencentcloud/hunyuan/v20230901/model/ChatCompletionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

ChatCompletionsRequest::ChatCompletionsRequest() :
    m_modelHasBeenSet(false),
    m_messagesHasBeenSet(false),
    m_streamHasBeenSet(false),
    m_streamModerationHasBeenSet(false),
    m_topPHasBeenSet(false),
    m_temperatureHasBeenSet(false),
    m_enableEnhancementHasBeenSet(false),
    m_toolsHasBeenSet(false),
    m_toolChoiceHasBeenSet(false),
    m_customToolHasBeenSet(false),
    m_searchInfoHasBeenSet(false),
    m_citationHasBeenSet(false),
    m_enableSpeedSearchHasBeenSet(false),
    m_enableMultimediaHasBeenSet(false),
    m_enableDeepSearchHasBeenSet(false),
    m_seedHasBeenSet(false),
    m_forceSearchEnhancementHasBeenSet(false),
    m_stopHasBeenSet(false),
    m_enableRecommendedQuestionsHasBeenSet(false),
    m_enableDeepReadHasBeenSet(false),
    m_webSearchOptionsHasBeenSet(false),
    m_topicChoiceHasBeenSet(false)
{
}

string ChatCompletionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_messagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Messages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_messages.begin(); itr != m_messages.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_streamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stream";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_stream, allocator);
    }

    if (m_streamModerationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamModeration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_streamModeration, allocator);
    }

    if (m_topPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_topP, allocator);
    }

    if (m_temperatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Temperature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_temperature, allocator);
    }

    if (m_enableEnhancementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableEnhancement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableEnhancement, allocator);
    }

    if (m_toolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tools";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tools.begin(); itr != m_tools.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_toolChoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolChoice";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toolChoice.c_str(), allocator).Move(), allocator);
    }

    if (m_customToolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomTool";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customTool.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_searchInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_searchInfo, allocator);
    }

    if (m_citationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Citation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_citation, allocator);
    }

    if (m_enableSpeedSearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSpeedSearch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableSpeedSearch, allocator);
    }

    if (m_enableMultimediaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMultimedia";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableMultimedia, allocator);
    }

    if (m_enableDeepSearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDeepSearch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDeepSearch, allocator);
    }

    if (m_seedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seed";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_seed, allocator);
    }

    if (m_forceSearchEnhancementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceSearchEnhancement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceSearchEnhancement, allocator);
    }

    if (m_stopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stop";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_stop.begin(); itr != m_stop.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enableRecommendedQuestionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRecommendedQuestions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableRecommendedQuestions, allocator);
    }

    if (m_enableDeepReadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDeepRead";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDeepRead, allocator);
    }

    if (m_webSearchOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebSearchOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webSearchOptions.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_topicChoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicChoice";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicChoice.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ChatCompletionsRequest::GetModel() const
{
    return m_model;
}

void ChatCompletionsRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool ChatCompletionsRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

vector<Message> ChatCompletionsRequest::GetMessages() const
{
    return m_messages;
}

void ChatCompletionsRequest::SetMessages(const vector<Message>& _messages)
{
    m_messages = _messages;
    m_messagesHasBeenSet = true;
}

bool ChatCompletionsRequest::MessagesHasBeenSet() const
{
    return m_messagesHasBeenSet;
}

bool ChatCompletionsRequest::GetStream() const
{
    return m_stream;
}

void ChatCompletionsRequest::SetStream(const bool& _stream)
{
    m_stream = _stream;
    m_streamHasBeenSet = true;
}

bool ChatCompletionsRequest::StreamHasBeenSet() const
{
    return m_streamHasBeenSet;
}

bool ChatCompletionsRequest::GetStreamModeration() const
{
    return m_streamModeration;
}

void ChatCompletionsRequest::SetStreamModeration(const bool& _streamModeration)
{
    m_streamModeration = _streamModeration;
    m_streamModerationHasBeenSet = true;
}

bool ChatCompletionsRequest::StreamModerationHasBeenSet() const
{
    return m_streamModerationHasBeenSet;
}

double ChatCompletionsRequest::GetTopP() const
{
    return m_topP;
}

void ChatCompletionsRequest::SetTopP(const double& _topP)
{
    m_topP = _topP;
    m_topPHasBeenSet = true;
}

bool ChatCompletionsRequest::TopPHasBeenSet() const
{
    return m_topPHasBeenSet;
}

double ChatCompletionsRequest::GetTemperature() const
{
    return m_temperature;
}

void ChatCompletionsRequest::SetTemperature(const double& _temperature)
{
    m_temperature = _temperature;
    m_temperatureHasBeenSet = true;
}

bool ChatCompletionsRequest::TemperatureHasBeenSet() const
{
    return m_temperatureHasBeenSet;
}

bool ChatCompletionsRequest::GetEnableEnhancement() const
{
    return m_enableEnhancement;
}

void ChatCompletionsRequest::SetEnableEnhancement(const bool& _enableEnhancement)
{
    m_enableEnhancement = _enableEnhancement;
    m_enableEnhancementHasBeenSet = true;
}

bool ChatCompletionsRequest::EnableEnhancementHasBeenSet() const
{
    return m_enableEnhancementHasBeenSet;
}

vector<Tool> ChatCompletionsRequest::GetTools() const
{
    return m_tools;
}

void ChatCompletionsRequest::SetTools(const vector<Tool>& _tools)
{
    m_tools = _tools;
    m_toolsHasBeenSet = true;
}

bool ChatCompletionsRequest::ToolsHasBeenSet() const
{
    return m_toolsHasBeenSet;
}

string ChatCompletionsRequest::GetToolChoice() const
{
    return m_toolChoice;
}

void ChatCompletionsRequest::SetToolChoice(const string& _toolChoice)
{
    m_toolChoice = _toolChoice;
    m_toolChoiceHasBeenSet = true;
}

bool ChatCompletionsRequest::ToolChoiceHasBeenSet() const
{
    return m_toolChoiceHasBeenSet;
}

Tool ChatCompletionsRequest::GetCustomTool() const
{
    return m_customTool;
}

void ChatCompletionsRequest::SetCustomTool(const Tool& _customTool)
{
    m_customTool = _customTool;
    m_customToolHasBeenSet = true;
}

bool ChatCompletionsRequest::CustomToolHasBeenSet() const
{
    return m_customToolHasBeenSet;
}

bool ChatCompletionsRequest::GetSearchInfo() const
{
    return m_searchInfo;
}

void ChatCompletionsRequest::SetSearchInfo(const bool& _searchInfo)
{
    m_searchInfo = _searchInfo;
    m_searchInfoHasBeenSet = true;
}

bool ChatCompletionsRequest::SearchInfoHasBeenSet() const
{
    return m_searchInfoHasBeenSet;
}

bool ChatCompletionsRequest::GetCitation() const
{
    return m_citation;
}

void ChatCompletionsRequest::SetCitation(const bool& _citation)
{
    m_citation = _citation;
    m_citationHasBeenSet = true;
}

bool ChatCompletionsRequest::CitationHasBeenSet() const
{
    return m_citationHasBeenSet;
}

bool ChatCompletionsRequest::GetEnableSpeedSearch() const
{
    return m_enableSpeedSearch;
}

void ChatCompletionsRequest::SetEnableSpeedSearch(const bool& _enableSpeedSearch)
{
    m_enableSpeedSearch = _enableSpeedSearch;
    m_enableSpeedSearchHasBeenSet = true;
}

bool ChatCompletionsRequest::EnableSpeedSearchHasBeenSet() const
{
    return m_enableSpeedSearchHasBeenSet;
}

bool ChatCompletionsRequest::GetEnableMultimedia() const
{
    return m_enableMultimedia;
}

void ChatCompletionsRequest::SetEnableMultimedia(const bool& _enableMultimedia)
{
    m_enableMultimedia = _enableMultimedia;
    m_enableMultimediaHasBeenSet = true;
}

bool ChatCompletionsRequest::EnableMultimediaHasBeenSet() const
{
    return m_enableMultimediaHasBeenSet;
}

bool ChatCompletionsRequest::GetEnableDeepSearch() const
{
    return m_enableDeepSearch;
}

void ChatCompletionsRequest::SetEnableDeepSearch(const bool& _enableDeepSearch)
{
    m_enableDeepSearch = _enableDeepSearch;
    m_enableDeepSearchHasBeenSet = true;
}

bool ChatCompletionsRequest::EnableDeepSearchHasBeenSet() const
{
    return m_enableDeepSearchHasBeenSet;
}

int64_t ChatCompletionsRequest::GetSeed() const
{
    return m_seed;
}

void ChatCompletionsRequest::SetSeed(const int64_t& _seed)
{
    m_seed = _seed;
    m_seedHasBeenSet = true;
}

bool ChatCompletionsRequest::SeedHasBeenSet() const
{
    return m_seedHasBeenSet;
}

bool ChatCompletionsRequest::GetForceSearchEnhancement() const
{
    return m_forceSearchEnhancement;
}

void ChatCompletionsRequest::SetForceSearchEnhancement(const bool& _forceSearchEnhancement)
{
    m_forceSearchEnhancement = _forceSearchEnhancement;
    m_forceSearchEnhancementHasBeenSet = true;
}

bool ChatCompletionsRequest::ForceSearchEnhancementHasBeenSet() const
{
    return m_forceSearchEnhancementHasBeenSet;
}

vector<string> ChatCompletionsRequest::GetStop() const
{
    return m_stop;
}

void ChatCompletionsRequest::SetStop(const vector<string>& _stop)
{
    m_stop = _stop;
    m_stopHasBeenSet = true;
}

bool ChatCompletionsRequest::StopHasBeenSet() const
{
    return m_stopHasBeenSet;
}

bool ChatCompletionsRequest::GetEnableRecommendedQuestions() const
{
    return m_enableRecommendedQuestions;
}

void ChatCompletionsRequest::SetEnableRecommendedQuestions(const bool& _enableRecommendedQuestions)
{
    m_enableRecommendedQuestions = _enableRecommendedQuestions;
    m_enableRecommendedQuestionsHasBeenSet = true;
}

bool ChatCompletionsRequest::EnableRecommendedQuestionsHasBeenSet() const
{
    return m_enableRecommendedQuestionsHasBeenSet;
}

bool ChatCompletionsRequest::GetEnableDeepRead() const
{
    return m_enableDeepRead;
}

void ChatCompletionsRequest::SetEnableDeepRead(const bool& _enableDeepRead)
{
    m_enableDeepRead = _enableDeepRead;
    m_enableDeepReadHasBeenSet = true;
}

bool ChatCompletionsRequest::EnableDeepReadHasBeenSet() const
{
    return m_enableDeepReadHasBeenSet;
}

WebSearchOptions ChatCompletionsRequest::GetWebSearchOptions() const
{
    return m_webSearchOptions;
}

void ChatCompletionsRequest::SetWebSearchOptions(const WebSearchOptions& _webSearchOptions)
{
    m_webSearchOptions = _webSearchOptions;
    m_webSearchOptionsHasBeenSet = true;
}

bool ChatCompletionsRequest::WebSearchOptionsHasBeenSet() const
{
    return m_webSearchOptionsHasBeenSet;
}

string ChatCompletionsRequest::GetTopicChoice() const
{
    return m_topicChoice;
}

void ChatCompletionsRequest::SetTopicChoice(const string& _topicChoice)
{
    m_topicChoice = _topicChoice;
    m_topicChoiceHasBeenSet = true;
}

bool ChatCompletionsRequest::TopicChoiceHasBeenSet() const
{
    return m_topicChoiceHasBeenSet;
}



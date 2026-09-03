/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/trtc/v20190722/model/CreateRecognizeVocabV3Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

CreateRecognizeVocabV3Request::CreateRecognizeVocabV3Request() :
    m_nameHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_wordWeightsHasBeenSet(false),
    m_wordWeightStrHasBeenSet(false)
{
}

string CreateRecognizeVocabV3Request::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_wordWeightsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordWeights";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_wordWeights.begin(); itr != m_wordWeights.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_wordWeightStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordWeightStr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wordWeightStr.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRecognizeVocabV3Request::GetName() const
{
    return m_name;
}

void CreateRecognizeVocabV3Request::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateRecognizeVocabV3Request::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t CreateRecognizeVocabV3Request::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateRecognizeVocabV3Request::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateRecognizeVocabV3Request::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string CreateRecognizeVocabV3Request::GetDescription() const
{
    return m_description;
}

void CreateRecognizeVocabV3Request::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateRecognizeVocabV3Request::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<HotWord> CreateRecognizeVocabV3Request::GetWordWeights() const
{
    return m_wordWeights;
}

void CreateRecognizeVocabV3Request::SetWordWeights(const vector<HotWord>& _wordWeights)
{
    m_wordWeights = _wordWeights;
    m_wordWeightsHasBeenSet = true;
}

bool CreateRecognizeVocabV3Request::WordWeightsHasBeenSet() const
{
    return m_wordWeightsHasBeenSet;
}

string CreateRecognizeVocabV3Request::GetWordWeightStr() const
{
    return m_wordWeightStr;
}

void CreateRecognizeVocabV3Request::SetWordWeightStr(const string& _wordWeightStr)
{
    m_wordWeightStr = _wordWeightStr;
    m_wordWeightStrHasBeenSet = true;
}

bool CreateRecognizeVocabV3Request::WordWeightStrHasBeenSet() const
{
    return m_wordWeightStrHasBeenSet;
}



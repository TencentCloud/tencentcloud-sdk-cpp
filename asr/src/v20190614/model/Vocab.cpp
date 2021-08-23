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

#include <tencentcloud/asr/v20190614/model/Vocab.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

Vocab::Vocab() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_vocabIdHasBeenSet(false),
    m_wordWeightsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_tagInfosHasBeenSet(false)
{
}

CoreInternalOutcome Vocab::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vocab.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vocab.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("VocabId") && !value["VocabId"].IsNull())
    {
        if (!value["VocabId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vocab.VocabId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vocabId = string(value["VocabId"].GetString());
        m_vocabIdHasBeenSet = true;
    }

    if (value.HasMember("WordWeights") && !value["WordWeights"].IsNull())
    {
        if (!value["WordWeights"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Vocab.WordWeights` is not array type"));

        const rapidjson::Value &tmpValue = value["WordWeights"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HotWord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_wordWeights.push_back(item);
        }
        m_wordWeightsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vocab.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vocab.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Vocab.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("TagInfos") && !value["TagInfos"].IsNull())
    {
        if (!value["TagInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Vocab.TagInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["TagInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagInfos.push_back((*itr).GetString());
        }
        m_tagInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Vocab::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_vocabIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VocabId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vocabId.c_str(), allocator).Move(), allocator);
    }

    if (m_wordWeightsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordWeights";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_wordWeights.begin(); itr != m_wordWeights.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_tagInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagInfos.begin(); itr != m_tagInfos.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string Vocab::GetName() const
{
    return m_name;
}

void Vocab::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Vocab::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Vocab::GetDescription() const
{
    return m_description;
}

void Vocab::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Vocab::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Vocab::GetVocabId() const
{
    return m_vocabId;
}

void Vocab::SetVocabId(const string& _vocabId)
{
    m_vocabId = _vocabId;
    m_vocabIdHasBeenSet = true;
}

bool Vocab::VocabIdHasBeenSet() const
{
    return m_vocabIdHasBeenSet;
}

vector<HotWord> Vocab::GetWordWeights() const
{
    return m_wordWeights;
}

void Vocab::SetWordWeights(const vector<HotWord>& _wordWeights)
{
    m_wordWeights = _wordWeights;
    m_wordWeightsHasBeenSet = true;
}

bool Vocab::WordWeightsHasBeenSet() const
{
    return m_wordWeightsHasBeenSet;
}

string Vocab::GetCreateTime() const
{
    return m_createTime;
}

void Vocab::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Vocab::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Vocab::GetUpdateTime() const
{
    return m_updateTime;
}

void Vocab::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Vocab::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t Vocab::GetState() const
{
    return m_state;
}

void Vocab::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool Vocab::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

vector<string> Vocab::GetTagInfos() const
{
    return m_tagInfos;
}

void Vocab::SetTagInfos(const vector<string>& _tagInfos)
{
    m_tagInfos = _tagInfos;
    m_tagInfosHasBeenSet = true;
}

bool Vocab::TagInfosHasBeenSet() const
{
    return m_tagInfosHasBeenSet;
}


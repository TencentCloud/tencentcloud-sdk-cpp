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

#include <tencentcloud/tci/v20190318/model/VocabStatInfomation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

VocabStatInfomation::VocabStatInfomation() :
    m_vocabDetailInfoHasBeenSet(false),
    m_vocabLibNameHasBeenSet(false)
{
}

CoreInternalOutcome VocabStatInfomation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VocabDetailInfo") && !value["VocabDetailInfo"].IsNull())
    {
        if (!value["VocabDetailInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VocabStatInfomation.VocabDetailInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["VocabDetailInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StatInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vocabDetailInfo.push_back(item);
        }
        m_vocabDetailInfoHasBeenSet = true;
    }

    if (value.HasMember("VocabLibName") && !value["VocabLibName"].IsNull())
    {
        if (!value["VocabLibName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VocabStatInfomation.VocabLibName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vocabLibName = string(value["VocabLibName"].GetString());
        m_vocabLibNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VocabStatInfomation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vocabDetailInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VocabDetailInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vocabDetailInfo.begin(); itr != m_vocabDetailInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vocabLibNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VocabLibName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vocabLibName.c_str(), allocator).Move(), allocator);
    }

}


vector<StatInfo> VocabStatInfomation::GetVocabDetailInfo() const
{
    return m_vocabDetailInfo;
}

void VocabStatInfomation::SetVocabDetailInfo(const vector<StatInfo>& _vocabDetailInfo)
{
    m_vocabDetailInfo = _vocabDetailInfo;
    m_vocabDetailInfoHasBeenSet = true;
}

bool VocabStatInfomation::VocabDetailInfoHasBeenSet() const
{
    return m_vocabDetailInfoHasBeenSet;
}

string VocabStatInfomation::GetVocabLibName() const
{
    return m_vocabLibName;
}

void VocabStatInfomation::SetVocabLibName(const string& _vocabLibName)
{
    m_vocabLibName = _vocabLibName;
    m_vocabLibNameHasBeenSet = true;
}

bool VocabStatInfomation::VocabLibNameHasBeenSet() const
{
    return m_vocabLibNameHasBeenSet;
}


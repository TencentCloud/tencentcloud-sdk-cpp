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

#include <tencentcloud/ame/v20190916/model/KTVMusicTagGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

KTVMusicTagGroup::KTVMusicTagGroup() :
    m_englishGroupNameHasBeenSet(false),
    m_chineseGroupNameHasBeenSet(false),
    m_tagSetHasBeenSet(false)
{
}

CoreInternalOutcome KTVMusicTagGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnglishGroupName") && !value["EnglishGroupName"].IsNull())
    {
        if (!value["EnglishGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMusicTagGroup.EnglishGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_englishGroupName = string(value["EnglishGroupName"].GetString());
        m_englishGroupNameHasBeenSet = true;
    }

    if (value.HasMember("ChineseGroupName") && !value["ChineseGroupName"].IsNull())
    {
        if (!value["ChineseGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMusicTagGroup.ChineseGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chineseGroupName = string(value["ChineseGroupName"].GetString());
        m_chineseGroupNameHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KTVMusicTagGroup.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KTVMusicTagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KTVMusicTagGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_englishGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnglishGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_englishGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_chineseGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChineseGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chineseGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string KTVMusicTagGroup::GetEnglishGroupName() const
{
    return m_englishGroupName;
}

void KTVMusicTagGroup::SetEnglishGroupName(const string& _englishGroupName)
{
    m_englishGroupName = _englishGroupName;
    m_englishGroupNameHasBeenSet = true;
}

bool KTVMusicTagGroup::EnglishGroupNameHasBeenSet() const
{
    return m_englishGroupNameHasBeenSet;
}

string KTVMusicTagGroup::GetChineseGroupName() const
{
    return m_chineseGroupName;
}

void KTVMusicTagGroup::SetChineseGroupName(const string& _chineseGroupName)
{
    m_chineseGroupName = _chineseGroupName;
    m_chineseGroupNameHasBeenSet = true;
}

bool KTVMusicTagGroup::ChineseGroupNameHasBeenSet() const
{
    return m_chineseGroupNameHasBeenSet;
}

vector<KTVMusicTagInfo> KTVMusicTagGroup::GetTagSet() const
{
    return m_tagSet;
}

void KTVMusicTagGroup::SetTagSet(const vector<KTVMusicTagInfo>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool KTVMusicTagGroup::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}


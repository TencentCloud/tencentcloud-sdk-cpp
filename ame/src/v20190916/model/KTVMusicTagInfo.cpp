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

#include <tencentcloud/ame/v20190916/model/KTVMusicTagInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

KTVMusicTagInfo::KTVMusicTagInfo() :
    m_tagIdHasBeenSet(false),
    m_tagNameHasBeenSet(false)
{
}

CoreInternalOutcome KTVMusicTagInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagId") && !value["TagId"].IsNull())
    {
        if (!value["TagId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMusicTagInfo.TagId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagId = string(value["TagId"].GetString());
        m_tagIdHasBeenSet = true;
    }

    if (value.HasMember("TagName") && !value["TagName"].IsNull())
    {
        if (!value["TagName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMusicTagInfo.TagName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagName = string(value["TagName"].GetString());
        m_tagNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KTVMusicTagInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagName.c_str(), allocator).Move(), allocator);
    }

}


string KTVMusicTagInfo::GetTagId() const
{
    return m_tagId;
}

void KTVMusicTagInfo::SetTagId(const string& _tagId)
{
    m_tagId = _tagId;
    m_tagIdHasBeenSet = true;
}

bool KTVMusicTagInfo::TagIdHasBeenSet() const
{
    return m_tagIdHasBeenSet;
}

string KTVMusicTagInfo::GetTagName() const
{
    return m_tagName;
}

void KTVMusicTagInfo::SetTagName(const string& _tagName)
{
    m_tagName = _tagName;
    m_tagNameHasBeenSet = true;
}

bool KTVMusicTagInfo::TagNameHasBeenSet() const
{
    return m_tagNameHasBeenSet;
}


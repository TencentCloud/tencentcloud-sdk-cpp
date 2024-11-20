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

#include <tencentcloud/live/v20180801/model/TransitionTypeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

TransitionTypeInfo::TransitionTypeInfo() :
    m_transitionTypeHasBeenSet(false),
    m_sourceUrlHasBeenSet(false),
    m_indexHasBeenSet(false)
{
}

CoreInternalOutcome TransitionTypeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TransitionType") && !value["TransitionType"].IsNull())
    {
        if (!value["TransitionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransitionTypeInfo.TransitionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transitionType = string(value["TransitionType"].GetString());
        m_transitionTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceUrl") && !value["SourceUrl"].IsNull())
    {
        if (!value["SourceUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransitionTypeInfo.SourceUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceUrl = string(value["SourceUrl"].GetString());
        m_sourceUrlHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TransitionTypeInfo.Index` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetUint64();
        m_indexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TransitionTypeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_transitionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransitionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transitionType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

}


string TransitionTypeInfo::GetTransitionType() const
{
    return m_transitionType;
}

void TransitionTypeInfo::SetTransitionType(const string& _transitionType)
{
    m_transitionType = _transitionType;
    m_transitionTypeHasBeenSet = true;
}

bool TransitionTypeInfo::TransitionTypeHasBeenSet() const
{
    return m_transitionTypeHasBeenSet;
}

string TransitionTypeInfo::GetSourceUrl() const
{
    return m_sourceUrl;
}

void TransitionTypeInfo::SetSourceUrl(const string& _sourceUrl)
{
    m_sourceUrl = _sourceUrl;
    m_sourceUrlHasBeenSet = true;
}

bool TransitionTypeInfo::SourceUrlHasBeenSet() const
{
    return m_sourceUrlHasBeenSet;
}

uint64_t TransitionTypeInfo::GetIndex() const
{
    return m_index;
}

void TransitionTypeInfo::SetIndex(const uint64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool TransitionTypeInfo::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}


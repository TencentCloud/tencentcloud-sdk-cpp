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

#include <tencentcloud/cme/v20191029/model/ExternalMediaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

ExternalMediaInfo::ExternalMediaInfo() :
    m_definitionHasBeenSet(false),
    m_mediaKeyHasBeenSet(false)
{
}

CoreInternalOutcome ExternalMediaInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ExternalMediaInfo.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("MediaKey") && !value["MediaKey"].IsNull())
    {
        if (!value["MediaKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `ExternalMediaInfo.MediaKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mediaKey = string(value["MediaKey"].GetString());
        m_mediaKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExternalMediaInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_mediaKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MediaKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_mediaKey.c_str(), allocator).Move(), allocator);
    }

}


int64_t ExternalMediaInfo::GetDefinition() const
{
    return m_definition;
}

void ExternalMediaInfo::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ExternalMediaInfo::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ExternalMediaInfo::GetMediaKey() const
{
    return m_mediaKey;
}

void ExternalMediaInfo::SetMediaKey(const string& _mediaKey)
{
    m_mediaKey = _mediaKey;
    m_mediaKeyHasBeenSet = true;
}

bool ExternalMediaInfo::MediaKeyHasBeenSet() const
{
    return m_mediaKeyHasBeenSet;
}


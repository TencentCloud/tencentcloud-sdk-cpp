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

#include <tencentcloud/vod/v20180717/model/MediaSourceData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

MediaSourceData::MediaSourceData() :
    m_sourceTypeHasBeenSet(false),
    m_sourceContextHasBeenSet(false)
{
}

CoreInternalOutcome MediaSourceData::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaSourceData.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceContext") && !value["SourceContext"].IsNull())
    {
        if (!value["SourceContext"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaSourceData.SourceContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceContext = string(value["SourceContext"].GetString());
        m_sourceContextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaSourceData::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_sourceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceContextHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sourceContext.c_str(), allocator).Move(), allocator);
    }

}


string MediaSourceData::GetSourceType() const
{
    return m_sourceType;
}

void MediaSourceData::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool MediaSourceData::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string MediaSourceData::GetSourceContext() const
{
    return m_sourceContext;
}

void MediaSourceData::SetSourceContext(const string& _sourceContext)
{
    m_sourceContext = _sourceContext;
    m_sourceContextHasBeenSet = true;
}

bool MediaSourceData::SourceContextHasBeenSet() const
{
    return m_sourceContextHasBeenSet;
}


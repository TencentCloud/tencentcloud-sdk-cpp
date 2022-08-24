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

#include <tencentcloud/vod/v20180717/model/SubtitleFormatsOperation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

SubtitleFormatsOperation::SubtitleFormatsOperation() :
    m_typeHasBeenSet(false),
    m_formatsHasBeenSet(false)
{
}

CoreInternalOutcome SubtitleFormatsOperation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleFormatsOperation.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Formats") && !value["Formats"].IsNull())
    {
        if (!value["Formats"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubtitleFormatsOperation.Formats` is not array type"));

        const rapidjson::Value &tmpValue = value["Formats"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_formats.push_back((*itr).GetString());
        }
        m_formatsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubtitleFormatsOperation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_formatsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Formats";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_formats.begin(); itr != m_formats.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string SubtitleFormatsOperation::GetType() const
{
    return m_type;
}

void SubtitleFormatsOperation::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SubtitleFormatsOperation::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> SubtitleFormatsOperation::GetFormats() const
{
    return m_formats;
}

void SubtitleFormatsOperation::SetFormats(const vector<string>& _formats)
{
    m_formats = _formats;
    m_formatsHasBeenSet = true;
}

bool SubtitleFormatsOperation::FormatsHasBeenSet() const
{
    return m_formatsHasBeenSet;
}


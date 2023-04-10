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

#include <tencentcloud/ocr/v20181119/model/LineInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

LineInfo::LineInfo() :
    m_linesHasBeenSet(false)
{
}

CoreInternalOutcome LineInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Lines") && !value["Lines"].IsNull())
    {
        if (!value["Lines"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LineInfo.Lines` is not array type"));

        const rapidjson::Value &tmpValue = value["Lines"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ItemInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_lines.push_back(item);
        }
        m_linesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LineInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_linesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lines";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lines.begin(); itr != m_lines.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<ItemInfo> LineInfo::GetLines() const
{
    return m_lines;
}

void LineInfo::SetLines(const vector<ItemInfo>& _lines)
{
    m_lines = _lines;
    m_linesHasBeenSet = true;
}

bool LineInfo::LinesHasBeenSet() const
{
    return m_linesHasBeenSet;
}


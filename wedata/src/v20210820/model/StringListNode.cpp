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

#include <tencentcloud/wedata/v20210820/model/StringListNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

StringListNode::StringListNode() :
    m_previewRecordHasBeenSet(false)
{
}

CoreInternalOutcome StringListNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PreviewRecord") && !value["PreviewRecord"].IsNull())
    {
        if (!value["PreviewRecord"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StringListNode.PreviewRecord` is not array type"));

        const rapidjson::Value &tmpValue = value["PreviewRecord"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_previewRecord.push_back((*itr).GetString());
        }
        m_previewRecordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StringListNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_previewRecordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewRecord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_previewRecord.begin(); itr != m_previewRecord.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> StringListNode::GetPreviewRecord() const
{
    return m_previewRecord;
}

void StringListNode::SetPreviewRecord(const vector<string>& _previewRecord)
{
    m_previewRecord = _previewRecord;
    m_previewRecordHasBeenSet = true;
}

bool StringListNode::PreviewRecordHasBeenSet() const
{
    return m_previewRecordHasBeenSet;
}


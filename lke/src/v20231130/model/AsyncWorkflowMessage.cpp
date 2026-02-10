/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/lke/v20231130/model/AsyncWorkflowMessage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AsyncWorkflowMessage::AsyncWorkflowMessage() :
    m_contentsHasBeenSet(false)
{
}

CoreInternalOutcome AsyncWorkflowMessage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Contents") && !value["Contents"].IsNull())
    {
        if (!value["Contents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AsyncWorkflowMessage.Contents` is not array type"));

        const rapidjson::Value &tmpValue = value["Contents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Content item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_contents.push_back(item);
        }
        m_contentsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AsyncWorkflowMessage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_contents.begin(); itr != m_contents.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<Content> AsyncWorkflowMessage::GetContents() const
{
    return m_contents;
}

void AsyncWorkflowMessage::SetContents(const vector<Content>& _contents)
{
    m_contents = _contents;
    m_contentsHasBeenSet = true;
}

bool AsyncWorkflowMessage::ContentsHasBeenSet() const
{
    return m_contentsHasBeenSet;
}


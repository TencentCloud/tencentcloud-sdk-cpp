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

#include <tencentcloud/thpc/v20211109/model/StorageOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20211109::Model;
using namespace std;

StorageOption::StorageOption() :
    m_cFSOptionsHasBeenSet(false),
    m_gooseFSOptionsHasBeenSet(false)
{
}

CoreInternalOutcome StorageOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CFSOptions") && !value["CFSOptions"].IsNull())
    {
        if (!value["CFSOptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StorageOption.CFSOptions` is not array type"));

        const rapidjson::Value &tmpValue = value["CFSOptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CFSOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cFSOptions.push_back(item);
        }
        m_cFSOptionsHasBeenSet = true;
    }

    if (value.HasMember("GooseFSOptions") && !value["GooseFSOptions"].IsNull())
    {
        if (!value["GooseFSOptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StorageOption.GooseFSOptions` is not array type"));

        const rapidjson::Value &tmpValue = value["GooseFSOptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GooseFSOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_gooseFSOptions.push_back(item);
        }
        m_gooseFSOptionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cFSOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFSOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cFSOptions.begin(); itr != m_cFSOptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_gooseFSOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GooseFSOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_gooseFSOptions.begin(); itr != m_gooseFSOptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<CFSOption> StorageOption::GetCFSOptions() const
{
    return m_cFSOptions;
}

void StorageOption::SetCFSOptions(const vector<CFSOption>& _cFSOptions)
{
    m_cFSOptions = _cFSOptions;
    m_cFSOptionsHasBeenSet = true;
}

bool StorageOption::CFSOptionsHasBeenSet() const
{
    return m_cFSOptionsHasBeenSet;
}

vector<GooseFSOption> StorageOption::GetGooseFSOptions() const
{
    return m_gooseFSOptions;
}

void StorageOption::SetGooseFSOptions(const vector<GooseFSOption>& _gooseFSOptions)
{
    m_gooseFSOptions = _gooseFSOptions;
    m_gooseFSOptionsHasBeenSet = true;
}

bool StorageOption::GooseFSOptionsHasBeenSet() const
{
    return m_gooseFSOptionsHasBeenSet;
}


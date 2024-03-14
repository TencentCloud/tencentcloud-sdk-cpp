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

#include <tencentcloud/es/v20180416/model/CommonIndexInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

CommonIndexInfo::CommonIndexInfo() :
    m_indexNameHasBeenSet(false),
    m_isShardCompleteHasBeenSet(false)
{
}

CoreInternalOutcome CommonIndexInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IndexName") && !value["IndexName"].IsNull())
    {
        if (!value["IndexName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonIndexInfo.IndexName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexName = string(value["IndexName"].GetString());
        m_indexNameHasBeenSet = true;
    }

    if (value.HasMember("IsShardComplete") && !value["IsShardComplete"].IsNull())
    {
        if (!value["IsShardComplete"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CommonIndexInfo.IsShardComplete` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isShardComplete = value["IsShardComplete"].GetInt64();
        m_isShardCompleteHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommonIndexInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexName.c_str(), allocator).Move(), allocator);
    }

    if (m_isShardCompleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsShardComplete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isShardComplete, allocator);
    }

}


string CommonIndexInfo::GetIndexName() const
{
    return m_indexName;
}

void CommonIndexInfo::SetIndexName(const string& _indexName)
{
    m_indexName = _indexName;
    m_indexNameHasBeenSet = true;
}

bool CommonIndexInfo::IndexNameHasBeenSet() const
{
    return m_indexNameHasBeenSet;
}

int64_t CommonIndexInfo::GetIsShardComplete() const
{
    return m_isShardComplete;
}

void CommonIndexInfo::SetIsShardComplete(const int64_t& _isShardComplete)
{
    m_isShardComplete = _isShardComplete;
    m_isShardCompleteHasBeenSet = true;
}

bool CommonIndexInfo::IsShardCompleteHasBeenSet() const
{
    return m_isShardCompleteHasBeenSet;
}


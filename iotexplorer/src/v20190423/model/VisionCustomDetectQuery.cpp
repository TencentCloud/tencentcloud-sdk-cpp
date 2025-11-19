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

#include <tencentcloud/iotexplorer/v20190423/model/VisionCustomDetectQuery.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

VisionCustomDetectQuery::VisionCustomDetectQuery() :
    m_keyHasBeenSet(false),
    m_queryHasBeenSet(false)
{
}

CoreInternalOutcome VisionCustomDetectQuery::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VisionCustomDetectQuery.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Query") && !value["Query"].IsNull())
    {
        if (!value["Query"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VisionCustomDetectQuery.Query` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_query = string(value["Query"].GetString());
        m_queryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VisionCustomDetectQuery::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

}


string VisionCustomDetectQuery::GetKey() const
{
    return m_key;
}

void VisionCustomDetectQuery::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool VisionCustomDetectQuery::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string VisionCustomDetectQuery::GetQuery() const
{
    return m_query;
}

void VisionCustomDetectQuery::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool VisionCustomDetectQuery::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}


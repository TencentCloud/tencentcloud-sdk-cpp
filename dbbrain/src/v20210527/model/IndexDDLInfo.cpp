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

#include <tencentcloud/dbbrain/v20210527/model/IndexDDLInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

IndexDDLInfo::IndexDDLInfo() :
    m_indexNameHasBeenSet(false),
    m_dDLHasBeenSet(false)
{
}

CoreInternalOutcome IndexDDLInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IndexName") && !value["IndexName"].IsNull())
    {
        if (!value["IndexName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexDDLInfo.IndexName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexName = string(value["IndexName"].GetString());
        m_indexNameHasBeenSet = true;
    }

    if (value.HasMember("DDL") && !value["DDL"].IsNull())
    {
        if (!value["DDL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexDDLInfo.DDL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dDL = string(value["DDL"].GetString());
        m_dDLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IndexDDLInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexName.c_str(), allocator).Move(), allocator);
    }

    if (m_dDLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dDL.c_str(), allocator).Move(), allocator);
    }

}


string IndexDDLInfo::GetIndexName() const
{
    return m_indexName;
}

void IndexDDLInfo::SetIndexName(const string& _indexName)
{
    m_indexName = _indexName;
    m_indexNameHasBeenSet = true;
}

bool IndexDDLInfo::IndexNameHasBeenSet() const
{
    return m_indexNameHasBeenSet;
}

string IndexDDLInfo::GetDDL() const
{
    return m_dDL;
}

void IndexDDLInfo::SetDDL(const string& _dDL)
{
    m_dDL = _dDL;
    m_dDLHasBeenSet = true;
}

bool IndexDDLInfo::DDLHasBeenSet() const
{
    return m_dDLHasBeenSet;
}


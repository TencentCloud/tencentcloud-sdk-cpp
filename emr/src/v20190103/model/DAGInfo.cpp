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

#include <tencentcloud/emr/v20190103/model/DAGInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DAGInfo::DAGInfo() :
    m_iDHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

CoreInternalOutcome DAGInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DAGInfo.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DAGInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DAGInfo.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DAGInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

}


string DAGInfo::GetID() const
{
    return m_iD;
}

void DAGInfo::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DAGInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string DAGInfo::GetType() const
{
    return m_type;
}

void DAGInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DAGInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DAGInfo::GetContent() const
{
    return m_content;
}

void DAGInfo::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool DAGInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}


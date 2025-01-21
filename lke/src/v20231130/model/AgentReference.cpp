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

#include <tencentcloud/lke/v20231130/model/AgentReference.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentReference::AgentReference() :
    m_docIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_docBizIdHasBeenSet(false),
    m_docNameHasBeenSet(false),
    m_qaBizIdHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

CoreInternalOutcome AgentReference::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DocId") && !value["DocId"].IsNull())
    {
        if (!value["DocId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentReference.DocId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docId = string(value["DocId"].GetString());
        m_docIdHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentReference.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentReference.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentReference.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentReference.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("DocBizId") && !value["DocBizId"].IsNull())
    {
        if (!value["DocBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentReference.DocBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docBizId = string(value["DocBizId"].GetString());
        m_docBizIdHasBeenSet = true;
    }

    if (value.HasMember("DocName") && !value["DocName"].IsNull())
    {
        if (!value["DocName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentReference.DocName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docName = string(value["DocName"].GetString());
        m_docNameHasBeenSet = true;
    }

    if (value.HasMember("QaBizId") && !value["QaBizId"].IsNull())
    {
        if (!value["QaBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentReference.QaBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qaBizId = string(value["QaBizId"].GetString());
        m_qaBizIdHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentReference.Index` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetUint64();
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentReference.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentReference::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_docIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docId.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_docBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_docNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docName.c_str(), allocator).Move(), allocator);
    }

    if (m_qaBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qaBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

}


string AgentReference::GetDocId() const
{
    return m_docId;
}

void AgentReference::SetDocId(const string& _docId)
{
    m_docId = _docId;
    m_docIdHasBeenSet = true;
}

bool AgentReference::DocIdHasBeenSet() const
{
    return m_docIdHasBeenSet;
}

string AgentReference::GetId() const
{
    return m_id;
}

void AgentReference::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AgentReference::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AgentReference::GetName() const
{
    return m_name;
}

void AgentReference::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AgentReference::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t AgentReference::GetType() const
{
    return m_type;
}

void AgentReference::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AgentReference::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AgentReference::GetUrl() const
{
    return m_url;
}

void AgentReference::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool AgentReference::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string AgentReference::GetDocBizId() const
{
    return m_docBizId;
}

void AgentReference::SetDocBizId(const string& _docBizId)
{
    m_docBizId = _docBizId;
    m_docBizIdHasBeenSet = true;
}

bool AgentReference::DocBizIdHasBeenSet() const
{
    return m_docBizIdHasBeenSet;
}

string AgentReference::GetDocName() const
{
    return m_docName;
}

void AgentReference::SetDocName(const string& _docName)
{
    m_docName = _docName;
    m_docNameHasBeenSet = true;
}

bool AgentReference::DocNameHasBeenSet() const
{
    return m_docNameHasBeenSet;
}

string AgentReference::GetQaBizId() const
{
    return m_qaBizId;
}

void AgentReference::SetQaBizId(const string& _qaBizId)
{
    m_qaBizId = _qaBizId;
    m_qaBizIdHasBeenSet = true;
}

bool AgentReference::QaBizIdHasBeenSet() const
{
    return m_qaBizIdHasBeenSet;
}

uint64_t AgentReference::GetIndex() const
{
    return m_index;
}

void AgentReference::SetIndex(const uint64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool AgentReference::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string AgentReference::GetTitle() const
{
    return m_title;
}

void AgentReference::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool AgentReference::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}


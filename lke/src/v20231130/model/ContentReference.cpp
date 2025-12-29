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

#include <tencentcloud/lke/v20231130/model/ContentReference.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ContentReference::ContentReference() :
    m_indexHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_docReferHasBeenSet(false),
    m_qaReferHasBeenSet(false),
    m_webSearchReferHasBeenSet(false)
{
}

CoreInternalOutcome ContentReference::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReference.Index` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetInt64();
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReference.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReference.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("DocRefer") && !value["DocRefer"].IsNull())
    {
        if (!value["DocRefer"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReference.DocRefer` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_docRefer.Deserialize(value["DocRefer"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_docReferHasBeenSet = true;
    }

    if (value.HasMember("QaRefer") && !value["QaRefer"].IsNull())
    {
        if (!value["QaRefer"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReference.QaRefer` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_qaRefer.Deserialize(value["QaRefer"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_qaReferHasBeenSet = true;
    }

    if (value.HasMember("WebSearchRefer") && !value["WebSearchRefer"].IsNull())
    {
        if (!value["WebSearchRefer"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReference.WebSearchRefer` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_webSearchRefer.Deserialize(value["WebSearchRefer"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_webSearchReferHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContentReference::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
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

    if (m_docReferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocRefer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_docRefer.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_qaReferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaRefer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qaRefer.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_webSearchReferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebSearchRefer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webSearchRefer.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t ContentReference::GetIndex() const
{
    return m_index;
}

void ContentReference::SetIndex(const int64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool ContentReference::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string ContentReference::GetName() const
{
    return m_name;
}

void ContentReference::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ContentReference::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ContentReference::GetType() const
{
    return m_type;
}

void ContentReference::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ContentReference::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

DocReference ContentReference::GetDocRefer() const
{
    return m_docRefer;
}

void ContentReference::SetDocRefer(const DocReference& _docRefer)
{
    m_docRefer = _docRefer;
    m_docReferHasBeenSet = true;
}

bool ContentReference::DocReferHasBeenSet() const
{
    return m_docReferHasBeenSet;
}

QaReference ContentReference::GetQaRefer() const
{
    return m_qaRefer;
}

void ContentReference::SetQaRefer(const QaReference& _qaRefer)
{
    m_qaRefer = _qaRefer;
    m_qaReferHasBeenSet = true;
}

bool ContentReference::QaReferHasBeenSet() const
{
    return m_qaReferHasBeenSet;
}

WebSearchReference ContentReference::GetWebSearchRefer() const
{
    return m_webSearchRefer;
}

void ContentReference::SetWebSearchRefer(const WebSearchReference& _webSearchRefer)
{
    m_webSearchRefer = _webSearchRefer;
    m_webSearchReferHasBeenSet = true;
}

bool ContentReference::WebSearchReferHasBeenSet() const
{
    return m_webSearchReferHasBeenSet;
}


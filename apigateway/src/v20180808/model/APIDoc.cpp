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

#include <tencentcloud/apigateway/v20180808/model/APIDoc.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

APIDoc::APIDoc() :
    m_apiDocIdHasBeenSet(false),
    m_apiDocNameHasBeenSet(false),
    m_apiDocStatusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome APIDoc::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiDocId") && !value["ApiDocId"].IsNull())
    {
        if (!value["ApiDocId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIDoc.ApiDocId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiDocId = string(value["ApiDocId"].GetString());
        m_apiDocIdHasBeenSet = true;
    }

    if (value.HasMember("ApiDocName") && !value["ApiDocName"].IsNull())
    {
        if (!value["ApiDocName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIDoc.ApiDocName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiDocName = string(value["ApiDocName"].GetString());
        m_apiDocNameHasBeenSet = true;
    }

    if (value.HasMember("ApiDocStatus") && !value["ApiDocStatus"].IsNull())
    {
        if (!value["ApiDocStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIDoc.ApiDocStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiDocStatus = string(value["ApiDocStatus"].GetString());
        m_apiDocStatusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `APIDoc.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void APIDoc::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiDocIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiDocId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiDocId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiDocNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiDocName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiDocName.c_str(), allocator).Move(), allocator);
    }

    if (m_apiDocStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiDocStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiDocStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string APIDoc::GetApiDocId() const
{
    return m_apiDocId;
}

void APIDoc::SetApiDocId(const string& _apiDocId)
{
    m_apiDocId = _apiDocId;
    m_apiDocIdHasBeenSet = true;
}

bool APIDoc::ApiDocIdHasBeenSet() const
{
    return m_apiDocIdHasBeenSet;
}

string APIDoc::GetApiDocName() const
{
    return m_apiDocName;
}

void APIDoc::SetApiDocName(const string& _apiDocName)
{
    m_apiDocName = _apiDocName;
    m_apiDocNameHasBeenSet = true;
}

bool APIDoc::ApiDocNameHasBeenSet() const
{
    return m_apiDocNameHasBeenSet;
}

string APIDoc::GetApiDocStatus() const
{
    return m_apiDocStatus;
}

void APIDoc::SetApiDocStatus(const string& _apiDocStatus)
{
    m_apiDocStatus = _apiDocStatus;
    m_apiDocStatusHasBeenSet = true;
}

bool APIDoc::ApiDocStatusHasBeenSet() const
{
    return m_apiDocStatusHasBeenSet;
}

vector<Tag> APIDoc::GetTags() const
{
    return m_tags;
}

void APIDoc::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool APIDoc::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


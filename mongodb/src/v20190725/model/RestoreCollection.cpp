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

#include <tencentcloud/mongodb/v20190725/model/RestoreCollection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

RestoreCollection::RestoreCollection() :
    m_oldCollectionHasBeenSet(false),
    m_newCollectionHasBeenSet(false)
{
}

CoreInternalOutcome RestoreCollection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OldCollection") && !value["OldCollection"].IsNull())
    {
        if (!value["OldCollection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreCollection.OldCollection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldCollection = string(value["OldCollection"].GetString());
        m_oldCollectionHasBeenSet = true;
    }

    if (value.HasMember("NewCollection") && !value["NewCollection"].IsNull())
    {
        if (!value["NewCollection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreCollection.NewCollection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newCollection = string(value["NewCollection"].GetString());
        m_newCollectionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RestoreCollection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_oldCollectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldCollection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldCollection.c_str(), allocator).Move(), allocator);
    }

    if (m_newCollectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewCollection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newCollection.c_str(), allocator).Move(), allocator);
    }

}


string RestoreCollection::GetOldCollection() const
{
    return m_oldCollection;
}

void RestoreCollection::SetOldCollection(const string& _oldCollection)
{
    m_oldCollection = _oldCollection;
    m_oldCollectionHasBeenSet = true;
}

bool RestoreCollection::OldCollectionHasBeenSet() const
{
    return m_oldCollectionHasBeenSet;
}

string RestoreCollection::GetNewCollection() const
{
    return m_newCollection;
}

void RestoreCollection::SetNewCollection(const string& _newCollection)
{
    m_newCollection = _newCollection;
    m_newCollectionHasBeenSet = true;
}

bool RestoreCollection::NewCollectionHasBeenSet() const
{
    return m_newCollectionHasBeenSet;
}


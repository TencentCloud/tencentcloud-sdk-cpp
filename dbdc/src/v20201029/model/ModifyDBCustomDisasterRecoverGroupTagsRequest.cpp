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

#include <tencentcloud/dbdc/v20201029/model/ModifyDBCustomDisasterRecoverGroupTagsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

ModifyDBCustomDisasterRecoverGroupTagsRequest::ModifyDBCustomDisasterRecoverGroupTagsRequest() :
    m_disasterRecoverGroupIdHasBeenSet(false),
    m_addTagsHasBeenSet(false),
    m_deleteTagKeysHasBeenSet(false)
{
}

string ModifyDBCustomDisasterRecoverGroupTagsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_disasterRecoverGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisasterRecoverGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_disasterRecoverGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_addTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_addTags.begin(); itr != m_addTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_deleteTagKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteTagKeys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deleteTagKeys.begin(); itr != m_deleteTagKeys.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBCustomDisasterRecoverGroupTagsRequest::GetDisasterRecoverGroupId() const
{
    return m_disasterRecoverGroupId;
}

void ModifyDBCustomDisasterRecoverGroupTagsRequest::SetDisasterRecoverGroupId(const string& _disasterRecoverGroupId)
{
    m_disasterRecoverGroupId = _disasterRecoverGroupId;
    m_disasterRecoverGroupIdHasBeenSet = true;
}

bool ModifyDBCustomDisasterRecoverGroupTagsRequest::DisasterRecoverGroupIdHasBeenSet() const
{
    return m_disasterRecoverGroupIdHasBeenSet;
}

vector<Tag> ModifyDBCustomDisasterRecoverGroupTagsRequest::GetAddTags() const
{
    return m_addTags;
}

void ModifyDBCustomDisasterRecoverGroupTagsRequest::SetAddTags(const vector<Tag>& _addTags)
{
    m_addTags = _addTags;
    m_addTagsHasBeenSet = true;
}

bool ModifyDBCustomDisasterRecoverGroupTagsRequest::AddTagsHasBeenSet() const
{
    return m_addTagsHasBeenSet;
}

vector<string> ModifyDBCustomDisasterRecoverGroupTagsRequest::GetDeleteTagKeys() const
{
    return m_deleteTagKeys;
}

void ModifyDBCustomDisasterRecoverGroupTagsRequest::SetDeleteTagKeys(const vector<string>& _deleteTagKeys)
{
    m_deleteTagKeys = _deleteTagKeys;
    m_deleteTagKeysHasBeenSet = true;
}

bool ModifyDBCustomDisasterRecoverGroupTagsRequest::DeleteTagKeysHasBeenSet() const
{
    return m_deleteTagKeysHasBeenSet;
}



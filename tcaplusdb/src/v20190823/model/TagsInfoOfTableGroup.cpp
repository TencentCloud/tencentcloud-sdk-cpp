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

#include <tencentcloud/tcaplusdb/v20190823/model/TagsInfoOfTableGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

TagsInfoOfTableGroup::TagsInfoOfTableGroup() :
    m_clusterIdHasBeenSet(false),
    m_tableGroupIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

CoreInternalOutcome TagsInfoOfTableGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagsInfoOfTableGroup.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("TableGroupId") && !value["TableGroupId"].IsNull())
    {
        if (!value["TableGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagsInfoOfTableGroup.TableGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableGroupId = string(value["TableGroupId"].GetString());
        m_tableGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TagsInfoOfTableGroup.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfoUnit item;
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

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TagsInfoOfTableGroup.Error` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_error.Deserialize(value["Error"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TagsInfoOfTableGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableGroupId.c_str(), allocator).Move(), allocator);
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

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_error.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TagsInfoOfTableGroup::GetClusterId() const
{
    return m_clusterId;
}

void TagsInfoOfTableGroup::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool TagsInfoOfTableGroup::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string TagsInfoOfTableGroup::GetTableGroupId() const
{
    return m_tableGroupId;
}

void TagsInfoOfTableGroup::SetTableGroupId(const string& _tableGroupId)
{
    m_tableGroupId = _tableGroupId;
    m_tableGroupIdHasBeenSet = true;
}

bool TagsInfoOfTableGroup::TableGroupIdHasBeenSet() const
{
    return m_tableGroupIdHasBeenSet;
}

vector<TagInfoUnit> TagsInfoOfTableGroup::GetTags() const
{
    return m_tags;
}

void TagsInfoOfTableGroup::SetTags(const vector<TagInfoUnit>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool TagsInfoOfTableGroup::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

ErrorInfo TagsInfoOfTableGroup::GetError() const
{
    return m_error;
}

void TagsInfoOfTableGroup::SetError(const ErrorInfo& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool TagsInfoOfTableGroup::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}


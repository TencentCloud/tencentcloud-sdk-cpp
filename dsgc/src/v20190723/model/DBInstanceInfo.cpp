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

#include <tencentcloud/dsgc/v20190723/model/DBInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DBInstanceInfo::DBInstanceInfo() :
    m_resourceIdHasBeenSet(false),
    m_dbInfosHasBeenSet(false)
{
}

CoreInternalOutcome DBInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstanceInfo.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("DbInfos") && !value["DbInfos"].IsNull())
    {
        if (!value["DbInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DBInstanceInfo.DbInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["DbInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DbInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dbInfos.push_back(item);
        }
        m_dbInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DBInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dbInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dbInfos.begin(); itr != m_dbInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DBInstanceInfo::GetResourceId() const
{
    return m_resourceId;
}

void DBInstanceInfo::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DBInstanceInfo::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

vector<DbInfo> DBInstanceInfo::GetDbInfos() const
{
    return m_dbInfos;
}

void DBInstanceInfo::SetDbInfos(const vector<DbInfo>& _dbInfos)
{
    m_dbInfos = _dbInfos;
    m_dbInfosHasBeenSet = true;
}

bool DBInstanceInfo::DbInfosHasBeenSet() const
{
    return m_dbInfosHasBeenSet;
}


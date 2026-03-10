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

#include <tencentcloud/organization/v20210331/model/ShareUnitNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

ShareUnitNode::ShareUnitNode() :
    m_shareNodeIdHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome ShareUnitNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ShareNodeId") && !value["ShareNodeId"].IsNull())
    {
        if (!value["ShareNodeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShareUnitNode.ShareNodeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shareNodeId = value["ShareNodeId"].GetInt64();
        m_shareNodeIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareUnitNode.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShareUnitNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_shareNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shareNodeId, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t ShareUnitNode::GetShareNodeId() const
{
    return m_shareNodeId;
}

void ShareUnitNode::SetShareNodeId(const int64_t& _shareNodeId)
{
    m_shareNodeId = _shareNodeId;
    m_shareNodeIdHasBeenSet = true;
}

bool ShareUnitNode::ShareNodeIdHasBeenSet() const
{
    return m_shareNodeIdHasBeenSet;
}

string ShareUnitNode::GetCreateTime() const
{
    return m_createTime;
}

void ShareUnitNode::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ShareUnitNode::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}


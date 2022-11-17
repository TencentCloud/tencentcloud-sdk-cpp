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

#include <tencentcloud/tdid/v20210519/model/Label.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

Label::Label() :
    m_labelIdHasBeenSet(false),
    m_labelNameHasBeenSet(false),
    m_didCountHasBeenSet(false),
    m_didHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

CoreInternalOutcome Label::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LabelId") && !value["LabelId"].IsNull())
    {
        if (!value["LabelId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Label.LabelId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_labelId = value["LabelId"].GetUint64();
        m_labelIdHasBeenSet = true;
    }

    if (value.HasMember("LabelName") && !value["LabelName"].IsNull())
    {
        if (!value["LabelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Label.LabelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelName = string(value["LabelName"].GetString());
        m_labelNameHasBeenSet = true;
    }

    if (value.HasMember("DidCount") && !value["DidCount"].IsNull())
    {
        if (!value["DidCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Label.DidCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_didCount = value["DidCount"].GetInt64();
        m_didCountHasBeenSet = true;
    }

    if (value.HasMember("Did") && !value["Did"].IsNull())
    {
        if (!value["Did"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Label.Did` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_did = string(value["Did"].GetString());
        m_didHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Label.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Label.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Label.GroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetInt64();
        m_groupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Label::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_labelId, allocator);
    }

    if (m_labelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelName.c_str(), allocator).Move(), allocator);
    }

    if (m_didCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DidCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_didCount, allocator);
    }

    if (m_didHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Did";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_did.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

}


uint64_t Label::GetLabelId() const
{
    return m_labelId;
}

void Label::SetLabelId(const uint64_t& _labelId)
{
    m_labelId = _labelId;
    m_labelIdHasBeenSet = true;
}

bool Label::LabelIdHasBeenSet() const
{
    return m_labelIdHasBeenSet;
}

string Label::GetLabelName() const
{
    return m_labelName;
}

void Label::SetLabelName(const string& _labelName)
{
    m_labelName = _labelName;
    m_labelNameHasBeenSet = true;
}

bool Label::LabelNameHasBeenSet() const
{
    return m_labelNameHasBeenSet;
}

int64_t Label::GetDidCount() const
{
    return m_didCount;
}

void Label::SetDidCount(const int64_t& _didCount)
{
    m_didCount = _didCount;
    m_didCountHasBeenSet = true;
}

bool Label::DidCountHasBeenSet() const
{
    return m_didCountHasBeenSet;
}

string Label::GetDid() const
{
    return m_did;
}

void Label::SetDid(const string& _did)
{
    m_did = _did;
    m_didHasBeenSet = true;
}

bool Label::DidHasBeenSet() const
{
    return m_didHasBeenSet;
}

string Label::GetClusterId() const
{
    return m_clusterId;
}

void Label::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool Label::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string Label::GetCreateTime() const
{
    return m_createTime;
}

void Label::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Label::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t Label::GetGroupId() const
{
    return m_groupId;
}

void Label::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool Label::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}


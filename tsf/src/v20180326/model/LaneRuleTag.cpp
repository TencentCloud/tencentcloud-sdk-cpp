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

#include <tencentcloud/tsf/v20180326/model/LaneRuleTag.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

LaneRuleTag::LaneRuleTag() :
    m_tagIdHasBeenSet(false),
    m_tagNameHasBeenSet(false),
    m_tagOperatorHasBeenSet(false),
    m_tagValueHasBeenSet(false),
    m_laneRuleIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome LaneRuleTag::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagId") && !value["TagId"].IsNull())
    {
        if (!value["TagId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneRuleTag.TagId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagId = string(value["TagId"].GetString());
        m_tagIdHasBeenSet = true;
    }

    if (value.HasMember("TagName") && !value["TagName"].IsNull())
    {
        if (!value["TagName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneRuleTag.TagName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagName = string(value["TagName"].GetString());
        m_tagNameHasBeenSet = true;
    }

    if (value.HasMember("TagOperator") && !value["TagOperator"].IsNull())
    {
        if (!value["TagOperator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneRuleTag.TagOperator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagOperator = string(value["TagOperator"].GetString());
        m_tagOperatorHasBeenSet = true;
    }

    if (value.HasMember("TagValue") && !value["TagValue"].IsNull())
    {
        if (!value["TagValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneRuleTag.TagValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagValue = string(value["TagValue"].GetString());
        m_tagValueHasBeenSet = true;
    }

    if (value.HasMember("LaneRuleId") && !value["LaneRuleId"].IsNull())
    {
        if (!value["LaneRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneRuleTag.LaneRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_laneRuleId = string(value["LaneRuleId"].GetString());
        m_laneRuleIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LaneRuleTag.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LaneRuleTag.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LaneRuleTag::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagOperator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagOperator.c_str(), allocator).Move(), allocator);
    }

    if (m_tagValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagValue.c_str(), allocator).Move(), allocator);
    }

    if (m_laneRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaneRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_laneRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string LaneRuleTag::GetTagId() const
{
    return m_tagId;
}

void LaneRuleTag::SetTagId(const string& _tagId)
{
    m_tagId = _tagId;
    m_tagIdHasBeenSet = true;
}

bool LaneRuleTag::TagIdHasBeenSet() const
{
    return m_tagIdHasBeenSet;
}

string LaneRuleTag::GetTagName() const
{
    return m_tagName;
}

void LaneRuleTag::SetTagName(const string& _tagName)
{
    m_tagName = _tagName;
    m_tagNameHasBeenSet = true;
}

bool LaneRuleTag::TagNameHasBeenSet() const
{
    return m_tagNameHasBeenSet;
}

string LaneRuleTag::GetTagOperator() const
{
    return m_tagOperator;
}

void LaneRuleTag::SetTagOperator(const string& _tagOperator)
{
    m_tagOperator = _tagOperator;
    m_tagOperatorHasBeenSet = true;
}

bool LaneRuleTag::TagOperatorHasBeenSet() const
{
    return m_tagOperatorHasBeenSet;
}

string LaneRuleTag::GetTagValue() const
{
    return m_tagValue;
}

void LaneRuleTag::SetTagValue(const string& _tagValue)
{
    m_tagValue = _tagValue;
    m_tagValueHasBeenSet = true;
}

bool LaneRuleTag::TagValueHasBeenSet() const
{
    return m_tagValueHasBeenSet;
}

string LaneRuleTag::GetLaneRuleId() const
{
    return m_laneRuleId;
}

void LaneRuleTag::SetLaneRuleId(const string& _laneRuleId)
{
    m_laneRuleId = _laneRuleId;
    m_laneRuleIdHasBeenSet = true;
}

bool LaneRuleTag::LaneRuleIdHasBeenSet() const
{
    return m_laneRuleIdHasBeenSet;
}

int64_t LaneRuleTag::GetCreateTime() const
{
    return m_createTime;
}

void LaneRuleTag::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LaneRuleTag::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t LaneRuleTag::GetUpdateTime() const
{
    return m_updateTime;
}

void LaneRuleTag::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool LaneRuleTag::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}


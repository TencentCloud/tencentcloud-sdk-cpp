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

#include <tencentcloud/cfg/v20210820/model/TemplateGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

TemplateGroup::TemplateGroup() :
    m_templateGroupIdHasBeenSet(false),
    m_templateGroupActionsHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_objectTypeIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome TemplateGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateGroupId") && !value["TemplateGroupId"].IsNull())
    {
        if (!value["TemplateGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroup.TemplateGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateGroupId = value["TemplateGroupId"].GetInt64();
        m_templateGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateGroupActions") && !value["TemplateGroupActions"].IsNull())
    {
        if (!value["TemplateGroupActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemplateGroup.TemplateGroupActions` is not array type"));

        const rapidjson::Value &tmpValue = value["TemplateGroupActions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TemplateGroupAction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_templateGroupActions.push_back(item);
        }
        m_templateGroupActionsHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroup.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroup.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Order") && !value["Order"].IsNull())
    {
        if (!value["Order"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroup.Order` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_order = value["Order"].GetInt64();
        m_orderHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroup.Mode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = value["Mode"].GetInt64();
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("ObjectTypeId") && !value["ObjectTypeId"].IsNull())
    {
        if (!value["ObjectTypeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroup.ObjectTypeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_objectTypeId = value["ObjectTypeId"].GetInt64();
        m_objectTypeIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateGroup.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemplateGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateGroupId, allocator);
    }

    if (m_templateGroupActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateGroupActions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_templateGroupActions.begin(); itr != m_templateGroupActions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_order, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

    if (m_objectTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_objectTypeId, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t TemplateGroup::GetTemplateGroupId() const
{
    return m_templateGroupId;
}

void TemplateGroup::SetTemplateGroupId(const int64_t& _templateGroupId)
{
    m_templateGroupId = _templateGroupId;
    m_templateGroupIdHasBeenSet = true;
}

bool TemplateGroup::TemplateGroupIdHasBeenSet() const
{
    return m_templateGroupIdHasBeenSet;
}

vector<TemplateGroupAction> TemplateGroup::GetTemplateGroupActions() const
{
    return m_templateGroupActions;
}

void TemplateGroup::SetTemplateGroupActions(const vector<TemplateGroupAction>& _templateGroupActions)
{
    m_templateGroupActions = _templateGroupActions;
    m_templateGroupActionsHasBeenSet = true;
}

bool TemplateGroup::TemplateGroupActionsHasBeenSet() const
{
    return m_templateGroupActionsHasBeenSet;
}

string TemplateGroup::GetTitle() const
{
    return m_title;
}

void TemplateGroup::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool TemplateGroup::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string TemplateGroup::GetDescription() const
{
    return m_description;
}

void TemplateGroup::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TemplateGroup::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t TemplateGroup::GetOrder() const
{
    return m_order;
}

void TemplateGroup::SetOrder(const int64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool TemplateGroup::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

int64_t TemplateGroup::GetMode() const
{
    return m_mode;
}

void TemplateGroup::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool TemplateGroup::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

int64_t TemplateGroup::GetObjectTypeId() const
{
    return m_objectTypeId;
}

void TemplateGroup::SetObjectTypeId(const int64_t& _objectTypeId)
{
    m_objectTypeId = _objectTypeId;
    m_objectTypeIdHasBeenSet = true;
}

bool TemplateGroup::ObjectTypeIdHasBeenSet() const
{
    return m_objectTypeIdHasBeenSet;
}

string TemplateGroup::GetCreateTime() const
{
    return m_createTime;
}

void TemplateGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TemplateGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TemplateGroup::GetUpdateTime() const
{
    return m_updateTime;
}

void TemplateGroup::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TemplateGroup::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}


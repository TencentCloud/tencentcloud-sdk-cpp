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

#include <tencentcloud/cls/v20201016/model/ProductIngestTaskItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ProductIngestTaskItem::ProductIngestTaskItem() :
    m_taskIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_productHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ProductIngestTaskItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductIngestTaskItem.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductIngestTaskItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Product") && !value["Product"].IsNull())
    {
        if (!value["Product"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductIngestTaskItem.Product` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_product = string(value["Product"].GetString());
        m_productHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductIngestTaskItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductIngestTaskItem.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductIngestTaskItem.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductIngestTaskItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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


string ProductIngestTaskItem::GetTaskId() const
{
    return m_taskId;
}

void ProductIngestTaskItem::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ProductIngestTaskItem::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ProductIngestTaskItem::GetName() const
{
    return m_name;
}

void ProductIngestTaskItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ProductIngestTaskItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ProductIngestTaskItem::GetProduct() const
{
    return m_product;
}

void ProductIngestTaskItem::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool ProductIngestTaskItem::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

int64_t ProductIngestTaskItem::GetStatus() const
{
    return m_status;
}

void ProductIngestTaskItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ProductIngestTaskItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ProductIngestTaskItem::GetCreateTime() const
{
    return m_createTime;
}

void ProductIngestTaskItem::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ProductIngestTaskItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t ProductIngestTaskItem::GetUpdateTime() const
{
    return m_updateTime;
}

void ProductIngestTaskItem::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ProductIngestTaskItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}


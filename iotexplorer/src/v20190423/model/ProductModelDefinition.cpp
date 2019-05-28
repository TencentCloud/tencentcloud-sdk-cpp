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

#include <tencentcloud/iotexplorer/v20190423/model/ProductModelDefinition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace rapidjson;
using namespace std;

ProductModelDefinition::ProductModelDefinition() :
    m_productIdHasBeenSet(false),
    m_modelDefineHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome ProductModelDefinition::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductModelDefinition.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("ModelDefine") && !value["ModelDefine"].IsNull())
    {
        if (!value["ModelDefine"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductModelDefinition.ModelDefine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelDefine = string(value["ModelDefine"].GetString());
        m_modelDefineHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ProductModelDefinition.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ProductModelDefinition.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductModelDefinition::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_productIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelDefineHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModelDefine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_modelDefine.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

}


string ProductModelDefinition::GetProductId() const
{
    return m_productId;
}

void ProductModelDefinition::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ProductModelDefinition::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ProductModelDefinition::GetModelDefine() const
{
    return m_modelDefine;
}

void ProductModelDefinition::SetModelDefine(const string& _modelDefine)
{
    m_modelDefine = _modelDefine;
    m_modelDefineHasBeenSet = true;
}

bool ProductModelDefinition::ModelDefineHasBeenSet() const
{
    return m_modelDefineHasBeenSet;
}

int64_t ProductModelDefinition::GetUpdateTime() const
{
    return m_updateTime;
}

void ProductModelDefinition::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ProductModelDefinition::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t ProductModelDefinition::GetCreateTime() const
{
    return m_createTime;
}

void ProductModelDefinition::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ProductModelDefinition::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}


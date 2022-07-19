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

#include <tencentcloud/iotvideo/v20211125/model/ProductModelDefinition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

ProductModelDefinition::ProductModelDefinition() :
    m_productIdHasBeenSet(false),
    m_modelDefineHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_categoryModelHasBeenSet(false),
    m_netTypeModelHasBeenSet(false)
{
}

CoreInternalOutcome ProductModelDefinition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductModelDefinition.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("ModelDefine") && !value["ModelDefine"].IsNull())
    {
        if (!value["ModelDefine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductModelDefinition.ModelDefine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelDefine = string(value["ModelDefine"].GetString());
        m_modelDefineHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductModelDefinition.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductModelDefinition.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("CategoryModel") && !value["CategoryModel"].IsNull())
    {
        if (!value["CategoryModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductModelDefinition.CategoryModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryModel = string(value["CategoryModel"].GetString());
        m_categoryModelHasBeenSet = true;
    }

    if (value.HasMember("NetTypeModel") && !value["NetTypeModel"].IsNull())
    {
        if (!value["NetTypeModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductModelDefinition.NetTypeModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netTypeModel = string(value["NetTypeModel"].GetString());
        m_netTypeModelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductModelDefinition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelDefineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelDefine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelDefine.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_categoryModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryModel.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypeModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetTypeModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netTypeModel.c_str(), allocator).Move(), allocator);
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

string ProductModelDefinition::GetCategoryModel() const
{
    return m_categoryModel;
}

void ProductModelDefinition::SetCategoryModel(const string& _categoryModel)
{
    m_categoryModel = _categoryModel;
    m_categoryModelHasBeenSet = true;
}

bool ProductModelDefinition::CategoryModelHasBeenSet() const
{
    return m_categoryModelHasBeenSet;
}

string ProductModelDefinition::GetNetTypeModel() const
{
    return m_netTypeModel;
}

void ProductModelDefinition::SetNetTypeModel(const string& _netTypeModel)
{
    m_netTypeModel = _netTypeModel;
    m_netTypeModelHasBeenSet = true;
}

bool ProductModelDefinition::NetTypeModelHasBeenSet() const
{
    return m_netTypeModelHasBeenSet;
}


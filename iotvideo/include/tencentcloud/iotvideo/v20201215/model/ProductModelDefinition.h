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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_PRODUCTMODELDEFINITION_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_PRODUCTMODELDEFINITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * 产品模型定义
                */
                class ProductModelDefinition : public AbstractModel
                {
                public:
                    ProductModelDefinition();
                    ~ProductModelDefinition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取模型定义
                     * @return ModelDefine 模型定义
                     * 
                     */
                    std::string GetModelDefine() const;

                    /**
                     * 设置模型定义
                     * @param _modelDefine 模型定义
                     * 
                     */
                    void SetModelDefine(const std::string& _modelDefine);

                    /**
                     * 判断参数 ModelDefine 是否已赋值
                     * @return ModelDefine 是否已赋值
                     * 
                     */
                    bool ModelDefineHasBeenSet() const;

                    /**
                     * 获取更新时间，秒级时间戳
                     * @return UpdateTime 更新时间，秒级时间戳
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间，秒级时间戳
                     * @param _updateTime 更新时间，秒级时间戳
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取创建时间，秒级时间戳
                     * @return CreateTime 创建时间，秒级时间戳
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，秒级时间戳
                     * @param _createTime 创建时间，秒级时间戳
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取产品所属分类的模型快照（产品创建时刻的）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CategoryModel 产品所属分类的模型快照（产品创建时刻的）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCategoryModel() const;

                    /**
                     * 设置产品所属分类的模型快照（产品创建时刻的）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _categoryModel 产品所属分类的模型快照（产品创建时刻的）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCategoryModel(const std::string& _categoryModel);

                    /**
                     * 判断参数 CategoryModel 是否已赋值
                     * @return CategoryModel 是否已赋值
                     * 
                     */
                    bool CategoryModelHasBeenSet() const;

                    /**
                     * 获取产品的连接类型的模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetTypeModel 产品的连接类型的模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNetTypeModel() const;

                    /**
                     * 设置产品的连接类型的模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _netTypeModel 产品的连接类型的模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetTypeModel(const std::string& _netTypeModel);

                    /**
                     * 判断参数 NetTypeModel 是否已赋值
                     * @return NetTypeModel 是否已赋值
                     * 
                     */
                    bool NetTypeModelHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 模型定义
                     */
                    std::string m_modelDefine;
                    bool m_modelDefineHasBeenSet;

                    /**
                     * 更新时间，秒级时间戳
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 创建时间，秒级时间戳
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 产品所属分类的模型快照（产品创建时刻的）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_categoryModel;
                    bool m_categoryModelHasBeenSet;

                    /**
                     * 产品的连接类型的模型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_netTypeModel;
                    bool m_netTypeModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_PRODUCTMODELDEFINITION_H_

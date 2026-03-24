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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_USERCONFIGRESOURCE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_USERCONFIGRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * 资源类型
                */
                class UserConfigResource : public AbstractModel
                {
                public:
                    UserConfigResource();
                    ~UserConfigResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Product 产品
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置产品
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _product 产品
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取产品名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductName 产品名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productName 产品名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceType 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceType 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源类型名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceTypeName 资源类型名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceTypeName() const;

                    /**
                     * 设置资源类型名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceTypeName 资源类型名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceTypeName(const std::string& _resourceTypeName);

                    /**
                     * 判断参数 ResourceTypeName 是否已赋值
                     * @return ResourceTypeName 是否已赋值
                     * 
                     */
                    bool ResourceTypeNameHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 产品
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 产品名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源类型名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceTypeName;
                    bool m_resourceTypeNameHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_USERCONFIGRESOURCE_H_

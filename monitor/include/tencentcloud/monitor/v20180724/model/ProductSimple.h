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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PRODUCTSIMPLE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PRODUCTSIMPLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 云产品监控支持的产品简要信息
                */
                class ProductSimple : public AbstractModel
                {
                public:
                    ProductSimple();
                    ~ProductSimple() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取产品中文名称
                     * @return ProductName 产品中文名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品中文名称
                     * @param _productName 产品中文名称
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
                     * 获取产品英文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductEnName 产品英文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductEnName() const;

                    /**
                     * 设置产品英文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productEnName 产品英文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductEnName(const std::string& _productEnName);

                    /**
                     * 判断参数 ProductEnName 是否已赋值
                     * @return ProductEnName 是否已赋值
                     * 
                     */
                    bool ProductEnNameHasBeenSet() const;

                private:

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 产品中文名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 产品英文名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productEnName;
                    bool m_productEnNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PRODUCTSIMPLE_H_

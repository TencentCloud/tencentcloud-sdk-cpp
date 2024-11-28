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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BILLPRODUCTLINK_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BILLPRODUCTLINK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BillItem.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 分账条件子产品筛选
                */
                class BillProductLink : public AbstractModel
                {
                public:
                    BillProductLink();
                    ~BillProductLink() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子产品编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductCode 子产品编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置子产品编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productCode 子产品编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取子产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductCodeName 子产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductCodeName() const;

                    /**
                     * 设置子产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productCodeName 子产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductCodeName(const std::string& _productCodeName);

                    /**
                     * 判断参数 ProductCodeName 是否已赋值
                     * @return ProductCodeName 是否已赋值
                     * 
                     */
                    bool ProductCodeNameHasBeenSet() const;

                    /**
                     * 获取组件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Children 组件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BillItem> GetChildren() const;

                    /**
                     * 设置组件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _children 组件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChildren(const std::vector<BillItem>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                private:

                    /**
                     * 子产品编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 子产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productCodeName;
                    bool m_productCodeNameHasBeenSet;

                    /**
                     * 组件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BillItem> m_children;
                    bool m_childrenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BILLPRODUCTLINK_H_

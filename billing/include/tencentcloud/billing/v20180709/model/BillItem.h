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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BILLITEM_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BILLITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 组件名称筛选列表
                */
                class BillItem : public AbstractModel
                {
                public:
                    BillItem();
                    ~BillItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取组件名称编码
                     * @return ItemCode 组件名称编码
                     * 
                     */
                    std::string GetItemCode() const;

                    /**
                     * 设置组件名称编码
                     * @param _itemCode 组件名称编码
                     * 
                     */
                    void SetItemCode(const std::string& _itemCode);

                    /**
                     * 判断参数 ItemCode 是否已赋值
                     * @return ItemCode 是否已赋值
                     * 
                     */
                    bool ItemCodeHasBeenSet() const;

                    /**
                     * 获取组件名称：用户购买的产品或服务，所包含的具体组件
                     * @return ItemCodeName 组件名称：用户购买的产品或服务，所包含的具体组件
                     * 
                     */
                    std::string GetItemCodeName() const;

                    /**
                     * 设置组件名称：用户购买的产品或服务，所包含的具体组件
                     * @param _itemCodeName 组件名称：用户购买的产品或服务，所包含的具体组件
                     * 
                     */
                    void SetItemCodeName(const std::string& _itemCodeName);

                    /**
                     * 判断参数 ItemCodeName 是否已赋值
                     * @return ItemCodeName 是否已赋值
                     * 
                     */
                    bool ItemCodeNameHasBeenSet() const;

                private:

                    /**
                     * 组件名称编码
                     */
                    std::string m_itemCode;
                    bool m_itemCodeHasBeenSet;

                    /**
                     * 组件名称：用户购买的产品或服务，所包含的具体组件
                     */
                    std::string m_itemCodeName;
                    bool m_itemCodeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BILLITEM_H_

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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_PRICE_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_PRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gwlb/v20240906/model/ItemPrice.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * 表示网关负载均衡的价格
                */
                class Price : public AbstractModel
                {
                public:
                    Price();
                    ~Price() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取描述了实例价格。
                     * @return InstancePrice 描述了实例价格。
                     * 
                     */
                    ItemPrice GetInstancePrice() const;

                    /**
                     * 设置描述了实例价格。
                     * @param _instancePrice 描述了实例价格。
                     * 
                     */
                    void SetInstancePrice(const ItemPrice& _instancePrice);

                    /**
                     * 判断参数 InstancePrice 是否已赋值
                     * @return InstancePrice 是否已赋值
                     * 
                     */
                    bool InstancePriceHasBeenSet() const;

                    /**
                     * 获取描述了GLCU的价格。
                     * @return LcuPrice 描述了GLCU的价格。
                     * 
                     */
                    ItemPrice GetLcuPrice() const;

                    /**
                     * 设置描述了GLCU的价格。
                     * @param _lcuPrice 描述了GLCU的价格。
                     * 
                     */
                    void SetLcuPrice(const ItemPrice& _lcuPrice);

                    /**
                     * 判断参数 LcuPrice 是否已赋值
                     * @return LcuPrice 是否已赋值
                     * 
                     */
                    bool LcuPriceHasBeenSet() const;

                private:

                    /**
                     * 描述了实例价格。
                     */
                    ItemPrice m_instancePrice;
                    bool m_instancePriceHasBeenSet;

                    /**
                     * 描述了GLCU的价格。
                     */
                    ItemPrice m_lcuPrice;
                    bool m_lcuPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_PRICE_H_

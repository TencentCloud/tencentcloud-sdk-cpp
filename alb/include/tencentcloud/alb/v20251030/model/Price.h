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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_PRICE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_PRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/PostPayPriceInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 表示负载均衡的价格
                */
                class Price : public AbstractModel
                {
                public:
                    Price();
                    ~Price() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取描述了实例价格，单位：元/小时。
                     * @return InstancePrice 描述了实例价格，单位：元/小时。
                     * 
                     */
                    PostPayPriceInfo GetInstancePrice() const;

                    /**
                     * 设置描述了实例价格，单位：元/小时。
                     * @param _instancePrice 描述了实例价格，单位：元/小时。
                     * 
                     */
                    void SetInstancePrice(const PostPayPriceInfo& _instancePrice);

                    /**
                     * 判断参数 InstancePrice 是否已赋值
                     * @return InstancePrice 是否已赋值
                     * 
                     */
                    bool InstancePriceHasBeenSet() const;

                    /**
                     * 获取描述了lcu价格，单位：元/个。
                     * @return LcuPrice 描述了lcu价格，单位：元/个。
                     * 
                     */
                    PostPayPriceInfo GetLcuPrice() const;

                    /**
                     * 设置描述了lcu价格，单位：元/个。
                     * @param _lcuPrice 描述了lcu价格，单位：元/个。
                     * 
                     */
                    void SetLcuPrice(const PostPayPriceInfo& _lcuPrice);

                    /**
                     * 判断参数 LcuPrice 是否已赋值
                     * @return LcuPrice 是否已赋值
                     * 
                     */
                    bool LcuPriceHasBeenSet() const;

                private:

                    /**
                     * 描述了实例价格，单位：元/小时。
                     */
                    PostPayPriceInfo m_instancePrice;
                    bool m_instancePriceHasBeenSet;

                    /**
                     * 描述了lcu价格，单位：元/个。
                     */
                    PostPayPriceInfo m_lcuPrice;
                    bool m_lcuPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_PRICE_H_

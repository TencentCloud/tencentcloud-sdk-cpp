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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_PRICE_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_PRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hai/v20230812/model/ItemPrice.h>
#include <tencentcloud/hai/v20230812/model/ItemPriceDetail.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * 费用数据结构体
                */
                class Price : public AbstractModel
                {
                public:
                    Price();
                    ~Price() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例价格信息
                     * @return InstancePrice 实例价格信息
                     * 
                     */
                    ItemPrice GetInstancePrice() const;

                    /**
                     * 设置实例价格信息
                     * @param _instancePrice 实例价格信息
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
                     * 获取云盘价格信息
                     * @return CloudDiskPrice 云盘价格信息
                     * 
                     */
                    ItemPrice GetCloudDiskPrice() const;

                    /**
                     * 设置云盘价格信息
                     * @param _cloudDiskPrice 云盘价格信息
                     * 
                     */
                    void SetCloudDiskPrice(const ItemPrice& _cloudDiskPrice);

                    /**
                     * 判断参数 CloudDiskPrice 是否已赋值
                     * @return CloudDiskPrice 是否已赋值
                     * 
                     */
                    bool CloudDiskPriceHasBeenSet() const;

                    /**
                     * 获取分实例价格
                     * @return PriceDetailSet 分实例价格
                     * 
                     */
                    std::vector<ItemPriceDetail> GetPriceDetailSet() const;

                    /**
                     * 设置分实例价格
                     * @param _priceDetailSet 分实例价格
                     * 
                     */
                    void SetPriceDetailSet(const std::vector<ItemPriceDetail>& _priceDetailSet);

                    /**
                     * 判断参数 PriceDetailSet 是否已赋值
                     * @return PriceDetailSet 是否已赋值
                     * 
                     */
                    bool PriceDetailSetHasBeenSet() const;

                private:

                    /**
                     * 实例价格信息
                     */
                    ItemPrice m_instancePrice;
                    bool m_instancePriceHasBeenSet;

                    /**
                     * 云盘价格信息
                     */
                    ItemPrice m_cloudDiskPrice;
                    bool m_cloudDiskPriceHasBeenSet;

                    /**
                     * 分实例价格
                     */
                    std::vector<ItemPriceDetail> m_priceDetailSet;
                    bool m_priceDetailSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_PRICE_H_

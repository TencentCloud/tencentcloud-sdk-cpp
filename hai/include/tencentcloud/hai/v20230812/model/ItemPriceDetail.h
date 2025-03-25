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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_ITEMPRICEDETAIL_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_ITEMPRICEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hai/v20230812/model/ItemPrice.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * 分实例价格
                */
                class ItemPriceDetail : public AbstractModel
                {
                public:
                    ItemPriceDetail();
                    ~ItemPriceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例价格详情
                     * @return InstancePrice 实例价格详情
                     * 
                     */
                    ItemPrice GetInstancePrice() const;

                    /**
                     * 设置实例价格详情
                     * @param _instancePrice 实例价格详情
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
                     * 获取磁盘价格详情
                     * @return CloudDiskPrice 磁盘价格详情
                     * 
                     */
                    ItemPrice GetCloudDiskPrice() const;

                    /**
                     * 设置磁盘价格详情
                     * @param _cloudDiskPrice 磁盘价格详情
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
                     * 获取该实例的总价钱
                     * @return InstanceTotalPrice 该实例的总价钱
                     * 
                     */
                    ItemPrice GetInstanceTotalPrice() const;

                    /**
                     * 设置该实例的总价钱
                     * @param _instanceTotalPrice 该实例的总价钱
                     * 
                     */
                    void SetInstanceTotalPrice(const ItemPrice& _instanceTotalPrice);

                    /**
                     * 判断参数 InstanceTotalPrice 是否已赋值
                     * @return InstanceTotalPrice 是否已赋值
                     * 
                     */
                    bool InstanceTotalPriceHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例价格详情
                     */
                    ItemPrice m_instancePrice;
                    bool m_instancePriceHasBeenSet;

                    /**
                     * 磁盘价格详情
                     */
                    ItemPrice m_cloudDiskPrice;
                    bool m_cloudDiskPriceHasBeenSet;

                    /**
                     * 该实例的总价钱
                     */
                    ItemPrice m_instanceTotalPrice;
                    bool m_instanceTotalPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_ITEMPRICEDETAIL_H_

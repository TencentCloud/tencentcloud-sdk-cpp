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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_SERVICEPRICEDETAIL_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_SERVICEPRICEDETAIL_H_

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
                * 推理集群费用数据结构体
                */
                class ServicePriceDetail : public AbstractModel
                {
                public:
                    ServicePriceDetail();
                    ~ServicePriceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取推理集群价格信息	
                     * @return ServicePrice 推理集群价格信息	
                     * 
                     */
                    ItemPrice GetServicePrice() const;

                    /**
                     * 设置推理集群价格信息	
                     * @param _servicePrice 推理集群价格信息	
                     * 
                     */
                    void SetServicePrice(const ItemPrice& _servicePrice);

                    /**
                     * 判断参数 ServicePrice 是否已赋值
                     * @return ServicePrice 是否已赋值
                     * 
                     */
                    bool ServicePriceHasBeenSet() const;

                private:

                    /**
                     * 推理集群价格信息	
                     */
                    ItemPrice m_servicePrice;
                    bool m_servicePriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_SERVICEPRICEDETAIL_H_

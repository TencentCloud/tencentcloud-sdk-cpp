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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_REFUNDSTORAGESERVICEREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_REFUNDSTORAGESERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * RefundStorageService请求参数结构体
                */
                class RefundStorageServiceRequest : public AbstractModel
                {
                public:
                    RefundStorageServiceRequest();
                    ~RefundStorageServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云存服务ID
                     * @return ServiceId 云存服务ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置云存服务ID
                     * @param _serviceId 云存服务ID
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取云存子订单ID。如果指定子订单ID,则仅退订该子订单，如果未指定子定单ID，则退订所有子订单
                     * @return OrderId 云存子订单ID。如果指定子订单ID,则仅退订该子订单，如果未指定子定单ID，则退订所有子订单
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置云存子订单ID。如果指定子订单ID,则仅退订该子订单，如果未指定子定单ID，则退订所有子订单
                     * @param _orderId 云存子订单ID。如果指定子订单ID,则仅退订该子订单，如果未指定子定单ID，则退订所有子订单
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                private:

                    /**
                     * 云存服务ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 云存子订单ID。如果指定子订单ID,则仅退订该子订单，如果未指定子定单ID，则退订所有子订单
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_REFUNDSTORAGESERVICEREQUEST_H_

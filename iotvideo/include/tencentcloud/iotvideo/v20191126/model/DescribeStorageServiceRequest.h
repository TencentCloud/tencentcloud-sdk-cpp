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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBESTORAGESERVICEREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBESTORAGESERVICEREQUEST_H_

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
                * DescribeStorageService请求参数结构体
                */
                class DescribeStorageServiceRequest : public AbstractModel
                {
                public:
                    DescribeStorageServiceRequest();
                    ~DescribeStorageServiceRequest() = default;
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
                     * 获取是否返回已结束的订单信息(已过期/已退订/已转移)
                     * @return GetFinishedOrder 是否返回已结束的订单信息(已过期/已退订/已转移)
                     * 
                     */
                    bool GetGetFinishedOrder() const;

                    /**
                     * 设置是否返回已结束的订单信息(已过期/已退订/已转移)
                     * @param _getFinishedOrder 是否返回已结束的订单信息(已过期/已退订/已转移)
                     * 
                     */
                    void SetGetFinishedOrder(const bool& _getFinishedOrder);

                    /**
                     * 判断参数 GetFinishedOrder 是否已赋值
                     * @return GetFinishedOrder 是否已赋值
                     * 
                     */
                    bool GetFinishedOrderHasBeenSet() const;

                private:

                    /**
                     * 云存服务ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 是否返回已结束的订单信息(已过期/已退订/已转移)
                     */
                    bool m_getFinishedOrder;
                    bool m_getFinishedOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBESTORAGESERVICEREQUEST_H_

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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CANCELDBAUTONOMYEVENTREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CANCELDBAUTONOMYEVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * CancelDBAutonomyEvent请求参数结构体
                */
                class CancelDBAutonomyEventRequest : public AbstractModel
                {
                public:
                    CancelDBAutonomyEventRequest();
                    ~CancelDBAutonomyEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取自治事件ID。
                     * @return EventId 自治事件ID。
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置自治事件ID。
                     * @param _eventId 自治事件ID。
                     * 
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取实列ID。
                     * @return InstanceId 实列ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实列ID。
                     * @param _instanceId 实列ID。
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
                     * 获取服务产品类型，支持值包括： "redis" - 云数据库 Redis。
                     * @return Product 服务产品类型，支持值包括： "redis" - 云数据库 Redis。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值包括： "redis" - 云数据库 Redis。
                     * @param _product 服务产品类型，支持值包括： "redis" - 云数据库 Redis。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * 自治事件ID。
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 实列ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 服务产品类型，支持值包括： "redis" - 云数据库 Redis。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CANCELDBAUTONOMYEVENTREQUEST_H_

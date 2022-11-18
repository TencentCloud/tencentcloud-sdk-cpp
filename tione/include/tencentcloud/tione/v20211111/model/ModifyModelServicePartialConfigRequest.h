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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYMODELSERVICEPARTIALCONFIGREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYMODELSERVICEPARTIALCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ScheduledAction.h>
#include <tencentcloud/tione/v20211111/model/ServiceLimit.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * ModifyModelServicePartialConfig请求参数结构体
                */
                class ModifyModelServicePartialConfigRequest : public AbstractModel
                {
                public:
                    ModifyModelServicePartialConfigRequest();
                    ~ModifyModelServicePartialConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取在线推理服务Id，需已存在
                     * @return ServiceId 在线推理服务Id，需已存在
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置在线推理服务Id，需已存在
                     * @param ServiceId 在线推理服务Id，需已存在
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取更新后服务不重启，定时停止的配置
                     * @return ScheduledAction 更新后服务不重启，定时停止的配置
                     */
                    ScheduledAction GetScheduledAction() const;

                    /**
                     * 设置更新后服务不重启，定时停止的配置
                     * @param ScheduledAction 更新后服务不重启，定时停止的配置
                     */
                    void SetScheduledAction(const ScheduledAction& _scheduledAction);

                    /**
                     * 判断参数 ScheduledAction 是否已赋值
                     * @return ScheduledAction 是否已赋值
                     */
                    bool ScheduledActionHasBeenSet() const;

                    /**
                     * 获取更新后服务不重启，服务对应限流限频配置
                     * @return ServiceLimit 更新后服务不重启，服务对应限流限频配置
                     */
                    ServiceLimit GetServiceLimit() const;

                    /**
                     * 设置更新后服务不重启，服务对应限流限频配置
                     * @param ServiceLimit 更新后服务不重启，服务对应限流限频配置
                     */
                    void SetServiceLimit(const ServiceLimit& _serviceLimit);

                    /**
                     * 判断参数 ServiceLimit 是否已赋值
                     * @return ServiceLimit 是否已赋值
                     */
                    bool ServiceLimitHasBeenSet() const;

                private:

                    /**
                     * 在线推理服务Id，需已存在
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 更新后服务不重启，定时停止的配置
                     */
                    ScheduledAction m_scheduledAction;
                    bool m_scheduledActionHasBeenSet;

                    /**
                     * 更新后服务不重启，服务对应限流限频配置
                     */
                    ServiceLimit m_serviceLimit;
                    bool m_serviceLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYMODELSERVICEPARTIALCONFIGREQUEST_H_

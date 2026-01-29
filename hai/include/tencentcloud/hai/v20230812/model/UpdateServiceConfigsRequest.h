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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_UPDATESERVICECONFIGSREQUEST_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_UPDATESERVICECONFIGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * UpdateServiceConfigs请求参数结构体
                */
                class UpdateServiceConfigsRequest : public AbstractModel
                {
                public:
                    UpdateServiceConfigsRequest();
                    ~UpdateServiceConfigsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务ID
                     * @return ServiceId 服务ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务ID
                     * @param _serviceId 服务ID
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
                     * 获取期望副本数
                     * @return TargetReplicas 期望副本数
                     * 
                     */
                    int64_t GetTargetReplicas() const;

                    /**
                     * 设置期望副本数
                     * @param _targetReplicas 期望副本数
                     * 
                     */
                    void SetTargetReplicas(const int64_t& _targetReplicas);

                    /**
                     * 判断参数 TargetReplicas 是否已赋值
                     * @return TargetReplicas 是否已赋值
                     * 
                     */
                    bool TargetReplicasHasBeenSet() const;

                private:

                    /**
                     * 服务ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 期望副本数
                     */
                    int64_t m_targetReplicas;
                    bool m_targetReplicasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_UPDATESERVICECONFIGSREQUEST_H_

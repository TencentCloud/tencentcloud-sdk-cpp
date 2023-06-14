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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEDDOSCONNECTLIMITREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEDDOSCONNECTLIMITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/ConnectLimitConfig.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * CreateDDoSConnectLimit请求参数结构体
                */
                class CreateDDoSConnectLimitRequest : public AbstractModel
                {
                public:
                    CreateDDoSConnectLimitRequest();
                    ~CreateDDoSConnectLimitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源实例Id
                     * @return InstanceId 资源实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置资源实例Id
                     * @param _instanceId 资源实例Id
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
                     * 获取连接抑制配置
                     * @return ConnectLimitConfig 连接抑制配置
                     * 
                     */
                    ConnectLimitConfig GetConnectLimitConfig() const;

                    /**
                     * 设置连接抑制配置
                     * @param _connectLimitConfig 连接抑制配置
                     * 
                     */
                    void SetConnectLimitConfig(const ConnectLimitConfig& _connectLimitConfig);

                    /**
                     * 判断参数 ConnectLimitConfig 是否已赋值
                     * @return ConnectLimitConfig 是否已赋值
                     * 
                     */
                    bool ConnectLimitConfigHasBeenSet() const;

                private:

                    /**
                     * 资源实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 连接抑制配置
                     */
                    ConnectLimitConfig m_connectLimitConfig;
                    bool m_connectLimitConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEDDOSCONNECTLIMITREQUEST_H_

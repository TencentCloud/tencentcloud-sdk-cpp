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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYDDOSSPEEDLIMITCONFIGREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYDDOSSPEEDLIMITCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/DDoSSpeedLimitConfig.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * ModifyDDoSSpeedLimitConfig请求参数结构体
                */
                class ModifyDDoSSpeedLimitConfigRequest : public AbstractModel
                {
                public:
                    ModifyDDoSSpeedLimitConfigRequest();
                    ~ModifyDDoSSpeedLimitConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源实例ID
                     * @return InstanceId 资源实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置资源实例ID
                     * @param _instanceId 资源实例ID
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
                     * 获取访问限速配置，填写参数时配置ID不能为空
                     * @return DDoSSpeedLimitConfig 访问限速配置，填写参数时配置ID不能为空
                     * 
                     */
                    DDoSSpeedLimitConfig GetDDoSSpeedLimitConfig() const;

                    /**
                     * 设置访问限速配置，填写参数时配置ID不能为空
                     * @param _dDoSSpeedLimitConfig 访问限速配置，填写参数时配置ID不能为空
                     * 
                     */
                    void SetDDoSSpeedLimitConfig(const DDoSSpeedLimitConfig& _dDoSSpeedLimitConfig);

                    /**
                     * 判断参数 DDoSSpeedLimitConfig 是否已赋值
                     * @return DDoSSpeedLimitConfig 是否已赋值
                     * 
                     */
                    bool DDoSSpeedLimitConfigHasBeenSet() const;

                private:

                    /**
                     * 资源实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 访问限速配置，填写参数时配置ID不能为空
                     */
                    DDoSSpeedLimitConfig m_dDoSSpeedLimitConfig;
                    bool m_dDoSSpeedLimitConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYDDOSSPEEDLIMITCONFIGREQUEST_H_

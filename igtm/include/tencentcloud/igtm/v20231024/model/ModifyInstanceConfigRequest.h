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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_MODIFYINSTANCECONFIGREQUEST_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_MODIFYINSTANCECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/igtm/v20231024/model/InstanceConfig.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * ModifyInstanceConfig请求参数结构体
                */
                class ModifyInstanceConfigRequest : public AbstractModel
                {
                public:
                    ModifyInstanceConfigRequest();
                    ~ModifyInstanceConfigRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取实例配置详情
                     * @return InstanceConfig 实例配置详情
                     * 
                     */
                    InstanceConfig GetInstanceConfig() const;

                    /**
                     * 设置实例配置详情
                     * @param _instanceConfig 实例配置详情
                     * 
                     */
                    void SetInstanceConfig(const InstanceConfig& _instanceConfig);

                    /**
                     * 判断参数 InstanceConfig 是否已赋值
                     * @return InstanceConfig 是否已赋值
                     * 
                     */
                    bool InstanceConfigHasBeenSet() const;

                private:

                    /**
                     * 实例id	
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例配置详情
                     */
                    InstanceConfig m_instanceConfig;
                    bool m_instanceConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_MODIFYINSTANCECONFIGREQUEST_H_

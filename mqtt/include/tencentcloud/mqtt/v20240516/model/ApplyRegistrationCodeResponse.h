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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_APPLYREGISTRATIONCODERESPONSE_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_APPLYREGISTRATIONCODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * ApplyRegistrationCode返回参数结构体
                */
                class ApplyRegistrationCodeResponse : public AbstractModel
                {
                public:
                    ApplyRegistrationCodeResponse();
                    ~ApplyRegistrationCodeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return InstanceId 集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取注册码
                     * @return RegistrationCode 注册码
                     * 
                     */
                    std::string GetRegistrationCode() const;

                    /**
                     * 判断参数 RegistrationCode 是否已赋值
                     * @return RegistrationCode 是否已赋值
                     * 
                     */
                    bool RegistrationCodeHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 注册码
                     */
                    std::string m_registrationCode;
                    bool m_registrationCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_APPLYREGISTRATIONCODERESPONSE_H_

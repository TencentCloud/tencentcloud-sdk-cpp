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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATINSTANCEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyNatInstance请求参数结构体
                */
                class ModifyNatInstanceRequest : public AbstractModel
                {
                public:
                    ModifyNatInstanceRequest();
                    ~ModifyNatInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取NAT防火墙实例名称
                     * @return InstanceName NAT防火墙实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置NAT防火墙实例名称
                     * @param _instanceName NAT防火墙实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取NAT防火墙实例ID
                     * @return NatInstanceId NAT防火墙实例ID
                     * 
                     */
                    std::string GetNatInstanceId() const;

                    /**
                     * 设置NAT防火墙实例ID
                     * @param _natInstanceId NAT防火墙实例ID
                     * 
                     */
                    void SetNatInstanceId(const std::string& _natInstanceId);

                    /**
                     * 判断参数 NatInstanceId 是否已赋值
                     * @return NatInstanceId 是否已赋值
                     * 
                     */
                    bool NatInstanceIdHasBeenSet() const;

                private:

                    /**
                     * NAT防火墙实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * NAT防火墙实例ID
                     */
                    std::string m_natInstanceId;
                    bool m_natInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATINSTANCEREQUEST_H_

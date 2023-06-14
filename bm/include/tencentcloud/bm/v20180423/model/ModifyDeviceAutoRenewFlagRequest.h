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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_MODIFYDEVICEAUTORENEWFLAGREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_MODIFYDEVICEAUTORENEWFLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * ModifyDeviceAutoRenewFlag请求参数结构体
                */
                class ModifyDeviceAutoRenewFlagRequest : public AbstractModel
                {
                public:
                    ModifyDeviceAutoRenewFlagRequest();
                    ~ModifyDeviceAutoRenewFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取自动续费标志位。0: 不自动续费; 1: 自动续费
                     * @return AutoRenewFlag 自动续费标志位。0: 不自动续费; 1: 自动续费
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标志位。0: 不自动续费; 1: 自动续费
                     * @param _autoRenewFlag 自动续费标志位。0: 不自动续费; 1: 自动续费
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取需要修改的设备ID列表
                     * @return InstanceIds 需要修改的设备ID列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置需要修改的设备ID列表
                     * @param _instanceIds 需要修改的设备ID列表
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 自动续费标志位。0: 不自动续费; 1: 自动续费
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 需要修改的设备ID列表
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_MODIFYDEVICEAUTORENEWFLAGREQUEST_H_

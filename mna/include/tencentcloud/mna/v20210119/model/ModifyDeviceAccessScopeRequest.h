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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_MODIFYDEVICEACCESSSCOPEREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_MODIFYDEVICEACCESSSCOPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * ModifyDeviceAccessScope请求参数结构体
                */
                class ModifyDeviceAccessScopeRequest : public AbstractModel
                {
                public:
                    ModifyDeviceAccessScopeRequest();
                    ~ModifyDeviceAccessScopeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>设备ID</p>
                     * @return DeviceIds <p>设备ID</p>
                     * 
                     */
                    std::vector<std::string> GetDeviceIds() const;

                    /**
                     * 设置<p>设备ID</p>
                     * @param _deviceIds <p>设备ID</p>
                     * 
                     */
                    void SetDeviceIds(const std::vector<std::string>& _deviceIds);

                    /**
                     * 判断参数 DeviceIds 是否已赋值
                     * @return DeviceIds 是否已赋值
                     * 
                     */
                    bool DeviceIdsHasBeenSet() const;

                    /**
                     * 获取<p>接入网关类型</p><p>枚举值：</p><ul><li>0： 公有云网关</li><li>1： 客户私有网关</li></ul><p>默认值：0</p><p>如果不传，则默认修改为接入公有云网关。</p>
                     * @return AccessScope <p>接入网关类型</p><p>枚举值：</p><ul><li>0： 公有云网关</li><li>1： 客户私有网关</li></ul><p>默认值：0</p><p>如果不传，则默认修改为接入公有云网关。</p>
                     * 
                     */
                    uint64_t GetAccessScope() const;

                    /**
                     * 设置<p>接入网关类型</p><p>枚举值：</p><ul><li>0： 公有云网关</li><li>1： 客户私有网关</li></ul><p>默认值：0</p><p>如果不传，则默认修改为接入公有云网关。</p>
                     * @param _accessScope <p>接入网关类型</p><p>枚举值：</p><ul><li>0： 公有云网关</li><li>1： 客户私有网关</li></ul><p>默认值：0</p><p>如果不传，则默认修改为接入公有云网关。</p>
                     * 
                     */
                    void SetAccessScope(const uint64_t& _accessScope);

                    /**
                     * 判断参数 AccessScope 是否已赋值
                     * @return AccessScope 是否已赋值
                     * 
                     */
                    bool AccessScopeHasBeenSet() const;

                private:

                    /**
                     * <p>设备ID</p>
                     */
                    std::vector<std::string> m_deviceIds;
                    bool m_deviceIdsHasBeenSet;

                    /**
                     * <p>接入网关类型</p><p>枚举值：</p><ul><li>0： 公有云网关</li><li>1： 客户私有网关</li></ul><p>默认值：0</p><p>如果不传，则默认修改为接入公有云网关。</p>
                     */
                    uint64_t m_accessScope;
                    bool m_accessScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_MODIFYDEVICEACCESSSCOPEREQUEST_H_

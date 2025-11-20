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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_SYNCDEVICESTOIOAREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_SYNCDEVICESTOIOAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * SyncDevicesToIOA请求参数结构体
                */
                class SyncDevicesToIOARequest : public AbstractModel
                {
                public:
                    SyncDevicesToIOARequest();
                    ~SyncDevicesToIOARequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资产ID集合。资产必须已绑定支持IOA功能的堡垒机实例。每次最多同步200个资产。
                     * @return DeviceIdSet 资产ID集合。资产必须已绑定支持IOA功能的堡垒机实例。每次最多同步200个资产。
                     * 
                     */
                    std::vector<uint64_t> GetDeviceIdSet() const;

                    /**
                     * 设置资产ID集合。资产必须已绑定支持IOA功能的堡垒机实例。每次最多同步200个资产。
                     * @param _deviceIdSet 资产ID集合。资产必须已绑定支持IOA功能的堡垒机实例。每次最多同步200个资产。
                     * 
                     */
                    void SetDeviceIdSet(const std::vector<uint64_t>& _deviceIdSet);

                    /**
                     * 判断参数 DeviceIdSet 是否已赋值
                     * @return DeviceIdSet 是否已赋值
                     * 
                     */
                    bool DeviceIdSetHasBeenSet() const;

                private:

                    /**
                     * 资产ID集合。资产必须已绑定支持IOA功能的堡垒机实例。每次最多同步200个资产。
                     */
                    std::vector<uint64_t> m_deviceIdSet;
                    bool m_deviceIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_SYNCDEVICESTOIOAREQUEST_H_

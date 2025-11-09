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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_STOPSANDBOXINSTANCEREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_STOPSANDBOXINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * StopSandboxInstance请求参数结构体
                */
                class StopSandboxInstanceRequest : public AbstractModel
                {
                public:
                    StopSandboxInstanceRequest();
                    ~StopSandboxInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取沙箱实例ID
                     * @return InstanceId 沙箱实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置沙箱实例ID
                     * @param _instanceId 沙箱实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 沙箱实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_STOPSANDBOXINSTANCEREQUEST_H_

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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_PAUSESANDBOXINSTANCERESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_PAUSESANDBOXINSTANCERESPONSE_H_

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
                * PauseSandboxInstance返回参数结构体
                */
                class PauseSandboxInstanceResponse : public AbstractModel
                {
                public:
                    PauseSandboxInstanceResponse();
                    ~PauseSandboxInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>目标沙箱实例当前的状态</p><p>枚举值：</p><ul><li>PAUSING： 正在暂停中</li><li>PAUSED： 已暂停</li><li>PAUSE_FAILED： 暂停失败</li></ul>
                     * @return InstanceStatus <p>目标沙箱实例当前的状态</p><p>枚举值：</p><ul><li>PAUSING： 正在暂停中</li><li>PAUSED： 已暂停</li><li>PAUSE_FAILED： 暂停失败</li></ul>
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                private:

                    /**
                     * <p>目标沙箱实例当前的状态</p><p>枚举值：</p><ul><li>PAUSING： 正在暂停中</li><li>PAUSED： 已暂停</li><li>PAUSE_FAILED： 暂停失败</li></ul>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_PAUSESANDBOXINSTANCERESPONSE_H_

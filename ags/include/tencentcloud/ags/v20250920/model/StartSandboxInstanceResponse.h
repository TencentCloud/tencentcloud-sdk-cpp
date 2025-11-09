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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_STARTSANDBOXINSTANCERESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_STARTSANDBOXINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/SandboxInstance.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * StartSandboxInstance返回参数结构体
                */
                class StartSandboxInstanceResponse : public AbstractModel
                {
                public:
                    StartSandboxInstanceResponse();
                    ~StartSandboxInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取创建的沙箱实例完整信息
                     * @return Instance 创建的沙箱实例完整信息
                     * 
                     */
                    SandboxInstance GetInstance() const;

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                private:

                    /**
                     * 创建的沙箱实例完整信息
                     */
                    SandboxInstance m_instance;
                    bool m_instanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_STARTSANDBOXINSTANCERESPONSE_H_

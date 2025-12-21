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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_STARTAGENTTASKREQUEST_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_STARTAGENTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * StartAgentTask请求参数结构体
                */
                class StartAgentTaskRequest : public AbstractModel
                {
                public:
                    StartAgentTaskRequest();
                    ~StartAgentTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取配置Token
                     * @return InstanceToken 配置Token
                     * 
                     */
                    std::string GetInstanceToken() const;

                    /**
                     * 设置配置Token
                     * @param _instanceToken 配置Token
                     * 
                     */
                    void SetInstanceToken(const std::string& _instanceToken);

                    /**
                     * 判断参数 InstanceToken 是否已赋值
                     * @return InstanceToken 是否已赋值
                     * 
                     */
                    bool InstanceTokenHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 配置Token
                     */
                    std::string m_instanceToken;
                    bool m_instanceTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_STARTAGENTTASKREQUEST_H_

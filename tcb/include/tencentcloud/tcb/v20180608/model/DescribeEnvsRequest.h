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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENVSREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENVSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeEnvs请求参数结构体
                */
                class DescribeEnvsRequest : public AbstractModel
                {
                public:
                    DescribeEnvsRequest();
                    ~DescribeEnvsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID，如果传了这个参数则只返回该环境的相关信息
                     * @return EnvId 环境ID，如果传了这个参数则只返回该环境的相关信息
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID，如果传了这个参数则只返回该环境的相关信息
                     * @param EnvId 环境ID，如果传了这个参数则只返回该环境的相关信息
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     */
                    bool EnvIdHasBeenSet() const;

                private:

                    /**
                     * 环境ID，如果传了这个参数则只返回该环境的相关信息
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENVSREQUEST_H_

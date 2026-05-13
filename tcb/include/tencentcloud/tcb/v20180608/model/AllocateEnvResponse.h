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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_ALLOCATEENVRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_ALLOCATEENVRESPONSE_H_

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
                * AllocateEnv返回参数结构体
                */
                class AllocateEnvResponse : public AbstractModel
                {
                public:
                    AllocateEnvResponse();
                    ~AllocateEnvResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境ID</p>
                     * @return EnvId <p>环境ID</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取<p>回显    客户平台的应用标识，如果没有则不传</p>
                     * @return ExternalAppId <p>回显    客户平台的应用标识，如果没有则不传</p>
                     * 
                     */
                    std::string GetExternalAppId() const;

                    /**
                     * 判断参数 ExternalAppId 是否已赋值
                     * @return ExternalAppId 是否已赋值
                     * 
                     */
                    bool ExternalAppIdHasBeenSet() const;

                private:

                    /**
                     * <p>环境ID</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>回显    客户平台的应用标识，如果没有则不传</p>
                     */
                    std::string m_externalAppId;
                    bool m_externalAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_ALLOCATEENVRESPONSE_H_

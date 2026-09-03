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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_GENERATEREGISTERCODERESPONSE_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_GENERATEREGISTERCODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * GenerateRegisterCode返回参数结构体
                */
                class GenerateRegisterCodeResponse : public AbstractModel
                {
                public:
                    GenerateRegisterCodeResponse();
                    ~GenerateRegisterCodeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群队列的注册码,用于机器注册进入队列时使用</p><p>默认值：无</p>
                     * @return RegisterCode <p>集群队列的注册码,用于机器注册进入队列时使用</p><p>默认值：无</p>
                     * 
                     */
                    std::string GetRegisterCode() const;

                    /**
                     * 判断参数 RegisterCode 是否已赋值
                     * @return RegisterCode 是否已赋值
                     * 
                     */
                    bool RegisterCodeHasBeenSet() const;

                    /**
                     * 获取<p>注册码的过期时间, unix时间戳格式</p>
                     * @return ExpireAt <p>注册码的过期时间, unix时间戳格式</p>
                     * 
                     */
                    uint64_t GetExpireAt() const;

                    /**
                     * 判断参数 ExpireAt 是否已赋值
                     * @return ExpireAt 是否已赋值
                     * 
                     */
                    bool ExpireAtHasBeenSet() const;

                private:

                    /**
                     * <p>集群队列的注册码,用于机器注册进入队列时使用</p><p>默认值：无</p>
                     */
                    std::string m_registerCode;
                    bool m_registerCodeHasBeenSet;

                    /**
                     * <p>注册码的过期时间, unix时间戳格式</p>
                     */
                    uint64_t m_expireAt;
                    bool m_expireAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_GENERATEREGISTERCODERESPONSE_H_

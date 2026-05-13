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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_ASSUMEROLEFORALLOCATEDENVRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_ASSUMEROLEFORALLOCATEDENVRESPONSE_H_

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
                * AssumeRoleForAllocatedEnv返回参数结构体
                */
                class AssumeRoleForAllocatedEnvResponse : public AbstractModel
                {
                public:
                    AssumeRoleForAllocatedEnvResponse();
                    ~AssumeRoleForAllocatedEnvResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>SecretId</p>
                     * @return SecretId <p>SecretId</p>
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取<p>SecretKey</p>
                     * @return SecretKey <p>SecretKey</p>
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取<p>Token值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Token <p>Token值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取<p>过期时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpiredTime <p>过期时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否从缓存中加载。标明该值是否实时从sts服务获取，还是从缓存中获取。调用方可不关心</p>
                     * @return IsCache <p>是否从缓存中加载。标明该值是否实时从sts服务获取，还是从缓存中获取。调用方可不关心</p>
                     * 
                     */
                    bool GetIsCache() const;

                    /**
                     * 判断参数 IsCache 是否已赋值
                     * @return IsCache 是否已赋值
                     * 
                     */
                    bool IsCacheHasBeenSet() const;

                private:

                    /**
                     * <p>SecretId</p>
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * <p>SecretKey</p>
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * <p>Token值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * <p>过期时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * <p>是否从缓存中加载。标明该值是否实时从sts服务获取，还是从缓存中获取。调用方可不关心</p>
                     */
                    bool m_isCache;
                    bool m_isCacheHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_ASSUMEROLEFORALLOCATEDENVRESPONSE_H_

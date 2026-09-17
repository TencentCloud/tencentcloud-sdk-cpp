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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATEPLATFORMENVREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATEPLATFORMENVREQUEST_H_

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
                * CreatePlatformEnv请求参数结构体
                */
                class CreatePlatformEnvRequest : public AbstractModel
                {
                public:
                    CreatePlatformEnvRequest();
                    ~CreatePlatformEnvRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境别名</p>
                     * @return Alias <p>环境别名</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>环境别名</p>
                     * @param _alias <p>环境别名</p>
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取<p>套餐池标识</p>
                     * @return PlatformId <p>套餐池标识</p>
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置<p>套餐池标识</p>
                     * @param _platformId <p>套餐池标识</p>
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取<p>幂等键</p>
                     * @return ReqKey <p>幂等键</p>
                     * 
                     */
                    std::string GetReqKey() const;

                    /**
                     * 设置<p>幂等键</p>
                     * @param _reqKey <p>幂等键</p>
                     * 
                     */
                    void SetReqKey(const std::string& _reqKey);

                    /**
                     * 判断参数 ReqKey 是否已赋值
                     * @return ReqKey 是否已赋值
                     * 
                     */
                    bool ReqKeyHasBeenSet() const;

                private:

                    /**
                     * <p>环境别名</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>套餐池标识</p>
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * <p>幂等键</p>
                     */
                    std::string m_reqKey;
                    bool m_reqKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATEPLATFORMENVREQUEST_H_

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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYENVREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYENVREQUEST_H_

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
                * ModifyEnv请求参数结构体
                */
                class ModifyEnvRequest : public AbstractModel
                {
                public:
                    ModifyEnvRequest();
                    ~ModifyEnvRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境ID</p>
                     * @return EnvId <p>环境ID</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境ID</p>
                     * @param _envId <p>环境ID</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取<p>环境备注名，要以a-z开头，不能包含 a-zA-z0-9- 以外的字符</p>
                     * @return Alias <p>环境备注名，要以a-z开头，不能包含 a-zA-z0-9- 以外的字符</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>环境备注名，要以a-z开头，不能包含 a-zA-z0-9- 以外的字符</p>
                     * @param _alias <p>环境备注名，要以a-z开头，不能包含 a-zA-z0-9- 以外的字符</p>
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
                     * 获取<p>按量计费QPS上限，大于套餐配额时生效。-1表示关闭QPS按量计费。</p>
                     * @return CustomQps <p>按量计费QPS上限，大于套餐配额时生效。-1表示关闭QPS按量计费。</p>
                     * 
                     */
                    int64_t GetCustomQps() const;

                    /**
                     * 设置<p>按量计费QPS上限，大于套餐配额时生效。-1表示关闭QPS按量计费。</p>
                     * @param _customQps <p>按量计费QPS上限，大于套餐配额时生效。-1表示关闭QPS按量计费。</p>
                     * 
                     */
                    void SetCustomQps(const int64_t& _customQps);

                    /**
                     * 判断参数 CustomQps 是否已赋值
                     * @return CustomQps 是否已赋值
                     * 
                     */
                    bool CustomQpsHasBeenSet() const;

                private:

                    /**
                     * <p>环境ID</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>环境备注名，要以a-z开头，不能包含 a-zA-z0-9- 以外的字符</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>按量计费QPS上限，大于套餐配额时生效。-1表示关闭QPS按量计费。</p>
                     */
                    int64_t m_customQps;
                    bool m_customQpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYENVREQUEST_H_

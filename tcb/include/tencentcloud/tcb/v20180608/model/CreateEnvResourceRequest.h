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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATEENVRESOURCEREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATEENVRESOURCEREQUEST_H_

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
                * CreateEnvResource请求参数结构体
                */
                class CreateEnvResourceRequest : public AbstractModel
                {
                public:
                    CreateEnvResourceRequest();
                    ~CreateEnvResourceRequest() = default;
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
                     * 获取<p>资源类型。代表本次开通哪些资源。<br>可取值以及含义：</p><ul><li>log : 表示日志资源。</li><li>function： 表示云函数资源。</li></ul><p>该数组不能为空，且每个元素必须为合法的资源类型值</p>
                     * @return Resources <p>资源类型。代表本次开通哪些资源。<br>可取值以及含义：</p><ul><li>log : 表示日志资源。</li><li>function： 表示云函数资源。</li></ul><p>该数组不能为空，且每个元素必须为合法的资源类型值</p>
                     * 
                     */
                    std::vector<std::string> GetResources() const;

                    /**
                     * 设置<p>资源类型。代表本次开通哪些资源。<br>可取值以及含义：</p><ul><li>log : 表示日志资源。</li><li>function： 表示云函数资源。</li></ul><p>该数组不能为空，且每个元素必须为合法的资源类型值</p>
                     * @param _resources <p>资源类型。代表本次开通哪些资源。<br>可取值以及含义：</p><ul><li>log : 表示日志资源。</li><li>function： 表示云函数资源。</li></ul><p>该数组不能为空，且每个元素必须为合法的资源类型值</p>
                     * 
                     */
                    void SetResources(const std::vector<std::string>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                private:

                    /**
                     * <p>环境ID</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>资源类型。代表本次开通哪些资源。<br>可取值以及含义：</p><ul><li>log : 表示日志资源。</li><li>function： 表示云函数资源。</li></ul><p>该数组不能为空，且每个元素必须为合法的资源类型值</p>
                     */
                    std::vector<std::string> m_resources;
                    bool m_resourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATEENVRESOURCEREQUEST_H_

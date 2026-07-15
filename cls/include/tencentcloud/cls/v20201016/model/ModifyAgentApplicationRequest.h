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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYAGENTAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYAGENTAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyAgentApplication请求参数结构体
                */
                class ModifyAgentApplicationRequest : public AbstractModel
                {
                public:
                    ModifyAgentApplicationRequest();
                    ~ModifyAgentApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用id</p>
                     * @return ApplicationId <p>应用id</p>
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置<p>应用id</p>
                     * @param _applicationId <p>应用id</p>
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取<p>应用名称</p><p>参数格式：- 不能为空字符串- 不能包含字符<code>|</code>- 不能超过64字符</p>
                     * @return ApplicationName <p>应用名称</p><p>参数格式：- 不能为空字符串- 不能包含字符<code>|</code>- 不能超过64字符</p>
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置<p>应用名称</p><p>参数格式：- 不能为空字符串- 不能包含字符<code>|</code>- 不能超过64字符</p>
                     * @param _applicationName <p>应用名称</p><p>参数格式：- 不能为空字符串- 不能包含字符<code>|</code>- 不能超过64字符</p>
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                private:

                    /**
                     * <p>应用id</p>
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * <p>应用名称</p><p>参数格式：- 不能为空字符串- 不能包含字符<code>|</code>- 不能超过64字符</p>
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYAGENTAPPLICATIONREQUEST_H_

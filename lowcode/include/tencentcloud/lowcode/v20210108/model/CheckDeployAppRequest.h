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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_CHECKDEPLOYAPPREQUEST_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_CHECKDEPLOYAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * CheckDeployApp请求参数结构体
                */
                class CheckDeployAppRequest : public AbstractModel
                {
                public:
                    CheckDeployAppRequest();
                    ~CheckDeployAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
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
                     * 获取应用id
                     * @return Id 应用id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置应用id
                     * @param _id 应用id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取构建 Id
                     * @return BuildId 构建 Id
                     * 
                     */
                    std::string GetBuildId() const;

                    /**
                     * 设置构建 Id
                     * @param _buildId 构建 Id
                     * 
                     */
                    void SetBuildId(const std::string& _buildId);

                    /**
                     * 判断参数 BuildId 是否已赋值
                     * @return BuildId 是否已赋值
                     * 
                     */
                    bool BuildIdHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 应用id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 构建 Id
                     */
                    std::string m_buildId;
                    bool m_buildIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_CHECKDEPLOYAPPREQUEST_H_

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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_DEPLOYAPPREQUEST_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_DEPLOYAPPREQUEST_H_

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
                * DeployApp请求参数结构体
                */
                class DeployAppRequest : public AbstractModel
                {
                public:
                    DeployAppRequest();
                    ~DeployAppRequest() = default;
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
                     * 获取发布体验preview/正式upload
                     * @return Mode 发布体验preview/正式upload
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置发布体验preview/正式upload
                     * @param _mode 发布体验preview/正式upload
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取构建类型：mp、pc、web、adminPortal
                     * @return BuildType 构建类型：mp、pc、web、adminPortal
                     * 
                     */
                    std::string GetBuildType() const;

                    /**
                     * 设置构建类型：mp、pc、web、adminPortal
                     * @param _buildType 构建类型：mp、pc、web、adminPortal
                     * 
                     */
                    void SetBuildType(const std::string& _buildType);

                    /**
                     * 判断参数 BuildType 是否已赋值
                     * @return BuildType 是否已赋值
                     * 
                     */
                    bool BuildTypeHasBeenSet() const;

                    /**
                     * 获取子包数组
                     * @return SubAppIds 子包数组
                     * 
                     */
                    std::vector<std::string> GetSubAppIds() const;

                    /**
                     * 设置子包数组
                     * @param _subAppIds 子包数组
                     * 
                     */
                    void SetSubAppIds(const std::vector<std::string>& _subAppIds);

                    /**
                     * 判断参数 SubAppIds 是否已赋值
                     * @return SubAppIds 是否已赋值
                     * 
                     */
                    bool SubAppIdsHasBeenSet() const;

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
                     * 发布体验preview/正式upload
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 构建类型：mp、pc、web、adminPortal
                     */
                    std::string m_buildType;
                    bool m_buildTypeHasBeenSet;

                    /**
                     * 子包数组
                     */
                    std::vector<std::string> m_subAppIds;
                    bool m_subAppIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_DEPLOYAPPREQUEST_H_

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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20230508_MODEL_MODIFYWORKSPACEREQUEST_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20230508_MODEL_MODIFYWORKSPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudstudio/v20230508/model/Env.h>
#include <tencentcloud/cloudstudio/v20230508/model/LifeCycle.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20230508
        {
            namespace Model
            {
                /**
                * ModifyWorkspace请求参数结构体
                */
                class ModifyWorkspaceRequest : public AbstractModel
                {
                public:
                    ModifyWorkspaceRequest();
                    ~ModifyWorkspaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作空间 SpaceKey. 更新该工作空间的属性
                     * @return SpaceKey 工作空间 SpaceKey. 更新该工作空间的属性
                     * 
                     */
                    std::string GetSpaceKey() const;

                    /**
                     * 设置工作空间 SpaceKey. 更新该工作空间的属性
                     * @param _spaceKey 工作空间 SpaceKey. 更新该工作空间的属性
                     * 
                     */
                    void SetSpaceKey(const std::string& _spaceKey);

                    /**
                     * 判断参数 SpaceKey 是否已赋值
                     * @return SpaceKey 是否已赋值
                     * 
                     */
                    bool SpaceKeyHasBeenSet() const;

                    /**
                     * 获取工作空间名称
                     * @return Name 工作空间名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置工作空间名称
                     * @param _name 工作空间名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取工作空间描述
                     * @return Description 工作空间描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置工作空间描述
                     * @param _description 工作空间描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取工作空间规格。STANDARD: 2C4G, CALCULATION: 4C8G, PROFESSION: 8C16G. 默认是 STANDARD。
                     * @return Specs 工作空间规格。STANDARD: 2C4G, CALCULATION: 4C8G, PROFESSION: 8C16G. 默认是 STANDARD。
                     * 
                     */
                    std::string GetSpecs() const;

                    /**
                     * 设置工作空间规格。STANDARD: 2C4G, CALCULATION: 4C8G, PROFESSION: 8C16G. 默认是 STANDARD。
                     * @param _specs 工作空间规格。STANDARD: 2C4G, CALCULATION: 4C8G, PROFESSION: 8C16G. 默认是 STANDARD。
                     * 
                     */
                    void SetSpecs(const std::string& _specs);

                    /**
                     * 判断参数 Specs 是否已赋值
                     * @return Specs 是否已赋值
                     * 
                     */
                    bool SpecsHasBeenSet() const;

                    /**
                     * 获取环境变量. 会被注入到工作空间中
                     * @return Envs 环境变量. 会被注入到工作空间中
                     * 
                     */
                    std::vector<Env> GetEnvs() const;

                    /**
                     * 设置环境变量. 会被注入到工作空间中
                     * @param _envs 环境变量. 会被注入到工作空间中
                     * 
                     */
                    void SetEnvs(const std::vector<Env>& _envs);

                    /**
                     * 判断参数 Envs 是否已赋值
                     * @return Envs 是否已赋值
                     * 
                     */
                    bool EnvsHasBeenSet() const;

                    /**
                     * 获取预装插件. 工作空间启动时, 会自动安装这些插件 
                     * @return Extensions 预装插件. 工作空间启动时, 会自动安装这些插件 
                     * 
                     */
                    std::vector<std::string> GetExtensions() const;

                    /**
                     * 设置预装插件. 工作空间启动时, 会自动安装这些插件 
                     * @param _extensions 预装插件. 工作空间启动时, 会自动安装这些插件 
                     * 
                     */
                    void SetExtensions(const std::vector<std::string>& _extensions);

                    /**
                     * 判断参数 Extensions 是否已赋值
                     * @return Extensions 是否已赋值
                     * 
                     */
                    bool ExtensionsHasBeenSet() const;

                    /**
                     * 获取工作空间生命周期钩子.  分为三个阶段 init, start, destroy. 分别表示工作空间数据初始化阶段, 工作空间启动阶段, 工作空间关闭阶段.  用户可以自定义 shell 命令. 
                     * @return Lifecycle 工作空间生命周期钩子.  分为三个阶段 init, start, destroy. 分别表示工作空间数据初始化阶段, 工作空间启动阶段, 工作空间关闭阶段.  用户可以自定义 shell 命令. 
                     * 
                     */
                    LifeCycle GetLifecycle() const;

                    /**
                     * 设置工作空间生命周期钩子.  分为三个阶段 init, start, destroy. 分别表示工作空间数据初始化阶段, 工作空间启动阶段, 工作空间关闭阶段.  用户可以自定义 shell 命令. 
                     * @param _lifecycle 工作空间生命周期钩子.  分为三个阶段 init, start, destroy. 分别表示工作空间数据初始化阶段, 工作空间启动阶段, 工作空间关闭阶段.  用户可以自定义 shell 命令. 
                     * 
                     */
                    void SetLifecycle(const LifeCycle& _lifecycle);

                    /**
                     * 判断参数 Lifecycle 是否已赋值
                     * @return Lifecycle 是否已赋值
                     * 
                     */
                    bool LifecycleHasBeenSet() const;

                private:

                    /**
                     * 工作空间 SpaceKey. 更新该工作空间的属性
                     */
                    std::string m_spaceKey;
                    bool m_spaceKeyHasBeenSet;

                    /**
                     * 工作空间名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 工作空间描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 工作空间规格。STANDARD: 2C4G, CALCULATION: 4C8G, PROFESSION: 8C16G. 默认是 STANDARD。
                     */
                    std::string m_specs;
                    bool m_specsHasBeenSet;

                    /**
                     * 环境变量. 会被注入到工作空间中
                     */
                    std::vector<Env> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * 预装插件. 工作空间启动时, 会自动安装这些插件 
                     */
                    std::vector<std::string> m_extensions;
                    bool m_extensionsHasBeenSet;

                    /**
                     * 工作空间生命周期钩子.  分为三个阶段 init, start, destroy. 分别表示工作空间数据初始化阶段, 工作空间启动阶段, 工作空间关闭阶段.  用户可以自定义 shell 命令. 
                     */
                    LifeCycle m_lifecycle;
                    bool m_lifecycleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20230508_MODEL_MODIFYWORKSPACEREQUEST_H_

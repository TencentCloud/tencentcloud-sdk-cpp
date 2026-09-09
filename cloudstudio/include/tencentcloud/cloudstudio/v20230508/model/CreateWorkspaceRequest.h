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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20230508_MODEL_CREATEWORKSPACEREQUEST_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20230508_MODEL_CREATEWORKSPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudstudio/v20230508/model/GitRepository.h>
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
                * CreateWorkspace请求参数结构体
                */
                class CreateWorkspaceRequest : public AbstractModel
                {
                public:
                    CreateWorkspaceRequest();
                    ~CreateWorkspaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作空间名称, 长度限制 2~64</p>
                     * @return Name <p>工作空间名称, 长度限制 2~64</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>工作空间名称, 长度限制 2~64</p>
                     * @param _name <p>工作空间名称, 长度限制 2~64</p>
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
                     * 获取<p>工作空间描述, 长度限制 0~255</p>
                     * @return Description <p>工作空间描述, 长度限制 0~255</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>工作空间描述, 长度限制 0~255</p>
                     * @param _description <p>工作空间描述, 长度限制 0~255</p>
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
                     * 获取<p>工作空间规格。Standard: 2C4G, Calculation: 4C8G, Profession: 8C16G. 默认是 Standard。</p>
                     * @return Specs <p>工作空间规格。Standard: 2C4G, Calculation: 4C8G, Profession: 8C16G. 默认是 Standard。</p>
                     * 
                     */
                    std::string GetSpecs() const;

                    /**
                     * 设置<p>工作空间规格。Standard: 2C4G, Calculation: 4C8G, Profession: 8C16G. 默认是 Standard。</p>
                     * @param _specs <p>工作空间规格。Standard: 2C4G, Calculation: 4C8G, Profession: 8C16G. 默认是 Standard。</p>
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
                     * 获取<p>工作空间基础镜像名称, 默认会使用 All In One 镜像, 长度限制 1~255</p>
                     * @return Image <p>工作空间基础镜像名称, 默认会使用 All In One 镜像, 长度限制 1~255</p>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>工作空间基础镜像名称, 默认会使用 All In One 镜像, 长度限制 1~255</p>
                     * @param _image <p>工作空间基础镜像名称, 默认会使用 All In One 镜像, 长度限制 1~255</p>
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取<p>Git 仓库. 工作空间启动时会自动克隆该仓库</p>
                     * @return Repository <p>Git 仓库. 工作空间启动时会自动克隆该仓库</p>
                     * 
                     */
                    GitRepository GetRepository() const;

                    /**
                     * 设置<p>Git 仓库. 工作空间启动时会自动克隆该仓库</p>
                     * @param _repository <p>Git 仓库. 工作空间启动时会自动克隆该仓库</p>
                     * 
                     */
                    void SetRepository(const GitRepository& _repository);

                    /**
                     * 判断参数 Repository 是否已赋值
                     * @return Repository 是否已赋值
                     * 
                     */
                    bool RepositoryHasBeenSet() const;

                    /**
                     * 获取<p>环境变量. 会被注入到工作空间中</p>
                     * @return Envs <p>环境变量. 会被注入到工作空间中</p>
                     * 
                     */
                    std::vector<Env> GetEnvs() const;

                    /**
                     * 设置<p>环境变量. 会被注入到工作空间中</p>
                     * @param _envs <p>环境变量. 会被注入到工作空间中</p>
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
                     * 获取<p>预装插件. 工作空间启动时, 会自动安装这些插件。长度限制: 0~10</p>
                     * @return Extensions <p>预装插件. 工作空间启动时, 会自动安装这些插件。长度限制: 0~10</p>
                     * 
                     */
                    std::vector<std::string> GetExtensions() const;

                    /**
                     * 设置<p>预装插件. 工作空间启动时, 会自动安装这些插件。长度限制: 0~10</p>
                     * @param _extensions <p>预装插件. 工作空间启动时, 会自动安装这些插件。长度限制: 0~10</p>
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
                     * 获取<p>工作空间生命周期钩子.  分为三个阶段 init, start, destroy. 分别表示工作空间数据初始化阶段, 工作空间启动阶段, 工作空间关闭阶段.  用户可以自定义 shell 命令.</p>
                     * @return Lifecycle <p>工作空间生命周期钩子.  分为三个阶段 init, start, destroy. 分别表示工作空间数据初始化阶段, 工作空间启动阶段, 工作空间关闭阶段.  用户可以自定义 shell 命令.</p>
                     * 
                     */
                    LifeCycle GetLifecycle() const;

                    /**
                     * 设置<p>工作空间生命周期钩子.  分为三个阶段 init, start, destroy. 分别表示工作空间数据初始化阶段, 工作空间启动阶段, 工作空间关闭阶段.  用户可以自定义 shell 命令.</p>
                     * @param _lifecycle <p>工作空间生命周期钩子.  分为三个阶段 init, start, destroy. 分别表示工作空间数据初始化阶段, 工作空间启动阶段, 工作空间关闭阶段.  用户可以自定义 shell 命令.</p>
                     * 
                     */
                    void SetLifecycle(const LifeCycle& _lifecycle);

                    /**
                     * 判断参数 Lifecycle 是否已赋值
                     * @return Lifecycle 是否已赋值
                     * 
                     */
                    bool LifecycleHasBeenSet() const;

                    /**
                     * 获取<p>应用名称</p>
                     * @return TenantAppId <p>应用名称</p>
                     * 
                     */
                    int64_t GetTenantAppId() const;

                    /**
                     * 设置<p>应用名称</p>
                     * @param _tenantAppId <p>应用名称</p>
                     * 
                     */
                    void SetTenantAppId(const int64_t& _tenantAppId);

                    /**
                     * 判断参数 TenantAppId 是否已赋值
                     * @return TenantAppId 是否已赋值
                     * 
                     */
                    bool TenantAppIdHasBeenSet() const;

                    /**
                     * 获取<p>用户UIN</p>
                     * @return TenantUin <p>用户UIN</p>
                     * 
                     */
                    std::string GetTenantUin() const;

                    /**
                     * 设置<p>用户UIN</p>
                     * @param _tenantUin <p>用户UIN</p>
                     * 
                     */
                    void SetTenantUin(const std::string& _tenantUin);

                    /**
                     * 判断参数 TenantUin 是否已赋值
                     * @return TenantUin 是否已赋值
                     * 
                     */
                    bool TenantUinHasBeenSet() const;

                    /**
                     * 获取<p>VPCID</p>
                     * @return TenantUniqVpcId <p>VPCID</p>
                     * 
                     */
                    std::string GetTenantUniqVpcId() const;

                    /**
                     * 设置<p>VPCID</p>
                     * @param _tenantUniqVpcId <p>VPCID</p>
                     * 
                     */
                    void SetTenantUniqVpcId(const std::string& _tenantUniqVpcId);

                    /**
                     * 判断参数 TenantUniqVpcId 是否已赋值
                     * @return TenantUniqVpcId 是否已赋值
                     * 
                     */
                    bool TenantUniqVpcIdHasBeenSet() const;

                    /**
                     * 获取<p>子网ID</p>
                     * @return TenantSubnetId <p>子网ID</p>
                     * 
                     */
                    std::string GetTenantSubnetId() const;

                    /**
                     * 设置<p>子网ID</p>
                     * @param _tenantSubnetId <p>子网ID</p>
                     * 
                     */
                    void SetTenantSubnetId(const std::string& _tenantSubnetId);

                    /**
                     * 判断参数 TenantSubnetId 是否已赋值
                     * @return TenantSubnetId 是否已赋值
                     * 
                     */
                    bool TenantSubnetIdHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间名称, 长度限制 2~64</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>工作空间描述, 长度限制 0~255</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>工作空间规格。Standard: 2C4G, Calculation: 4C8G, Profession: 8C16G. 默认是 Standard。</p>
                     */
                    std::string m_specs;
                    bool m_specsHasBeenSet;

                    /**
                     * <p>工作空间基础镜像名称, 默认会使用 All In One 镜像, 长度限制 1~255</p>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>Git 仓库. 工作空间启动时会自动克隆该仓库</p>
                     */
                    GitRepository m_repository;
                    bool m_repositoryHasBeenSet;

                    /**
                     * <p>环境变量. 会被注入到工作空间中</p>
                     */
                    std::vector<Env> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * <p>预装插件. 工作空间启动时, 会自动安装这些插件。长度限制: 0~10</p>
                     */
                    std::vector<std::string> m_extensions;
                    bool m_extensionsHasBeenSet;

                    /**
                     * <p>工作空间生命周期钩子.  分为三个阶段 init, start, destroy. 分别表示工作空间数据初始化阶段, 工作空间启动阶段, 工作空间关闭阶段.  用户可以自定义 shell 命令.</p>
                     */
                    LifeCycle m_lifecycle;
                    bool m_lifecycleHasBeenSet;

                    /**
                     * <p>应用名称</p>
                     */
                    int64_t m_tenantAppId;
                    bool m_tenantAppIdHasBeenSet;

                    /**
                     * <p>用户UIN</p>
                     */
                    std::string m_tenantUin;
                    bool m_tenantUinHasBeenSet;

                    /**
                     * <p>VPCID</p>
                     */
                    std::string m_tenantUniqVpcId;
                    bool m_tenantUniqVpcIdHasBeenSet;

                    /**
                     * <p>子网ID</p>
                     */
                    std::string m_tenantSubnetId;
                    bool m_tenantSubnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20230508_MODEL_CREATEWORKSPACEREQUEST_H_

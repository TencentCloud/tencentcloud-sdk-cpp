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
                     * 获取工作空间名称, 长度限制 2~64
                     * @return Name 工作空间名称, 长度限制 2~64
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置工作空间名称, 长度限制 2~64
                     * @param _name 工作空间名称, 长度限制 2~64
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
                     * 获取工作空间描述, 长度限制 0~255
                     * @return Description 工作空间描述, 长度限制 0~255
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置工作空间描述, 长度限制 0~255
                     * @param _description 工作空间描述, 长度限制 0~255
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
                     * 获取工作空间规格。Standard: 2C4G, Calculation: 4C8G, Profession: 8C16G. 默认是 Standard。
                     * @return Specs 工作空间规格。Standard: 2C4G, Calculation: 4C8G, Profession: 8C16G. 默认是 Standard。
                     * 
                     */
                    std::string GetSpecs() const;

                    /**
                     * 设置工作空间规格。Standard: 2C4G, Calculation: 4C8G, Profession: 8C16G. 默认是 Standard。
                     * @param _specs 工作空间规格。Standard: 2C4G, Calculation: 4C8G, Profession: 8C16G. 默认是 Standard。
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
                     * 获取工作空间基础镜像名称, 默认会使用 All In One 镜像, 长度限制 1~255
                     * @return Image 工作空间基础镜像名称, 默认会使用 All In One 镜像, 长度限制 1~255
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置工作空间基础镜像名称, 默认会使用 All In One 镜像, 长度限制 1~255
                     * @param _image 工作空间基础镜像名称, 默认会使用 All In One 镜像, 长度限制 1~255
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
                     * 获取Git 仓库. 工作空间启动时会自动克隆该仓库
                     * @return Repository Git 仓库. 工作空间启动时会自动克隆该仓库
                     * 
                     */
                    GitRepository GetRepository() const;

                    /**
                     * 设置Git 仓库. 工作空间启动时会自动克隆该仓库
                     * @param _repository Git 仓库. 工作空间启动时会自动克隆该仓库
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
                     * 获取预装插件. 工作空间启动时, 会自动安装这些插件。长度限制: 0~10
                     * @return Extensions 预装插件. 工作空间启动时, 会自动安装这些插件。长度限制: 0~10
                     * 
                     */
                    std::vector<std::string> GetExtensions() const;

                    /**
                     * 设置预装插件. 工作空间启动时, 会自动安装这些插件。长度限制: 0~10
                     * @param _extensions 预装插件. 工作空间启动时, 会自动安装这些插件。长度限制: 0~10
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

                    /**
                     * 获取应用名称
                     * @return TenantAppId 应用名称
                     * 
                     */
                    int64_t GetTenantAppId() const;

                    /**
                     * 设置应用名称
                     * @param _tenantAppId 应用名称
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
                     * 获取用户UIN
                     * @return TenantUin 用户UIN
                     * 
                     */
                    std::string GetTenantUin() const;

                    /**
                     * 设置用户UIN
                     * @param _tenantUin 用户UIN
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
                     * 获取VPCID
                     * @return TenantUniqVpcId VPCID
                     * 
                     */
                    std::string GetTenantUniqVpcId() const;

                    /**
                     * 设置VPCID
                     * @param _tenantUniqVpcId VPCID
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
                     * 获取子网ID
                     * @return TenantSubnetId 子网ID
                     * 
                     */
                    std::string GetTenantSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _tenantSubnetId 子网ID
                     * 
                     */
                    void SetTenantSubnetId(const std::string& _tenantSubnetId);

                    /**
                     * 判断参数 TenantSubnetId 是否已赋值
                     * @return TenantSubnetId 是否已赋值
                     * 
                     */
                    bool TenantSubnetIdHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * 工作空间名称, 长度限制 2~64
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 工作空间描述, 长度限制 0~255
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 工作空间规格。Standard: 2C4G, Calculation: 4C8G, Profession: 8C16G. 默认是 Standard。
                     */
                    std::string m_specs;
                    bool m_specsHasBeenSet;

                    /**
                     * 工作空间基础镜像名称, 默认会使用 All In One 镜像, 长度限制 1~255
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * Git 仓库. 工作空间启动时会自动克隆该仓库
                     */
                    GitRepository m_repository;
                    bool m_repositoryHasBeenSet;

                    /**
                     * 环境变量. 会被注入到工作空间中
                     */
                    std::vector<Env> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * 预装插件. 工作空间启动时, 会自动安装这些插件。长度限制: 0~10
                     */
                    std::vector<std::string> m_extensions;
                    bool m_extensionsHasBeenSet;

                    /**
                     * 工作空间生命周期钩子.  分为三个阶段 init, start, destroy. 分别表示工作空间数据初始化阶段, 工作空间启动阶段, 工作空间关闭阶段.  用户可以自定义 shell 命令. 
                     */
                    LifeCycle m_lifecycle;
                    bool m_lifecycleHasBeenSet;

                    /**
                     * 应用名称
                     */
                    int64_t m_tenantAppId;
                    bool m_tenantAppIdHasBeenSet;

                    /**
                     * 用户UIN
                     */
                    std::string m_tenantUin;
                    bool m_tenantUinHasBeenSet;

                    /**
                     * VPCID
                     */
                    std::string m_tenantUniqVpcId;
                    bool m_tenantUniqVpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_tenantSubnetId;
                    bool m_tenantSubnetIdHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20230508_MODEL_CREATEWORKSPACEREQUEST_H_

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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_MODIFYPROJECTREQUEST_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_MODIFYPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * ModifyProject请求参数结构体
                */
                class ModifyProjectRequest : public AbstractModel
                {
                public:
                    ModifyProjectRequest();
                    ~ModifyProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Makers 站点 ID</p>
                     * @return ZoneId <p>Makers 站点 ID</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Makers 站点 ID</p>
                     * @param _zoneId <p>Makers 站点 ID</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>项目 ID</p>
                     * @return ProjectId <p>项目 ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目 ID</p>
                     * @param _projectId <p>项目 ID</p>
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>项目名称</p>
                     * @return Name <p>项目名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>项目名称</p>
                     * @param _name <p>项目名称</p>
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
                     * 获取<p>项目根目录</p>
                     * @return RootDir <p>项目根目录</p>
                     * 
                     */
                    std::string GetRootDir() const;

                    /**
                     * 设置<p>项目根目录</p>
                     * @param _rootDir <p>项目根目录</p>
                     * 
                     */
                    void SetRootDir(const std::string& _rootDir);

                    /**
                     * 判断参数 RootDir 是否已赋值
                     * @return RootDir 是否已赋值
                     * 
                     */
                    bool RootDirHasBeenSet() const;

                    /**
                     * 获取<p>构建产物目录</p>
                     * @return OutputDir <p>构建产物目录</p>
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置<p>构建产物目录</p>
                     * @param _outputDir <p>构建产物目录</p>
                     * 
                     */
                    void SetOutputDir(const std::string& _outputDir);

                    /**
                     * 判断参数 OutputDir 是否已赋值
                     * @return OutputDir 是否已赋值
                     * 
                     */
                    bool OutputDirHasBeenSet() const;

                    /**
                     * 获取<p>构建命令</p>
                     * @return BuildCmd <p>构建命令</p>
                     * 
                     */
                    std::string GetBuildCmd() const;

                    /**
                     * 设置<p>构建命令</p>
                     * @param _buildCmd <p>构建命令</p>
                     * 
                     */
                    void SetBuildCmd(const std::string& _buildCmd);

                    /**
                     * 判断参数 BuildCmd 是否已赋值
                     * @return BuildCmd 是否已赋值
                     * 
                     */
                    bool BuildCmdHasBeenSet() const;

                    /**
                     * 获取<p>安装命令</p>
                     * @return InstallCmd <p>安装命令</p>
                     * 
                     */
                    std::string GetInstallCmd() const;

                    /**
                     * 设置<p>安装命令</p>
                     * @param _installCmd <p>安装命令</p>
                     * 
                     */
                    void SetInstallCmd(const std::string& _installCmd);

                    /**
                     * 判断参数 InstallCmd 是否已赋值
                     * @return InstallCmd 是否已赋值
                     * 
                     */
                    bool InstallCmdHasBeenSet() const;

                    /**
                     * 获取<p>框架</p>
                     * @return Framework <p>框架</p>
                     * 
                     */
                    std::string GetFramework() const;

                    /**
                     * 设置<p>框架</p>
                     * @param _framework <p>框架</p>
                     * 
                     */
                    void SetFramework(const std::string& _framework);

                    /**
                     * 判断参数 Framework 是否已赋值
                     * @return Framework 是否已赋值
                     * 
                     */
                    bool FrameworkHasBeenSet() const;

                    /**
                     * 获取<p>封面地址</p>
                     * @return CoverUrl <p>封面地址</p>
                     * 
                     */
                    std::string GetCoverUrl() const;

                    /**
                     * 设置<p>封面地址</p>
                     * @param _coverUrl <p>封面地址</p>
                     * 
                     */
                    void SetCoverUrl(const std::string& _coverUrl);

                    /**
                     * 判断参数 CoverUrl 是否已赋值
                     * @return CoverUrl 是否已赋值
                     * 
                     */
                    bool CoverUrlHasBeenSet() const;

                    /**
                     * 获取<p>Node.js 版本</p>
                     * @return NodeJsVersion <p>Node.js 版本</p>
                     * 
                     */
                    std::string GetNodeJsVersion() const;

                    /**
                     * 设置<p>Node.js 版本</p>
                     * @param _nodeJsVersion <p>Node.js 版本</p>
                     * 
                     */
                    void SetNodeJsVersion(const std::string& _nodeJsVersion);

                    /**
                     * 判断参数 NodeJsVersion 是否已赋值
                     * @return NodeJsVersion 是否已赋值
                     * 
                     */
                    bool NodeJsVersionHasBeenSet() const;

                private:

                    /**
                     * <p>Makers 站点 ID</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>项目 ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>项目名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>项目根目录</p>
                     */
                    std::string m_rootDir;
                    bool m_rootDirHasBeenSet;

                    /**
                     * <p>构建产物目录</p>
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * <p>构建命令</p>
                     */
                    std::string m_buildCmd;
                    bool m_buildCmdHasBeenSet;

                    /**
                     * <p>安装命令</p>
                     */
                    std::string m_installCmd;
                    bool m_installCmdHasBeenSet;

                    /**
                     * <p>框架</p>
                     */
                    std::string m_framework;
                    bool m_frameworkHasBeenSet;

                    /**
                     * <p>封面地址</p>
                     */
                    std::string m_coverUrl;
                    bool m_coverUrlHasBeenSet;

                    /**
                     * <p>Node.js 版本</p>
                     */
                    std::string m_nodeJsVersion;
                    bool m_nodeJsVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_MODIFYPROJECTREQUEST_H_

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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_RUNWORKFLOWREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_RUNWORKFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/GitInfo.h>
#include <tencentcloud/omics/v20221128/model/NFOption.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * RunWorkflow请求参数结构体
                */
                class RunWorkflowRequest : public AbstractModel
                {
                public:
                    RunWorkflowRequest();
                    ~RunWorkflowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务批次名称。
                     * @return Name 任务批次名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务批次名称。
                     * @param _name 任务批次名称。
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
                     * 获取投递环境ID。
                     * @return EnvironmentId 投递环境ID。
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置投递环境ID。
                     * @param _environmentId 投递环境ID。
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取工作流Git仓库信息。
                     * @return GitSource 工作流Git仓库信息。
                     * 
                     */
                    GitInfo GetGitSource() const;

                    /**
                     * 设置工作流Git仓库信息。
                     * @param _gitSource 工作流Git仓库信息。
                     * 
                     */
                    void SetGitSource(const GitInfo& _gitSource);

                    /**
                     * 判断参数 GitSource 是否已赋值
                     * @return GitSource 是否已赋值
                     * 
                     */
                    bool GitSourceHasBeenSet() const;

                    /**
                     * 获取工作流类型。

支持类型：
- NEXTFLOW
                     * @return Type 工作流类型。

支持类型：
- NEXTFLOW
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置工作流类型。

支持类型：
- NEXTFLOW
                     * @param _type 工作流类型。

支持类型：
- NEXTFLOW
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Nextflow选项。
                     * @return NFOption Nextflow选项。
                     * 
                     */
                    NFOption GetNFOption() const;

                    /**
                     * 设置Nextflow选项。
                     * @param _nFOption Nextflow选项。
                     * 
                     */
                    void SetNFOption(const NFOption& _nFOption);

                    /**
                     * 判断参数 NFOption 是否已赋值
                     * @return NFOption 是否已赋值
                     * 
                     */
                    bool NFOptionHasBeenSet() const;

                    /**
                     * 获取项目ID。
（不填使用指定地域下的默认项目）
                     * @return ProjectId 项目ID。
（不填使用指定地域下的默认项目）
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID。
（不填使用指定地域下的默认项目）
                     * @param _projectId 项目ID。
（不填使用指定地域下的默认项目）
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
                     * 获取任务批次描述。
                     * @return Description 任务批次描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置任务批次描述。
                     * @param _description 任务批次描述。
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
                     * 获取任务输入JSON。需要进行base64编码。
（InputBase64和InputCosUri必选其一）
                     * @return InputBase64 任务输入JSON。需要进行base64编码。
（InputBase64和InputCosUri必选其一）
                     * 
                     */
                    std::string GetInputBase64() const;

                    /**
                     * 设置任务输入JSON。需要进行base64编码。
（InputBase64和InputCosUri必选其一）
                     * @param _inputBase64 任务输入JSON。需要进行base64编码。
（InputBase64和InputCosUri必选其一）
                     * 
                     */
                    void SetInputBase64(const std::string& _inputBase64);

                    /**
                     * 判断参数 InputBase64 是否已赋值
                     * @return InputBase64 是否已赋值
                     * 
                     */
                    bool InputBase64HasBeenSet() const;

                    /**
                     * 获取任务输入COS地址。
（InputBase64和InputCosUri必选其一）
                     * @return InputCosUri 任务输入COS地址。
（InputBase64和InputCosUri必选其一）
                     * 
                     */
                    std::string GetInputCosUri() const;

                    /**
                     * 设置任务输入COS地址。
（InputBase64和InputCosUri必选其一）
                     * @param _inputCosUri 任务输入COS地址。
（InputBase64和InputCosUri必选其一）
                     * 
                     */
                    void SetInputCosUri(const std::string& _inputCosUri);

                    /**
                     * 判断参数 InputCosUri 是否已赋值
                     * @return InputCosUri 是否已赋值
                     * 
                     */
                    bool InputCosUriHasBeenSet() const;

                    /**
                     * 获取任务缓存清理时间（小时）。不填或0表示不清理。
                     * @return CacheClearDelay 任务缓存清理时间（小时）。不填或0表示不清理。
                     * 
                     */
                    uint64_t GetCacheClearDelay() const;

                    /**
                     * 设置任务缓存清理时间（小时）。不填或0表示不清理。
                     * @param _cacheClearDelay 任务缓存清理时间（小时）。不填或0表示不清理。
                     * 
                     */
                    void SetCacheClearDelay(const uint64_t& _cacheClearDelay);

                    /**
                     * 判断参数 CacheClearDelay 是否已赋值
                     * @return CacheClearDelay 是否已赋值
                     * 
                     */
                    bool CacheClearDelayHasBeenSet() const;

                    /**
                     * 获取工作目录，可填写指定缓存卷内的绝对路径，不填使用默认缓存卷内的默认路径，暂时仅支持Nextflow。
                     * @return WorkDir 工作目录，可填写指定缓存卷内的绝对路径，不填使用默认缓存卷内的默认路径，暂时仅支持Nextflow。
                     * 
                     */
                    std::string GetWorkDir() const;

                    /**
                     * 设置工作目录，可填写指定缓存卷内的绝对路径，不填使用默认缓存卷内的默认路径，暂时仅支持Nextflow。
                     * @param _workDir 工作目录，可填写指定缓存卷内的绝对路径，不填使用默认缓存卷内的默认路径，暂时仅支持Nextflow。
                     * 
                     */
                    void SetWorkDir(const std::string& _workDir);

                    /**
                     * 判断参数 WorkDir 是否已赋值
                     * @return WorkDir 是否已赋值
                     * 
                     */
                    bool WorkDirHasBeenSet() const;

                    /**
                     * 获取缓存卷ID，不填使用默认缓存卷，暂时仅支持Nextflow。
                     * @return VolumeIds 缓存卷ID，不填使用默认缓存卷，暂时仅支持Nextflow。
                     * 
                     */
                    std::vector<std::string> GetVolumeIds() const;

                    /**
                     * 设置缓存卷ID，不填使用默认缓存卷，暂时仅支持Nextflow。
                     * @param _volumeIds 缓存卷ID，不填使用默认缓存卷，暂时仅支持Nextflow。
                     * 
                     */
                    void SetVolumeIds(const std::vector<std::string>& _volumeIds);

                    /**
                     * 判断参数 VolumeIds 是否已赋值
                     * @return VolumeIds 是否已赋值
                     * 
                     */
                    bool VolumeIdsHasBeenSet() const;

                    /**
                     * 获取工作流入口文件，不填使用默认入口文件。
                     * @return Entrypoint 工作流入口文件，不填使用默认入口文件。
                     * 
                     */
                    std::string GetEntrypoint() const;

                    /**
                     * 设置工作流入口文件，不填使用默认入口文件。
                     * @param _entrypoint 工作流入口文件，不填使用默认入口文件。
                     * 
                     */
                    void SetEntrypoint(const std::string& _entrypoint);

                    /**
                     * 判断参数 Entrypoint 是否已赋值
                     * @return Entrypoint 是否已赋值
                     * 
                     */
                    bool EntrypointHasBeenSet() const;

                private:

                    /**
                     * 任务批次名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 投递环境ID。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 工作流Git仓库信息。
                     */
                    GitInfo m_gitSource;
                    bool m_gitSourceHasBeenSet;

                    /**
                     * 工作流类型。

支持类型：
- NEXTFLOW
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Nextflow选项。
                     */
                    NFOption m_nFOption;
                    bool m_nFOptionHasBeenSet;

                    /**
                     * 项目ID。
（不填使用指定地域下的默认项目）
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务批次描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 任务输入JSON。需要进行base64编码。
（InputBase64和InputCosUri必选其一）
                     */
                    std::string m_inputBase64;
                    bool m_inputBase64HasBeenSet;

                    /**
                     * 任务输入COS地址。
（InputBase64和InputCosUri必选其一）
                     */
                    std::string m_inputCosUri;
                    bool m_inputCosUriHasBeenSet;

                    /**
                     * 任务缓存清理时间（小时）。不填或0表示不清理。
                     */
                    uint64_t m_cacheClearDelay;
                    bool m_cacheClearDelayHasBeenSet;

                    /**
                     * 工作目录，可填写指定缓存卷内的绝对路径，不填使用默认缓存卷内的默认路径，暂时仅支持Nextflow。
                     */
                    std::string m_workDir;
                    bool m_workDirHasBeenSet;

                    /**
                     * 缓存卷ID，不填使用默认缓存卷，暂时仅支持Nextflow。
                     */
                    std::vector<std::string> m_volumeIds;
                    bool m_volumeIdsHasBeenSet;

                    /**
                     * 工作流入口文件，不填使用默认入口文件。
                     */
                    std::string m_entrypoint;
                    bool m_entrypointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RUNWORKFLOWREQUEST_H_

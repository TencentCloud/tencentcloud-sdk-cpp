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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_UPDATENOTEBOOKINSTANCEREQUEST_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_UPDATENOTEBOOKINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20191022/model/StoppingCondition.h>
#include <tencentcloud/tione/v20191022/model/ClsConfig.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * UpdateNotebookInstance请求参数结构体
                */
                class UpdateNotebookInstanceRequest : public AbstractModel
                {
                public:
                    UpdateNotebookInstanceRequest();
                    ~UpdateNotebookInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Notebook实例名称
规则：“^\[a-zA-Z0-9\](-\*\[a-zA-Z0-9\])\*$”
                     * @return NotebookInstanceName Notebook实例名称
规则：“^\[a-zA-Z0-9\](-\*\[a-zA-Z0-9\])\*$”
                     * 
                     */
                    std::string GetNotebookInstanceName() const;

                    /**
                     * 设置Notebook实例名称
规则：“^\[a-zA-Z0-9\](-\*\[a-zA-Z0-9\])\*$”
                     * @param _notebookInstanceName Notebook实例名称
规则：“^\[a-zA-Z0-9\](-\*\[a-zA-Z0-9\])\*$”
                     * 
                     */
                    void SetNotebookInstanceName(const std::string& _notebookInstanceName);

                    /**
                     * 判断参数 NotebookInstanceName 是否已赋值
                     * @return NotebookInstanceName 是否已赋值
                     * 
                     */
                    bool NotebookInstanceNameHasBeenSet() const;

                    /**
                     * 获取角色的资源描述
                     * @return RoleArn 角色的资源描述
                     * 
                     */
                    std::string GetRoleArn() const;

                    /**
                     * 设置角色的资源描述
                     * @param _roleArn 角色的资源描述
                     * 
                     */
                    void SetRoleArn(const std::string& _roleArn);

                    /**
                     * 判断参数 RoleArn 是否已赋值
                     * @return RoleArn 是否已赋值
                     * 
                     */
                    bool RoleArnHasBeenSet() const;

                    /**
                     * 获取Root访问权限
                     * @return RootAccess Root访问权限
                     * 
                     */
                    std::string GetRootAccess() const;

                    /**
                     * 设置Root访问权限
                     * @param _rootAccess Root访问权限
                     * 
                     */
                    void SetRootAccess(const std::string& _rootAccess);

                    /**
                     * 判断参数 RootAccess 是否已赋值
                     * @return RootAccess 是否已赋值
                     * 
                     */
                    bool RootAccessHasBeenSet() const;

                    /**
                     * 获取数据卷大小(GB)
                     * @return VolumeSizeInGB 数据卷大小(GB)
                     * 
                     */
                    uint64_t GetVolumeSizeInGB() const;

                    /**
                     * 设置数据卷大小(GB)
                     * @param _volumeSizeInGB 数据卷大小(GB)
                     * 
                     */
                    void SetVolumeSizeInGB(const uint64_t& _volumeSizeInGB);

                    /**
                     * 判断参数 VolumeSizeInGB 是否已赋值
                     * @return VolumeSizeInGB 是否已赋值
                     * 
                     */
                    bool VolumeSizeInGBHasBeenSet() const;

                    /**
                     * 获取算力资源类型
                     * @return InstanceType 算力资源类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置算力资源类型
                     * @param _instanceType 算力资源类型
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取notebook生命周期脚本名称
                     * @return LifecycleScriptsName notebook生命周期脚本名称
                     * 
                     */
                    std::string GetLifecycleScriptsName() const;

                    /**
                     * 设置notebook生命周期脚本名称
                     * @param _lifecycleScriptsName notebook生命周期脚本名称
                     * 
                     */
                    void SetLifecycleScriptsName(const std::string& _lifecycleScriptsName);

                    /**
                     * 判断参数 LifecycleScriptsName 是否已赋值
                     * @return LifecycleScriptsName 是否已赋值
                     * 
                     */
                    bool LifecycleScriptsNameHasBeenSet() const;

                    /**
                     * 获取是否解绑生命周期脚本，默认 false。
该值为true时，LifecycleScriptsName将被忽略
                     * @return DisassociateLifecycleScript 是否解绑生命周期脚本，默认 false。
该值为true时，LifecycleScriptsName将被忽略
                     * 
                     */
                    bool GetDisassociateLifecycleScript() const;

                    /**
                     * 设置是否解绑生命周期脚本，默认 false。
该值为true时，LifecycleScriptsName将被忽略
                     * @param _disassociateLifecycleScript 是否解绑生命周期脚本，默认 false。
该值为true时，LifecycleScriptsName将被忽略
                     * 
                     */
                    void SetDisassociateLifecycleScript(const bool& _disassociateLifecycleScript);

                    /**
                     * 判断参数 DisassociateLifecycleScript 是否已赋值
                     * @return DisassociateLifecycleScript 是否已赋值
                     * 
                     */
                    bool DisassociateLifecycleScriptHasBeenSet() const;

                    /**
                     * 获取默认存储库名称
可以是已创建的存储库名称或者已https://开头的公共git库
                     * @return DefaultCodeRepository 默认存储库名称
可以是已创建的存储库名称或者已https://开头的公共git库
                     * 
                     */
                    std::string GetDefaultCodeRepository() const;

                    /**
                     * 设置默认存储库名称
可以是已创建的存储库名称或者已https://开头的公共git库
                     * @param _defaultCodeRepository 默认存储库名称
可以是已创建的存储库名称或者已https://开头的公共git库
                     * 
                     */
                    void SetDefaultCodeRepository(const std::string& _defaultCodeRepository);

                    /**
                     * 判断参数 DefaultCodeRepository 是否已赋值
                     * @return DefaultCodeRepository 是否已赋值
                     * 
                     */
                    bool DefaultCodeRepositoryHasBeenSet() const;

                    /**
                     * 获取其他存储库列表
每个元素可以是已创建的存储库名称或者已https://开头的公共git库
                     * @return AdditionalCodeRepositories 其他存储库列表
每个元素可以是已创建的存储库名称或者已https://开头的公共git库
                     * 
                     */
                    std::vector<std::string> GetAdditionalCodeRepositories() const;

                    /**
                     * 设置其他存储库列表
每个元素可以是已创建的存储库名称或者已https://开头的公共git库
                     * @param _additionalCodeRepositories 其他存储库列表
每个元素可以是已创建的存储库名称或者已https://开头的公共git库
                     * 
                     */
                    void SetAdditionalCodeRepositories(const std::vector<std::string>& _additionalCodeRepositories);

                    /**
                     * 判断参数 AdditionalCodeRepositories 是否已赋值
                     * @return AdditionalCodeRepositories 是否已赋值
                     * 
                     */
                    bool AdditionalCodeRepositoriesHasBeenSet() const;

                    /**
                     * 获取是否取消关联默认存储库，默认false
该值为true时，DefaultCodeRepository将被忽略
                     * @return DisassociateDefaultCodeRepository 是否取消关联默认存储库，默认false
该值为true时，DefaultCodeRepository将被忽略
                     * 
                     */
                    bool GetDisassociateDefaultCodeRepository() const;

                    /**
                     * 设置是否取消关联默认存储库，默认false
该值为true时，DefaultCodeRepository将被忽略
                     * @param _disassociateDefaultCodeRepository 是否取消关联默认存储库，默认false
该值为true时，DefaultCodeRepository将被忽略
                     * 
                     */
                    void SetDisassociateDefaultCodeRepository(const bool& _disassociateDefaultCodeRepository);

                    /**
                     * 判断参数 DisassociateDefaultCodeRepository 是否已赋值
                     * @return DisassociateDefaultCodeRepository 是否已赋值
                     * 
                     */
                    bool DisassociateDefaultCodeRepositoryHasBeenSet() const;

                    /**
                     * 获取是否取消关联其他存储库，默认false
该值为true时，AdditionalCodeRepositories将被忽略
                     * @return DisassociateAdditionalCodeRepositories 是否取消关联其他存储库，默认false
该值为true时，AdditionalCodeRepositories将被忽略
                     * 
                     */
                    bool GetDisassociateAdditionalCodeRepositories() const;

                    /**
                     * 设置是否取消关联其他存储库，默认false
该值为true时，AdditionalCodeRepositories将被忽略
                     * @param _disassociateAdditionalCodeRepositories 是否取消关联其他存储库，默认false
该值为true时，AdditionalCodeRepositories将被忽略
                     * 
                     */
                    void SetDisassociateAdditionalCodeRepositories(const bool& _disassociateAdditionalCodeRepositories);

                    /**
                     * 判断参数 DisassociateAdditionalCodeRepositories 是否已赋值
                     * @return DisassociateAdditionalCodeRepositories 是否已赋值
                     * 
                     */
                    bool DisassociateAdditionalCodeRepositoriesHasBeenSet() const;

                    /**
                     * 获取已弃用，请使用ClsConfig配置。是否开启CLS日志服务，可取值Enabled/Disabled
                     * @return ClsAccess 已弃用，请使用ClsConfig配置。是否开启CLS日志服务，可取值Enabled/Disabled
                     * 
                     */
                    std::string GetClsAccess() const;

                    /**
                     * 设置已弃用，请使用ClsConfig配置。是否开启CLS日志服务，可取值Enabled/Disabled
                     * @param _clsAccess 已弃用，请使用ClsConfig配置。是否开启CLS日志服务，可取值Enabled/Disabled
                     * 
                     */
                    void SetClsAccess(const std::string& _clsAccess);

                    /**
                     * 判断参数 ClsAccess 是否已赋值
                     * @return ClsAccess 是否已赋值
                     * 
                     */
                    bool ClsAccessHasBeenSet() const;

                    /**
                     * 获取自动停止，可取值Enabled/Disabled
取值为Disabled的时候StoppingCondition将被忽略
取值为Enabled的时候读取StoppingCondition作为自动停止的配置
                     * @return AutoStopping 自动停止，可取值Enabled/Disabled
取值为Disabled的时候StoppingCondition将被忽略
取值为Enabled的时候读取StoppingCondition作为自动停止的配置
                     * 
                     */
                    std::string GetAutoStopping() const;

                    /**
                     * 设置自动停止，可取值Enabled/Disabled
取值为Disabled的时候StoppingCondition将被忽略
取值为Enabled的时候读取StoppingCondition作为自动停止的配置
                     * @param _autoStopping 自动停止，可取值Enabled/Disabled
取值为Disabled的时候StoppingCondition将被忽略
取值为Enabled的时候读取StoppingCondition作为自动停止的配置
                     * 
                     */
                    void SetAutoStopping(const std::string& _autoStopping);

                    /**
                     * 判断参数 AutoStopping 是否已赋值
                     * @return AutoStopping 是否已赋值
                     * 
                     */
                    bool AutoStoppingHasBeenSet() const;

                    /**
                     * 获取自动停止配置，只在AutoStopping为Enabled的时候生效
                     * @return StoppingCondition 自动停止配置，只在AutoStopping为Enabled的时候生效
                     * 
                     */
                    StoppingCondition GetStoppingCondition() const;

                    /**
                     * 设置自动停止配置，只在AutoStopping为Enabled的时候生效
                     * @param _stoppingCondition 自动停止配置，只在AutoStopping为Enabled的时候生效
                     * 
                     */
                    void SetStoppingCondition(const StoppingCondition& _stoppingCondition);

                    /**
                     * 判断参数 StoppingCondition 是否已赋值
                     * @return StoppingCondition 是否已赋值
                     * 
                     */
                    bool StoppingConditionHasBeenSet() const;

                    /**
                     * 获取接入日志的配置，默认使用免费日志服务。
                     * @return ClsConfig 接入日志的配置，默认使用免费日志服务。
                     * 
                     */
                    ClsConfig GetClsConfig() const;

                    /**
                     * 设置接入日志的配置，默认使用免费日志服务。
                     * @param _clsConfig 接入日志的配置，默认使用免费日志服务。
                     * 
                     */
                    void SetClsConfig(const ClsConfig& _clsConfig);

                    /**
                     * 判断参数 ClsConfig 是否已赋值
                     * @return ClsConfig 是否已赋值
                     * 
                     */
                    bool ClsConfigHasBeenSet() const;

                private:

                    /**
                     * Notebook实例名称
规则：“^\[a-zA-Z0-9\](-\*\[a-zA-Z0-9\])\*$”
                     */
                    std::string m_notebookInstanceName;
                    bool m_notebookInstanceNameHasBeenSet;

                    /**
                     * 角色的资源描述
                     */
                    std::string m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * Root访问权限
                     */
                    std::string m_rootAccess;
                    bool m_rootAccessHasBeenSet;

                    /**
                     * 数据卷大小(GB)
                     */
                    uint64_t m_volumeSizeInGB;
                    bool m_volumeSizeInGBHasBeenSet;

                    /**
                     * 算力资源类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * notebook生命周期脚本名称
                     */
                    std::string m_lifecycleScriptsName;
                    bool m_lifecycleScriptsNameHasBeenSet;

                    /**
                     * 是否解绑生命周期脚本，默认 false。
该值为true时，LifecycleScriptsName将被忽略
                     */
                    bool m_disassociateLifecycleScript;
                    bool m_disassociateLifecycleScriptHasBeenSet;

                    /**
                     * 默认存储库名称
可以是已创建的存储库名称或者已https://开头的公共git库
                     */
                    std::string m_defaultCodeRepository;
                    bool m_defaultCodeRepositoryHasBeenSet;

                    /**
                     * 其他存储库列表
每个元素可以是已创建的存储库名称或者已https://开头的公共git库
                     */
                    std::vector<std::string> m_additionalCodeRepositories;
                    bool m_additionalCodeRepositoriesHasBeenSet;

                    /**
                     * 是否取消关联默认存储库，默认false
该值为true时，DefaultCodeRepository将被忽略
                     */
                    bool m_disassociateDefaultCodeRepository;
                    bool m_disassociateDefaultCodeRepositoryHasBeenSet;

                    /**
                     * 是否取消关联其他存储库，默认false
该值为true时，AdditionalCodeRepositories将被忽略
                     */
                    bool m_disassociateAdditionalCodeRepositories;
                    bool m_disassociateAdditionalCodeRepositoriesHasBeenSet;

                    /**
                     * 已弃用，请使用ClsConfig配置。是否开启CLS日志服务，可取值Enabled/Disabled
                     */
                    std::string m_clsAccess;
                    bool m_clsAccessHasBeenSet;

                    /**
                     * 自动停止，可取值Enabled/Disabled
取值为Disabled的时候StoppingCondition将被忽略
取值为Enabled的时候读取StoppingCondition作为自动停止的配置
                     */
                    std::string m_autoStopping;
                    bool m_autoStoppingHasBeenSet;

                    /**
                     * 自动停止配置，只在AutoStopping为Enabled的时候生效
                     */
                    StoppingCondition m_stoppingCondition;
                    bool m_stoppingConditionHasBeenSet;

                    /**
                     * 接入日志的配置，默认使用免费日志服务。
                     */
                    ClsConfig m_clsConfig;
                    bool m_clsConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_UPDATENOTEBOOKINSTANCEREQUEST_H_

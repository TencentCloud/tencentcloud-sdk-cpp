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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_CREATENOTEBOOKINSTANCEREQUEST_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_CREATENOTEBOOKINSTANCEREQUEST_H_

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
                * CreateNotebookInstance请求参数结构体
                */
                class CreateNotebookInstanceRequest : public AbstractModel
                {
                public:
                    CreateNotebookInstanceRequest();
                    ~CreateNotebookInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Notebook实例名称，不能超过63个字符
规则：“^\[a-zA-Z0-9\](-\*\[a-zA-Z0-9\])\*$”
                     * @return NotebookInstanceName Notebook实例名称，不能超过63个字符
规则：“^\[a-zA-Z0-9\](-\*\[a-zA-Z0-9\])\*$”
                     * 
                     */
                    std::string GetNotebookInstanceName() const;

                    /**
                     * 设置Notebook实例名称，不能超过63个字符
规则：“^\[a-zA-Z0-9\](-\*\[a-zA-Z0-9\])\*$”
                     * @param _notebookInstanceName Notebook实例名称，不能超过63个字符
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
                     * 获取Notebook算力类型
参考https://cloud.tencent.com/document/product/851/41239
                     * @return InstanceType Notebook算力类型
参考https://cloud.tencent.com/document/product/851/41239
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Notebook算力类型
参考https://cloud.tencent.com/document/product/851/41239
                     * @param _instanceType Notebook算力类型
参考https://cloud.tencent.com/document/product/851/41239
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
                     * 获取数据卷大小(GB)
用户持久化Notebook实例的数据
                     * @return VolumeSizeInGB 数据卷大小(GB)
用户持久化Notebook实例的数据
                     * 
                     */
                    uint64_t GetVolumeSizeInGB() const;

                    /**
                     * 设置数据卷大小(GB)
用户持久化Notebook实例的数据
                     * @param _volumeSizeInGB 数据卷大小(GB)
用户持久化Notebook实例的数据
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
                     * 获取外网访问权限，可取值Enabled/Disabled
开启后，Notebook实例可以具有访问外网80，443端口的权限
                     * @return DirectInternetAccess 外网访问权限，可取值Enabled/Disabled
开启后，Notebook实例可以具有访问外网80，443端口的权限
                     * 
                     */
                    std::string GetDirectInternetAccess() const;

                    /**
                     * 设置外网访问权限，可取值Enabled/Disabled
开启后，Notebook实例可以具有访问外网80，443端口的权限
                     * @param _directInternetAccess 外网访问权限，可取值Enabled/Disabled
开启后，Notebook实例可以具有访问外网80，443端口的权限
                     * 
                     */
                    void SetDirectInternetAccess(const std::string& _directInternetAccess);

                    /**
                     * 判断参数 DirectInternetAccess 是否已赋值
                     * @return DirectInternetAccess 是否已赋值
                     * 
                     */
                    bool DirectInternetAccessHasBeenSet() const;

                    /**
                     * 获取Root用户权限，可取值Enabled/Disabled
开启后，Notebook实例可以切换至root用户执行命令
                     * @return RootAccess Root用户权限，可取值Enabled/Disabled
开启后，Notebook实例可以切换至root用户执行命令
                     * 
                     */
                    std::string GetRootAccess() const;

                    /**
                     * 设置Root用户权限，可取值Enabled/Disabled
开启后，Notebook实例可以切换至root用户执行命令
                     * @param _rootAccess Root用户权限，可取值Enabled/Disabled
开启后，Notebook实例可以切换至root用户执行命令
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
                     * 获取子网ID
如果需要Notebook实例访问VPC内的资源，则需要选择对应的子网
                     * @return SubnetId 子网ID
如果需要Notebook实例访问VPC内的资源，则需要选择对应的子网
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
如果需要Notebook实例访问VPC内的资源，则需要选择对应的子网
                     * @param _subnetId 子网ID
如果需要Notebook实例访问VPC内的资源，则需要选择对应的子网
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取生命周期脚本名称
必须是已存在的生命周期脚本，具体参考https://cloud.tencent.com/document/product/851/43140
                     * @return LifecycleScriptsName 生命周期脚本名称
必须是已存在的生命周期脚本，具体参考https://cloud.tencent.com/document/product/851/43140
                     * 
                     */
                    std::string GetLifecycleScriptsName() const;

                    /**
                     * 设置生命周期脚本名称
必须是已存在的生命周期脚本，具体参考https://cloud.tencent.com/document/product/851/43140
                     * @param _lifecycleScriptsName 生命周期脚本名称
必须是已存在的生命周期脚本，具体参考https://cloud.tencent.com/document/product/851/43140
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
                     * 获取默认存储库名称
可以是已创建的存储库名称或者已https://开头的公共git库
参考https://cloud.tencent.com/document/product/851/43139
                     * @return DefaultCodeRepository 默认存储库名称
可以是已创建的存储库名称或者已https://开头的公共git库
参考https://cloud.tencent.com/document/product/851/43139
                     * 
                     */
                    std::string GetDefaultCodeRepository() const;

                    /**
                     * 设置默认存储库名称
可以是已创建的存储库名称或者已https://开头的公共git库
参考https://cloud.tencent.com/document/product/851/43139
                     * @param _defaultCodeRepository 默认存储库名称
可以是已创建的存储库名称或者已https://开头的公共git库
参考https://cloud.tencent.com/document/product/851/43139
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
参考https://cloud.tencent.com/document/product/851/43139
                     * @return AdditionalCodeRepositories 其他存储库列表
每个元素可以是已创建的存储库名称或者已https://开头的公共git库
参考https://cloud.tencent.com/document/product/851/43139
                     * 
                     */
                    std::vector<std::string> GetAdditionalCodeRepositories() const;

                    /**
                     * 设置其他存储库列表
每个元素可以是已创建的存储库名称或者已https://开头的公共git库
参考https://cloud.tencent.com/document/product/851/43139
                     * @param _additionalCodeRepositories 其他存储库列表
每个元素可以是已创建的存储库名称或者已https://开头的公共git库
参考https://cloud.tencent.com/document/product/851/43139
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
                     * 获取已弃用，请使用ClsConfig配置。
是否开启CLS日志服务，可取值Enabled/Disabled，默认为Disabled
开启后，Notebook运行的日志会收集到CLS中，CLS会产生费用，请根据需要选择
                     * @return ClsAccess 已弃用，请使用ClsConfig配置。
是否开启CLS日志服务，可取值Enabled/Disabled，默认为Disabled
开启后，Notebook运行的日志会收集到CLS中，CLS会产生费用，请根据需要选择
                     * 
                     */
                    std::string GetClsAccess() const;

                    /**
                     * 设置已弃用，请使用ClsConfig配置。
是否开启CLS日志服务，可取值Enabled/Disabled，默认为Disabled
开启后，Notebook运行的日志会收集到CLS中，CLS会产生费用，请根据需要选择
                     * @param _clsAccess 已弃用，请使用ClsConfig配置。
是否开启CLS日志服务，可取值Enabled/Disabled，默认为Disabled
开启后，Notebook运行的日志会收集到CLS中，CLS会产生费用，请根据需要选择
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
                     * 获取自动停止配置
选择定时停止Notebook实例
                     * @return StoppingCondition 自动停止配置
选择定时停止Notebook实例
                     * 
                     */
                    StoppingCondition GetStoppingCondition() const;

                    /**
                     * 设置自动停止配置
选择定时停止Notebook实例
                     * @param _stoppingCondition 自动停止配置
选择定时停止Notebook实例
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
                     * 获取接入日志的配置，默认接入免费日志
                     * @return ClsConfig 接入日志的配置，默认接入免费日志
                     * 
                     */
                    ClsConfig GetClsConfig() const;

                    /**
                     * 设置接入日志的配置，默认接入免费日志
                     * @param _clsConfig 接入日志的配置，默认接入免费日志
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
                     * Notebook实例名称，不能超过63个字符
规则：“^\[a-zA-Z0-9\](-\*\[a-zA-Z0-9\])\*$”
                     */
                    std::string m_notebookInstanceName;
                    bool m_notebookInstanceNameHasBeenSet;

                    /**
                     * Notebook算力类型
参考https://cloud.tencent.com/document/product/851/41239
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 数据卷大小(GB)
用户持久化Notebook实例的数据
                     */
                    uint64_t m_volumeSizeInGB;
                    bool m_volumeSizeInGBHasBeenSet;

                    /**
                     * 外网访问权限，可取值Enabled/Disabled
开启后，Notebook实例可以具有访问外网80，443端口的权限
                     */
                    std::string m_directInternetAccess;
                    bool m_directInternetAccessHasBeenSet;

                    /**
                     * Root用户权限，可取值Enabled/Disabled
开启后，Notebook实例可以切换至root用户执行命令
                     */
                    std::string m_rootAccess;
                    bool m_rootAccessHasBeenSet;

                    /**
                     * 子网ID
如果需要Notebook实例访问VPC内的资源，则需要选择对应的子网
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 生命周期脚本名称
必须是已存在的生命周期脚本，具体参考https://cloud.tencent.com/document/product/851/43140
                     */
                    std::string m_lifecycleScriptsName;
                    bool m_lifecycleScriptsNameHasBeenSet;

                    /**
                     * 默认存储库名称
可以是已创建的存储库名称或者已https://开头的公共git库
参考https://cloud.tencent.com/document/product/851/43139
                     */
                    std::string m_defaultCodeRepository;
                    bool m_defaultCodeRepositoryHasBeenSet;

                    /**
                     * 其他存储库列表
每个元素可以是已创建的存储库名称或者已https://开头的公共git库
参考https://cloud.tencent.com/document/product/851/43139
                     */
                    std::vector<std::string> m_additionalCodeRepositories;
                    bool m_additionalCodeRepositoriesHasBeenSet;

                    /**
                     * 已弃用，请使用ClsConfig配置。
是否开启CLS日志服务，可取值Enabled/Disabled，默认为Disabled
开启后，Notebook运行的日志会收集到CLS中，CLS会产生费用，请根据需要选择
                     */
                    std::string m_clsAccess;
                    bool m_clsAccessHasBeenSet;

                    /**
                     * 自动停止配置
选择定时停止Notebook实例
                     */
                    StoppingCondition m_stoppingCondition;
                    bool m_stoppingConditionHasBeenSet;

                    /**
                     * 自动停止，可取值Enabled/Disabled
取值为Disabled的时候StoppingCondition将被忽略
取值为Enabled的时候读取StoppingCondition作为自动停止的配置
                     */
                    std::string m_autoStopping;
                    bool m_autoStoppingHasBeenSet;

                    /**
                     * 接入日志的配置，默认接入免费日志
                     */
                    ClsConfig m_clsConfig;
                    bool m_clsConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_CREATENOTEBOOKINSTANCEREQUEST_H_

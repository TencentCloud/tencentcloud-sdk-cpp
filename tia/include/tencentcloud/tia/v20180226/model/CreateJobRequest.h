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

#ifndef TENCENTCLOUD_TIA_V20180226_MODEL_CREATEJOBREQUEST_H_
#define TENCENTCLOUD_TIA_V20180226_MODEL_CREATEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tia
    {
        namespace V20180226
        {
            namespace Model
            {
                /**
                * CreateJob请求参数结构体
                */
                class CreateJobRequest : public AbstractModel
                {
                public:
                    CreateJobRequest();
                    ~CreateJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务名称
                     * @return Name 任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名称
                     * @param _name 任务名称
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
                     * 获取运行任务的集群，详见 [使用集群](https://cloud.tencent.com/document/product/851/17317)
                     * @return Cluster 运行任务的集群，详见 [使用集群](https://cloud.tencent.com/document/product/851/17317)
                     * 
                     */
                    std::string GetCluster() const;

                    /**
                     * 设置运行任务的集群，详见 [使用集群](https://cloud.tencent.com/document/product/851/17317)
                     * @param _cluster 运行任务的集群，详见 [使用集群](https://cloud.tencent.com/document/product/851/17317)
                     * 
                     */
                    void SetCluster(const std::string& _cluster);

                    /**
                     * 判断参数 Cluster 是否已赋值
                     * @return Cluster 是否已赋值
                     * 
                     */
                    bool ClusterHasBeenSet() const;

                    /**
                     * 获取运行任务的环境，详见 [运行环境](https://cloud.tencent.com/document/product/851/17320)
                     * @return RuntimeVersion 运行任务的环境，详见 [运行环境](https://cloud.tencent.com/document/product/851/17320)
                     * 
                     */
                    std::string GetRuntimeVersion() const;

                    /**
                     * 设置运行任务的环境，详见 [运行环境](https://cloud.tencent.com/document/product/851/17320)
                     * @param _runtimeVersion 运行任务的环境，详见 [运行环境](https://cloud.tencent.com/document/product/851/17320)
                     * 
                     */
                    void SetRuntimeVersion(const std::string& _runtimeVersion);

                    /**
                     * 判断参数 RuntimeVersion 是否已赋值
                     * @return RuntimeVersion 是否已赋值
                     * 
                     */
                    bool RuntimeVersionHasBeenSet() const;

                    /**
                     * 获取挂载的路径，支持 NFS，[CFS](https://cloud.tencent.com/product/cfs) 和 [COS](https://cloud.tencent.com/product/cos)，其中 COS 只在 [TI-A 定制环境](https://cloud.tencent.com/document/product/851/17320#ti-a-.E5.AE.9A.E5.88.B6.E7.8E.AF.E5.A2.83) 中支持
                     * @return PackageDir 挂载的路径，支持 NFS，[CFS](https://cloud.tencent.com/product/cfs) 和 [COS](https://cloud.tencent.com/product/cos)，其中 COS 只在 [TI-A 定制环境](https://cloud.tencent.com/document/product/851/17320#ti-a-.E5.AE.9A.E5.88.B6.E7.8E.AF.E5.A2.83) 中支持
                     * 
                     */
                    std::vector<std::string> GetPackageDir() const;

                    /**
                     * 设置挂载的路径，支持 NFS，[CFS](https://cloud.tencent.com/product/cfs) 和 [COS](https://cloud.tencent.com/product/cos)，其中 COS 只在 [TI-A 定制环境](https://cloud.tencent.com/document/product/851/17320#ti-a-.E5.AE.9A.E5.88.B6.E7.8E.AF.E5.A2.83) 中支持
                     * @param _packageDir 挂载的路径，支持 NFS，[CFS](https://cloud.tencent.com/product/cfs) 和 [COS](https://cloud.tencent.com/product/cos)，其中 COS 只在 [TI-A 定制环境](https://cloud.tencent.com/document/product/851/17320#ti-a-.E5.AE.9A.E5.88.B6.E7.8E.AF.E5.A2.83) 中支持
                     * 
                     */
                    void SetPackageDir(const std::vector<std::string>& _packageDir);

                    /**
                     * 判断参数 PackageDir 是否已赋值
                     * @return PackageDir 是否已赋值
                     * 
                     */
                    bool PackageDirHasBeenSet() const;

                    /**
                     * 获取任务启动命令
                     * @return Command 任务启动命令
                     * 
                     */
                    std::vector<std::string> GetCommand() const;

                    /**
                     * 设置任务启动命令
                     * @param _command 任务启动命令
                     * 
                     */
                    void SetCommand(const std::vector<std::string>& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取任务启动参数
                     * @return Args 任务启动参数
                     * 
                     */
                    std::vector<std::string> GetArgs() const;

                    /**
                     * 设置任务启动参数
                     * @param _args 任务启动参数
                     * 
                     */
                    void SetArgs(const std::vector<std::string>& _args);

                    /**
                     * 判断参数 Args 是否已赋值
                     * @return Args 是否已赋值
                     * 
                     */
                    bool ArgsHasBeenSet() const;

                    /**
                     * 获取运行任务的配置信息，详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * @return ScaleTier 运行任务的配置信息，详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * 
                     */
                    std::string GetScaleTier() const;

                    /**
                     * 设置运行任务的配置信息，详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * @param _scaleTier 运行任务的配置信息，详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * 
                     */
                    void SetScaleTier(const std::string& _scaleTier);

                    /**
                     * 判断参数 ScaleTier 是否已赋值
                     * @return ScaleTier 是否已赋值
                     * 
                     */
                    bool ScaleTierHasBeenSet() const;

                    /**
                     * 获取Master 机器类型，ScaleTier 取值为 `CUSTOM` 时必填，详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * @return MasterType Master 机器类型，ScaleTier 取值为 `CUSTOM` 时必填，详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * 
                     */
                    std::string GetMasterType() const;

                    /**
                     * 设置Master 机器类型，ScaleTier 取值为 `CUSTOM` 时必填，详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * @param _masterType Master 机器类型，ScaleTier 取值为 `CUSTOM` 时必填，详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * 
                     */
                    void SetMasterType(const std::string& _masterType);

                    /**
                     * 判断参数 MasterType 是否已赋值
                     * @return MasterType 是否已赋值
                     * 
                     */
                    bool MasterTypeHasBeenSet() const;

                    /**
                     * 获取Worker 机器类型，ScaleTier 取值为 `CUSTOM` 时必填，详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * @return WorkerType Worker 机器类型，ScaleTier 取值为 `CUSTOM` 时必填，详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * 
                     */
                    std::string GetWorkerType() const;

                    /**
                     * 设置Worker 机器类型，ScaleTier 取值为 `CUSTOM` 时必填，详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * @param _workerType Worker 机器类型，ScaleTier 取值为 `CUSTOM` 时必填，详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * 
                     */
                    void SetWorkerType(const std::string& _workerType);

                    /**
                     * 判断参数 WorkerType 是否已赋值
                     * @return WorkerType 是否已赋值
                     * 
                     */
                    bool WorkerTypeHasBeenSet() const;

                    /**
                     * 获取Parameter server 机器类型，ScaleTier 取值为 `CUSTOM` 时必填,详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * @return ParameterServerType Parameter server 机器类型，ScaleTier 取值为 `CUSTOM` 时必填,详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * 
                     */
                    std::string GetParameterServerType() const;

                    /**
                     * 设置Parameter server 机器类型，ScaleTier 取值为 `CUSTOM` 时必填,详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * @param _parameterServerType Parameter server 机器类型，ScaleTier 取值为 `CUSTOM` 时必填,详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * 
                     */
                    void SetParameterServerType(const std::string& _parameterServerType);

                    /**
                     * 判断参数 ParameterServerType 是否已赋值
                     * @return ParameterServerType 是否已赋值
                     * 
                     */
                    bool ParameterServerTypeHasBeenSet() const;

                    /**
                     * 获取Worker 机器数量，ScaleTier 取值为 `CUSTOM` 时必填,详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * @return WorkerCount Worker 机器数量，ScaleTier 取值为 `CUSTOM` 时必填,详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * 
                     */
                    uint64_t GetWorkerCount() const;

                    /**
                     * 设置Worker 机器数量，ScaleTier 取值为 `CUSTOM` 时必填,详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * @param _workerCount Worker 机器数量，ScaleTier 取值为 `CUSTOM` 时必填,详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * 
                     */
                    void SetWorkerCount(const uint64_t& _workerCount);

                    /**
                     * 判断参数 WorkerCount 是否已赋值
                     * @return WorkerCount 是否已赋值
                     * 
                     */
                    bool WorkerCountHasBeenSet() const;

                    /**
                     * 获取Parameter server 机器数量，ScaleTier 取值为 `CUSTOM` 时必填,详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * @return ParameterServerCount Parameter server 机器数量，ScaleTier 取值为 `CUSTOM` 时必填,详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * 
                     */
                    uint64_t GetParameterServerCount() const;

                    /**
                     * 设置Parameter server 机器数量，ScaleTier 取值为 `CUSTOM` 时必填,详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * @param _parameterServerCount Parameter server 机器数量，ScaleTier 取值为 `CUSTOM` 时必填,详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     * 
                     */
                    void SetParameterServerCount(const uint64_t& _parameterServerCount);

                    /**
                     * 判断参数 ParameterServerCount 是否已赋值
                     * @return ParameterServerCount 是否已赋值
                     * 
                     */
                    bool ParameterServerCountHasBeenSet() const;

                    /**
                     * 获取启动 debug 模式，默认为 false
                     * @return Debug 启动 debug 模式，默认为 false
                     * 
                     */
                    bool GetDebug() const;

                    /**
                     * 设置启动 debug 模式，默认为 false
                     * @param _debug 启动 debug 模式，默认为 false
                     * 
                     */
                    void SetDebug(const bool& _debug);

                    /**
                     * 判断参数 Debug 是否已赋值
                     * @return Debug 是否已赋值
                     * 
                     */
                    bool DebugHasBeenSet() const;

                    /**
                     * 获取运行任务的其他配置信息
                     * @return RuntimeConf 运行任务的其他配置信息
                     * 
                     */
                    std::vector<std::string> GetRuntimeConf() const;

                    /**
                     * 设置运行任务的其他配置信息
                     * @param _runtimeConf 运行任务的其他配置信息
                     * 
                     */
                    void SetRuntimeConf(const std::vector<std::string>& _runtimeConf);

                    /**
                     * 判断参数 RuntimeConf 是否已赋值
                     * @return RuntimeConf 是否已赋值
                     * 
                     */
                    bool RuntimeConfHasBeenSet() const;

                private:

                    /**
                     * 任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 运行任务的集群，详见 [使用集群](https://cloud.tencent.com/document/product/851/17317)
                     */
                    std::string m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * 运行任务的环境，详见 [运行环境](https://cloud.tencent.com/document/product/851/17320)
                     */
                    std::string m_runtimeVersion;
                    bool m_runtimeVersionHasBeenSet;

                    /**
                     * 挂载的路径，支持 NFS，[CFS](https://cloud.tencent.com/product/cfs) 和 [COS](https://cloud.tencent.com/product/cos)，其中 COS 只在 [TI-A 定制环境](https://cloud.tencent.com/document/product/851/17320#ti-a-.E5.AE.9A.E5.88.B6.E7.8E.AF.E5.A2.83) 中支持
                     */
                    std::vector<std::string> m_packageDir;
                    bool m_packageDirHasBeenSet;

                    /**
                     * 任务启动命令
                     */
                    std::vector<std::string> m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 任务启动参数
                     */
                    std::vector<std::string> m_args;
                    bool m_argsHasBeenSet;

                    /**
                     * 运行任务的配置信息，详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     */
                    std::string m_scaleTier;
                    bool m_scaleTierHasBeenSet;

                    /**
                     * Master 机器类型，ScaleTier 取值为 `CUSTOM` 时必填，详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     */
                    std::string m_masterType;
                    bool m_masterTypeHasBeenSet;

                    /**
                     * Worker 机器类型，ScaleTier 取值为 `CUSTOM` 时必填，详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     */
                    std::string m_workerType;
                    bool m_workerTypeHasBeenSet;

                    /**
                     * Parameter server 机器类型，ScaleTier 取值为 `CUSTOM` 时必填,详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     */
                    std::string m_parameterServerType;
                    bool m_parameterServerTypeHasBeenSet;

                    /**
                     * Worker 机器数量，ScaleTier 取值为 `CUSTOM` 时必填,详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     */
                    uint64_t m_workerCount;
                    bool m_workerCountHasBeenSet;

                    /**
                     * Parameter server 机器数量，ScaleTier 取值为 `CUSTOM` 时必填,详见 [训练规模](https://cloud.tencent.com/document/product/851/17319)
                     */
                    uint64_t m_parameterServerCount;
                    bool m_parameterServerCountHasBeenSet;

                    /**
                     * 启动 debug 模式，默认为 false
                     */
                    bool m_debug;
                    bool m_debugHasBeenSet;

                    /**
                     * 运行任务的其他配置信息
                     */
                    std::vector<std::string> m_runtimeConf;
                    bool m_runtimeConfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIA_V20180226_MODEL_CREATEJOBREQUEST_H_

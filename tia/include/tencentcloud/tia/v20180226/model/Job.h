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

#ifndef TENCENTCLOUD_TIA_V20180226_MODEL_JOB_H_
#define TENCENTCLOUD_TIA_V20180226_MODEL_JOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 训练任务信息
                */
                class Job : public AbstractModel
                {
                public:
                    Job();
                    ~Job() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取任务创建时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     * @return CreateTime 任务创建时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     * @param _createTime 任务创建时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取任务开始时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     * @return StartTime 任务开始时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务开始时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     * @param _startTime 任务开始时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取任务结束时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     * @return EndTime 任务结束时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务结束时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     * @param _endTime 任务结束时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取任务状态，可能的状态为Created（已创建），Running（运行中），Succeeded（运行完成：成功），Failed（运行完成：失败）
                     * @return State 任务状态，可能的状态为Created（已创建），Running（运行中），Succeeded（运行完成：成功），Failed（运行完成：失败）
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置任务状态，可能的状态为Created（已创建），Running（运行中），Succeeded（运行完成：成功），Failed（运行完成：失败）
                     * @param _state 任务状态，可能的状态为Created（已创建），Running（运行中），Succeeded（运行完成：成功），Failed（运行完成：失败）
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取任务状态信息
                     * @return Message 任务状态信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置任务状态信息
                     * @param _message 任务状态信息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取运行任务的配置信息
                     * @return ScaleTier 运行任务的配置信息
                     * 
                     */
                    std::string GetScaleTier() const;

                    /**
                     * 设置运行任务的配置信息
                     * @param _scaleTier 运行任务的配置信息
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
                     * 获取（ScaleTier为Custom时）master机器类型
                     * @return MasterType （ScaleTier为Custom时）master机器类型
                     * 
                     */
                    std::string GetMasterType() const;

                    /**
                     * 设置（ScaleTier为Custom时）master机器类型
                     * @param _masterType （ScaleTier为Custom时）master机器类型
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
                     * 获取（ScaleTier为Custom时）worker机器类型
                     * @return WorkerType （ScaleTier为Custom时）worker机器类型
                     * 
                     */
                    std::string GetWorkerType() const;

                    /**
                     * 设置（ScaleTier为Custom时）worker机器类型
                     * @param _workerType （ScaleTier为Custom时）worker机器类型
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
                     * 获取（ScaleTier为Custom时）parameter server机器类型
                     * @return ParameterServerType （ScaleTier为Custom时）parameter server机器类型
                     * 
                     */
                    std::string GetParameterServerType() const;

                    /**
                     * 设置（ScaleTier为Custom时）parameter server机器类型
                     * @param _parameterServerType （ScaleTier为Custom时）parameter server机器类型
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
                     * 获取（ScaleTier为Custom时）worker机器数量
                     * @return WorkerCount （ScaleTier为Custom时）worker机器数量
                     * 
                     */
                    uint64_t GetWorkerCount() const;

                    /**
                     * 设置（ScaleTier为Custom时）worker机器数量
                     * @param _workerCount （ScaleTier为Custom时）worker机器数量
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
                     * 获取（ScaleTier为Custom时）parameter server机器数量
                     * @return ParameterServerCount （ScaleTier为Custom时）parameter server机器数量
                     * 
                     */
                    uint64_t GetParameterServerCount() const;

                    /**
                     * 设置（ScaleTier为Custom时）parameter server机器数量
                     * @param _parameterServerCount （ScaleTier为Custom时）parameter server机器数量
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
                     * 获取挂载的路径
                     * @return PackageDir 挂载的路径
                     * 
                     */
                    std::vector<std::string> GetPackageDir() const;

                    /**
                     * 设置挂载的路径
                     * @param _packageDir 挂载的路径
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
                     * 获取运行任务的集群
                     * @return Cluster 运行任务的集群
                     * 
                     */
                    std::string GetCluster() const;

                    /**
                     * 设置运行任务的集群
                     * @param _cluster 运行任务的集群
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
                     * 获取运行任务的环境
                     * @return RuntimeVersion 运行任务的环境
                     * 
                     */
                    std::string GetRuntimeVersion() const;

                    /**
                     * 设置运行任务的环境
                     * @param _runtimeVersion 运行任务的环境
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
                     * 获取任务删除时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     * @return DelTime 任务删除时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     * 
                     */
                    std::string GetDelTime() const;

                    /**
                     * 设置任务删除时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     * @param _delTime 任务删除时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     * 
                     */
                    void SetDelTime(const std::string& _delTime);

                    /**
                     * 判断参数 DelTime 是否已赋值
                     * @return DelTime 是否已赋值
                     * 
                     */
                    bool DelTimeHasBeenSet() const;

                    /**
                     * 获取创建任务的AppId
                     * @return AppId 创建任务的AppId
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置创建任务的AppId
                     * @param _appId 创建任务的AppId
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取创建任务的Uin
                     * @return Uin 创建任务的Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置创建任务的Uin
                     * @param _uin 创建任务的Uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取创建任务的Debug模式
                     * @return Debug 创建任务的Debug模式
                     * 
                     */
                    bool GetDebug() const;

                    /**
                     * 设置创建任务的Debug模式
                     * @param _debug 创建任务的Debug模式
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
                     * 获取Runtime的额外配置信息
                     * @return RuntimeConf Runtime的额外配置信息
                     * 
                     */
                    std::vector<std::string> GetRuntimeConf() const;

                    /**
                     * 设置Runtime的额外配置信息
                     * @param _runtimeConf Runtime的额外配置信息
                     * 
                     */
                    void SetRuntimeConf(const std::vector<std::string>& _runtimeConf);

                    /**
                     * 判断参数 RuntimeConf 是否已赋值
                     * @return RuntimeConf 是否已赋值
                     * 
                     */
                    bool RuntimeConfHasBeenSet() const;

                    /**
                     * 获取任务Id
                     * @return Id 任务Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置任务Id
                     * @param _id 任务Id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 任务创建时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务开始时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务结束时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务状态，可能的状态为Created（已创建），Running（运行中），Succeeded（运行完成：成功），Failed（运行完成：失败）
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 任务状态信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 运行任务的配置信息
                     */
                    std::string m_scaleTier;
                    bool m_scaleTierHasBeenSet;

                    /**
                     * （ScaleTier为Custom时）master机器类型
                     */
                    std::string m_masterType;
                    bool m_masterTypeHasBeenSet;

                    /**
                     * （ScaleTier为Custom时）worker机器类型
                     */
                    std::string m_workerType;
                    bool m_workerTypeHasBeenSet;

                    /**
                     * （ScaleTier为Custom时）parameter server机器类型
                     */
                    std::string m_parameterServerType;
                    bool m_parameterServerTypeHasBeenSet;

                    /**
                     * （ScaleTier为Custom时）worker机器数量
                     */
                    uint64_t m_workerCount;
                    bool m_workerCountHasBeenSet;

                    /**
                     * （ScaleTier为Custom时）parameter server机器数量
                     */
                    uint64_t m_parameterServerCount;
                    bool m_parameterServerCountHasBeenSet;

                    /**
                     * 挂载的路径
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
                     * 运行任务的集群
                     */
                    std::string m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * 运行任务的环境
                     */
                    std::string m_runtimeVersion;
                    bool m_runtimeVersionHasBeenSet;

                    /**
                     * 任务删除时间，格式为：2006-01-02 15:04:05.999999999 -0700 MST
                     */
                    std::string m_delTime;
                    bool m_delTimeHasBeenSet;

                    /**
                     * 创建任务的AppId
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 创建任务的Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 创建任务的Debug模式
                     */
                    bool m_debug;
                    bool m_debugHasBeenSet;

                    /**
                     * Runtime的额外配置信息
                     */
                    std::vector<std::string> m_runtimeConf;
                    bool m_runtimeConfHasBeenSet;

                    /**
                     * 任务Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIA_V20180226_MODEL_JOB_H_

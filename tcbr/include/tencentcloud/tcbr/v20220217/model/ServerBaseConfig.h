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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_SERVERBASECONFIG_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_SERVERBASECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/HpaPolicy.h>
#include <tencentcloud/tcbr/v20220217/model/TimerScale.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * 服务基础配置信息
                */
                class ServerBaseConfig : public AbstractModel
                {
                public:
                    ServerBaseConfig();
                    ~ServerBaseConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取环境 Id
                     * @return EnvId 环境 Id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境 Id
                     * @param _envId 环境 Id
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
                     * 获取服务名
                     * @return ServerName 服务名
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置服务名
                     * @param _serverName 服务名
                     * 
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取是否开启公网访问
                     * @return OpenAccessTypes 是否开启公网访问
                     * 
                     */
                    std::vector<std::string> GetOpenAccessTypes() const;

                    /**
                     * 设置是否开启公网访问
                     * @param _openAccessTypes 是否开启公网访问
                     * 
                     */
                    void SetOpenAccessTypes(const std::vector<std::string>& _openAccessTypes);

                    /**
                     * 判断参数 OpenAccessTypes 是否已赋值
                     * @return OpenAccessTypes 是否已赋值
                     * 
                     */
                    bool OpenAccessTypesHasBeenSet() const;

                    /**
                     * 获取Cpu 规格
                     * @return Cpu Cpu 规格
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置Cpu 规格
                     * @param _cpu Cpu 规格
                     * 
                     */
                    void SetCpu(const double& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Mem 规格
                     * @return Mem Mem 规格
                     * 
                     */
                    double GetMem() const;

                    /**
                     * 设置Mem 规格
                     * @param _mem Mem 规格
                     * 
                     */
                    void SetMem(const double& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取最小副本数
                     * @return MinNum 最小副本数
                     * 
                     */
                    uint64_t GetMinNum() const;

                    /**
                     * 设置最小副本数
                     * @param _minNum 最小副本数
                     * 
                     */
                    void SetMinNum(const uint64_t& _minNum);

                    /**
                     * 判断参数 MinNum 是否已赋值
                     * @return MinNum 是否已赋值
                     * 
                     */
                    bool MinNumHasBeenSet() const;

                    /**
                     * 获取最大副本数
                     * @return MaxNum 最大副本数
                     * 
                     */
                    uint64_t GetMaxNum() const;

                    /**
                     * 设置最大副本数
                     * @param _maxNum 最大副本数
                     * 
                     */
                    void SetMaxNum(const uint64_t& _maxNum);

                    /**
                     * 判断参数 MaxNum 是否已赋值
                     * @return MaxNum 是否已赋值
                     * 
                     */
                    bool MaxNumHasBeenSet() const;

                    /**
                     * 获取扩缩容配置
                     * @return PolicyDetails 扩缩容配置
                     * 
                     */
                    std::vector<HpaPolicy> GetPolicyDetails() const;

                    /**
                     * 设置扩缩容配置
                     * @param _policyDetails 扩缩容配置
                     * 
                     */
                    void SetPolicyDetails(const std::vector<HpaPolicy>& _policyDetails);

                    /**
                     * 判断参数 PolicyDetails 是否已赋值
                     * @return PolicyDetails 是否已赋值
                     * 
                     */
                    bool PolicyDetailsHasBeenSet() const;

                    /**
                     * 获取日志采集路径
                     * @return CustomLogs 日志采集路径
                     * 
                     */
                    std::string GetCustomLogs() const;

                    /**
                     * 设置日志采集路径
                     * @param _customLogs 日志采集路径
                     * 
                     */
                    void SetCustomLogs(const std::string& _customLogs);

                    /**
                     * 判断参数 CustomLogs 是否已赋值
                     * @return CustomLogs 是否已赋值
                     * 
                     */
                    bool CustomLogsHasBeenSet() const;

                    /**
                     * 获取环境变量
                     * @return EnvParams 环境变量
                     * 
                     */
                    std::string GetEnvParams() const;

                    /**
                     * 设置环境变量
                     * @param _envParams 环境变量
                     * 
                     */
                    void SetEnvParams(const std::string& _envParams);

                    /**
                     * 判断参数 EnvParams 是否已赋值
                     * @return EnvParams 是否已赋值
                     * 
                     */
                    bool EnvParamsHasBeenSet() const;

                    /**
                     * 获取延迟检测时间
                     * @return InitialDelaySeconds 延迟检测时间
                     * 
                     */
                    uint64_t GetInitialDelaySeconds() const;

                    /**
                     * 设置延迟检测时间
                     * @param _initialDelaySeconds 延迟检测时间
                     * 
                     */
                    void SetInitialDelaySeconds(const uint64_t& _initialDelaySeconds);

                    /**
                     * 判断参数 InitialDelaySeconds 是否已赋值
                     * @return InitialDelaySeconds 是否已赋值
                     * 
                     */
                    bool InitialDelaySecondsHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取服务端口
                     * @return Port 服务端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置服务端口
                     * @param _port 服务端口
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取是否有Dockerfile
                     * @return HasDockerfile 是否有Dockerfile
                     * 
                     */
                    bool GetHasDockerfile() const;

                    /**
                     * 设置是否有Dockerfile
                     * @param _hasDockerfile 是否有Dockerfile
                     * 
                     */
                    void SetHasDockerfile(const bool& _hasDockerfile);

                    /**
                     * 判断参数 HasDockerfile 是否已赋值
                     * @return HasDockerfile 是否已赋值
                     * 
                     */
                    bool HasDockerfileHasBeenSet() const;

                    /**
                     * 获取Dockerfile 文件名
                     * @return Dockerfile Dockerfile 文件名
                     * 
                     */
                    std::string GetDockerfile() const;

                    /**
                     * 设置Dockerfile 文件名
                     * @param _dockerfile Dockerfile 文件名
                     * 
                     */
                    void SetDockerfile(const std::string& _dockerfile);

                    /**
                     * 判断参数 Dockerfile 是否已赋值
                     * @return Dockerfile 是否已赋值
                     * 
                     */
                    bool DockerfileHasBeenSet() const;

                    /**
                     * 获取构建目录
                     * @return BuildDir 构建目录
                     * 
                     */
                    std::string GetBuildDir() const;

                    /**
                     * 设置构建目录
                     * @param _buildDir 构建目录
                     * 
                     */
                    void SetBuildDir(const std::string& _buildDir);

                    /**
                     * 判断参数 BuildDir 是否已赋值
                     * @return BuildDir 是否已赋值
                     * 
                     */
                    bool BuildDirHasBeenSet() const;

                    /**
                     * 获取日志类型: none | default | custom
                     * @return LogType 日志类型: none | default | custom
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置日志类型: none | default | custom
                     * @param _logType 日志类型: none | default | custom
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取cls setId
                     * @return LogSetId cls setId
                     * 
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置cls setId
                     * @param _logSetId cls setId
                     * 
                     */
                    void SetLogSetId(const std::string& _logSetId);

                    /**
                     * 判断参数 LogSetId 是否已赋值
                     * @return LogSetId 是否已赋值
                     * 
                     */
                    bool LogSetIdHasBeenSet() const;

                    /**
                     * 获取cls 主题id
                     * @return LogTopicId cls 主题id
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置cls 主题id
                     * @param _logTopicId cls 主题id
                     * 
                     */
                    void SetLogTopicId(const std::string& _logTopicId);

                    /**
                     * 判断参数 LogTopicId 是否已赋值
                     * @return LogTopicId 是否已赋值
                     * 
                     */
                    bool LogTopicIdHasBeenSet() const;

                    /**
                     * 获取解析类型：json ｜ line
                     * @return LogParseType 解析类型：json ｜ line
                     * 
                     */
                    std::string GetLogParseType() const;

                    /**
                     * 设置解析类型：json ｜ line
                     * @param _logParseType 解析类型：json ｜ line
                     * 
                     */
                    void SetLogParseType(const std::string& _logParseType);

                    /**
                     * 判断参数 LogParseType 是否已赋值
                     * @return LogParseType 是否已赋值
                     * 
                     */
                    bool LogParseTypeHasBeenSet() const;

                    /**
                     * 获取服务标签, function: 函数托管
                     * @return Tag 服务标签, function: 函数托管
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置服务标签, function: 函数托管
                     * @param _tag 服务标签, function: 函数托管
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取内网访问开关 close | open
                     * @return InternalAccess 内网访问开关 close | open
                     * 
                     */
                    std::string GetInternalAccess() const;

                    /**
                     * 设置内网访问开关 close | open
                     * @param _internalAccess 内网访问开关 close | open
                     * 
                     */
                    void SetInternalAccess(const std::string& _internalAccess);

                    /**
                     * 判断参数 InternalAccess 是否已赋值
                     * @return InternalAccess 是否已赋值
                     * 
                     */
                    bool InternalAccessHasBeenSet() const;

                    /**
                     * 获取内网域名
                     * @return InternalDomain 内网域名
                     * 
                     */
                    std::string GetInternalDomain() const;

                    /**
                     * 设置内网域名
                     * @param _internalDomain 内网域名
                     * 
                     */
                    void SetInternalDomain(const std::string& _internalDomain);

                    /**
                     * 判断参数 InternalDomain 是否已赋值
                     * @return InternalDomain 是否已赋值
                     * 
                     */
                    bool InternalDomainHasBeenSet() const;

                    /**
                     * 获取运行模式
                     * @return OperationMode 运行模式
                     * 
                     */
                    std::string GetOperationMode() const;

                    /**
                     * 设置运行模式
                     * @param _operationMode 运行模式
                     * 
                     */
                    void SetOperationMode(const std::string& _operationMode);

                    /**
                     * 判断参数 OperationMode 是否已赋值
                     * @return OperationMode 是否已赋值
                     * 
                     */
                    bool OperationModeHasBeenSet() const;

                    /**
                     * 获取定时扩缩容配置
                     * @return TimerScale 定时扩缩容配置
                     * 
                     */
                    std::vector<TimerScale> GetTimerScale() const;

                    /**
                     * 设置定时扩缩容配置
                     * @param _timerScale 定时扩缩容配置
                     * 
                     */
                    void SetTimerScale(const std::vector<TimerScale>& _timerScale);

                    /**
                     * 判断参数 TimerScale 是否已赋值
                     * @return TimerScale 是否已赋值
                     * 
                     */
                    bool TimerScaleHasBeenSet() const;

                    /**
                     * 获取Dockerfile EntryPoint 参数
                     * @return EntryPoint Dockerfile EntryPoint 参数
                     * 
                     */
                    std::vector<std::string> GetEntryPoint() const;

                    /**
                     * 设置Dockerfile EntryPoint 参数
                     * @param _entryPoint Dockerfile EntryPoint 参数
                     * 
                     */
                    void SetEntryPoint(const std::vector<std::string>& _entryPoint);

                    /**
                     * 判断参数 EntryPoint 是否已赋值
                     * @return EntryPoint 是否已赋值
                     * 
                     */
                    bool EntryPointHasBeenSet() const;

                    /**
                     * 获取Dockerfile Cmd 参数
                     * @return Cmd Dockerfile Cmd 参数
                     * 
                     */
                    std::vector<std::string> GetCmd() const;

                    /**
                     * 设置Dockerfile Cmd 参数
                     * @param _cmd Dockerfile Cmd 参数
                     * 
                     */
                    void SetCmd(const std::vector<std::string>& _cmd);

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     * 
                     */
                    bool CmdHasBeenSet() const;

                    /**
                     * 获取会话亲和性开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionAffinity 会话亲和性开关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSessionAffinity() const;

                    /**
                     * 设置会话亲和性开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionAffinity 会话亲和性开关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSessionAffinity(const std::string& _sessionAffinity);

                    /**
                     * 判断参数 SessionAffinity 是否已赋值
                     * @return SessionAffinity 是否已赋值
                     * 
                     */
                    bool SessionAffinityHasBeenSet() const;

                private:

                    /**
                     * 环境 Id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 服务名
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * 是否开启公网访问
                     */
                    std::vector<std::string> m_openAccessTypes;
                    bool m_openAccessTypesHasBeenSet;

                    /**
                     * Cpu 规格
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Mem 规格
                     */
                    double m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 最小副本数
                     */
                    uint64_t m_minNum;
                    bool m_minNumHasBeenSet;

                    /**
                     * 最大副本数
                     */
                    uint64_t m_maxNum;
                    bool m_maxNumHasBeenSet;

                    /**
                     * 扩缩容配置
                     */
                    std::vector<HpaPolicy> m_policyDetails;
                    bool m_policyDetailsHasBeenSet;

                    /**
                     * 日志采集路径
                     */
                    std::string m_customLogs;
                    bool m_customLogsHasBeenSet;

                    /**
                     * 环境变量
                     */
                    std::string m_envParams;
                    bool m_envParamsHasBeenSet;

                    /**
                     * 延迟检测时间
                     */
                    uint64_t m_initialDelaySeconds;
                    bool m_initialDelaySecondsHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 服务端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 是否有Dockerfile
                     */
                    bool m_hasDockerfile;
                    bool m_hasDockerfileHasBeenSet;

                    /**
                     * Dockerfile 文件名
                     */
                    std::string m_dockerfile;
                    bool m_dockerfileHasBeenSet;

                    /**
                     * 构建目录
                     */
                    std::string m_buildDir;
                    bool m_buildDirHasBeenSet;

                    /**
                     * 日志类型: none | default | custom
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * cls setId
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * cls 主题id
                     */
                    std::string m_logTopicId;
                    bool m_logTopicIdHasBeenSet;

                    /**
                     * 解析类型：json ｜ line
                     */
                    std::string m_logParseType;
                    bool m_logParseTypeHasBeenSet;

                    /**
                     * 服务标签, function: 函数托管
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 内网访问开关 close | open
                     */
                    std::string m_internalAccess;
                    bool m_internalAccessHasBeenSet;

                    /**
                     * 内网域名
                     */
                    std::string m_internalDomain;
                    bool m_internalDomainHasBeenSet;

                    /**
                     * 运行模式
                     */
                    std::string m_operationMode;
                    bool m_operationModeHasBeenSet;

                    /**
                     * 定时扩缩容配置
                     */
                    std::vector<TimerScale> m_timerScale;
                    bool m_timerScaleHasBeenSet;

                    /**
                     * Dockerfile EntryPoint 参数
                     */
                    std::vector<std::string> m_entryPoint;
                    bool m_entryPointHasBeenSet;

                    /**
                     * Dockerfile Cmd 参数
                     */
                    std::vector<std::string> m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * 会话亲和性开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionAffinity;
                    bool m_sessionAffinityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_SERVERBASECONFIG_H_

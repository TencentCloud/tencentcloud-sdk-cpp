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
#include <tencentcloud/tcbr/v20220217/model/VpcConf.h>
#include <tencentcloud/tcbr/v20220217/model/VolumeConf.h>
#include <tencentcloud/tcbr/v20220217/model/PublicNetConf.h>


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
                     * 获取<p>环境 Id</p>
                     * @return EnvId <p>环境 Id</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境 Id</p>
                     * @param _envId <p>环境 Id</p>
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
                     * 获取<p>服务名</p>
                     * @return ServerName <p>服务名</p>
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置<p>服务名</p>
                     * @param _serverName <p>服务名</p>
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
                     * 获取<p>是否开启公网访问</p>
                     * @return OpenAccessTypes <p>是否开启公网访问</p>
                     * 
                     */
                    std::vector<std::string> GetOpenAccessTypes() const;

                    /**
                     * 设置<p>是否开启公网访问</p>
                     * @param _openAccessTypes <p>是否开启公网访问</p>
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
                     * 获取<p>Cpu 规格</p>
                     * @return Cpu <p>Cpu 规格</p>
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置<p>Cpu 规格</p>
                     * @param _cpu <p>Cpu 规格</p>
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
                     * 获取<p>Mem 规格</p>
                     * @return Mem <p>Mem 规格</p>
                     * 
                     */
                    double GetMem() const;

                    /**
                     * 设置<p>Mem 规格</p>
                     * @param _mem <p>Mem 规格</p>
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
                     * 获取<p>最小副本数</p>
                     * @return MinNum <p>最小副本数</p>
                     * 
                     */
                    uint64_t GetMinNum() const;

                    /**
                     * 设置<p>最小副本数</p>
                     * @param _minNum <p>最小副本数</p>
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
                     * 获取<p>最大副本数</p>
                     * @return MaxNum <p>最大副本数</p>
                     * 
                     */
                    uint64_t GetMaxNum() const;

                    /**
                     * 设置<p>最大副本数</p>
                     * @param _maxNum <p>最大副本数</p>
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
                     * 获取<p>扩缩容配置</p>
                     * @return PolicyDetails <p>扩缩容配置</p>
                     * 
                     */
                    std::vector<HpaPolicy> GetPolicyDetails() const;

                    /**
                     * 设置<p>扩缩容配置</p>
                     * @param _policyDetails <p>扩缩容配置</p>
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
                     * 获取<p>日志采集路径</p>
                     * @return CustomLogs <p>日志采集路径</p>
                     * 
                     */
                    std::string GetCustomLogs() const;

                    /**
                     * 设置<p>日志采集路径</p>
                     * @param _customLogs <p>日志采集路径</p>
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
                     * 获取<p>环境变量</p>
                     * @return EnvParams <p>环境变量</p>
                     * 
                     */
                    std::string GetEnvParams() const;

                    /**
                     * 设置<p>环境变量</p>
                     * @param _envParams <p>环境变量</p>
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
                     * 获取<p>延迟检测时间</p>
                     * @return InitialDelaySeconds <p>延迟检测时间</p>
                     * 
                     */
                    uint64_t GetInitialDelaySeconds() const;

                    /**
                     * 设置<p>延迟检测时间</p>
                     * @param _initialDelaySeconds <p>延迟检测时间</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>服务端口</p>
                     * @return Port <p>服务端口</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>服务端口</p>
                     * @param _port <p>服务端口</p>
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
                     * 获取<p>是否有Dockerfile</p>
                     * @return HasDockerfile <p>是否有Dockerfile</p>
                     * 
                     */
                    bool GetHasDockerfile() const;

                    /**
                     * 设置<p>是否有Dockerfile</p>
                     * @param _hasDockerfile <p>是否有Dockerfile</p>
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
                     * 获取<p>Dockerfile 文件名</p>
                     * @return Dockerfile <p>Dockerfile 文件名</p>
                     * 
                     */
                    std::string GetDockerfile() const;

                    /**
                     * 设置<p>Dockerfile 文件名</p>
                     * @param _dockerfile <p>Dockerfile 文件名</p>
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
                     * 获取<p>构建目录</p>
                     * @return BuildDir <p>构建目录</p>
                     * 
                     */
                    std::string GetBuildDir() const;

                    /**
                     * 设置<p>构建目录</p>
                     * @param _buildDir <p>构建目录</p>
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
                     * 获取<p>日志类型: none | default | custom</p>
                     * @return LogType <p>日志类型: none | default | custom</p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>日志类型: none | default | custom</p>
                     * @param _logType <p>日志类型: none | default | custom</p>
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
                     * 获取<p>cls setId</p>
                     * @return LogSetId <p>cls setId</p>
                     * 
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置<p>cls setId</p>
                     * @param _logSetId <p>cls setId</p>
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
                     * 获取<p>cls 主题id</p>
                     * @return LogTopicId <p>cls 主题id</p>
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置<p>cls 主题id</p>
                     * @param _logTopicId <p>cls 主题id</p>
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
                     * 获取<p>解析类型：json ｜ line</p>
                     * @return LogParseType <p>解析类型：json ｜ line</p>
                     * 
                     */
                    std::string GetLogParseType() const;

                    /**
                     * 设置<p>解析类型：json ｜ line</p>
                     * @param _logParseType <p>解析类型：json ｜ line</p>
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
                     * 获取<p>服务标签, function: 函数托管</p>
                     * @return Tag <p>服务标签, function: 函数托管</p>
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置<p>服务标签, function: 函数托管</p>
                     * @param _tag <p>服务标签, function: 函数托管</p>
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
                     * 获取<p>内网访问开关 close | open</p>
                     * @return InternalAccess <p>内网访问开关 close | open</p>
                     * 
                     */
                    std::string GetInternalAccess() const;

                    /**
                     * 设置<p>内网访问开关 close | open</p>
                     * @param _internalAccess <p>内网访问开关 close | open</p>
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
                     * 获取<p>内网域名</p>
                     * @return InternalDomain <p>内网域名</p>
                     * 
                     */
                    std::string GetInternalDomain() const;

                    /**
                     * 设置<p>内网域名</p>
                     * @param _internalDomain <p>内网域名</p>
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
                     * 获取<p>运行模式</p>
                     * @return OperationMode <p>运行模式</p>
                     * 
                     */
                    std::string GetOperationMode() const;

                    /**
                     * 设置<p>运行模式</p>
                     * @param _operationMode <p>运行模式</p>
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
                     * 获取<p>定时扩缩容配置</p>
                     * @return TimerScale <p>定时扩缩容配置</p>
                     * 
                     */
                    std::vector<TimerScale> GetTimerScale() const;

                    /**
                     * 设置<p>定时扩缩容配置</p>
                     * @param _timerScale <p>定时扩缩容配置</p>
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
                     * 获取<p>Dockerfile EntryPoint 参数</p>
                     * @return EntryPoint <p>Dockerfile EntryPoint 参数</p>
                     * 
                     */
                    std::vector<std::string> GetEntryPoint() const;

                    /**
                     * 设置<p>Dockerfile EntryPoint 参数</p>
                     * @param _entryPoint <p>Dockerfile EntryPoint 参数</p>
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
                     * 获取<p>Dockerfile Cmd 参数</p>
                     * @return Cmd <p>Dockerfile Cmd 参数</p>
                     * 
                     */
                    std::vector<std::string> GetCmd() const;

                    /**
                     * 设置<p>Dockerfile Cmd 参数</p>
                     * @param _cmd <p>Dockerfile Cmd 参数</p>
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
                     * 获取<p>会话亲和性开关</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionAffinity <p>会话亲和性开关</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSessionAffinity() const;

                    /**
                     * 设置<p>会话亲和性开关</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionAffinity <p>会话亲和性开关</p>
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

                    /**
                     * 获取<p>Vpc 配置参数</p>
                     * @return VpcConf <p>Vpc 配置参数</p>
                     * 
                     */
                    VpcConf GetVpcConf() const;

                    /**
                     * 设置<p>Vpc 配置参数</p>
                     * @param _vpcConf <p>Vpc 配置参数</p>
                     * 
                     */
                    void SetVpcConf(const VpcConf& _vpcConf);

                    /**
                     * 判断参数 VpcConf 是否已赋值
                     * @return VpcConf 是否已赋值
                     * 
                     */
                    bool VpcConfHasBeenSet() const;

                    /**
                     * 获取<p>存储配置信息</p>
                     * @return VolumesConf <p>存储配置信息</p>
                     * 
                     */
                    std::vector<VolumeConf> GetVolumesConf() const;

                    /**
                     * 设置<p>存储配置信息</p>
                     * @param _volumesConf <p>存储配置信息</p>
                     * 
                     */
                    void SetVolumesConf(const std::vector<VolumeConf>& _volumesConf);

                    /**
                     * 判断参数 VolumesConf 是否已赋值
                     * @return VolumesConf 是否已赋值
                     * 
                     */
                    bool VolumesConfHasBeenSet() const;

                    /**
                     * 获取<p>关联镜像密钥</p>
                     * @return LinkImageRegistry <p>关联镜像密钥</p>
                     * 
                     */
                    std::string GetLinkImageRegistry() const;

                    /**
                     * 设置<p>关联镜像密钥</p>
                     * @param _linkImageRegistry <p>关联镜像密钥</p>
                     * 
                     */
                    void SetLinkImageRegistry(const std::string& _linkImageRegistry);

                    /**
                     * 判断参数 LinkImageRegistry 是否已赋值
                     * @return LinkImageRegistry 是否已赋值
                     * 
                     */
                    bool LinkImageRegistryHasBeenSet() const;

                    /**
                     * 获取<p>公网访问配置</p>
                     * @return PublicNetConf <p>公网访问配置</p>
                     * 
                     */
                    PublicNetConf GetPublicNetConf() const;

                    /**
                     * 设置<p>公网访问配置</p>
                     * @param _publicNetConf <p>公网访问配置</p>
                     * 
                     */
                    void SetPublicNetConf(const PublicNetConf& _publicNetConf);

                    /**
                     * 判断参数 PublicNetConf 是否已赋值
                     * @return PublicNetConf 是否已赋值
                     * 
                     */
                    bool PublicNetConfHasBeenSet() const;

                private:

                    /**
                     * <p>环境 Id</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>服务名</p>
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * <p>是否开启公网访问</p>
                     */
                    std::vector<std::string> m_openAccessTypes;
                    bool m_openAccessTypesHasBeenSet;

                    /**
                     * <p>Cpu 规格</p>
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>Mem 规格</p>
                     */
                    double m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * <p>最小副本数</p>
                     */
                    uint64_t m_minNum;
                    bool m_minNumHasBeenSet;

                    /**
                     * <p>最大副本数</p>
                     */
                    uint64_t m_maxNum;
                    bool m_maxNumHasBeenSet;

                    /**
                     * <p>扩缩容配置</p>
                     */
                    std::vector<HpaPolicy> m_policyDetails;
                    bool m_policyDetailsHasBeenSet;

                    /**
                     * <p>日志采集路径</p>
                     */
                    std::string m_customLogs;
                    bool m_customLogsHasBeenSet;

                    /**
                     * <p>环境变量</p>
                     */
                    std::string m_envParams;
                    bool m_envParamsHasBeenSet;

                    /**
                     * <p>延迟检测时间</p>
                     */
                    uint64_t m_initialDelaySeconds;
                    bool m_initialDelaySecondsHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>服务端口</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>是否有Dockerfile</p>
                     */
                    bool m_hasDockerfile;
                    bool m_hasDockerfileHasBeenSet;

                    /**
                     * <p>Dockerfile 文件名</p>
                     */
                    std::string m_dockerfile;
                    bool m_dockerfileHasBeenSet;

                    /**
                     * <p>构建目录</p>
                     */
                    std::string m_buildDir;
                    bool m_buildDirHasBeenSet;

                    /**
                     * <p>日志类型: none | default | custom</p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>cls setId</p>
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * <p>cls 主题id</p>
                     */
                    std::string m_logTopicId;
                    bool m_logTopicIdHasBeenSet;

                    /**
                     * <p>解析类型：json ｜ line</p>
                     */
                    std::string m_logParseType;
                    bool m_logParseTypeHasBeenSet;

                    /**
                     * <p>服务标签, function: 函数托管</p>
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>内网访问开关 close | open</p>
                     */
                    std::string m_internalAccess;
                    bool m_internalAccessHasBeenSet;

                    /**
                     * <p>内网域名</p>
                     */
                    std::string m_internalDomain;
                    bool m_internalDomainHasBeenSet;

                    /**
                     * <p>运行模式</p>
                     */
                    std::string m_operationMode;
                    bool m_operationModeHasBeenSet;

                    /**
                     * <p>定时扩缩容配置</p>
                     */
                    std::vector<TimerScale> m_timerScale;
                    bool m_timerScaleHasBeenSet;

                    /**
                     * <p>Dockerfile EntryPoint 参数</p>
                     */
                    std::vector<std::string> m_entryPoint;
                    bool m_entryPointHasBeenSet;

                    /**
                     * <p>Dockerfile Cmd 参数</p>
                     */
                    std::vector<std::string> m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * <p>会话亲和性开关</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionAffinity;
                    bool m_sessionAffinityHasBeenSet;

                    /**
                     * <p>Vpc 配置参数</p>
                     */
                    VpcConf m_vpcConf;
                    bool m_vpcConfHasBeenSet;

                    /**
                     * <p>存储配置信息</p>
                     */
                    std::vector<VolumeConf> m_volumesConf;
                    bool m_volumesConfHasBeenSet;

                    /**
                     * <p>关联镜像密钥</p>
                     */
                    std::string m_linkImageRegistry;
                    bool m_linkImageRegistryHasBeenSet;

                    /**
                     * <p>公网访问配置</p>
                     */
                    PublicNetConf m_publicNetConf;
                    bool m_publicNetConfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_SERVERBASECONFIG_H_

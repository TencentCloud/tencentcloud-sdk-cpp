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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATECLOUDAPPREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATECLOUDAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/StaticConfig.h>
#include <tencentcloud/tcb/v20180608/model/BuildSource.h>
#include <tencentcloud/tcb/v20180608/model/BuildCommands.h>
#include <tencentcloud/tcb/v20180608/model/Variable.h>
#include <tencentcloud/tcb/v20180608/model/BuildStep.h>
#include <tencentcloud/tcb/v20180608/model/BuildSecret.h>
#include <tencentcloud/tcb/v20180608/model/CloudAppTrigger.h>
#include <tencentcloud/tcb/v20180608/model/CloudAppLinkService.h>
#include <tencentcloud/tcb/v20180608/model/CloudAppRoute.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * CreateCloudApp请求参数结构体
                */
                class CreateCloudAppRequest : public AbstractModel
                {
                public:
                    CreateCloudAppRequest();
                    ~CreateCloudAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境ID</p>
                     * @return EnvId <p>环境ID</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境ID</p>
                     * @param _envId <p>环境ID</p>
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
                     * @return ServiceName <p>服务名</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>服务名</p>
                     * @param _serviceName <p>服务名</p>
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取<p>部署类型</p>
                     * @return DeployType <p>部署类型</p>
                     * 
                     */
                    std::string GetDeployType() const;

                    /**
                     * 设置<p>部署类型</p>
                     * @param _deployType <p>部署类型</p>
                     * 
                     */
                    void SetDeployType(const std::string& _deployType);

                    /**
                     * 判断参数 DeployType 是否已赋值
                     * @return DeployType 是否已赋值
                     * 
                     */
                    bool DeployTypeHasBeenSet() const;

                    /**
                     * 获取<p>构建类型</p>
                     * @return BuildType <p>构建类型</p>
                     * 
                     */
                    std::string GetBuildType() const;

                    /**
                     * 设置<p>构建类型</p>
                     * @param _buildType <p>构建类型</p>
                     * 
                     */
                    void SetBuildType(const std::string& _buildType);

                    /**
                     * 判断参数 BuildType 是否已赋值
                     * @return BuildType 是否已赋值
                     * 
                     */
                    bool BuildTypeHasBeenSet() const;

                    /**
                     * 获取<p>静态应用创建配置信息</p>
                     * @return StaticConfig <p>静态应用创建配置信息</p>
                     * 
                     */
                    StaticConfig GetStaticConfig() const;

                    /**
                     * 设置<p>静态应用创建配置信息</p>
                     * @param _staticConfig <p>静态应用创建配置信息</p>
                     * 
                     */
                    void SetStaticConfig(const StaticConfig& _staticConfig);

                    /**
                     * 判断参数 StaticConfig 是否已赋值
                     * @return StaticConfig 是否已赋值
                     * 
                     */
                    bool StaticConfigHasBeenSet() const;

                    /**
                     * 获取<p>源码定义</p>
                     * @return Source <p>源码定义</p>
                     * 
                     */
                    BuildSource GetSource() const;

                    /**
                     * 设置<p>源码定义</p>
                     * @param _source <p>源码定义</p>
                     * 
                     */
                    void SetSource(const BuildSource& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>Commands 与 CustomSteps 至少填一个</p>
                     * @return Commands <p>Commands 与 CustomSteps 至少填一个</p>
                     * 
                     */
                    BuildCommands GetCommands() const;

                    /**
                     * 设置<p>Commands 与 CustomSteps 至少填一个</p>
                     * @param _commands <p>Commands 与 CustomSteps 至少填一个</p>
                     * 
                     */
                    void SetCommands(const BuildCommands& _commands);

                    /**
                     * 判断参数 Commands 是否已赋值
                     * @return Commands 是否已赋值
                     * 
                     */
                    bool CommandsHasBeenSet() const;

                    /**
                     * 获取<p>Commands 与 CustomSteps 至少填一个，docker 镜像构建场景强烈建议用 CustomSteps</p>
                     * @return Env <p>Commands 与 CustomSteps 至少填一个，docker 镜像构建场景强烈建议用 CustomSteps</p>
                     * 
                     */
                    std::vector<Variable> GetEnv() const;

                    /**
                     * 设置<p>Commands 与 CustomSteps 至少填一个，docker 镜像构建场景强烈建议用 CustomSteps</p>
                     * @param _env <p>Commands 与 CustomSteps 至少填一个，docker 镜像构建场景强烈建议用 CustomSteps</p>
                     * 
                     */
                    void SetEnv(const std::vector<Variable>& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取<p>非敏感环境变量，构建容器中以 $KEY 引用</p>
                     * @return CustomSteps <p>非敏感环境变量，构建容器中以 $KEY 引用</p>
                     * 
                     */
                    std::vector<BuildStep> GetCustomSteps() const;

                    /**
                     * 设置<p>非敏感环境变量，构建容器中以 $KEY 引用</p>
                     * @param _customSteps <p>非敏感环境变量，构建容器中以 $KEY 引用</p>
                     * 
                     */
                    void SetCustomSteps(const std::vector<BuildStep>& _customSteps);

                    /**
                     * 判断参数 CustomSteps 是否已赋值
                     * @return CustomSteps 是否已赋值
                     * 
                     */
                    bool CustomStepsHasBeenSet() const;

                    /**
                     * 获取<p>敏感凭证（AES 加密落库），构建容器中以 $SECRET_NAME 引用</p>
                     * @return Secrets <p>敏感凭证（AES 加密落库），构建容器中以 $SECRET_NAME 引用</p>
                     * 
                     */
                    std::vector<BuildSecret> GetSecrets() const;

                    /**
                     * 设置<p>敏感凭证（AES 加密落库），构建容器中以 $SECRET_NAME 引用</p>
                     * @param _secrets <p>敏感凭证（AES 加密落库），构建容器中以 $SECRET_NAME 引用</p>
                     * 
                     */
                    void SetSecrets(const std::vector<BuildSecret>& _secrets);

                    /**
                     * 判断参数 Secrets 是否已赋值
                     * @return Secrets 是否已赋值
                     * 
                     */
                    bool SecretsHasBeenSet() const;

                    /**
                     * 获取<p>选择 NodeRuntime 版本: 16,18,20,22,24 等</p>
                     * @return NodeJsVersion <p>选择 NodeRuntime 版本: 16,18,20,22,24 等</p>
                     * 
                     */
                    std::string GetNodeJsVersion() const;

                    /**
                     * 设置<p>选择 NodeRuntime 版本: 16,18,20,22,24 等</p>
                     * @param _nodeJsVersion <p>选择 NodeRuntime 版本: 16,18,20,22,24 等</p>
                     * 
                     */
                    void SetNodeJsVersion(const std::string& _nodeJsVersion);

                    /**
                     * 判断参数 NodeJsVersion 是否已赋值
                     * @return NodeJsVersion 是否已赋值
                     * 
                     */
                    bool NodeJsVersionHasBeenSet() const;

                    /**
                     * 获取<p>暂不支持：Webhook 触发器功能尚未对外开放，客户端传入的 Trigger 字段会被平台静默忽略（仅日志告警，不拒绝请求）</p>
                     * @return Trigger <p>暂不支持：Webhook 触发器功能尚未对外开放，客户端传入的 Trigger 字段会被平台静默忽略（仅日志告警，不拒绝请求）</p>
                     * 
                     */
                    CloudAppTrigger GetTrigger() const;

                    /**
                     * 设置<p>暂不支持：Webhook 触发器功能尚未对外开放，客户端传入的 Trigger 字段会被平台静默忽略（仅日志告警，不拒绝请求）</p>
                     * @param _trigger <p>暂不支持：Webhook 触发器功能尚未对外开放，客户端传入的 Trigger 字段会被平台静默忽略（仅日志告警，不拒绝请求）</p>
                     * 
                     */
                    void SetTrigger(const CloudAppTrigger& _trigger);

                    /**
                     * 判断参数 Trigger 是否已赋值
                     * @return Trigger 是否已赋值
                     * 
                     */
                    bool TriggerHasBeenSet() const;

                    /**
                     * 获取<p>服务列表</p>
                     * @return ServiceList <p>服务列表</p>
                     * 
                     */
                    std::vector<CloudAppLinkService> GetServiceList() const;

                    /**
                     * 设置<p>服务列表</p>
                     * @param _serviceList <p>服务列表</p>
                     * 
                     */
                    void SetServiceList(const std::vector<CloudAppLinkService>& _serviceList);

                    /**
                     * 判断参数 ServiceList 是否已赋值
                     * @return ServiceList 是否已赋值
                     * 
                     */
                    bool ServiceListHasBeenSet() const;

                    /**
                     * 获取<p>全局工作目录</p>
                     * @return WorkingDir <p>全局工作目录</p>
                     * 
                     */
                    std::string GetWorkingDir() const;

                    /**
                     * 设置<p>全局工作目录</p>
                     * @param _workingDir <p>全局工作目录</p>
                     * 
                     */
                    void SetWorkingDir(const std::string& _workingDir);

                    /**
                     * 判断参数 WorkingDir 是否已赋值
                     * @return WorkingDir 是否已赋值
                     * 
                     */
                    bool WorkingDirHasBeenSet() const;

                    /**
                     * 获取<p>路由列表</p>
                     * @return Routes <p>路由列表</p>
                     * 
                     */
                    std::vector<CloudAppRoute> GetRoutes() const;

                    /**
                     * 设置<p>路由列表</p>
                     * @param _routes <p>路由列表</p>
                     * 
                     */
                    void SetRoutes(const std::vector<CloudAppRoute>& _routes);

                    /**
                     * 判断参数 Routes 是否已赋值
                     * @return Routes 是否已赋值
                     * 
                     */
                    bool RoutesHasBeenSet() const;

                    /**
                     * 获取<p>部署类型</p>
                     * @return PromoteType <p>部署类型</p>
                     * 
                     */
                    std::string GetPromoteType() const;

                    /**
                     * 设置<p>部署类型</p>
                     * @param _promoteType <p>部署类型</p>
                     * 
                     */
                    void SetPromoteType(const std::string& _promoteType);

                    /**
                     * 判断参数 PromoteType 是否已赋值
                     * @return PromoteType 是否已赋值
                     * 
                     */
                    bool PromoteTypeHasBeenSet() const;

                    /**
                     * 获取<p>发布 Token 校验</p>
                     * @return ClientToken <p>发布 Token 校验</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>发布 Token 校验</p>
                     * @param _clientToken <p>发布 Token 校验</p>
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取<p>前置执行命令</p>
                     * @return PreDeployCommand <p>前置执行命令</p>
                     * 
                     */
                    std::string GetPreDeployCommand() const;

                    /**
                     * 设置<p>前置执行命令</p>
                     * @param _preDeployCommand <p>前置执行命令</p>
                     * 
                     */
                    void SetPreDeployCommand(const std::string& _preDeployCommand);

                    /**
                     * 判断参数 PreDeployCommand 是否已赋值
                     * @return PreDeployCommand 是否已赋值
                     * 
                     */
                    bool PreDeployCommandHasBeenSet() const;

                    /**
                     * 获取<p>后置执行命令</p>
                     * @return PostDeployCommand <p>后置执行命令</p>
                     * 
                     */
                    std::string GetPostDeployCommand() const;

                    /**
                     * 设置<p>后置执行命令</p>
                     * @param _postDeployCommand <p>后置执行命令</p>
                     * 
                     */
                    void SetPostDeployCommand(const std::string& _postDeployCommand);

                    /**
                     * 判断参数 PostDeployCommand 是否已赋值
                     * @return PostDeployCommand 是否已赋值
                     * 
                     */
                    bool PostDeployCommandHasBeenSet() const;

                private:

                    /**
                     * <p>环境ID</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>服务名</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>部署类型</p>
                     */
                    std::string m_deployType;
                    bool m_deployTypeHasBeenSet;

                    /**
                     * <p>构建类型</p>
                     */
                    std::string m_buildType;
                    bool m_buildTypeHasBeenSet;

                    /**
                     * <p>静态应用创建配置信息</p>
                     */
                    StaticConfig m_staticConfig;
                    bool m_staticConfigHasBeenSet;

                    /**
                     * <p>源码定义</p>
                     */
                    BuildSource m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>Commands 与 CustomSteps 至少填一个</p>
                     */
                    BuildCommands m_commands;
                    bool m_commandsHasBeenSet;

                    /**
                     * <p>Commands 与 CustomSteps 至少填一个，docker 镜像构建场景强烈建议用 CustomSteps</p>
                     */
                    std::vector<Variable> m_env;
                    bool m_envHasBeenSet;

                    /**
                     * <p>非敏感环境变量，构建容器中以 $KEY 引用</p>
                     */
                    std::vector<BuildStep> m_customSteps;
                    bool m_customStepsHasBeenSet;

                    /**
                     * <p>敏感凭证（AES 加密落库），构建容器中以 $SECRET_NAME 引用</p>
                     */
                    std::vector<BuildSecret> m_secrets;
                    bool m_secretsHasBeenSet;

                    /**
                     * <p>选择 NodeRuntime 版本: 16,18,20,22,24 等</p>
                     */
                    std::string m_nodeJsVersion;
                    bool m_nodeJsVersionHasBeenSet;

                    /**
                     * <p>暂不支持：Webhook 触发器功能尚未对外开放，客户端传入的 Trigger 字段会被平台静默忽略（仅日志告警，不拒绝请求）</p>
                     */
                    CloudAppTrigger m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * <p>服务列表</p>
                     */
                    std::vector<CloudAppLinkService> m_serviceList;
                    bool m_serviceListHasBeenSet;

                    /**
                     * <p>全局工作目录</p>
                     */
                    std::string m_workingDir;
                    bool m_workingDirHasBeenSet;

                    /**
                     * <p>路由列表</p>
                     */
                    std::vector<CloudAppRoute> m_routes;
                    bool m_routesHasBeenSet;

                    /**
                     * <p>部署类型</p>
                     */
                    std::string m_promoteType;
                    bool m_promoteTypeHasBeenSet;

                    /**
                     * <p>发布 Token 校验</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>前置执行命令</p>
                     */
                    std::string m_preDeployCommand;
                    bool m_preDeployCommandHasBeenSet;

                    /**
                     * <p>后置执行命令</p>
                     */
                    std::string m_postDeployCommand;
                    bool m_postDeployCommandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATECLOUDAPPREQUEST_H_

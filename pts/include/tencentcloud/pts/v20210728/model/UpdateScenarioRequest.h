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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_UPDATESCENARIOREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_UPDATESCENARIOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Load.h>
#include <tencentcloud/pts/v20210728/model/TestData.h>
#include <tencentcloud/pts/v20210728/model/ScriptInfo.h>
#include <tencentcloud/pts/v20210728/model/ProtocolInfo.h>
#include <tencentcloud/pts/v20210728/model/FileInfo.h>
#include <tencentcloud/pts/v20210728/model/SLAPolicy.h>
#include <tencentcloud/pts/v20210728/model/DomainNameConfig.h>
#include <tencentcloud/pts/v20210728/model/Notification.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * UpdateScenario请求参数结构体
                */
                class UpdateScenarioRequest : public AbstractModel
                {
                public:
                    UpdateScenarioRequest();
                    ~UpdateScenarioRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取场景ID
                     * @return ScenarioId 场景ID
                     * 
                     */
                    std::string GetScenarioId() const;

                    /**
                     * 设置场景ID
                     * @param _scenarioId 场景ID
                     * 
                     */
                    void SetScenarioId(const std::string& _scenarioId);

                    /**
                     * 判断参数 ScenarioId 是否已赋值
                     * @return ScenarioId 是否已赋值
                     * 
                     */
                    bool ScenarioIdHasBeenSet() const;

                    /**
                     * 获取场景名；调用该接口时，请将 Scenario 中不需要修改的字段保持原样也作为接口的入参，否则场景可能会不可用。
                     * @return Name 场景名；调用该接口时，请将 Scenario 中不需要修改的字段保持原样也作为接口的入参，否则场景可能会不可用。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置场景名；调用该接口时，请将 Scenario 中不需要修改的字段保持原样也作为接口的入参，否则场景可能会不可用。
                     * @param _name 场景名；调用该接口时，请将 Scenario 中不需要修改的字段保持原样也作为接口的入参，否则场景可能会不可用。
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
                     * 获取场景描述
                     * @return Description 场景描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置场景描述
                     * @param _description 场景描述
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
                     * 获取压测场景的模式类型。取值范围：pts-http 代表简单模式，pts-js 代表脚本模式，pts-jmeter 代表 JMeter 模式。
                     * @return Type 压测场景的模式类型。取值范围：pts-http 代表简单模式，pts-js 代表脚本模式，pts-jmeter 代表 JMeter 模式。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置压测场景的模式类型。取值范围：pts-http 代表简单模式，pts-js 代表脚本模式，pts-jmeter 代表 JMeter 模式。
                     * @param _type 压测场景的模式类型。取值范围：pts-http 代表简单模式，pts-js 代表脚本模式，pts-jmeter 代表 JMeter 模式。
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
                     * 获取施压配置
                     * @return Load 施压配置
                     * 
                     */
                    Load GetLoad() const;

                    /**
                     * 设置施压配置
                     * @param _load 施压配置
                     * 
                     */
                    void SetLoad(const Load& _load);

                    /**
                     * 判断参数 Load 是否已赋值
                     * @return Load 是否已赋值
                     * 
                     */
                    bool LoadHasBeenSet() const;

                    /**
                     * 获取deprecated
                     * @return EncodedScripts deprecated
                     * 
                     */
                    std::string GetEncodedScripts() const;

                    /**
                     * 设置deprecated
                     * @param _encodedScripts deprecated
                     * 
                     */
                    void SetEncodedScripts(const std::string& _encodedScripts);

                    /**
                     * 判断参数 EncodedScripts 是否已赋值
                     * @return EncodedScripts 是否已赋值
                     * 
                     */
                    bool EncodedScriptsHasBeenSet() const;

                    /**
                     * 获取deprecated
                     * @return Configs deprecated
                     * 
                     */
                    std::vector<std::string> GetConfigs() const;

                    /**
                     * 设置deprecated
                     * @param _configs deprecated
                     * 
                     */
                    void SetConfigs(const std::vector<std::string>& _configs);

                    /**
                     * 判断参数 Configs 是否已赋值
                     * @return Configs 是否已赋值
                     * 
                     */
                    bool ConfigsHasBeenSet() const;

                    /**
                     * 获取测试数据集
                     * @return Datasets 测试数据集
                     * 
                     */
                    std::vector<TestData> GetDatasets() const;

                    /**
                     * 设置测试数据集
                     * @param _datasets 测试数据集
                     * 
                     */
                    void SetDatasets(const std::vector<TestData>& _datasets);

                    /**
                     * 判断参数 Datasets 是否已赋值
                     * @return Datasets 是否已赋值
                     * 
                     */
                    bool DatasetsHasBeenSet() const;

                    /**
                     * 获取deprecated
                     * @return Extensions deprecated
                     * 
                     */
                    std::vector<std::string> GetExtensions() const;

                    /**
                     * 设置deprecated
                     * @param _extensions deprecated
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
                     * 获取SLA规则ID
                     * @return SLAId SLA规则ID
                     * 
                     */
                    std::string GetSLAId() const;

                    /**
                     * 设置SLA规则ID
                     * @param _sLAId SLA规则ID
                     * 
                     */
                    void SetSLAId(const std::string& _sLAId);

                    /**
                     * 判断参数 SLAId 是否已赋值
                     * @return SLAId 是否已赋值
                     * 
                     */
                    bool SLAIdHasBeenSet() const;

                    /**
                     * 获取cron job ID
                     * @return CronId cron job ID
                     * 
                     */
                    std::string GetCronId() const;

                    /**
                     * 设置cron job ID
                     * @param _cronId cron job ID
                     * 
                     */
                    void SetCronId(const std::string& _cronId);

                    /**
                     * 判断参数 CronId 是否已赋值
                     * @return CronId 是否已赋值
                     * 
                     */
                    bool CronIdHasBeenSet() const;

                    /**
                     * 获取场景状态（注：现已无需传递该参数）
                     * @return Status 场景状态（注：现已无需传递该参数）
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置场景状态（注：现已无需传递该参数）
                     * @param _status 场景状态（注：现已无需传递该参数）
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取测试脚本路径
                     * @return TestScripts 测试脚本路径
                     * 
                     */
                    std::vector<ScriptInfo> GetTestScripts() const;

                    /**
                     * 设置测试脚本路径
                     * @param _testScripts 测试脚本路径
                     * 
                     */
                    void SetTestScripts(const std::vector<ScriptInfo>& _testScripts);

                    /**
                     * 判断参数 TestScripts 是否已赋值
                     * @return TestScripts 是否已赋值
                     * 
                     */
                    bool TestScriptsHasBeenSet() const;

                    /**
                     * 获取协议文件路径
                     * @return Protocols 协议文件路径
                     * 
                     */
                    std::vector<ProtocolInfo> GetProtocols() const;

                    /**
                     * 设置协议文件路径
                     * @param _protocols 协议文件路径
                     * 
                     */
                    void SetProtocols(const std::vector<ProtocolInfo>& _protocols);

                    /**
                     * 判断参数 Protocols 是否已赋值
                     * @return Protocols 是否已赋值
                     * 
                     */
                    bool ProtocolsHasBeenSet() const;

                    /**
                     * 获取请求文件路径
                     * @return RequestFiles 请求文件路径
                     * 
                     */
                    std::vector<FileInfo> GetRequestFiles() const;

                    /**
                     * 设置请求文件路径
                     * @param _requestFiles 请求文件路径
                     * 
                     */
                    void SetRequestFiles(const std::vector<FileInfo>& _requestFiles);

                    /**
                     * 判断参数 RequestFiles 是否已赋值
                     * @return RequestFiles 是否已赋值
                     * 
                     */
                    bool RequestFilesHasBeenSet() const;

                    /**
                     * 获取SLA 策略
                     * @return SLAPolicy SLA 策略
                     * 
                     */
                    SLAPolicy GetSLAPolicy() const;

                    /**
                     * 设置SLA 策略
                     * @param _sLAPolicy SLA 策略
                     * 
                     */
                    void SetSLAPolicy(const SLAPolicy& _sLAPolicy);

                    /**
                     * 判断参数 SLAPolicy 是否已赋值
                     * @return SLAPolicy 是否已赋值
                     * 
                     */
                    bool SLAPolicyHasBeenSet() const;

                    /**
                     * 获取拓展包文件路径
                     * @return Plugins 拓展包文件路径
                     * 
                     */
                    std::vector<FileInfo> GetPlugins() const;

                    /**
                     * 设置拓展包文件路径
                     * @param _plugins 拓展包文件路径
                     * 
                     */
                    void SetPlugins(const std::vector<FileInfo>& _plugins);

                    /**
                     * 判断参数 Plugins 是否已赋值
                     * @return Plugins 是否已赋值
                     * 
                     */
                    bool PluginsHasBeenSet() const;

                    /**
                     * 获取域名解析配置
                     * @return DomainNameConfig 域名解析配置
                     * 
                     */
                    DomainNameConfig GetDomainNameConfig() const;

                    /**
                     * 设置域名解析配置
                     * @param _domainNameConfig 域名解析配置
                     * 
                     */
                    void SetDomainNameConfig(const DomainNameConfig& _domainNameConfig);

                    /**
                     * 判断参数 DomainNameConfig 是否已赋值
                     * @return DomainNameConfig 是否已赋值
                     * 
                     */
                    bool DomainNameConfigHasBeenSet() const;

                    /**
                     * 获取WebHook请求配置
                     * @return NotificationHooks WebHook请求配置
                     * 
                     */
                    std::vector<Notification> GetNotificationHooks() const;

                    /**
                     * 设置WebHook请求配置
                     * @param _notificationHooks WebHook请求配置
                     * 
                     */
                    void SetNotificationHooks(const std::vector<Notification>& _notificationHooks);

                    /**
                     * 判断参数 NotificationHooks 是否已赋值
                     * @return NotificationHooks 是否已赋值
                     * 
                     */
                    bool NotificationHooksHasBeenSet() const;

                    /**
                     * 获取创建人名
                     * @return Owner 创建人名
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置创建人名
                     * @param _owner 创建人名
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                private:

                    /**
                     * 场景ID
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * 场景名；调用该接口时，请将 Scenario 中不需要修改的字段保持原样也作为接口的入参，否则场景可能会不可用。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 场景描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 压测场景的模式类型。取值范围：pts-http 代表简单模式，pts-js 代表脚本模式，pts-jmeter 代表 JMeter 模式。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 施压配置
                     */
                    Load m_load;
                    bool m_loadHasBeenSet;

                    /**
                     * deprecated
                     */
                    std::string m_encodedScripts;
                    bool m_encodedScriptsHasBeenSet;

                    /**
                     * deprecated
                     */
                    std::vector<std::string> m_configs;
                    bool m_configsHasBeenSet;

                    /**
                     * 测试数据集
                     */
                    std::vector<TestData> m_datasets;
                    bool m_datasetsHasBeenSet;

                    /**
                     * deprecated
                     */
                    std::vector<std::string> m_extensions;
                    bool m_extensionsHasBeenSet;

                    /**
                     * SLA规则ID
                     */
                    std::string m_sLAId;
                    bool m_sLAIdHasBeenSet;

                    /**
                     * cron job ID
                     */
                    std::string m_cronId;
                    bool m_cronIdHasBeenSet;

                    /**
                     * 场景状态（注：现已无需传递该参数）
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 测试脚本路径
                     */
                    std::vector<ScriptInfo> m_testScripts;
                    bool m_testScriptsHasBeenSet;

                    /**
                     * 协议文件路径
                     */
                    std::vector<ProtocolInfo> m_protocols;
                    bool m_protocolsHasBeenSet;

                    /**
                     * 请求文件路径
                     */
                    std::vector<FileInfo> m_requestFiles;
                    bool m_requestFilesHasBeenSet;

                    /**
                     * SLA 策略
                     */
                    SLAPolicy m_sLAPolicy;
                    bool m_sLAPolicyHasBeenSet;

                    /**
                     * 拓展包文件路径
                     */
                    std::vector<FileInfo> m_plugins;
                    bool m_pluginsHasBeenSet;

                    /**
                     * 域名解析配置
                     */
                    DomainNameConfig m_domainNameConfig;
                    bool m_domainNameConfigHasBeenSet;

                    /**
                     * WebHook请求配置
                     */
                    std::vector<Notification> m_notificationHooks;
                    bool m_notificationHooksHasBeenSet;

                    /**
                     * 创建人名
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_UPDATESCENARIOREQUEST_H_

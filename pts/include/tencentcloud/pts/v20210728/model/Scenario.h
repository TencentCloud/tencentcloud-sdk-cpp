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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_SCENARIO_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_SCENARIO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Load.h>
#include <tencentcloud/pts/v20210728/model/TestData.h>
#include <tencentcloud/pts/v20210728/model/ScriptInfo.h>
#include <tencentcloud/pts/v20210728/model/ProtocolInfo.h>
#include <tencentcloud/pts/v20210728/model/FileInfo.h>
#include <tencentcloud/pts/v20210728/model/SLAPolicy.h>
#include <tencentcloud/pts/v20210728/model/DomainNameConfig.h>
#include <tencentcloud/pts/v20210728/model/NotificationHook.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 场景列表
                */
                class Scenario : public AbstractModel
                {
                public:
                    Scenario();
                    ~Scenario() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取场景名
                     * @return Name 场景名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置场景名
                     * @param _name 场景名
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
                     * 获取场景类型，如pts-http, pts-js, pts-trpc, pts-jmeter
                     * @return Type 场景类型，如pts-http, pts-js, pts-trpc, pts-jmeter
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置场景类型，如pts-http, pts-js, pts-trpc, pts-jmeter
                     * @param _type 场景类型，如pts-http, pts-js, pts-trpc, pts-jmeter
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
                     * 获取场景状态
                     * @return Status 场景状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置场景状态
                     * @param _status 场景状态
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Configs deprecated
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetConfigs() const;

                    /**
                     * 设置deprecated
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configs deprecated
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取deprecated
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Extensions deprecated
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetExtensions() const;

                    /**
                     * 设置deprecated
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extensions deprecated
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取测试数据集
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Datasets 测试数据集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TestData> GetDatasets() const;

                    /**
                     * 设置测试数据集
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasets 测试数据集
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取SLA规则的ID
                     * @return SLAId SLA规则的ID
                     * 
                     */
                    std::string GetSLAId() const;

                    /**
                     * 设置SLA规则的ID
                     * @param _sLAId SLA规则的ID
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
                     * 获取Cron Job规则的ID
                     * @return CronId Cron Job规则的ID
                     * 
                     */
                    std::string GetCronId() const;

                    /**
                     * 设置Cron Job规则的ID
                     * @param _cronId Cron Job规则的ID
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
                     * 获取场景创建时间
                     * @return CreatedAt 场景创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置场景创建时间
                     * @param _createdAt 场景创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取场景修改时间
                     * @return UpdatedAt 场景修改时间
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置场景修改时间
                     * @param _updatedAt 场景修改时间
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

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
                     * 获取App ID
                     * @return AppId App ID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置App ID
                     * @param _appId App ID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取用户ID
                     * @return Uin 用户ID
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户ID
                     * @param _uin 用户ID
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
                     * 获取子用户ID
                     * @return SubAccountUin 子用户ID
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置子用户ID
                     * @param _subAccountUin 子用户ID
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取测试脚本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TestScripts 测试脚本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ScriptInfo> GetTestScripts() const;

                    /**
                     * 设置测试脚本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _testScripts 测试脚本信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取协议文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocols 协议文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ProtocolInfo> GetProtocols() const;

                    /**
                     * 设置协议文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocols 协议文件信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取请求文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestFiles 请求文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FileInfo> GetRequestFiles() const;

                    /**
                     * 设置请求文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestFiles 请求文件信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取扩展包信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Plugins 扩展包信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FileInfo> GetPlugins() const;

                    /**
                     * 设置扩展包信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _plugins 扩展包信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取通知事件回调
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotificationHooks 通知事件回调
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NotificationHook> GetNotificationHooks() const;

                    /**
                     * 设置通知事件回调
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notificationHooks 通知事件回调
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotificationHooks(const std::vector<NotificationHook>& _notificationHooks);

                    /**
                     * 判断参数 NotificationHooks 是否已赋值
                     * @return NotificationHooks 是否已赋值
                     * 
                     */
                    bool NotificationHooksHasBeenSet() const;

                    /**
                     * 获取创建人员
                     * @return Owner 创建人员
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置创建人员
                     * @param _owner 创建人员
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
                     * 获取场景所在的项目的名字
                     * @return ProjectName 场景所在的项目的名字
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置场景所在的项目的名字
                     * @param _projectName 场景所在的项目的名字
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                private:

                    /**
                     * 场景ID
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * 场景名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 场景描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 场景类型，如pts-http, pts-js, pts-trpc, pts-jmeter
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 场景状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_configs;
                    bool m_configsHasBeenSet;

                    /**
                     * deprecated
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_extensions;
                    bool m_extensionsHasBeenSet;

                    /**
                     * 测试数据集
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TestData> m_datasets;
                    bool m_datasetsHasBeenSet;

                    /**
                     * SLA规则的ID
                     */
                    std::string m_sLAId;
                    bool m_sLAIdHasBeenSet;

                    /**
                     * Cron Job规则的ID
                     */
                    std::string m_cronId;
                    bool m_cronIdHasBeenSet;

                    /**
                     * 场景创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 场景修改时间
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * App ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户ID
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 子用户ID
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * 测试脚本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ScriptInfo> m_testScripts;
                    bool m_testScriptsHasBeenSet;

                    /**
                     * 协议文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProtocolInfo> m_protocols;
                    bool m_protocolsHasBeenSet;

                    /**
                     * 请求文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FileInfo> m_requestFiles;
                    bool m_requestFilesHasBeenSet;

                    /**
                     * SLA 策略
                     */
                    SLAPolicy m_sLAPolicy;
                    bool m_sLAPolicyHasBeenSet;

                    /**
                     * 扩展包信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FileInfo> m_plugins;
                    bool m_pluginsHasBeenSet;

                    /**
                     * 域名解析配置
                     */
                    DomainNameConfig m_domainNameConfig;
                    bool m_domainNameConfigHasBeenSet;

                    /**
                     * 通知事件回调
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NotificationHook> m_notificationHooks;
                    bool m_notificationHooksHasBeenSet;

                    /**
                     * 创建人员
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 场景所在的项目的名字
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_SCENARIO_H_

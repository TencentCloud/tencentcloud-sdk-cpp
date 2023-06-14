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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_CREATESCENARIOREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_CREATESCENARIOREQUEST_H_

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


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * CreateScenario请求参数结构体
                */
                class CreateScenarioRequest : public AbstractModel
                {
                public:
                    CreateScenarioRequest();
                    ~CreateScenarioRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取压测引擎类型
                     * @return Type 压测引擎类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置压测引擎类型
                     * @param _type 压测引擎类型
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
                     * 获取deprecated
                     * @return SLAId deprecated
                     * 
                     */
                    std::string GetSLAId() const;

                    /**
                     * 设置deprecated
                     * @param _sLAId deprecated
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
                     * 获取deprecated
                     * @return Scripts deprecated
                     * 
                     */
                    std::vector<std::string> GetScripts() const;

                    /**
                     * 设置deprecated
                     * @param _scripts deprecated
                     * 
                     */
                    void SetScripts(const std::vector<std::string>& _scripts);

                    /**
                     * 判断参数 Scripts 是否已赋值
                     * @return Scripts 是否已赋值
                     * 
                     */
                    bool ScriptsHasBeenSet() const;

                    /**
                     * 获取测试脚本文件信息
                     * @return TestScripts 测试脚本文件信息
                     * 
                     */
                    std::vector<ScriptInfo> GetTestScripts() const;

                    /**
                     * 设置测试脚本文件信息
                     * @param _testScripts 测试脚本文件信息
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

                private:

                    /**
                     * 场景名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 压测引擎类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 场景描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 施压配置
                     */
                    Load m_load;
                    bool m_loadHasBeenSet;

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
                     * deprecated
                     */
                    std::string m_sLAId;
                    bool m_sLAIdHasBeenSet;

                    /**
                     * cron job ID
                     */
                    std::string m_cronId;
                    bool m_cronIdHasBeenSet;

                    /**
                     * deprecated
                     */
                    std::vector<std::string> m_scripts;
                    bool m_scriptsHasBeenSet;

                    /**
                     * 测试脚本文件信息
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
                     * 创建人名
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_CREATESCENARIOREQUEST_H_

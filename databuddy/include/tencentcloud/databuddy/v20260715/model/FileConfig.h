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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILECONFIG_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/FileOutputConf.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 文件运行配置
                */
                class FileConfig : public AbstractModel
                {
                public:
                    FileConfig();
                    ~FileConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>高级运行参数，变量替换用，map-json String,String</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params <p>高级运行参数，变量替换用，map-json String,String</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置<p>高级运行参数，变量替换用，map-json String,String</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _params <p>高级运行参数，变量替换用，map-json String,String</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取<p>执行资源 ID。来源：ListComputeResources 接口返回的 ResourceId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId <p>执行资源 ID。来源：ListComputeResources 接口返回的 ResourceId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>执行资源 ID。来源：ListComputeResources 接口返回的 ResourceId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceId <p>执行资源 ID。来源：ListComputeResources 接口返回的 ResourceId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>默认 catalog</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultCatalog <p>默认 catalog</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDefaultCatalog() const;

                    /**
                     * 设置<p>默认 catalog</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultCatalog <p>默认 catalog</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefaultCatalog(const std::string& _defaultCatalog);

                    /**
                     * 判断参数 DefaultCatalog 是否已赋值
                     * @return DefaultCatalog 是否已赋值
                     * 
                     */
                    bool DefaultCatalogHasBeenSet() const;

                    /**
                     * 获取<p>默认 schema</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultSchema <p>默认 schema</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDefaultSchema() const;

                    /**
                     * 设置<p>默认 schema</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultSchema <p>默认 schema</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefaultSchema(const std::string& _defaultSchema);

                    /**
                     * 判断参数 DefaultSchema 是否已赋值
                     * @return DefaultSchema 是否已赋值
                     * 
                     */
                    bool DefaultSchemaHasBeenSet() const;

                    /**
                     * 获取<p>高级配置，JSON 字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvanceConfig <p>高级配置，JSON 字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAdvanceConfig() const;

                    /**
                     * 设置<p>高级配置，JSON 字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advanceConfig <p>高级配置，JSON 字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdvanceConfig(const std::string& _advanceConfig);

                    /**
                     * 判断参数 AdvanceConfig 是否已赋值
                     * @return AdvanceConfig 是否已赋值
                     * 
                     */
                    bool AdvanceConfigHasBeenSet() const;

                    /**
                     * 获取<p>扩展参数，JSON 字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraParams <p>扩展参数，JSON 字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtraParams() const;

                    /**
                     * 设置<p>扩展参数，JSON 字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraParams <p>扩展参数，JSON 字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraParams(const std::string& _extraParams);

                    /**
                     * 判断参数 ExtraParams 是否已赋值
                     * @return ExtraParams 是否已赋值
                     * 
                     */
                    bool ExtraParamsHasBeenSet() const;

                    /**
                     * 获取<p>Notebook 交互控件定义，JSON 字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Widgets <p>Notebook 交互控件定义，JSON 字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWidgets() const;

                    /**
                     * 设置<p>Notebook 交互控件定义，JSON 字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _widgets <p>Notebook 交互控件定义，JSON 字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWidgets(const std::string& _widgets);

                    /**
                     * 判断参数 Widgets 是否已赋值
                     * @return Widgets 是否已赋值
                     * 
                     */
                    bool WidgetsHasBeenSet() const;

                    /**
                     * 获取<p>各单元格输出配置。仅 Get 出参返回，入参忽略</p>
                     * @return OutputConf <p>各单元格输出配置。仅 Get 出参返回，入参忽略</p>
                     * 
                     */
                    std::vector<FileOutputConf> GetOutputConf() const;

                    /**
                     * 设置<p>各单元格输出配置。仅 Get 出参返回，入参忽略</p>
                     * @param _outputConf <p>各单元格输出配置。仅 Get 出参返回，入参忽略</p>
                     * 
                     */
                    void SetOutputConf(const std::vector<FileOutputConf>& _outputConf);

                    /**
                     * 判断参数 OutputConf 是否已赋值
                     * @return OutputConf 是否已赋值
                     * 
                     */
                    bool OutputConfHasBeenSet() const;

                    /**
                     * 获取<p>SQL脚本语法标记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlSyntax <p>SQL脚本语法标记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSqlSyntax() const;

                    /**
                     * 设置<p>SQL脚本语法标记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlSyntax <p>SQL脚本语法标记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSqlSyntax(const std::string& _sqlSyntax);

                    /**
                     * 判断参数 SqlSyntax 是否已赋值
                     * @return SqlSyntax 是否已赋值
                     * 
                     */
                    bool SqlSyntaxHasBeenSet() const;

                    /**
                     * 获取<p>平台集群id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId <p>平台集群id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>平台集群id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId <p>平台集群id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * <p>高级运行参数，变量替换用，map-json String,String</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * <p>执行资源 ID。来源：ListComputeResources 接口返回的 ResourceId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>默认 catalog</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_defaultCatalog;
                    bool m_defaultCatalogHasBeenSet;

                    /**
                     * <p>默认 schema</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_defaultSchema;
                    bool m_defaultSchemaHasBeenSet;

                    /**
                     * <p>高级配置，JSON 字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_advanceConfig;
                    bool m_advanceConfigHasBeenSet;

                    /**
                     * <p>扩展参数，JSON 字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extraParams;
                    bool m_extraParamsHasBeenSet;

                    /**
                     * <p>Notebook 交互控件定义，JSON 字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_widgets;
                    bool m_widgetsHasBeenSet;

                    /**
                     * <p>各单元格输出配置。仅 Get 出参返回，入参忽略</p>
                     */
                    std::vector<FileOutputConf> m_outputConf;
                    bool m_outputConfHasBeenSet;

                    /**
                     * <p>SQL脚本语法标记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sqlSyntax;
                    bool m_sqlSyntaxHasBeenSet;

                    /**
                     * <p>平台集群id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILECONFIG_H_

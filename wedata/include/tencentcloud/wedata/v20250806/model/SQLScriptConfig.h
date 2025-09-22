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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_SQLSCRIPTCONFIG_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_SQLSCRIPTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 数据探索脚本配置
                */
                class SQLScriptConfig : public AbstractModel
                {
                public:
                    SQLScriptConfig();
                    ~SQLScriptConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId 数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId 数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取数据源环境
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceEnv 数据源环境
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceEnv() const;

                    /**
                     * 设置数据源环境
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceEnv 数据源环境
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceEnv(const std::string& _datasourceEnv);

                    /**
                     * 判断参数 DatasourceEnv 是否已赋值
                     * @return DatasourceEnv 是否已赋值
                     * 
                     */
                    bool DatasourceEnvHasBeenSet() const;

                    /**
                     * 获取计算资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComputeResource 计算资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComputeResource() const;

                    /**
                     * 设置计算资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _computeResource 计算资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComputeResource(const std::string& _computeResource);

                    /**
                     * 判断参数 ComputeResource 是否已赋值
                     * @return ComputeResource 是否已赋值
                     * 
                     */
                    bool ComputeResourceHasBeenSet() const;

                    /**
                     * 获取执行资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupId 执行资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置执行资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorGroupId 执行资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                    /**
                     * 获取高级运行参数,变量替换，map-json String,String
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params 高级运行参数,变量替换，map-json String,String
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置高级运行参数,变量替换，map-json String,String
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _params 高级运行参数,变量替换，map-json String,String
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
                     * 获取高级设置，执行配置参数，map-json String,String. 采用Base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvanceConfig 高级设置，执行配置参数，map-json String,String. 采用Base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAdvanceConfig() const;

                    /**
                     * 设置高级设置，执行配置参数，map-json String,String. 采用Base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advanceConfig 高级设置，执行配置参数，map-json String,String. 采用Base64编码
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

                private:

                    /**
                     * 数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 数据源环境
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceEnv;
                    bool m_datasourceEnvHasBeenSet;

                    /**
                     * 计算资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_computeResource;
                    bool m_computeResourceHasBeenSet;

                    /**
                     * 执行资源组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * 高级运行参数,变量替换，map-json String,String
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 高级设置，执行配置参数，map-json String,String. 采用Base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_advanceConfig;
                    bool m_advanceConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_SQLSCRIPTCONFIG_H_

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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCEENVINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCEENVINFO_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据源环境信息
                */
                class DataSourceEnvInfo : public AbstractModel
                {
                public:
                    DataSourceEnvInfo();
                    ~DataSourceEnvInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取环境
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Env 环境
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnv() const;

                    /**
                     * 设置环境
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _env 环境
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnv(const std::string& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSourceType 数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataSourceType() const;

                    /**
                     * 设置数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataSourceType 数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataSourceType(const std::string& _dataSourceType);

                    /**
                     * 判断参数 DataSourceType 是否已赋值
                     * @return DataSourceType 是否已赋值
                     * 
                     */
                    bool DataSourceTypeHasBeenSet() const;

                    /**
                     * 获取集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 集群id
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

                    /**
                     * 获取配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params 配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _params 配置信息
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
                     * 获取项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSourceId 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataSourceId() const;

                    /**
                     * 设置数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataSourceId 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataSourceId(const std::string& _dataSourceId);

                    /**
                     * 判断参数 DataSourceId 是否已赋值
                     * @return DataSourceId 是否已赋值
                     * 
                     */
                    bool DataSourceIdHasBeenSet() const;

                    /**
                     * 获取env环境的数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvDataSourceId env环境的数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnvDataSourceId() const;

                    /**
                     * 设置env环境的数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _envDataSourceId env环境的数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvDataSourceId(const std::string& _envDataSourceId);

                    /**
                     * 判断参数 EnvDataSourceId 是否已赋值
                     * @return EnvDataSourceId 是否已赋值
                     * 
                     */
                    bool EnvDataSourceIdHasBeenSet() const;

                    /**
                     * 获取配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizParams 配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBizParams() const;

                    /**
                     * 设置配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizParams 配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizParams(const std::string& _bizParams);

                    /**
                     * 判断参数 BizParams 是否已赋值
                     * @return BizParams 是否已赋值
                     * 
                     */
                    bool BizParamsHasBeenSet() const;

                private:

                    /**
                     * 环境
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_env;
                    bool m_envHasBeenSet;

                    /**
                     * 数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataSourceType;
                    bool m_dataSourceTypeHasBeenSet;

                    /**
                     * 集群id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                    /**
                     * env环境的数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_envDataSourceId;
                    bool m_envDataSourceIdHasBeenSet;

                    /**
                     * 配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bizParams;
                    bool m_bizParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCEENVINFO_H_

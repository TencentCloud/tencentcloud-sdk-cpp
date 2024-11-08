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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_GOVDATASOURCEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_GOVDATASOURCEINFO_H_

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
                * 数据源信息
                */
                class GovDatasourceInfo : public AbstractModel
                {
                public:
                    GovDatasourceInfo();
                    ~GovDatasourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId 数据源id
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
                     * 获取数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceName 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceName() const;

                    /**
                     * 设置数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceName 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceName(const std::string& _datasourceName);

                    /**
                     * 判断参数 DatasourceName 是否已赋值
                     * @return DatasourceName 是否已赋值
                     * 
                     */
                    bool DatasourceNameHasBeenSet() const;

                    /**
                     * 获取数据源集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceClusterId 数据源集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceClusterId() const;

                    /**
                     * 设置数据源集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceClusterId 数据源集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceClusterId(const std::string& _datasourceClusterId);

                    /**
                     * 判断参数 DatasourceClusterId 是否已赋值
                     * @return DatasourceClusterId 是否已赋值
                     * 
                     */
                    bool DatasourceClusterIdHasBeenSet() const;

                    /**
                     * 获取数据源urn
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceUrn 数据源urn
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceUrn() const;

                    /**
                     * 设置数据源urn
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceUrn 数据源urn
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceUrn(const std::string& _datasourceUrn);

                    /**
                     * 判断参数 DatasourceUrn 是否已赋值
                     * @return DatasourceUrn 是否已赋值
                     * 
                     */
                    bool DatasourceUrnHasBeenSet() const;

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

                private:

                    /**
                     * 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceName;
                    bool m_datasourceNameHasBeenSet;

                    /**
                     * 数据源集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceClusterId;
                    bool m_datasourceClusterIdHasBeenSet;

                    /**
                     * 数据源urn
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceUrn;
                    bool m_datasourceUrnHasBeenSet;

                    /**
                     * 数据源环境
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceEnv;
                    bool m_datasourceEnvHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GOVDATASOURCEINFO_H_

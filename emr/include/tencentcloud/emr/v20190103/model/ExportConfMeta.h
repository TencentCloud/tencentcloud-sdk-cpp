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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_EXPORTCONFMETA_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_EXPORTCONFMETA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 导出配置结构体
                */
                class ExportConfMeta : public AbstractModel
                {
                public:
                    ExportConfMeta();
                    ~ExportConfMeta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>组件名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceName <p>组件名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>组件名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceName <p>组件名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>文件名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Classification <p>文件名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClassification() const;

                    /**
                     * 设置<p>文件名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classification <p>文件名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassification(const std::string& _classification);

                    /**
                     * 判断参数 Classification 是否已赋值
                     * @return Classification 是否已赋值
                     * 
                     */
                    bool ClassificationHasBeenSet() const;

                    /**
                     * 获取<p>组件版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceVersion <p>组件版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceVersion() const;

                    /**
                     * 设置<p>组件版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceVersion <p>组件版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceVersion(const std::string& _serviceVersion);

                    /**
                     * 判断参数 ServiceVersion 是否已赋值
                     * @return ServiceVersion 是否已赋值
                     * 
                     */
                    bool ServiceVersionHasBeenSet() const;

                    /**
                     * 获取<p>导出配置参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Properties <p>导出配置参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProperties() const;

                    /**
                     * 设置<p>导出配置参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _properties <p>导出配置参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProperties(const std::string& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                private:

                    /**
                     * <p>组件名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>文件名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_classification;
                    bool m_classificationHasBeenSet;

                    /**
                     * <p>组件版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceVersion;
                    bool m_serviceVersionHasBeenSet;

                    /**
                     * <p>导出配置参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_properties;
                    bool m_propertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_EXPORTCONFMETA_H_

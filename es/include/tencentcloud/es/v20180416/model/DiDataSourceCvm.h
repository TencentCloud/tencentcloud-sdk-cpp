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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DIDATASOURCECVM_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DIDATASOURCECVM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/DiDataSourceCvmInstance.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 数据接入cvm数据源信息
                */
                class DiDataSourceCvm : public AbstractModel
                {
                public:
                    DiDataSourceCvm();
                    ~DiDataSourceCvm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取vpc id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId vpc id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId vpc id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取采集路径列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogPaths 采集路径列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetLogPaths() const;

                    /**
                     * 设置采集路径列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logPaths 采集路径列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogPaths(const std::vector<std::string>& _logPaths);

                    /**
                     * 判断参数 LogPaths 是否已赋值
                     * @return LogPaths 是否已赋值
                     * 
                     */
                    bool LogPathsHasBeenSet() const;

                    /**
                     * 获取cvm实例信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CvmInstances cvm实例信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DiDataSourceCvmInstance> GetCvmInstances() const;

                    /**
                     * 设置cvm实例信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cvmInstances cvm实例信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCvmInstances(const std::vector<DiDataSourceCvmInstance>& _cvmInstances);

                    /**
                     * 判断参数 CvmInstances 是否已赋值
                     * @return CvmInstances 是否已赋值
                     * 
                     */
                    bool CvmInstancesHasBeenSet() const;

                    /**
                     * 获取采集器id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CollectorId 采集器id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCollectorId() const;

                    /**
                     * 设置采集器id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _collectorId 采集器id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCollectorId(const std::string& _collectorId);

                    /**
                     * 判断参数 CollectorId 是否已赋值
                     * @return CollectorId 是否已赋值
                     * 
                     */
                    bool CollectorIdHasBeenSet() const;

                private:

                    /**
                     * vpc id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 采集路径列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_logPaths;
                    bool m_logPathsHasBeenSet;

                    /**
                     * cvm实例信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DiDataSourceCvmInstance> m_cvmInstances;
                    bool m_cvmInstancesHasBeenSet;

                    /**
                     * 采集器id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_collectorId;
                    bool m_collectorIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DIDATASOURCECVM_H_

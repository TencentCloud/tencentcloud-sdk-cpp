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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_SQLGATEWAYITEM_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_SQLGATEWAYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/GatewayRefItem.h>
#include <tencentcloud/oceanus/v20190422/model/Property.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * SqlGateway配置信息
                */
                class SqlGatewayItem : public AbstractModel
                {
                public:
                    SqlGatewayItem();
                    ~SqlGatewayItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SerialId 唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSerialId() const;

                    /**
                     * 设置唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serialId 唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSerialId(const std::string& _serialId);

                    /**
                     * 判断参数 SerialId 是否已赋值
                     * @return SerialId 是否已赋值
                     * 
                     */
                    bool SerialIdHasBeenSet() const;

                    /**
                     * 获取Flink内核版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlinkVersion Flink内核版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFlinkVersion() const;

                    /**
                     * 设置Flink内核版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flinkVersion Flink内核版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFlinkVersion(const std::string& _flinkVersion);

                    /**
                     * 判断参数 FlinkVersion 是否已赋值
                     * @return FlinkVersion 是否已赋值
                     * 
                     */
                    bool FlinkVersionHasBeenSet() const;

                    /**
                     * 获取状态，1.停止 2. 开启中 3. 开启 4. 开启失败 5. 停止中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态，1.停止 2. 开启中 3. 开启 4. 开启失败 5. 停止中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态，1.停止 2. 开启中 3. 开启 4. 开启失败 5. 停止中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态，1.停止 2. 开启中 3. 开启 4. 开启失败 5. 停止中
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorUin 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorUin 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取引用资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceRefs 引用资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GatewayRefItem> GetResourceRefs() const;

                    /**
                     * 设置引用资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceRefs 引用资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceRefs(const std::vector<GatewayRefItem>& _resourceRefs);

                    /**
                     * 判断参数 ResourceRefs 是否已赋值
                     * @return ResourceRefs 是否已赋值
                     * 
                     */
                    bool ResourceRefsHasBeenSet() const;

                    /**
                     * 获取Cu规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CuSpec Cu规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetCuSpec() const;

                    /**
                     * 设置Cu规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cuSpec Cu规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCuSpec(const double& _cuSpec);

                    /**
                     * 判断参数 CuSpec 是否已赋值
                     * @return CuSpec 是否已赋值
                     * 
                     */
                    bool CuSpecHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取配置参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Properties 配置参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 设置配置参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _properties 配置参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProperties(const std::vector<Property>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取Cpu
                     * @return Cpu Cpu
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置Cpu
                     * @param _cpu Cpu
                     * 
                     */
                    void SetCpu(const double& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Mem
                     * @return Mem Mem
                     * 
                     */
                    double GetMem() const;

                    /**
                     * 设置Mem
                     * @param _mem Mem
                     * 
                     */
                    void SetMem(const double& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                private:

                    /**
                     * 唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serialId;
                    bool m_serialIdHasBeenSet;

                    /**
                     * Flink内核版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flinkVersion;
                    bool m_flinkVersionHasBeenSet;

                    /**
                     * 状态，1.停止 2. 开启中 3. 开启 4. 开启失败 5. 停止中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * 引用资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GatewayRefItem> m_resourceRefs;
                    bool m_resourceRefsHasBeenSet;

                    /**
                     * Cu规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_cuSpec;
                    bool m_cuSpecHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 配置参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * Cpu
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Mem
                     */
                    double m_mem;
                    bool m_memHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_SQLGATEWAYITEM_H_

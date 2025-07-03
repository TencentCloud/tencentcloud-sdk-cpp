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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_HADOOPYARNITEM_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_HADOOPYARNITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * hadoopYarn资源信息
                */
                class HadoopYarnItem : public AbstractModel
                {
                public:
                    HadoopYarnItem();
                    ~HadoopYarnItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ClusterGroupSerialId
                     * @return ClusterGroupSerialId ClusterGroupSerialId
                     * 
                     */
                    std::string GetClusterGroupSerialId() const;

                    /**
                     * 设置ClusterGroupSerialId
                     * @param _clusterGroupSerialId ClusterGroupSerialId
                     * 
                     */
                    void SetClusterGroupSerialId(const std::string& _clusterGroupSerialId);

                    /**
                     * 判断参数 ClusterGroupSerialId 是否已赋值
                     * @return ClusterGroupSerialId 是否已赋值
                     * 
                     */
                    bool ClusterGroupSerialIdHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
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
                     * 获取cpu
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cpu cpu
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置cpu
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpu cpu
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取mem
                     * @return Mem mem
                     * 
                     */
                    double GetMem() const;

                    /**
                     * 设置mem
                     * @param _mem mem
                     * 
                     */
                    void SetMem(const double& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
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
                     * 获取配置文件内容
                     * @return Config 配置文件内容
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置配置文件内容
                     * @param _config 配置文件内容
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取CreatorUin
                     * @return CreatorUin CreatorUin
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置CreatorUin
                     * @param _creatorUin CreatorUin
                     * 
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                private:

                    /**
                     * ClusterGroupSerialId
                     */
                    std::string m_clusterGroupSerialId;
                    bool m_clusterGroupSerialIdHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * cpu
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * mem
                     */
                    double m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 配置文件内容
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * CreatorUin
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_HADOOPYARNITEM_H_

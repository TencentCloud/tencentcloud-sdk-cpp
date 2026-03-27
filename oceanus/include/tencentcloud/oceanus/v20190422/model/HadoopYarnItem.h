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
                     * 获取<p>ClusterGroupSerialId</p>
                     * @return ClusterGroupSerialId <p>ClusterGroupSerialId</p>
                     * 
                     */
                    std::string GetClusterGroupSerialId() const;

                    /**
                     * 设置<p>ClusterGroupSerialId</p>
                     * @param _clusterGroupSerialId <p>ClusterGroupSerialId</p>
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
                     * 获取<p>状态</p><p>枚举值：</p><ul><li>1： 停止</li><li>2： 开启中</li><li>3： 启动</li><li>4： 开启失败</li><li>5： 停止中</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>状态</p><p>枚举值：</p><ul><li>1： 停止</li><li>2： 开启中</li><li>3： 启动</li><li>4： 开启失败</li><li>5： 停止中</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态</p><p>枚举值：</p><ul><li>1： 停止</li><li>2： 开启中</li><li>3： 启动</li><li>4： 开启失败</li><li>5： 停止中</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>状态</p><p>枚举值：</p><ul><li>1： 停止</li><li>2： 开启中</li><li>3： 启动</li><li>4： 开启失败</li><li>5： 停止中</li></ul>
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
                     * 获取<p>cpu</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cpu <p>cpu</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置<p>cpu</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpu <p>cpu</p>
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
                     * 获取<p>mem</p>
                     * @return Mem <p>mem</p>
                     * 
                     */
                    double GetMem() const;

                    /**
                     * 设置<p>mem</p>
                     * @param _mem <p>mem</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
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
                     * 获取<p>配置文件内容</p>
                     * @return Config <p>配置文件内容</p>
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置<p>配置文件内容</p>
                     * @param _config <p>配置文件内容</p>
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
                     * 获取<p>CreatorUin</p>
                     * @return CreatorUin <p>CreatorUin</p>
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置<p>CreatorUin</p>
                     * @param _creatorUin <p>CreatorUin</p>
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
                     * <p>ClusterGroupSerialId</p>
                     */
                    std::string m_clusterGroupSerialId;
                    bool m_clusterGroupSerialIdHasBeenSet;

                    /**
                     * <p>状态</p><p>枚举值：</p><ul><li>1： 停止</li><li>2： 开启中</li><li>3： 启动</li><li>4： 开启失败</li><li>5： 停止中</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>cpu</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>mem</p>
                     */
                    double m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>配置文件内容</p>
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>CreatorUin</p>
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_HADOOPYARNITEM_H_

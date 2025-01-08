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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CLOUDRESOURCE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CLOUDRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/VolumeSetting.h>
#include <tencentcloud/emr/v20190103/model/ExternalAccess.h>
#include <tencentcloud/emr/v20190103/model/NodeAffinity.h>
#include <tencentcloud/emr/v20190103/model/Disk.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 容器集群Pod请求资源信息
                */
                class CloudResource : public AbstractModel
                {
                public:
                    CloudResource();
                    ~CloudResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取组件角色名
                     * @return ComponentName 组件角色名
                     * 
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置组件角色名
                     * @param _componentName 组件角色名
                     * 
                     */
                    void SetComponentName(const std::string& _componentName);

                    /**
                     * 判断参数 ComponentName 是否已赋值
                     * @return ComponentName 是否已赋值
                     * 
                     */
                    bool ComponentNameHasBeenSet() const;

                    /**
                     * 获取pod请求数量
                     * @return PodNumber pod请求数量
                     * 
                     */
                    int64_t GetPodNumber() const;

                    /**
                     * 设置pod请求数量
                     * @param _podNumber pod请求数量
                     * 
                     */
                    void SetPodNumber(const int64_t& _podNumber);

                    /**
                     * 判断参数 PodNumber 是否已赋值
                     * @return PodNumber 是否已赋值
                     * 
                     */
                    bool PodNumberHasBeenSet() const;

                    /**
                     * 获取Cpu请求数量最大值
                     * @return LimitCpu Cpu请求数量最大值
                     * 
                     */
                    int64_t GetLimitCpu() const;

                    /**
                     * 设置Cpu请求数量最大值
                     * @param _limitCpu Cpu请求数量最大值
                     * 
                     */
                    void SetLimitCpu(const int64_t& _limitCpu);

                    /**
                     * 判断参数 LimitCpu 是否已赋值
                     * @return LimitCpu 是否已赋值
                     * 
                     */
                    bool LimitCpuHasBeenSet() const;

                    /**
                     * 获取内存请求数量最大值
                     * @return LimitMemory 内存请求数量最大值
                     * 
                     */
                    int64_t GetLimitMemory() const;

                    /**
                     * 设置内存请求数量最大值
                     * @param _limitMemory 内存请求数量最大值
                     * 
                     */
                    void SetLimitMemory(const int64_t& _limitMemory);

                    /**
                     * 判断参数 LimitMemory 是否已赋值
                     * @return LimitMemory 是否已赋值
                     * 
                     */
                    bool LimitMemoryHasBeenSet() const;

                    /**
                     * 获取服务名称，如HIVE
                     * @return Service 服务名称，如HIVE
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置服务名称，如HIVE
                     * @param _service 服务名称，如HIVE
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取数据卷目录设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeDir 数据卷目录设置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VolumeSetting GetVolumeDir() const;

                    /**
                     * 设置数据卷目录设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeDir 数据卷目录设置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVolumeDir(const VolumeSetting& _volumeDir);

                    /**
                     * 判断参数 VolumeDir 是否已赋值
                     * @return VolumeDir 是否已赋值
                     * 
                     */
                    bool VolumeDirHasBeenSet() const;

                    /**
                     * 获取组件外部访问设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalAccess 组件外部访问设置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExternalAccess GetExternalAccess() const;

                    /**
                     * 设置组件外部访问设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalAccess 组件外部访问设置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalAccess(const ExternalAccess& _externalAccess);

                    /**
                     * 判断参数 ExternalAccess 是否已赋值
                     * @return ExternalAccess 是否已赋值
                     * 
                     */
                    bool ExternalAccessHasBeenSet() const;

                    /**
                     * 获取节点亲和性设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Affinity 节点亲和性设置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NodeAffinity GetAffinity() const;

                    /**
                     * 设置节点亲和性设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _affinity 节点亲和性设置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAffinity(const NodeAffinity& _affinity);

                    /**
                     * 判断参数 Affinity 是否已赋值
                     * @return Affinity 是否已赋值
                     * 
                     */
                    bool AffinityHasBeenSet() const;

                    /**
                     * 获取所选数据盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Disks 所选数据盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Disk> GetDisks() const;

                    /**
                     * 设置所选数据盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _disks 所选数据盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisks(const std::vector<Disk>& _disks);

                    /**
                     * 判断参数 Disks 是否已赋值
                     * @return Disks 是否已赋值
                     * 
                     */
                    bool DisksHasBeenSet() const;

                private:

                    /**
                     * 组件角色名
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * pod请求数量
                     */
                    int64_t m_podNumber;
                    bool m_podNumberHasBeenSet;

                    /**
                     * Cpu请求数量最大值
                     */
                    int64_t m_limitCpu;
                    bool m_limitCpuHasBeenSet;

                    /**
                     * 内存请求数量最大值
                     */
                    int64_t m_limitMemory;
                    bool m_limitMemoryHasBeenSet;

                    /**
                     * 服务名称，如HIVE
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 数据卷目录设置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VolumeSetting m_volumeDir;
                    bool m_volumeDirHasBeenSet;

                    /**
                     * 组件外部访问设置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExternalAccess m_externalAccess;
                    bool m_externalAccessHasBeenSet;

                    /**
                     * 节点亲和性设置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NodeAffinity m_affinity;
                    bool m_affinityHasBeenSet;

                    /**
                     * 所选数据盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Disk> m_disks;
                    bool m_disksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CLOUDRESOURCE_H_

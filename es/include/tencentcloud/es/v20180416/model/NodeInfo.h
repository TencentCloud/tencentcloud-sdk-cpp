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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_NODEINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_NODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/LocalDiskInfo.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 集群中一种节点类型（如热数据节点，冷数据节点，专用主节点等）的规格描述信息，包括节点类型，节点个数，节点规格，磁盘类型，磁盘大小等, Type不指定时默认为热数据节点；如果节点为master节点，则DiskType和DiskSize参数会被忽略（主节点无数据盘）
                */
                class NodeInfo : public AbstractModel
                {
                public:
                    NodeInfo();
                    ~NodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点数量
                     * @return NodeNum 节点数量
                     * 
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置节点数量
                     * @param _nodeNum 节点数量
                     * 
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * @return NodeType 节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * @param _nodeType 节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取节点类型<li>hotData: 热数据节点</li>
<li>warmData: 冷数据节点</li>
<li>dedicatedMaster: 专用主节点</li>
默认值为hotData
                     * @return Type 节点类型<li>hotData: 热数据节点</li>
<li>warmData: 冷数据节点</li>
<li>dedicatedMaster: 专用主节点</li>
默认值为hotData
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置节点类型<li>hotData: 热数据节点</li>
<li>warmData: 冷数据节点</li>
<li>dedicatedMaster: 专用主节点</li>
默认值为hotData
                     * @param _type 节点类型<li>hotData: 热数据节点</li>
<li>warmData: 冷数据节点</li>
<li>dedicatedMaster: 专用主节点</li>
默认值为hotData
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取节点磁盘类型<li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_PREMIUM：高硬能云硬盘</li>默认值CLOUD_SSD
                     * @return DiskType 节点磁盘类型<li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_PREMIUM：高硬能云硬盘</li>默认值CLOUD_SSD
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置节点磁盘类型<li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_PREMIUM：高硬能云硬盘</li>默认值CLOUD_SSD
                     * @param _diskType 节点磁盘类型<li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_PREMIUM：高硬能云硬盘</li>默认值CLOUD_SSD
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取节点磁盘容量（单位GB）
                     * @return DiskSize 节点磁盘容量（单位GB）
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置节点磁盘容量（单位GB）
                     * @param _diskSize 节点磁盘容量（单位GB）
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取节点本地盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocalDiskInfo 节点本地盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LocalDiskInfo GetLocalDiskInfo() const;

                    /**
                     * 设置节点本地盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _localDiskInfo 节点本地盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocalDiskInfo(const LocalDiskInfo& _localDiskInfo);

                    /**
                     * 判断参数 LocalDiskInfo 是否已赋值
                     * @return LocalDiskInfo 是否已赋值
                     * 
                     */
                    bool LocalDiskInfoHasBeenSet() const;

                    /**
                     * 获取节点磁盘块数
                     * @return DiskCount 节点磁盘块数
                     * 
                     */
                    uint64_t GetDiskCount() const;

                    /**
                     * 设置节点磁盘块数
                     * @param _diskCount 节点磁盘块数
                     * 
                     */
                    void SetDiskCount(const uint64_t& _diskCount);

                    /**
                     * 判断参数 DiskCount 是否已赋值
                     * @return DiskCount 是否已赋值
                     * 
                     */
                    bool DiskCountHasBeenSet() const;

                    /**
                     * 获取节点磁盘是否加密 0: 不加密，1: 加密；默认不加密
                     * @return DiskEncrypt 节点磁盘是否加密 0: 不加密，1: 加密；默认不加密
                     * 
                     */
                    uint64_t GetDiskEncrypt() const;

                    /**
                     * 设置节点磁盘是否加密 0: 不加密，1: 加密；默认不加密
                     * @param _diskEncrypt 节点磁盘是否加密 0: 不加密，1: 加密；默认不加密
                     * 
                     */
                    void SetDiskEncrypt(const uint64_t& _diskEncrypt);

                    /**
                     * 判断参数 DiskEncrypt 是否已赋值
                     * @return DiskEncrypt 是否已赋值
                     * 
                     */
                    bool DiskEncryptHasBeenSet() const;

                    /**
                     * 获取cpu数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuNum cpu数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCpuNum() const;

                    /**
                     * 设置cpu数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuNum cpu数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpuNum(const uint64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     * 
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemSize 内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memSize 内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取/
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskEnhance /
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDiskEnhance() const;

                    /**
                     * 设置/
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskEnhance /
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskEnhance(const int64_t& _diskEnhance);

                    /**
                     * 判断参数 DiskEnhance 是否已赋值
                     * @return DiskEnhance 是否已赋值
                     * 
                     */
                    bool DiskEnhanceHasBeenSet() const;

                private:

                    /**
                     * 节点数量
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * 节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 节点类型<li>hotData: 热数据节点</li>
<li>warmData: 冷数据节点</li>
<li>dedicatedMaster: 专用主节点</li>
默认值为hotData
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 节点磁盘类型<li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_PREMIUM：高硬能云硬盘</li>默认值CLOUD_SSD
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 节点磁盘容量（单位GB）
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 节点本地盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LocalDiskInfo m_localDiskInfo;
                    bool m_localDiskInfoHasBeenSet;

                    /**
                     * 节点磁盘块数
                     */
                    uint64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                    /**
                     * 节点磁盘是否加密 0: 不加密，1: 加密；默认不加密
                     */
                    uint64_t m_diskEncrypt;
                    bool m_diskEncryptHasBeenSet;

                    /**
                     * cpu数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * 内存大小，单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * /
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_diskEnhance;
                    bool m_diskEnhanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_NODEINFO_H_

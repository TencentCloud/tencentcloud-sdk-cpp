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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_SHARDINFO_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_SHARDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 实例分片详情
                */
                class ShardInfo : public AbstractModel
                {
                public:
                    ShardInfo();
                    ~ShardInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分片已使用容量
                     * @return UsedVolume 分片已使用容量
                     * 
                     */
                    double GetUsedVolume() const;

                    /**
                     * 设置分片已使用容量
                     * @param _usedVolume 分片已使用容量
                     * 
                     */
                    void SetUsedVolume(const double& _usedVolume);

                    /**
                     * 判断参数 UsedVolume 是否已赋值
                     * @return UsedVolume 是否已赋值
                     * 
                     */
                    bool UsedVolumeHasBeenSet() const;

                    /**
                     * 获取分片ID
                     * @return ReplicaSetId 分片ID
                     * 
                     */
                    std::string GetReplicaSetId() const;

                    /**
                     * 设置分片ID
                     * @param _replicaSetId 分片ID
                     * 
                     */
                    void SetReplicaSetId(const std::string& _replicaSetId);

                    /**
                     * 判断参数 ReplicaSetId 是否已赋值
                     * @return ReplicaSetId 是否已赋值
                     * 
                     */
                    bool ReplicaSetIdHasBeenSet() const;

                    /**
                     * 获取分片名
                     * @return ReplicaSetName 分片名
                     * 
                     */
                    std::string GetReplicaSetName() const;

                    /**
                     * 设置分片名
                     * @param _replicaSetName 分片名
                     * 
                     */
                    void SetReplicaSetName(const std::string& _replicaSetName);

                    /**
                     * 判断参数 ReplicaSetName 是否已赋值
                     * @return ReplicaSetName 是否已赋值
                     * 
                     */
                    bool ReplicaSetNameHasBeenSet() const;

                    /**
                     * 获取分片内存规格，单位为MB
                     * @return Memory 分片内存规格，单位为MB
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置分片内存规格，单位为MB
                     * @param _memory 分片内存规格，单位为MB
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取分片磁盘规格，单位为MB
                     * @return Volume 分片磁盘规格，单位为MB
                     * 
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置分片磁盘规格，单位为MB
                     * @param _volume 分片磁盘规格，单位为MB
                     * 
                     */
                    void SetVolume(const uint64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取分片Oplog大小，单位为MB
                     * @return OplogSize 分片Oplog大小，单位为MB
                     * 
                     */
                    uint64_t GetOplogSize() const;

                    /**
                     * 设置分片Oplog大小，单位为MB
                     * @param _oplogSize 分片Oplog大小，单位为MB
                     * 
                     */
                    void SetOplogSize(const uint64_t& _oplogSize);

                    /**
                     * 判断参数 OplogSize 是否已赋值
                     * @return OplogSize 是否已赋值
                     * 
                     */
                    bool OplogSizeHasBeenSet() const;

                    /**
                     * 获取分片从节点数
                     * @return SecondaryNum 分片从节点数
                     * 
                     */
                    uint64_t GetSecondaryNum() const;

                    /**
                     * 设置分片从节点数
                     * @param _secondaryNum 分片从节点数
                     * 
                     */
                    void SetSecondaryNum(const uint64_t& _secondaryNum);

                    /**
                     * 判断参数 SecondaryNum 是否已赋值
                     * @return SecondaryNum 是否已赋值
                     * 
                     */
                    bool SecondaryNumHasBeenSet() const;

                    /**
                     * 获取分片物理id
                     * @return RealReplicaSetId 分片物理id
                     * 
                     */
                    std::string GetRealReplicaSetId() const;

                    /**
                     * 设置分片物理id
                     * @param _realReplicaSetId 分片物理id
                     * 
                     */
                    void SetRealReplicaSetId(const std::string& _realReplicaSetId);

                    /**
                     * 判断参数 RealReplicaSetId 是否已赋值
                     * @return RealReplicaSetId 是否已赋值
                     * 
                     */
                    bool RealReplicaSetIdHasBeenSet() const;

                private:

                    /**
                     * 分片已使用容量
                     */
                    double m_usedVolume;
                    bool m_usedVolumeHasBeenSet;

                    /**
                     * 分片ID
                     */
                    std::string m_replicaSetId;
                    bool m_replicaSetIdHasBeenSet;

                    /**
                     * 分片名
                     */
                    std::string m_replicaSetName;
                    bool m_replicaSetNameHasBeenSet;

                    /**
                     * 分片内存规格，单位为MB
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 分片磁盘规格，单位为MB
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 分片Oplog大小，单位为MB
                     */
                    uint64_t m_oplogSize;
                    bool m_oplogSizeHasBeenSet;

                    /**
                     * 分片从节点数
                     */
                    uint64_t m_secondaryNum;
                    bool m_secondaryNumHasBeenSet;

                    /**
                     * 分片物理id
                     */
                    std::string m_realReplicaSetId;
                    bool m_realReplicaSetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_SHARDINFO_H_

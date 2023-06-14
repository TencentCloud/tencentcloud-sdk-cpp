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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_SHARDINFO_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_SHARDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * 分片信息
                */
                class ShardInfo : public AbstractModel
                {
                public:
                    ShardInfo();
                    ~ShardInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分片ID
                     * @return ShardInstanceId 分片ID
                     * 
                     */
                    std::string GetShardInstanceId() const;

                    /**
                     * 设置分片ID
                     * @param _shardInstanceId 分片ID
                     * 
                     */
                    void SetShardInstanceId(const std::string& _shardInstanceId);

                    /**
                     * 判断参数 ShardInstanceId 是否已赋值
                     * @return ShardInstanceId 是否已赋值
                     * 
                     */
                    bool ShardInstanceIdHasBeenSet() const;

                    /**
                     * 获取分片Set ID
                     * @return ShardSerialId 分片Set ID
                     * 
                     */
                    std::string GetShardSerialId() const;

                    /**
                     * 设置分片Set ID
                     * @param _shardSerialId 分片Set ID
                     * 
                     */
                    void SetShardSerialId(const std::string& _shardSerialId);

                    /**
                     * 判断参数 ShardSerialId 是否已赋值
                     * @return ShardSerialId 是否已赋值
                     * 
                     */
                    bool ShardSerialIdHasBeenSet() const;

                    /**
                     * 获取状态：0 创建中，1 流程处理中， 2 运行中，3 分片未初始化，-2 分片已删除
                     * @return Status 状态：0 创建中，1 流程处理中， 2 运行中，3 分片未初始化，-2 分片已删除
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态：0 创建中，1 流程处理中， 2 运行中，3 分片未初始化，-2 分片已删除
                     * @param _status 状态：0 创建中，1 流程处理中， 2 运行中，3 分片未初始化，-2 分片已删除
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
                     * 获取创建时间
                     * @return Createtime 创建时间
                     * 
                     */
                    std::string GetCreatetime() const;

                    /**
                     * 设置创建时间
                     * @param _createtime 创建时间
                     * 
                     */
                    void SetCreatetime(const std::string& _createtime);

                    /**
                     * 判断参数 Createtime 是否已赋值
                     * @return Createtime 是否已赋值
                     * 
                     */
                    bool CreatetimeHasBeenSet() const;

                    /**
                     * 获取内存大小，单位 GB
                     * @return Memory 内存大小，单位 GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位 GB
                     * @param _memory 内存大小，单位 GB
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取存储大小，单位 GB
                     * @return Storage 存储大小，单位 GB
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置存储大小，单位 GB
                     * @param _storage 存储大小，单位 GB
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取分片数字ID
                     * @return ShardId 分片数字ID
                     * 
                     */
                    int64_t GetShardId() const;

                    /**
                     * 设置分片数字ID
                     * @param _shardId 分片数字ID
                     * 
                     */
                    void SetShardId(const int64_t& _shardId);

                    /**
                     * 判断参数 ShardId 是否已赋值
                     * @return ShardId 是否已赋值
                     * 
                     */
                    bool ShardIdHasBeenSet() const;

                    /**
                     * 获取节点数，2 为一主一从， 3 为一主二从
                     * @return NodeCount 节点数，2 为一主一从， 3 为一主二从
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置节点数，2 为一主一从， 3 为一主二从
                     * @param _nodeCount 节点数，2 为一主一从， 3 为一主二从
                     * 
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取产品类型 Id（过时字段，请勿依赖该值）
                     * @return Pid 产品类型 Id（过时字段，请勿依赖该值）
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置产品类型 Id（过时字段，请勿依赖该值）
                     * @param _pid 产品类型 Id（过时字段，请勿依赖该值）
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取Cpu核数
                     * @return Cpu Cpu核数
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置Cpu核数
                     * @param _cpu Cpu核数
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                private:

                    /**
                     * 分片ID
                     */
                    std::string m_shardInstanceId;
                    bool m_shardInstanceIdHasBeenSet;

                    /**
                     * 分片Set ID
                     */
                    std::string m_shardSerialId;
                    bool m_shardSerialIdHasBeenSet;

                    /**
                     * 状态：0 创建中，1 流程处理中， 2 运行中，3 分片未初始化，-2 分片已删除
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createtime;
                    bool m_createtimeHasBeenSet;

                    /**
                     * 内存大小，单位 GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 存储大小，单位 GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 分片数字ID
                     */
                    int64_t m_shardId;
                    bool m_shardIdHasBeenSet;

                    /**
                     * 节点数，2 为一主一从， 3 为一主二从
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 产品类型 Id（过时字段，请勿依赖该值）
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Cpu核数
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_SHARDINFO_H_

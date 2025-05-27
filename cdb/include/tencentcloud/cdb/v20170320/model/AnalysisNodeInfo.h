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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ANALYSISNODEINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ANALYSISNODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 分析引擎节点信息
                */
                class AnalysisNodeInfo : public AbstractModel
                {
                public:
                    AnalysisNodeInfo();
                    ~AnalysisNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点ID
                     * @return NodeId 节点ID
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点ID
                     * @param _nodeId 节点ID
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取节点状态
                     * @return Status 节点状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置节点状态
                     * @param _status 节点状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取数据加载状态
                     * @return DataStatus 数据加载状态
                     * 
                     */
                    std::string GetDataStatus() const;

                    /**
                     * 设置数据加载状态
                     * @param _dataStatus 数据加载状态
                     * 
                     */
                    void SetDataStatus(const std::string& _dataStatus);

                    /**
                     * 判断参数 DataStatus 是否已赋值
                     * @return DataStatus 是否已赋值
                     * 
                     */
                    bool DataStatusHasBeenSet() const;

                    /**
                     * 获取cpu核数，单位：核
                     * @return Cpu cpu核数，单位：核
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置cpu核数，单位：核
                     * @param _cpu cpu核数，单位：核
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存大小，单位: MB
                     * @return Memory 内存大小，单位: MB
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位: MB
                     * @param _memory 内存大小，单位: MB
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
                     * 获取磁盘大小，单位：GB
                     * @return Storage 磁盘大小，单位：GB
                     * 
                     */
                    uint64_t GetStorage() const;

                    /**
                     * 设置磁盘大小，单位：GB
                     * @param _storage 磁盘大小，单位：GB
                     * 
                     */
                    void SetStorage(const uint64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取节点所在可用区
                     * @return Zone 节点所在可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置节点所在可用区
                     * @param _zone 节点所在可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取数据同步错误信息
                     * @return Message 数据同步错误信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置数据同步错误信息
                     * @param _message 数据同步错误信息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 节点ID
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 节点状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 数据加载状态
                     */
                    std::string m_dataStatus;
                    bool m_dataStatusHasBeenSet;

                    /**
                     * cpu核数，单位：核
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存大小，单位: MB
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 磁盘大小，单位：GB
                     */
                    uint64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 节点所在可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 数据同步错误信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ANALYSISNODEINFO_H_

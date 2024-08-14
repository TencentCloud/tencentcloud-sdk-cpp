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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_SPECITEM_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_SPECITEM_H_

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
                * mongodb售卖规格
                */
                class SpecItem : public AbstractModel
                {
                public:
                    SpecItem();
                    ~SpecItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规格信息标识。格式如：mongo.HIO10G.128g。由节点类型、规格类型、内存规格三部分组成。
- 节点类型，如下所示。
  - mongo：Mongod 节点。
 - mongos：Mongos 节点。
 - cfgstr：Configserver 节点。
- 规格类型，如下所示。
 - HIO10G：通用高HIO万兆型。
 - HCD：云盘版类型。
- 内存规格，如下所示：
 - 支持4、8、16、32、64、128、240、512。
 - 单位g：表示GB。128g则表示128GB。
                     * @return SpecCode 规格信息标识。格式如：mongo.HIO10G.128g。由节点类型、规格类型、内存规格三部分组成。
- 节点类型，如下所示。
  - mongo：Mongod 节点。
 - mongos：Mongos 节点。
 - cfgstr：Configserver 节点。
- 规格类型，如下所示。
 - HIO10G：通用高HIO万兆型。
 - HCD：云盘版类型。
- 内存规格，如下所示：
 - 支持4、8、16、32、64、128、240、512。
 - 单位g：表示GB。128g则表示128GB。
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置规格信息标识。格式如：mongo.HIO10G.128g。由节点类型、规格类型、内存规格三部分组成。
- 节点类型，如下所示。
  - mongo：Mongod 节点。
 - mongos：Mongos 节点。
 - cfgstr：Configserver 节点。
- 规格类型，如下所示。
 - HIO10G：通用高HIO万兆型。
 - HCD：云盘版类型。
- 内存规格，如下所示：
 - 支持4、8、16、32、64、128、240、512。
 - 单位g：表示GB。128g则表示128GB。
                     * @param _specCode 规格信息标识。格式如：mongo.HIO10G.128g。由节点类型、规格类型、内存规格三部分组成。
- 节点类型，如下所示。
  - mongo：Mongod 节点。
 - mongos：Mongos 节点。
 - cfgstr：Configserver 节点。
- 规格类型，如下所示。
 - HIO10G：通用高HIO万兆型。
 - HCD：云盘版类型。
- 内存规格，如下所示：
 - 支持4、8、16、32、64、128、240、512。
 - 单位g：表示GB。128g则表示128GB。
                     * 
                     */
                    void SetSpecCode(const std::string& _specCode);

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     * 
                     */
                    bool SpecCodeHasBeenSet() const;

                    /**
                     * 获取售卖规格有效标志，取值范围如下：
- 0：停止售卖，
- 1：开放售卖。
                     * @return Status 售卖规格有效标志，取值范围如下：
- 0：停止售卖，
- 1：开放售卖。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置售卖规格有效标志，取值范围如下：
- 0：停止售卖，
- 1：开放售卖。
                     * @param _status 售卖规格有效标志，取值范围如下：
- 0：停止售卖，
- 1：开放售卖。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取计算资源规格，CPU核数。
                     * @return Cpu 计算资源规格，CPU核数。
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置计算资源规格，CPU核数。
                     * @param _cpu 计算资源规格，CPU核数。
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
                     * 获取内存规格，单位为：MB。
                     * @return Memory 内存规格，单位为：MB。
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存规格，单位为：MB。
                     * @param _memory 内存规格，单位为：MB。
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
                     * 获取默认磁盘规格，单位为：MB。
                     * @return DefaultStorage 默认磁盘规格，单位为：MB。
                     * 
                     */
                    uint64_t GetDefaultStorage() const;

                    /**
                     * 设置默认磁盘规格，单位为：MB。
                     * @param _defaultStorage 默认磁盘规格，单位为：MB。
                     * 
                     */
                    void SetDefaultStorage(const uint64_t& _defaultStorage);

                    /**
                     * 判断参数 DefaultStorage 是否已赋值
                     * @return DefaultStorage 是否已赋值
                     * 
                     */
                    bool DefaultStorageHasBeenSet() const;

                    /**
                     * 获取最大磁盘规格，单位为：MB。
                     * @return MaxStorage 最大磁盘规格，单位为：MB。
                     * 
                     */
                    uint64_t GetMaxStorage() const;

                    /**
                     * 设置最大磁盘规格，单位为：MB。
                     * @param _maxStorage 最大磁盘规格，单位为：MB。
                     * 
                     */
                    void SetMaxStorage(const uint64_t& _maxStorage);

                    /**
                     * 判断参数 MaxStorage 是否已赋值
                     * @return MaxStorage 是否已赋值
                     * 
                     */
                    bool MaxStorageHasBeenSet() const;

                    /**
                     * 获取最小磁盘规格，单位为：MB。
                     * @return MinStorage 最小磁盘规格，单位为：MB。
                     * 
                     */
                    uint64_t GetMinStorage() const;

                    /**
                     * 设置最小磁盘规格，单位为：MB。
                     * @param _minStorage 最小磁盘规格，单位为：MB。
                     * 
                     */
                    void SetMinStorage(const uint64_t& _minStorage);

                    /**
                     * 判断参数 MinStorage 是否已赋值
                     * @return MinStorage 是否已赋值
                     * 
                     */
                    bool MinStorageHasBeenSet() const;

                    /**
                     * 获取指每秒最大请求次数，单位为：次/秒。
                     * @return Qps 指每秒最大请求次数，单位为：次/秒。
                     * 
                     */
                    uint64_t GetQps() const;

                    /**
                     * 设置指每秒最大请求次数，单位为：次/秒。
                     * @param _qps 指每秒最大请求次数，单位为：次/秒。
                     * 
                     */
                    void SetQps(const uint64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取规格所支持的最大连接数限制。
                     * @return Conns 规格所支持的最大连接数限制。
                     * 
                     */
                    uint64_t GetConns() const;

                    /**
                     * 设置规格所支持的最大连接数限制。
                     * @param _conns 规格所支持的最大连接数限制。
                     * 
                     */
                    void SetConns(const uint64_t& _conns);

                    /**
                     * 判断参数 Conns 是否已赋值
                     * @return Conns 是否已赋值
                     * 
                     */
                    bool ConnsHasBeenSet() const;

                    /**
                     * 获取实例存储引擎版本信息。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本。
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
- MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。
- MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。
                     * @return MongoVersionCode 实例存储引擎版本信息。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本。
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
- MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。
- MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。
                     * 
                     */
                    std::string GetMongoVersionCode() const;

                    /**
                     * 设置实例存储引擎版本信息。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本。
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
- MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。
- MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。
                     * @param _mongoVersionCode 实例存储引擎版本信息。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本。
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
- MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。
- MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。
                     * 
                     */
                    void SetMongoVersionCode(const std::string& _mongoVersionCode);

                    /**
                     * 判断参数 MongoVersionCode 是否已赋值
                     * @return MongoVersionCode 是否已赋值
                     * 
                     */
                    bool MongoVersionCodeHasBeenSet() const;

                    /**
                     * 获取实例版本对应的数字版本。
                     * @return MongoVersionValue 实例版本对应的数字版本。
                     * 
                     */
                    uint64_t GetMongoVersionValue() const;

                    /**
                     * 设置实例版本对应的数字版本。
                     * @param _mongoVersionValue 实例版本对应的数字版本。
                     * 
                     */
                    void SetMongoVersionValue(const uint64_t& _mongoVersionValue);

                    /**
                     * 判断参数 MongoVersionValue 是否已赋值
                     * @return MongoVersionValue 是否已赋值
                     * 
                     */
                    bool MongoVersionValueHasBeenSet() const;

                    /**
                     * 获取实例版本信息。支持：3.6、4.2、4.4、5.0、6.0。

                     * @return Version 实例版本信息。支持：3.6、4.2、4.4、5.0、6.0。

                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置实例版本信息。支持：3.6、4.2、4.4、5.0、6.0。

                     * @param _version 实例版本信息。支持：3.6、4.2、4.4、5.0、6.0。

                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取存储引擎。
                     * @return EngineName 存储引擎。
                     * 
                     */
                    std::string GetEngineName() const;

                    /**
                     * 设置存储引擎。
                     * @param _engineName 存储引擎。
                     * 
                     */
                    void SetEngineName(const std::string& _engineName);

                    /**
                     * 判断参数 EngineName 是否已赋值
                     * @return EngineName 是否已赋值
                     * 
                     */
                    bool EngineNameHasBeenSet() const;

                    /**
                     * 获取集群类型，取值如下：
- 1：分片集群。
- 0：副本集集群。
                     * @return ClusterType 集群类型，取值如下：
- 1：分片集群。
- 0：副本集集群。
                     * 
                     */
                    uint64_t GetClusterType() const;

                    /**
                     * 设置集群类型，取值如下：
- 1：分片集群。
- 0：副本集集群。
                     * @param _clusterType 集群类型，取值如下：
- 1：分片集群。
- 0：副本集集群。
                     * 
                     */
                    void SetClusterType(const uint64_t& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取每个副本集最小节点数。
                     * @return MinNodeNum 每个副本集最小节点数。
                     * 
                     */
                    uint64_t GetMinNodeNum() const;

                    /**
                     * 设置每个副本集最小节点数。
                     * @param _minNodeNum 每个副本集最小节点数。
                     * 
                     */
                    void SetMinNodeNum(const uint64_t& _minNodeNum);

                    /**
                     * 判断参数 MinNodeNum 是否已赋值
                     * @return MinNodeNum 是否已赋值
                     * 
                     */
                    bool MinNodeNumHasBeenSet() const;

                    /**
                     * 获取每个副本集最大节点数。
                     * @return MaxNodeNum 每个副本集最大节点数。
                     * 
                     */
                    uint64_t GetMaxNodeNum() const;

                    /**
                     * 设置每个副本集最大节点数。
                     * @param _maxNodeNum 每个副本集最大节点数。
                     * 
                     */
                    void SetMaxNodeNum(const uint64_t& _maxNodeNum);

                    /**
                     * 判断参数 MaxNodeNum 是否已赋值
                     * @return MaxNodeNum 是否已赋值
                     * 
                     */
                    bool MaxNodeNumHasBeenSet() const;

                    /**
                     * 获取最小分片数。
                     * @return MinReplicateSetNum 最小分片数。
                     * 
                     */
                    uint64_t GetMinReplicateSetNum() const;

                    /**
                     * 设置最小分片数。
                     * @param _minReplicateSetNum 最小分片数。
                     * 
                     */
                    void SetMinReplicateSetNum(const uint64_t& _minReplicateSetNum);

                    /**
                     * 判断参数 MinReplicateSetNum 是否已赋值
                     * @return MinReplicateSetNum 是否已赋值
                     * 
                     */
                    bool MinReplicateSetNumHasBeenSet() const;

                    /**
                     * 获取最大分片数。
                     * @return MaxReplicateSetNum 最大分片数。
                     * 
                     */
                    uint64_t GetMaxReplicateSetNum() const;

                    /**
                     * 设置最大分片数。
                     * @param _maxReplicateSetNum 最大分片数。
                     * 
                     */
                    void SetMaxReplicateSetNum(const uint64_t& _maxReplicateSetNum);

                    /**
                     * 判断参数 MaxReplicateSetNum 是否已赋值
                     * @return MaxReplicateSetNum 是否已赋值
                     * 
                     */
                    bool MaxReplicateSetNumHasBeenSet() const;

                    /**
                     * 获取每个分片最小节点数。
                     * @return MinReplicateSetNodeNum 每个分片最小节点数。
                     * 
                     */
                    uint64_t GetMinReplicateSetNodeNum() const;

                    /**
                     * 设置每个分片最小节点数。
                     * @param _minReplicateSetNodeNum 每个分片最小节点数。
                     * 
                     */
                    void SetMinReplicateSetNodeNum(const uint64_t& _minReplicateSetNodeNum);

                    /**
                     * 判断参数 MinReplicateSetNodeNum 是否已赋值
                     * @return MinReplicateSetNodeNum 是否已赋值
                     * 
                     */
                    bool MinReplicateSetNodeNumHasBeenSet() const;

                    /**
                     * 获取每个分片最大节点数。
                     * @return MaxReplicateSetNodeNum 每个分片最大节点数。
                     * 
                     */
                    uint64_t GetMaxReplicateSetNodeNum() const;

                    /**
                     * 设置每个分片最大节点数。
                     * @param _maxReplicateSetNodeNum 每个分片最大节点数。
                     * 
                     */
                    void SetMaxReplicateSetNodeNum(const uint64_t& _maxReplicateSetNodeNum);

                    /**
                     * 判断参数 MaxReplicateSetNodeNum 是否已赋值
                     * @return MaxReplicateSetNodeNum 是否已赋值
                     * 
                     */
                    bool MaxReplicateSetNodeNumHasBeenSet() const;

                    /**
                     * 获取集群的规格类型，取值范围如下：
- HIO10G：通用高HIO万兆型。
- HCD：云盘版类型。
                     * @return MachineType 集群的规格类型，取值范围如下：
- HIO10G：通用高HIO万兆型。
- HCD：云盘版类型。
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置集群的规格类型，取值范围如下：
- HIO10G：通用高HIO万兆型。
- HCD：云盘版类型。
                     * @param _machineType 集群的规格类型，取值范围如下：
- HIO10G：通用高HIO万兆型。
- HCD：云盘版类型。
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                private:

                    /**
                     * 规格信息标识。格式如：mongo.HIO10G.128g。由节点类型、规格类型、内存规格三部分组成。
- 节点类型，如下所示。
  - mongo：Mongod 节点。
 - mongos：Mongos 节点。
 - cfgstr：Configserver 节点。
- 规格类型，如下所示。
 - HIO10G：通用高HIO万兆型。
 - HCD：云盘版类型。
- 内存规格，如下所示：
 - 支持4、8、16、32、64、128、240、512。
 - 单位g：表示GB。128g则表示128GB。
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * 售卖规格有效标志，取值范围如下：
- 0：停止售卖，
- 1：开放售卖。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 计算资源规格，CPU核数。
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存规格，单位为：MB。
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 默认磁盘规格，单位为：MB。
                     */
                    uint64_t m_defaultStorage;
                    bool m_defaultStorageHasBeenSet;

                    /**
                     * 最大磁盘规格，单位为：MB。
                     */
                    uint64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * 最小磁盘规格，单位为：MB。
                     */
                    uint64_t m_minStorage;
                    bool m_minStorageHasBeenSet;

                    /**
                     * 指每秒最大请求次数，单位为：次/秒。
                     */
                    uint64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * 规格所支持的最大连接数限制。
                     */
                    uint64_t m_conns;
                    bool m_connsHasBeenSet;

                    /**
                     * 实例存储引擎版本信息。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本。
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本。
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
- MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。
- MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。
                     */
                    std::string m_mongoVersionCode;
                    bool m_mongoVersionCodeHasBeenSet;

                    /**
                     * 实例版本对应的数字版本。
                     */
                    uint64_t m_mongoVersionValue;
                    bool m_mongoVersionValueHasBeenSet;

                    /**
                     * 实例版本信息。支持：3.6、4.2、4.4、5.0、6.0。

                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 存储引擎。
                     */
                    std::string m_engineName;
                    bool m_engineNameHasBeenSet;

                    /**
                     * 集群类型，取值如下：
- 1：分片集群。
- 0：副本集集群。
                     */
                    uint64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 每个副本集最小节点数。
                     */
                    uint64_t m_minNodeNum;
                    bool m_minNodeNumHasBeenSet;

                    /**
                     * 每个副本集最大节点数。
                     */
                    uint64_t m_maxNodeNum;
                    bool m_maxNodeNumHasBeenSet;

                    /**
                     * 最小分片数。
                     */
                    uint64_t m_minReplicateSetNum;
                    bool m_minReplicateSetNumHasBeenSet;

                    /**
                     * 最大分片数。
                     */
                    uint64_t m_maxReplicateSetNum;
                    bool m_maxReplicateSetNumHasBeenSet;

                    /**
                     * 每个分片最小节点数。
                     */
                    uint64_t m_minReplicateSetNodeNum;
                    bool m_minReplicateSetNodeNumHasBeenSet;

                    /**
                     * 每个分片最大节点数。
                     */
                    uint64_t m_maxReplicateSetNodeNum;
                    bool m_maxReplicateSetNodeNumHasBeenSet;

                    /**
                     * 集群的规格类型，取值范围如下：
- HIO10G：通用高HIO万兆型。
- HCD：云盘版类型。
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_SPECITEM_H_

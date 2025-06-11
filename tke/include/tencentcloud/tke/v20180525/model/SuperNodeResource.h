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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_SUPERNODERESOURCE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_SUPERNODERESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 超级节点上的资源统计
                */
                class SuperNodeResource : public AbstractModel
                {
                public:
                    SuperNodeResource();
                    ~SuperNodeResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点名称
                     * @return NodeName 节点名称
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称
                     * @param _nodeName 节点名称
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取节点上的资源总数
                     * @return Num 节点上的资源总数
                     * 
                     */
                    uint64_t GetNum() const;

                    /**
                     * 设置节点上的资源总数
                     * @param _num 节点上的资源总数
                     * 
                     */
                    void SetNum(const uint64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                    /**
                     * 获取节点上的总核数
                     * @return Cpu 节点上的总核数
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置节点上的总核数
                     * @param _cpu 节点上的总核数
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
                     * 获取节点上的总内存数
                     * @return Memory 节点上的总内存数
                     * 
                     */
                    double GetMemory() const;

                    /**
                     * 设置节点上的总内存数
                     * @param _memory 节点上的总内存数
                     * 
                     */
                    void SetMemory(const double& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取节点上的总 GPU 卡数
                     * @return Gpu 节点上的总 GPU 卡数
                     * 
                     */
                    double GetGpu() const;

                    /**
                     * 设置节点上的总 GPU 卡数
                     * @param _gpu 节点上的总 GPU 卡数
                     * 
                     */
                    void SetGpu(const double& _gpu);

                    /**
                     * 判断参数 Gpu 是否已赋值
                     * @return Gpu 是否已赋值
                     * 
                     */
                    bool GpuHasBeenSet() const;

                    /**
                     * 获取节点资源的配额类型，exact表示精确配额，fuzzy 表示模糊配额。
                     * @return QuotaType 节点资源的配额类型，exact表示精确配额，fuzzy 表示模糊配额。
                     * 
                     */
                    std::string GetQuotaType() const;

                    /**
                     * 设置节点资源的配额类型，exact表示精确配额，fuzzy 表示模糊配额。
                     * @param _quotaType 节点资源的配额类型，exact表示精确配额，fuzzy 表示模糊配额。
                     * 
                     */
                    void SetQuotaType(const std::string& _quotaType);

                    /**
                     * 判断参数 QuotaType 是否已赋值
                     * @return QuotaType 是否已赋值
                     * 
                     */
                    bool QuotaTypeHasBeenSet() const;

                    /**
                     * 获取配额的计费类型，PREPAID表示包月，POSTPAID_BY_HOUR表示按量。
                     * @return ChargeType 配额的计费类型，PREPAID表示包月，POSTPAID_BY_HOUR表示按量。
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置配额的计费类型，PREPAID表示包月，POSTPAID_BY_HOUR表示按量。
                     * @param _chargeType 配额的计费类型，PREPAID表示包月，POSTPAID_BY_HOUR表示按量。
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取QuotaType为 exact 时，此字段有效，表示精确配额的资源类型。
                     * @return ResourceType QuotaType为 exact 时，此字段有效，表示精确配额的资源类型。
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置QuotaType为 exact 时，此字段有效，表示精确配额的资源类型。
                     * @param _resourceType QuotaType为 exact 时，此字段有效，表示精确配额的资源类型。
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取置放群组 ID
                     * @return DisasterRecoverGroupId 置放群组 ID
                     * 
                     */
                    std::string GetDisasterRecoverGroupId() const;

                    /**
                     * 设置置放群组 ID
                     * @param _disasterRecoverGroupId 置放群组 ID
                     * 
                     */
                    void SetDisasterRecoverGroupId(const std::string& _disasterRecoverGroupId);

                    /**
                     * 判断参数 DisasterRecoverGroupId 是否已赋值
                     * @return DisasterRecoverGroupId 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdHasBeenSet() const;

                private:

                    /**
                     * 节点名称
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 节点上的资源总数
                     */
                    uint64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * 节点上的总核数
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 节点上的总内存数
                     */
                    double m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 节点上的总 GPU 卡数
                     */
                    double m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * 节点资源的配额类型，exact表示精确配额，fuzzy 表示模糊配额。
                     */
                    std::string m_quotaType;
                    bool m_quotaTypeHasBeenSet;

                    /**
                     * 配额的计费类型，PREPAID表示包月，POSTPAID_BY_HOUR表示按量。
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * QuotaType为 exact 时，此字段有效，表示精确配额的资源类型。
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 置放群组 ID
                     */
                    std::string m_disasterRecoverGroupId;
                    bool m_disasterRecoverGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_SUPERNODERESOURCE_H_

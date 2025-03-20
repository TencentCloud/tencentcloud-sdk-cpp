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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PODCHARGEINFO_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PODCHARGEINFO_H_

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
                * Pod计费信息
                */
                class PodChargeInfo : public AbstractModel
                {
                public:
                    PodChargeInfo();
                    ~PodChargeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Pod计费开始时间
                     * @return StartTime Pod计费开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Pod计费开始时间
                     * @param _startTime Pod计费开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Pod的Uid
                     * @return Uid Pod的Uid
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置Pod的Uid
                     * @param _uid Pod的Uid
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取Pod的CPU
                     * @return Cpu Pod的CPU
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置Pod的CPU
                     * @param _cpu Pod的CPU
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
                     * 获取Pod的内存
                     * @return Memory Pod的内存
                     * 
                     */
                    double GetMemory() const;

                    /**
                     * 设置Pod的内存
                     * @param _memory Pod的内存
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
                     * 获取Pod类型：intel、amd、v100、t4、a10\*gnv4、a10\*gnv4v等。
                     * @return Type Pod类型：intel、amd、v100、t4、a10\*gnv4、a10\*gnv4v等。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Pod类型：intel、amd、v100、t4、a10\*gnv4、a10\*gnv4v等。
                     * @param _type Pod类型：intel、amd、v100、t4、a10\*gnv4、a10\*gnv4v等。
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
                     * 获取Pod是GPU时，表示GPU卡数
                     * @return Gpu Pod是GPU时，表示GPU卡数
                     * 
                     */
                    std::string GetGpu() const;

                    /**
                     * 设置Pod是GPU时，表示GPU卡数
                     * @param _gpu Pod是GPU时，表示GPU卡数
                     * 
                     */
                    void SetGpu(const std::string& _gpu);

                    /**
                     * 判断参数 Gpu 是否已赋值
                     * @return Gpu 是否已赋值
                     * 
                     */
                    bool GpuHasBeenSet() const;

                    /**
                     * 获取计费类型
PREPAID：Pod调度到包月超级节点
POSTPAID_BY_HOUR：按量计费
RESERVED_INSTANCE：上个周期被预留券抵扣
SPOT：竞价实例
TPOD：特惠实例
                     * @return ChargeType 计费类型
PREPAID：Pod调度到包月超级节点
POSTPAID_BY_HOUR：按量计费
RESERVED_INSTANCE：上个周期被预留券抵扣
SPOT：竞价实例
TPOD：特惠实例
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置计费类型
PREPAID：Pod调度到包月超级节点
POSTPAID_BY_HOUR：按量计费
RESERVED_INSTANCE：上个周期被预留券抵扣
SPOT：竞价实例
TPOD：特惠实例
                     * @param _chargeType 计费类型
PREPAID：Pod调度到包月超级节点
POSTPAID_BY_HOUR：按量计费
RESERVED_INSTANCE：上个周期被预留券抵扣
SPOT：竞价实例
TPOD：特惠实例
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
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Pod名称
                     * @return Name Pod名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Pod名称
                     * @param _name Pod名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Pod计费开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Pod的Uid
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * Pod的CPU
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Pod的内存
                     */
                    double m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Pod类型：intel、amd、v100、t4、a10\*gnv4、a10\*gnv4v等。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Pod是GPU时，表示GPU卡数
                     */
                    std::string m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * 计费类型
PREPAID：Pod调度到包月超级节点
POSTPAID_BY_HOUR：按量计费
RESERVED_INSTANCE：上个周期被预留券抵扣
SPOT：竞价实例
TPOD：特惠实例
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Pod名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PODCHARGEINFO_H_

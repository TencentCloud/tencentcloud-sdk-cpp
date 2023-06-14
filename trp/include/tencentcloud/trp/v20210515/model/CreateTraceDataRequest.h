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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_CREATETRACEDATAREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_CREATETRACEDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/TraceItem.h>
#include <tencentcloud/trp/v20210515/model/PhaseData.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * CreateTraceData请求参数结构体
                */
                class CreateTraceDataRequest : public AbstractModel
                {
                public:
                    CreateTraceDataRequest();
                    ~CreateTraceDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业ID
                     * @return CorpId 企业ID
                     * 
                     */
                    uint64_t GetCorpId() const;

                    /**
                     * 设置企业ID
                     * @param _corpId 企业ID
                     * 
                     */
                    void SetCorpId(const uint64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取批次ID
                     * @return BatchId 批次ID
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置批次ID
                     * @param _batchId 批次ID
                     * 
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取溯源阶段 0:商品 1:通用 2:生产溯源 3:销售溯源
                     * @return Phase 溯源阶段 0:商品 1:通用 2:生产溯源 3:销售溯源
                     * 
                     */
                    uint64_t GetPhase() const;

                    /**
                     * 设置溯源阶段 0:商品 1:通用 2:生产溯源 3:销售溯源
                     * @param _phase 溯源阶段 0:商品 1:通用 2:生产溯源 3:销售溯源
                     * 
                     */
                    void SetPhase(const uint64_t& _phase);

                    /**
                     * 判断参数 Phase 是否已赋值
                     * @return Phase 是否已赋值
                     * 
                     */
                    bool PhaseHasBeenSet() const;

                    /**
                     * 获取溯源阶段名称
                     * @return PhaseName 溯源阶段名称
                     * 
                     */
                    std::string GetPhaseName() const;

                    /**
                     * 设置溯源阶段名称
                     * @param _phaseName 溯源阶段名称
                     * 
                     */
                    void SetPhaseName(const std::string& _phaseName);

                    /**
                     * 判断参数 PhaseName 是否已赋值
                     * @return PhaseName 是否已赋值
                     * 
                     */
                    bool PhaseNameHasBeenSet() const;

                    /**
                     * 获取[无效] 上链状态
                     * @return ChainStatus [无效] 上链状态
                     * 
                     */
                    uint64_t GetChainStatus() const;

                    /**
                     * 设置[无效] 上链状态
                     * @param _chainStatus [无效] 上链状态
                     * 
                     */
                    void SetChainStatus(const uint64_t& _chainStatus);

                    /**
                     * 判断参数 ChainStatus 是否已赋值
                     * @return ChainStatus 是否已赋值
                     * 
                     */
                    bool ChainStatusHasBeenSet() const;

                    /**
                     * 获取[无效] 码类型 0: 批次, 1: 码, 2: 生产任务, 3: 物流信息
                     * @return Type [无效] 码类型 0: 批次, 1: 码, 2: 生产任务, 3: 物流信息
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置[无效] 码类型 0: 批次, 1: 码, 2: 生产任务, 3: 物流信息
                     * @param _type [无效] 码类型 0: 批次, 1: 码, 2: 生产任务, 3: 物流信息
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取[无效] 溯源ID
                     * @return TraceId [无效] 溯源ID
                     * 
                     */
                    std::string GetTraceId() const;

                    /**
                     * 设置[无效] 溯源ID
                     * @param _traceId [无效] 溯源ID
                     * 
                     */
                    void SetTraceId(const std::string& _traceId);

                    /**
                     * 判断参数 TraceId 是否已赋值
                     * @return TraceId 是否已赋值
                     * 
                     */
                    bool TraceIdHasBeenSet() const;

                    /**
                     * 获取溯源信息
                     * @return TraceItems 溯源信息
                     * 
                     */
                    std::vector<TraceItem> GetTraceItems() const;

                    /**
                     * 设置溯源信息
                     * @param _traceItems 溯源信息
                     * 
                     */
                    void SetTraceItems(const std::vector<TraceItem>& _traceItems);

                    /**
                     * 判断参数 TraceItems 是否已赋值
                     * @return TraceItems 是否已赋值
                     * 
                     */
                    bool TraceItemsHasBeenSet() const;

                    /**
                     * 获取溯源状态 0: 无效, 1: 有效
                     * @return Status 溯源状态 0: 无效, 1: 有效
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置溯源状态 0: 无效, 1: 有效
                     * @param _status 溯源状态 0: 无效, 1: 有效
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
                     * 获取环节数据
                     * @return PhaseData 环节数据
                     * 
                     */
                    PhaseData GetPhaseData() const;

                    /**
                     * 设置环节数据
                     * @param _phaseData 环节数据
                     * 
                     */
                    void SetPhaseData(const PhaseData& _phaseData);

                    /**
                     * 判断参数 PhaseData 是否已赋值
                     * @return PhaseData 是否已赋值
                     * 
                     */
                    bool PhaseDataHasBeenSet() const;

                private:

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 批次ID
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 溯源阶段 0:商品 1:通用 2:生产溯源 3:销售溯源
                     */
                    uint64_t m_phase;
                    bool m_phaseHasBeenSet;

                    /**
                     * 溯源阶段名称
                     */
                    std::string m_phaseName;
                    bool m_phaseNameHasBeenSet;

                    /**
                     * [无效] 上链状态
                     */
                    uint64_t m_chainStatus;
                    bool m_chainStatusHasBeenSet;

                    /**
                     * [无效] 码类型 0: 批次, 1: 码, 2: 生产任务, 3: 物流信息
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * [无效] 溯源ID
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                    /**
                     * 溯源信息
                     */
                    std::vector<TraceItem> m_traceItems;
                    bool m_traceItemsHasBeenSet;

                    /**
                     * 溯源状态 0: 无效, 1: 有效
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 环节数据
                     */
                    PhaseData m_phaseData;
                    bool m_phaseDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_CREATETRACEDATAREQUEST_H_

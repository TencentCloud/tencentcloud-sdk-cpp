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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYTRACEDATAREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYTRACEDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/TraceItem.h>
#include <tencentcloud/trp/v20210515/model/ChainData.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * ModifyTraceData请求参数结构体
                */
                class ModifyTraceDataRequest : public AbstractModel
                {
                public:
                    ModifyTraceDataRequest();
                    ~ModifyTraceDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取溯源ID
                     * @return TraceId 溯源ID
                     */
                    std::string GetTraceId() const;

                    /**
                     * 设置溯源ID
                     * @param TraceId 溯源ID
                     */
                    void SetTraceId(const std::string& _traceId);

                    /**
                     * 判断参数 TraceId 是否已赋值
                     * @return TraceId 是否已赋值
                     */
                    bool TraceIdHasBeenSet() const;

                    /**
                     * 获取批次ID
                     * @return BatchId 批次ID
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置批次ID
                     * @param BatchId 批次ID
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取生产溯源任务ID
                     * @return TaskId 生产溯源任务ID
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置生产溯源任务ID
                     * @param TaskId 生产溯源任务ID
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取溯源信息
                     * @return TraceItems 溯源信息
                     */
                    std::vector<TraceItem> GetTraceItems() const;

                    /**
                     * 设置溯源信息
                     * @param TraceItems 溯源信息
                     */
                    void SetTraceItems(const std::vector<TraceItem>& _traceItems);

                    /**
                     * 判断参数 TraceItems 是否已赋值
                     * @return TraceItems 是否已赋值
                     */
                    bool TraceItemsHasBeenSet() const;

                    /**
                     * 获取溯源阶段名称
                     * @return PhaseName 溯源阶段名称
                     */
                    std::string GetPhaseName() const;

                    /**
                     * 设置溯源阶段名称
                     * @param PhaseName 溯源阶段名称
                     */
                    void SetPhaseName(const std::string& _phaseName);

                    /**
                     * 判断参数 PhaseName 是否已赋值
                     * @return PhaseName 是否已赋值
                     */
                    bool PhaseNameHasBeenSet() const;

                    /**
                     * 获取[无效] 类型
                     * @return Type [无效] 类型
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置[无效] 类型
                     * @param Type [无效] 类型
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取[无效] 溯源码
                     * @return Code [无效] 溯源码
                     */
                    std::string GetCode() const;

                    /**
                     * 设置[无效] 溯源码
                     * @param Code [无效] 溯源码
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取[无效] 排序
                     * @return Rank [无效] 排序
                     */
                    uint64_t GetRank() const;

                    /**
                     * 设置[无效] 排序
                     * @param Rank [无效] 排序
                     */
                    void SetRank(const uint64_t& _rank);

                    /**
                     * 判断参数 Rank 是否已赋值
                     * @return Rank 是否已赋值
                     */
                    bool RankHasBeenSet() const;

                    /**
                     * 获取[无效] 溯源阶段 0:商品 1:通用 2:物流
                     * @return Phase [无效] 溯源阶段 0:商品 1:通用 2:物流
                     */
                    uint64_t GetPhase() const;

                    /**
                     * 设置[无效] 溯源阶段 0:商品 1:通用 2:物流
                     * @param Phase [无效] 溯源阶段 0:商品 1:通用 2:物流
                     */
                    void SetPhase(const uint64_t& _phase);

                    /**
                     * 判断参数 Phase 是否已赋值
                     * @return Phase 是否已赋值
                     */
                    bool PhaseHasBeenSet() const;

                    /**
                     * 获取[无效] 溯源时间
                     * @return TraceTime [无效] 溯源时间
                     */
                    std::string GetTraceTime() const;

                    /**
                     * 设置[无效] 溯源时间
                     * @param TraceTime [无效] 溯源时间
                     */
                    void SetTraceTime(const std::string& _traceTime);

                    /**
                     * 判断参数 TraceTime 是否已赋值
                     * @return TraceTime 是否已赋值
                     */
                    bool TraceTimeHasBeenSet() const;

                    /**
                     * 获取[无效] 创建时间
                     * @return CreateTime [无效] 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置[无效] 创建时间
                     * @param CreateTime [无效] 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取[无效] 上链状态
                     * @return ChainStatus [无效] 上链状态
                     */
                    uint64_t GetChainStatus() const;

                    /**
                     * 设置[无效] 上链状态
                     * @param ChainStatus [无效] 上链状态
                     */
                    void SetChainStatus(const uint64_t& _chainStatus);

                    /**
                     * 判断参数 ChainStatus 是否已赋值
                     * @return ChainStatus 是否已赋值
                     */
                    bool ChainStatusHasBeenSet() const;

                    /**
                     * 获取[无效] 上链时间
                     * @return ChainTime [无效] 上链时间
                     */
                    std::string GetChainTime() const;

                    /**
                     * 设置[无效] 上链时间
                     * @param ChainTime [无效] 上链时间
                     */
                    void SetChainTime(const std::string& _chainTime);

                    /**
                     * 判断参数 ChainTime 是否已赋值
                     * @return ChainTime 是否已赋值
                     */
                    bool ChainTimeHasBeenSet() const;

                    /**
                     * 获取[无效] 上链数据
                     * @return ChainData [无效] 上链数据
                     */
                    ChainData GetChainData() const;

                    /**
                     * 设置[无效] 上链数据
                     * @param ChainData [无效] 上链数据
                     */
                    void SetChainData(const ChainData& _chainData);

                    /**
                     * 判断参数 ChainData 是否已赋值
                     * @return ChainData 是否已赋值
                     */
                    bool ChainDataHasBeenSet() const;

                    /**
                     * 获取企业ID
                     * @return CorpId 企业ID
                     */
                    uint64_t GetCorpId() const;

                    /**
                     * 设置企业ID
                     * @param CorpId 企业ID
                     */
                    void SetCorpId(const uint64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取[无效] 溯源状态
                     * @return Status [无效] 溯源状态
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置[无效] 溯源状态
                     * @param Status [无效] 溯源状态
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 溯源ID
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                    /**
                     * 批次ID
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 生产溯源任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 溯源信息
                     */
                    std::vector<TraceItem> m_traceItems;
                    bool m_traceItemsHasBeenSet;

                    /**
                     * 溯源阶段名称
                     */
                    std::string m_phaseName;
                    bool m_phaseNameHasBeenSet;

                    /**
                     * [无效] 类型
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * [无效] 溯源码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * [无效] 排序
                     */
                    uint64_t m_rank;
                    bool m_rankHasBeenSet;

                    /**
                     * [无效] 溯源阶段 0:商品 1:通用 2:物流
                     */
                    uint64_t m_phase;
                    bool m_phaseHasBeenSet;

                    /**
                     * [无效] 溯源时间
                     */
                    std::string m_traceTime;
                    bool m_traceTimeHasBeenSet;

                    /**
                     * [无效] 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * [无效] 上链状态
                     */
                    uint64_t m_chainStatus;
                    bool m_chainStatusHasBeenSet;

                    /**
                     * [无效] 上链时间
                     */
                    std::string m_chainTime;
                    bool m_chainTimeHasBeenSet;

                    /**
                     * [无效] 上链数据
                     */
                    ChainData m_chainData;
                    bool m_chainDataHasBeenSet;

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * [无效] 溯源状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYTRACEDATAREQUEST_H_

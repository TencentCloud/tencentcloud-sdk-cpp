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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_TRACEDATA_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_TRACEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/ChainData.h>
#include <tencentcloud/trp/v20210515/model/PhaseData.h>
#include <tencentcloud/trp/v20210515/model/TraceItem.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * 溯源数据
                */
                class TraceData : public AbstractModel
                {
                public:
                    TraceData();
                    ~TraceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取溯源ID
                     * @return TraceId 溯源ID
                     * 
                     */
                    std::string GetTraceId() const;

                    /**
                     * 设置溯源ID
                     * @param _traceId 溯源ID
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
                     * 获取码类型 0: 批次, 1: 码, 2: 生产任务
                     * @return Type 码类型 0: 批次, 1: 码, 2: 生产任务
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置码类型 0: 批次, 1: 码, 2: 生产任务
                     * @param _type 码类型 0: 批次, 1: 码, 2: 生产任务
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
                     * 获取码值，跟码类型一一对应
                     * @return Code 码值，跟码类型一一对应
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置码值，跟码类型一一对应
                     * @param _code 码值，跟码类型一一对应
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取排序，在Phase相同情况下，值越小排名靠前
                     * @return Rank 排序，在Phase相同情况下，值越小排名靠前
                     * 
                     */
                    uint64_t GetRank() const;

                    /**
                     * 设置排序，在Phase相同情况下，值越小排名靠前
                     * @param _rank 排序，在Phase相同情况下，值越小排名靠前
                     * 
                     */
                    void SetRank(const uint64_t& _rank);

                    /**
                     * 判断参数 Rank 是否已赋值
                     * @return Rank 是否已赋值
                     * 
                     */
                    bool RankHasBeenSet() const;

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
                     * 获取溯源环节名称
                     * @return PhaseName 溯源环节名称
                     * 
                     */
                    std::string GetPhaseName() const;

                    /**
                     * 设置溯源环节名称
                     * @param _phaseName 溯源环节名称
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
                     * 获取溯源时间
                     * @return TraceTime 溯源时间
                     * 
                     */
                    std::string GetTraceTime() const;

                    /**
                     * 设置溯源时间
                     * @param _traceTime 溯源时间
                     * 
                     */
                    void SetTraceTime(const std::string& _traceTime);

                    /**
                     * 判断参数 TraceTime 是否已赋值
                     * @return TraceTime 是否已赋值
                     * 
                     */
                    bool TraceTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取上链状态 0: 未上链 1: 上链中 2: 已上链 -1: 异常
                     * @return ChainStatus 上链状态 0: 未上链 1: 上链中 2: 已上链 -1: 异常
                     * 
                     */
                    uint64_t GetChainStatus() const;

                    /**
                     * 设置上链状态 0: 未上链 1: 上链中 2: 已上链 -1: 异常
                     * @param _chainStatus 上链状态 0: 未上链 1: 上链中 2: 已上链 -1: 异常
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
                     * 获取上链时间
                     * @return ChainTime 上链时间
                     * 
                     */
                    std::string GetChainTime() const;

                    /**
                     * 设置上链时间
                     * @param _chainTime 上链时间
                     * 
                     */
                    void SetChainTime(const std::string& _chainTime);

                    /**
                     * 判断参数 ChainTime 是否已赋值
                     * @return ChainTime 是否已赋值
                     * 
                     */
                    bool ChainTimeHasBeenSet() const;

                    /**
                     * 获取上链数据
                     * @return ChainData 上链数据
                     * 
                     */
                    ChainData GetChainData() const;

                    /**
                     * 设置上链数据
                     * @param _chainData 上链数据
                     * 
                     */
                    void SetChainData(const ChainData& _chainData);

                    /**
                     * 判断参数 ChainData 是否已赋值
                     * @return ChainData 是否已赋值
                     * 
                     */
                    bool ChainDataHasBeenSet() const;

                    /**
                     * 获取溯源阶段配置
                     * @return PhaseData 溯源阶段配置
                     * 
                     */
                    PhaseData GetPhaseData() const;

                    /**
                     * 设置溯源阶段配置
                     * @param _phaseData 溯源阶段配置
                     * 
                     */
                    void SetPhaseData(const PhaseData& _phaseData);

                    /**
                     * 判断参数 PhaseData 是否已赋值
                     * @return PhaseData 是否已赋值
                     * 
                     */
                    bool PhaseDataHasBeenSet() const;

                    /**
                     * 获取溯源阶段状态 0: 无效, 1: 有效
                     * @return Status 溯源阶段状态 0: 无效, 1: 有效
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置溯源阶段状态 0: 无效, 1: 有效
                     * @param _status 溯源阶段状态 0: 无效, 1: 有效
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
                     * 获取无
                     * @return TraceItems 无
                     * 
                     */
                    std::vector<TraceItem> GetTraceItems() const;

                    /**
                     * 设置无
                     * @param _traceItems 无
                     * 
                     */
                    void SetTraceItems(const std::vector<TraceItem>& _traceItems);

                    /**
                     * 判断参数 TraceItems 是否已赋值
                     * @return TraceItems 是否已赋值
                     * 
                     */
                    bool TraceItemsHasBeenSet() const;

                private:

                    /**
                     * 溯源ID
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 码类型 0: 批次, 1: 码, 2: 生产任务
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 码值，跟码类型一一对应
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 排序，在Phase相同情况下，值越小排名靠前
                     */
                    uint64_t m_rank;
                    bool m_rankHasBeenSet;

                    /**
                     * 溯源阶段 0:商品 1:通用 2:生产溯源 3:销售溯源
                     */
                    uint64_t m_phase;
                    bool m_phaseHasBeenSet;

                    /**
                     * 溯源环节名称
                     */
                    std::string m_phaseName;
                    bool m_phaseNameHasBeenSet;

                    /**
                     * 溯源时间
                     */
                    std::string m_traceTime;
                    bool m_traceTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 上链状态 0: 未上链 1: 上链中 2: 已上链 -1: 异常
                     */
                    uint64_t m_chainStatus;
                    bool m_chainStatusHasBeenSet;

                    /**
                     * 上链时间
                     */
                    std::string m_chainTime;
                    bool m_chainTimeHasBeenSet;

                    /**
                     * 上链数据
                     */
                    ChainData m_chainData;
                    bool m_chainDataHasBeenSet;

                    /**
                     * 溯源阶段配置
                     */
                    PhaseData m_phaseData;
                    bool m_phaseDataHasBeenSet;

                    /**
                     * 溯源阶段状态 0: 无效, 1: 有效
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 无
                     */
                    std::vector<TraceItem> m_traceItems;
                    bool m_traceItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_TRACEDATA_H_

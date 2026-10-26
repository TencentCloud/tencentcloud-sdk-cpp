/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLLMTOKENUSAGELISTRESULT_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLLMTOKENUSAGELISTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/AIGWLLMTokenUsageItem.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * Token用量统计结果
                */
                class AIGWLLMTokenUsageListResult : public AbstractModel
                {
                public:
                    AIGWLLMTokenUsageListResult();
                    ~AIGWLLMTokenUsageListResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>网关版本不低于 3.9.8 且 Dimension=ConsumerGroup 时，未指定节点筛选则列出 Kong CP 当前目录的全部真实节点，包含同步、自定义、禁用及保留中的软删节点，排除合成展示节点。按当前名称、节点 UUID 升序，先分页节点再查询历史指标；无调用节点仍返回，Token 与请求数补零。节点指标包含历史下属，同一请求可计入多个组行，不能逐行相加作为网关总量。</p>
                     * @return DataList <p>网关版本不低于 3.9.8 且 Dimension=ConsumerGroup 时，未指定节点筛选则列出 Kong CP 当前目录的全部真实节点，包含同步、自定义、禁用及保留中的软删节点，排除合成展示节点。按当前名称、节点 UUID 升序，先分页节点再查询历史指标；无调用节点仍返回，Token 与请求数补零。节点指标包含历史下属，同一请求可计入多个组行，不能逐行相加作为网关总量。</p>
                     * 
                     */
                    std::vector<AIGWLLMTokenUsageItem> GetDataList() const;

                    /**
                     * 设置<p>网关版本不低于 3.9.8 且 Dimension=ConsumerGroup 时，未指定节点筛选则列出 Kong CP 当前目录的全部真实节点，包含同步、自定义、禁用及保留中的软删节点，排除合成展示节点。按当前名称、节点 UUID 升序，先分页节点再查询历史指标；无调用节点仍返回，Token 与请求数补零。节点指标包含历史下属，同一请求可计入多个组行，不能逐行相加作为网关总量。</p>
                     * @param _dataList <p>网关版本不低于 3.9.8 且 Dimension=ConsumerGroup 时，未指定节点筛选则列出 Kong CP 当前目录的全部真实节点，包含同步、自定义、禁用及保留中的软删节点，排除合成展示节点。按当前名称、节点 UUID 升序，先分页节点再查询历史指标；无调用节点仍返回，Token 与请求数补零。节点指标包含历史下属，同一请求可计入多个组行，不能逐行相加作为网关总量。</p>
                     * 
                     */
                    void SetDataList(const std::vector<AIGWLLMTokenUsageItem>& _dataList);

                    /**
                     * 判断参数 DataList 是否已赋值
                     * @return DataList 是否已赋值
                     * 
                     */
                    bool DataListHasBeenSet() const;

                    /**
                     * 获取<p>筛选后的结果总数。新版 ConsumerGroup 查询为候选节点总数，包含无调用节点，不受 Limit / Offset 影响。</p>
                     * @return TotalCount <p>筛选后的结果总数。新版 ConsumerGroup 查询为候选节点总数，包含无调用节点，不受 Limit / Offset 影响。</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置<p>筛选后的结果总数。新版 ConsumerGroup 查询为候选节点总数，包含无调用节点，不受 Limit / Offset 影响。</p>
                     * @param _totalCount <p>筛选后的结果总数。新版 ConsumerGroup 查询为候选节点总数，包含无调用节点，不受 Limit / Offset 影响。</p>
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>组织归属是否不完整。网关版本不低于 3.9.8，使用 ConsumerGroup 维度或 ConsumerGroupId / ConsumerGroupName 筛选时返回，其余请求省略。true 表示时间及业务筛选范围内存在组归属未知的日志；检查不受组筛选条件遮蔽，空结果也执行检查。组范围统计仅计入可归因日志。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgAttributionIncomplete <p>组织归属是否不完整。网关版本不低于 3.9.8，使用 ConsumerGroup 维度或 ConsumerGroupId / ConsumerGroupName 筛选时返回，其余请求省略。true 表示时间及业务筛选范围内存在组归属未知的日志；检查不受组筛选条件遮蔽，空结果也执行检查。组范围统计仅计入可归因日志。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetOrgAttributionIncomplete() const;

                    /**
                     * 设置<p>组织归属是否不完整。网关版本不低于 3.9.8，使用 ConsumerGroup 维度或 ConsumerGroupId / ConsumerGroupName 筛选时返回，其余请求省略。true 表示时间及业务筛选范围内存在组归属未知的日志；检查不受组筛选条件遮蔽，空结果也执行检查。组范围统计仅计入可归因日志。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orgAttributionIncomplete <p>组织归属是否不完整。网关版本不低于 3.9.8，使用 ConsumerGroup 维度或 ConsumerGroupId / ConsumerGroupName 筛选时返回，其余请求省略。true 表示时间及业务筛选范围内存在组归属未知的日志；检查不受组筛选条件遮蔽，空结果也执行检查。组范围统计仅计入可归因日志。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrgAttributionIncomplete(const bool& _orgAttributionIncomplete);

                    /**
                     * 判断参数 OrgAttributionIncomplete 是否已赋值
                     * @return OrgAttributionIncomplete 是否已赋值
                     * 
                     */
                    bool OrgAttributionIncompleteHasBeenSet() const;

                private:

                    /**
                     * <p>网关版本不低于 3.9.8 且 Dimension=ConsumerGroup 时，未指定节点筛选则列出 Kong CP 当前目录的全部真实节点，包含同步、自定义、禁用及保留中的软删节点，排除合成展示节点。按当前名称、节点 UUID 升序，先分页节点再查询历史指标；无调用节点仍返回，Token 与请求数补零。节点指标包含历史下属，同一请求可计入多个组行，不能逐行相加作为网关总量。</p>
                     */
                    std::vector<AIGWLLMTokenUsageItem> m_dataList;
                    bool m_dataListHasBeenSet;

                    /**
                     * <p>筛选后的结果总数。新版 ConsumerGroup 查询为候选节点总数，包含无调用节点，不受 Limit / Offset 影响。</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>组织归属是否不完整。网关版本不低于 3.9.8，使用 ConsumerGroup 维度或 ConsumerGroupId / ConsumerGroupName 筛选时返回，其余请求省略。true 表示时间及业务筛选范围内存在组归属未知的日志；检查不受组筛选条件遮蔽，空结果也执行检查。组范围统计仅计入可归因日志。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_orgAttributionIncomplete;
                    bool m_orgAttributionIncompleteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLLMTOKENUSAGELISTRESULT_H_

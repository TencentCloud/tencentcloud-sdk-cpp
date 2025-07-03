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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITRULETEMPLATEMODIFYHISTORYREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITRULETEMPLATEMODIFYHISTORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeAuditRuleTemplateModifyHistory请求参数结构体
                */
                class DescribeAuditRuleTemplateModifyHistoryRequest : public AbstractModel
                {
                public:
                    DescribeAuditRuleTemplateModifyHistoryRequest();
                    ~DescribeAuditRuleTemplateModifyHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取审计规则模板ID,可通过[DescribeAuditRuleTemplates](https://cloud.tencent.com/document/api/236/101811)接口获取。
                     * @return RuleTemplateIds 审计规则模板ID,可通过[DescribeAuditRuleTemplates](https://cloud.tencent.com/document/api/236/101811)接口获取。
                     * 
                     */
                    std::vector<std::string> GetRuleTemplateIds() const;

                    /**
                     * 设置审计规则模板ID,可通过[DescribeAuditRuleTemplates](https://cloud.tencent.com/document/api/236/101811)接口获取。
                     * @param _ruleTemplateIds 审计规则模板ID,可通过[DescribeAuditRuleTemplates](https://cloud.tencent.com/document/api/236/101811)接口获取。
                     * 
                     */
                    void SetRuleTemplateIds(const std::vector<std::string>& _ruleTemplateIds);

                    /**
                     * 判断参数 RuleTemplateIds 是否已赋值
                     * @return RuleTemplateIds 是否已赋值
                     * 
                     */
                    bool RuleTemplateIdsHasBeenSet() const;

                    /**
                     * 获取查询范围的开始时间。
                     * @return StartTime 查询范围的开始时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询范围的开始时间。
                     * @param _startTime 查询范围的开始时间。
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
                     * 获取查询范围的结束时间。
                     * @return EndTime 查询范围的结束时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询范围的结束时间。
                     * @param _endTime 查询范围的结束时间。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取返回条数,默认值-20，最大值-1000。
                     * @return Limit 返回条数,默认值-20，最大值-1000。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回条数,默认值-20，最大值-1000。
                     * @param _limit 返回条数,默认值-20，最大值-1000。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量。
                     * @return Offset 偏移量。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量。
                     * @param _offset 偏移量。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取排序方式，DESC-按修改时间倒排，ASC-正序，默认：DESC。
                     * @return Order 排序方式，DESC-按修改时间倒排，ASC-正序，默认：DESC。
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式，DESC-按修改时间倒排，ASC-正序，默认：DESC。
                     * @param _order 排序方式，DESC-按修改时间倒排，ASC-正序，默认：DESC。
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 审计规则模板ID,可通过[DescribeAuditRuleTemplates](https://cloud.tencent.com/document/api/236/101811)接口获取。
                     */
                    std::vector<std::string> m_ruleTemplateIds;
                    bool m_ruleTemplateIdsHasBeenSet;

                    /**
                     * 查询范围的开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询范围的结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 返回条数,默认值-20，最大值-1000。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序方式，DESC-按修改时间倒排，ASC-正序，默认：DESC。
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITRULETEMPLATEMODIFYHISTORYREQUEST_H_

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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINERULERESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINERULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/BaselineRuleInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeBaselineRule返回参数结构体
                */
                class DescribeBaselineRuleResponse : public AbstractModel
                {
                public:
                    DescribeBaselineRuleResponse();
                    ~DescribeBaselineRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分页查询记录总数
                     * @return TotalCount 分页查询记录总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取基线检测项列表
                     * @return BaselineRuleList 基线检测项列表
                     * 
                     */
                    std::vector<BaselineRuleInfo> GetBaselineRuleList() const;

                    /**
                     * 判断参数 BaselineRuleList 是否已赋值
                     * @return BaselineRuleList 是否已赋值
                     * 
                     */
                    bool BaselineRuleListHasBeenSet() const;

                    /**
                     * 获取是否显示说明列：true-是，false-否
                     * @return ShowRuleRemark 是否显示说明列：true-是，false-否
                     * 
                     */
                    bool GetShowRuleRemark() const;

                    /**
                     * 判断参数 ShowRuleRemark 是否已赋值
                     * @return ShowRuleRemark 是否已赋值
                     * 
                     */
                    bool ShowRuleRemarkHasBeenSet() const;

                private:

                    /**
                     * 分页查询记录总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 基线检测项列表
                     */
                    std::vector<BaselineRuleInfo> m_baselineRuleList;
                    bool m_baselineRuleListHasBeenSet;

                    /**
                     * 是否显示说明列：true-是，false-否
                     */
                    bool m_showRuleRemark;
                    bool m_showRuleRemarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINERULERESPONSE_H_

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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULFIXABLEMACHINELISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULFIXABLEMACHINELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/VulFixableMachineItem.h>
#include <tencentcloud/csip/v20221121/model/VulFixSummaryItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeVulFixableMachineList返回参数结构体
                */
                class DescribeVulFixableMachineListResponse : public AbstractModel
                {
                public:
                    DescribeVulFixableMachineListResponse();
                    ~DescribeVulFixableMachineListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>可修复主机列表</p>
                     * @return Data <p>可修复主机列表</p>
                     * 
                     */
                    std::vector<VulFixableMachineItem> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取<p>总数量</p>
                     * @return TotalCount <p>总数量</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>可一键修复的主机数量</p>
                     * @return FixableCount <p>可一键修复的主机数量</p>
                     * 
                     */
                    int64_t GetFixableCount() const;

                    /**
                     * 判断参数 FixableCount 是否已赋值
                     * @return FixableCount 是否已赋值
                     * 
                     */
                    bool FixableCountHasBeenSet() const;

                    /**
                     * 获取<p>不可一键修复的主机数量</p>
                     * @return NotFixableCount <p>不可一键修复的主机数量</p>
                     * 
                     */
                    int64_t GetNotFixableCount() const;

                    /**
                     * 判断参数 NotFixableCount 是否已赋值
                     * @return NotFixableCount 是否已赋值
                     * 
                     */
                    bool NotFixableCountHasBeenSet() const;

                    /**
                     * 获取<p>漏洞维度汇总信息，展示被修复的漏洞列表概要</p>
                     * @return VulSummary <p>漏洞维度汇总信息，展示被修复的漏洞列表概要</p>
                     * 
                     */
                    std::vector<VulFixSummaryItem> GetVulSummary() const;

                    /**
                     * 判断参数 VulSummary 是否已赋值
                     * @return VulSummary 是否已赋值
                     * 
                     */
                    bool VulSummaryHasBeenSet() const;

                private:

                    /**
                     * <p>可修复主机列表</p>
                     */
                    std::vector<VulFixableMachineItem> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <p>总数量</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>可一键修复的主机数量</p>
                     */
                    int64_t m_fixableCount;
                    bool m_fixableCountHasBeenSet;

                    /**
                     * <p>不可一键修复的主机数量</p>
                     */
                    int64_t m_notFixableCount;
                    bool m_notFixableCountHasBeenSet;

                    /**
                     * <p>漏洞维度汇总信息，展示被修复的漏洞列表概要</p>
                     */
                    std::vector<VulFixSummaryItem> m_vulSummary;
                    bool m_vulSummaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULFIXABLEMACHINELISTRESPONSE_H_

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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEPLUGINSUMMARYLISTRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEPLUGINSUMMARYLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/PluginSummary.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribePluginSummaryList返回参数结构体
                */
                class DescribePluginSummaryListResponse : public AbstractModel
                {
                public:
                    DescribePluginSummaryListResponse();
                    ~DescribePluginSummaryListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取plugin_list
                     * @return PluginList plugin_list
                     * 
                     */
                    std::vector<PluginSummary> GetPluginList() const;

                    /**
                     * 判断参数 PluginList 是否已赋值
                     * @return PluginList 是否已赋值
                     * 
                     */
                    bool PluginListHasBeenSet() const;

                    /**
                     * 获取total_count
                     * @return TotalCount total_count
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * plugin_list
                     */
                    std::vector<PluginSummary> m_pluginList;
                    bool m_pluginListHasBeenSet;

                    /**
                     * total_count
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEPLUGINSUMMARYLISTRESPONSE_H_

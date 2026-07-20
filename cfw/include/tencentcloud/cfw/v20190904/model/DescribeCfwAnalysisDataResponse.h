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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWANALYSISDATARESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWANALYSISDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeCfwAnalysisData返回参数结构体
                */
                class DescribeCfwAnalysisDataResponse : public AbstractModel
                {
                public:
                    DescribeCfwAnalysisDataResponse();
                    ~DescribeCfwAnalysisDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询结果。Response.Data 是 UTF-8 JSON object 字符串，调用方需要二次 JSON 解析。status 取值为 success、partial 或 error。section 查询失败时，error 只返回固定安全摘要，不包含底层服务内部信息。示例仅展示一个代表性 section；实际返回包含当前场景全部未跳过的 section；summary 包含 total_findings、high_risk_count 和 data_coverage，metadata 包含 scenario、time_range、object 和 query_stats，query_stats 包含 total_queries、successful 和 failed。
                     * @return Data 查询结果。Response.Data 是 UTF-8 JSON object 字符串，调用方需要二次 JSON 解析。status 取值为 success、partial 或 error。section 查询失败时，error 只返回固定安全摘要，不包含底层服务内部信息。示例仅展示一个代表性 section；实际返回包含当前场景全部未跳过的 section；summary 包含 total_findings、high_risk_count 和 data_coverage，metadata 包含 scenario、time_range、object 和 query_stats，query_stats 包含 total_queries、successful 和 failed。
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 查询结果。Response.Data 是 UTF-8 JSON object 字符串，调用方需要二次 JSON 解析。status 取值为 success、partial 或 error。section 查询失败时，error 只返回固定安全摘要，不包含底层服务内部信息。示例仅展示一个代表性 section；实际返回包含当前场景全部未跳过的 section；summary 包含 total_findings、high_risk_count 和 data_coverage，metadata 包含 scenario、time_range、object 和 query_stats，query_stats 包含 total_queries、successful 和 failed。
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWANALYSISDATARESPONSE_H_

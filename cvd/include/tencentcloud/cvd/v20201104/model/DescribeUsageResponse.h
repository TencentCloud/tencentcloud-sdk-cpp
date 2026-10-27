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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEUSAGERESPONSE_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEUSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/Usage.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * DescribeUsage返回参数结构体
                */
                class DescribeUsageResponse : public AbstractModel
                {
                public:
                    DescribeUsageResponse();
                    ~DescribeUsageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取检索出相关使用详情总数
                     * @return Total 检索出相关使用详情总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取查询 key，作为翻页查询入参
                     * @return QueryKey 查询 key，作为翻页查询入参
                     * 
                     */
                    std::string GetQueryKey() const;

                    /**
                     * 判断参数 QueryKey 是否已赋值
                     * @return QueryKey 是否已赋值
                     * 
                     */
                    bool QueryKeyHasBeenSet() const;

                    /**
                     * 获取使用时长详情
                     * @return UsageSet 使用时长详情
                     * 
                     */
                    std::vector<Usage> GetUsageSet() const;

                    /**
                     * 判断参数 UsageSet 是否已赋值
                     * @return UsageSet 是否已赋值
                     * 
                     */
                    bool UsageSetHasBeenSet() const;

                private:

                    /**
                     * 检索出相关使用详情总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 查询 key，作为翻页查询入参
                     */
                    std::string m_queryKey;
                    bool m_queryKeyHasBeenSet;

                    /**
                     * 使用时长详情
                     */
                    std::vector<Usage> m_usageSet;
                    bool m_usageSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEUSAGERESPONSE_H_

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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBCONFIGSRESPONSE_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBCONFIGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/JobConfig.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * DescribeJobConfigs返回参数结构体
                */
                class DescribeJobConfigsResponse : public AbstractModel
                {
                public:
                    DescribeJobConfigsResponse();
                    ~DescribeJobConfigsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总的配置版本数量
                     * @return TotalCount 总的配置版本数量
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
                     * 获取作业配置列表
                     * @return JobConfigSet 作业配置列表
                     * 
                     */
                    std::vector<JobConfig> GetJobConfigSet() const;

                    /**
                     * 判断参数 JobConfigSet 是否已赋值
                     * @return JobConfigSet 是否已赋值
                     * 
                     */
                    bool JobConfigSetHasBeenSet() const;

                private:

                    /**
                     * 总的配置版本数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 作业配置列表
                     */
                    std::vector<JobConfig> m_jobConfigSet;
                    bool m_jobConfigSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBCONFIGSRESPONSE_H_

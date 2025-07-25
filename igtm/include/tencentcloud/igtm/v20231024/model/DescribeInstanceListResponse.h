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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEINSTANCELISTRESPONSE_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEINSTANCELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/igtm/v20231024/model/Instance.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * DescribeInstanceList返回参数结构体
                */
                class DescribeInstanceListResponse : public AbstractModel
                {
                public:
                    DescribeInstanceListResponse();
                    ~DescribeInstanceListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例列表
                     * @return InstanceSet 实例列表
                     * 
                     */
                    std::vector<Instance> GetInstanceSet() const;

                    /**
                     * 判断参数 InstanceSet 是否已赋值
                     * @return InstanceSet 是否已赋值
                     * 
                     */
                    bool InstanceSetHasBeenSet() const;

                    /**
                     * 获取列表总数
                     * @return TotalCount 列表总数
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
                     * 获取是否支持系统域名接入：true支持；false不支持
                     * @return SystemAccessEnabled 是否支持系统域名接入：true支持；false不支持
                     * 
                     */
                    bool GetSystemAccessEnabled() const;

                    /**
                     * 判断参数 SystemAccessEnabled 是否已赋值
                     * @return SystemAccessEnabled 是否已赋值
                     * 
                     */
                    bool SystemAccessEnabledHasBeenSet() const;

                private:

                    /**
                     * 实例列表
                     */
                    std::vector<Instance> m_instanceSet;
                    bool m_instanceSetHasBeenSet;

                    /**
                     * 列表总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 是否支持系统域名接入：true支持；false不支持
                     */
                    bool m_systemAccessEnabled;
                    bool m_systemAccessEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEINSTANCELISTRESPONSE_H_

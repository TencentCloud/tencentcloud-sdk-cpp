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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEINSTANCEPARAMRECORDSRESPONSE_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEINSTANCEPARAMRECORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/keewidb/v20220308/model/InstanceParamHistory.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * DescribeInstanceParamRecords返回参数结构体
                */
                class DescribeInstanceParamRecordsResponse : public AbstractModel
                {
                public:
                    DescribeInstanceParamRecordsResponse();
                    ~DescribeInstanceParamRecordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取修改历史记录总数。
                     * @return TotalCount 修改历史记录总数。
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
                     * 获取修改历史记录信息。
                     * @return InstanceParamHistory 修改历史记录信息。
                     * 
                     */
                    std::vector<InstanceParamHistory> GetInstanceParamHistory() const;

                    /**
                     * 判断参数 InstanceParamHistory 是否已赋值
                     * @return InstanceParamHistory 是否已赋值
                     * 
                     */
                    bool InstanceParamHistoryHasBeenSet() const;

                private:

                    /**
                     * 修改历史记录总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 修改历史记录信息。
                     */
                    std::vector<InstanceParamHistory> m_instanceParamHistory;
                    bool m_instanceParamHistoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEINSTANCEPARAMRECORDSRESPONSE_H_

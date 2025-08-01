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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEDATAFLOWRESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEDATAFLOWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/DataFlowInfo.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeDataFlow返回参数结构体
                */
                class DescribeDataFlowResponse : public AbstractModel
                {
                public:
                    DescribeDataFlowResponse();
                    ~DescribeDataFlowResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询总数量
                     * @return TotalCount 查询总数量
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
                     * 获取无
                     * @return DataFlows 无
                     * 
                     */
                    std::vector<DataFlowInfo> GetDataFlows() const;

                    /**
                     * 判断参数 DataFlows 是否已赋值
                     * @return DataFlows 是否已赋值
                     * 
                     */
                    bool DataFlowsHasBeenSet() const;

                private:

                    /**
                     * 查询总数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 无
                     */
                    std::vector<DataFlowInfo> m_dataFlows;
                    bool m_dataFlowsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEDATAFLOWRESPONSE_H_

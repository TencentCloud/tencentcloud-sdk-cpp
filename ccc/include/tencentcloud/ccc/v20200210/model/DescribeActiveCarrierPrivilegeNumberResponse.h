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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEACTIVECARRIERPRIVILEGENUMBERRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEACTIVECARRIERPRIVILEGENUMBERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/ActiveCarrierPrivilegeNumber.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeActiveCarrierPrivilegeNumber返回参数结构体
                */
                class DescribeActiveCarrierPrivilegeNumberResponse : public AbstractModel
                {
                public:
                    DescribeActiveCarrierPrivilegeNumberResponse();
                    ~DescribeActiveCarrierPrivilegeNumberResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数量
                     * @return TotalCount 总数量
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
                     * 获取生效列表
                     * @return ActiveCarrierPrivilegeNumbers 生效列表
                     * 
                     */
                    std::vector<ActiveCarrierPrivilegeNumber> GetActiveCarrierPrivilegeNumbers() const;

                    /**
                     * 判断参数 ActiveCarrierPrivilegeNumbers 是否已赋值
                     * @return ActiveCarrierPrivilegeNumbers 是否已赋值
                     * 
                     */
                    bool ActiveCarrierPrivilegeNumbersHasBeenSet() const;

                    /**
                     * 获取待审核单号
                     * @return PendingApplicantIds 待审核单号
                     * 
                     */
                    std::vector<uint64_t> GetPendingApplicantIds() const;

                    /**
                     * 判断参数 PendingApplicantIds 是否已赋值
                     * @return PendingApplicantIds 是否已赋值
                     * 
                     */
                    bool PendingApplicantIdsHasBeenSet() const;

                private:

                    /**
                     * 总数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 生效列表
                     */
                    std::vector<ActiveCarrierPrivilegeNumber> m_activeCarrierPrivilegeNumbers;
                    bool m_activeCarrierPrivilegeNumbersHasBeenSet;

                    /**
                     * 待审核单号
                     */
                    std::vector<uint64_t> m_pendingApplicantIds;
                    bool m_pendingApplicantIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEACTIVECARRIERPRIVILEGENUMBERRESPONSE_H_

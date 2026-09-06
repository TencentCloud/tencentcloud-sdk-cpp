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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMDISASTERRECOVERGROUPQUOTARESPONSE_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMDISASTERRECOVERGROUPQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * DescribeDBCustomDisasterRecoverGroupQuota返回参数结构体
                */
                class DescribeDBCustomDisasterRecoverGroupQuotaResponse : public AbstractModel
                {
                public:
                    DescribeDBCustomDisasterRecoverGroupQuotaResponse();
                    ~DescribeDBCustomDisasterRecoverGroupQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>可创建置放群组数量的上限</p>
                     * @return GroupQuota <p>可创建置放群组数量的上限</p>
                     * 
                     */
                    int64_t GetGroupQuota() const;

                    /**
                     * 判断参数 GroupQuota 是否已赋值
                     * @return GroupQuota 是否已赋值
                     * 
                     */
                    bool GroupQuotaHasBeenSet() const;

                    /**
                     * 获取<p>已经创建的置放群组数量</p>
                     * @return CurrentNum <p>已经创建的置放群组数量</p>
                     * 
                     */
                    int64_t GetCurrentNum() const;

                    /**
                     * 判断参数 CurrentNum 是否已赋值
                     * @return CurrentNum 是否已赋值
                     * 
                     */
                    bool CurrentNumHasBeenSet() const;

                    /**
                     * 获取<p>物理机类型置放群组内节点的配额数</p>
                     * @return NodeInHostGroupQuota <p>物理机类型置放群组内节点的配额数</p>
                     * 
                     */
                    int64_t GetNodeInHostGroupQuota() const;

                    /**
                     * 判断参数 NodeInHostGroupQuota 是否已赋值
                     * @return NodeInHostGroupQuota 是否已赋值
                     * 
                     */
                    bool NodeInHostGroupQuotaHasBeenSet() const;

                private:

                    /**
                     * <p>可创建置放群组数量的上限</p>
                     */
                    int64_t m_groupQuota;
                    bool m_groupQuotaHasBeenSet;

                    /**
                     * <p>已经创建的置放群组数量</p>
                     */
                    int64_t m_currentNum;
                    bool m_currentNumHasBeenSet;

                    /**
                     * <p>物理机类型置放群组内节点的配额数</p>
                     */
                    int64_t m_nodeInHostGroupQuota;
                    bool m_nodeInHostGroupQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMDISASTERRECOVERGROUPQUOTARESPONSE_H_

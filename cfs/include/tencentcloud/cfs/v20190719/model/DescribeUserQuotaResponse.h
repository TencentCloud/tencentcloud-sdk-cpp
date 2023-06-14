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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEUSERQUOTARESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEUSERQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/UserQuota.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeUserQuota返回参数结构体
                */
                class DescribeUserQuotaResponse : public AbstractModel
                {
                public:
                    DescribeUserQuotaResponse();
                    ~DescribeUserQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取UserQuota条目总数
                     * @return TotalCount UserQuota条目总数
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
                     * 获取UserQuota条目
                     * @return UserQuotaInfo UserQuota条目
                     * 
                     */
                    std::vector<UserQuota> GetUserQuotaInfo() const;

                    /**
                     * 判断参数 UserQuotaInfo 是否已赋值
                     * @return UserQuotaInfo 是否已赋值
                     * 
                     */
                    bool UserQuotaInfoHasBeenSet() const;

                private:

                    /**
                     * UserQuota条目总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * UserQuota条目
                     */
                    std::vector<UserQuota> m_userQuotaInfo;
                    bool m_userQuotaInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEUSERQUOTARESPONSE_H_

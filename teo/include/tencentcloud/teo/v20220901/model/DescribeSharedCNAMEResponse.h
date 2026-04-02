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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESHAREDCNAMERESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESHAREDCNAMERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SharedCNAMEInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeSharedCNAME返回参数结构体
                */
                class DescribeSharedCNAMEResponse : public AbstractModel
                {
                public:
                    DescribeSharedCNAMEResponse();
                    ~DescribeSharedCNAMEResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合过滤条件的共享CNAME总数。
                     * @return TotalCount 符合过滤条件的共享CNAME总数。
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
                     * 获取共享CNAME列表明细。
                     * @return SharedCNAMEInfo 共享CNAME列表明细。
                     * 
                     */
                    std::vector<SharedCNAMEInfo> GetSharedCNAMEInfo() const;

                    /**
                     * 判断参数 SharedCNAMEInfo 是否已赋值
                     * @return SharedCNAMEInfo 是否已赋值
                     * 
                     */
                    bool SharedCNAMEInfoHasBeenSet() const;

                private:

                    /**
                     * 符合过滤条件的共享CNAME总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 共享CNAME列表明细。
                     */
                    std::vector<SharedCNAMEInfo> m_sharedCNAMEInfo;
                    bool m_sharedCNAMEInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESHAREDCNAMERESPONSE_H_

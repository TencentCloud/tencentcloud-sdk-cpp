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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETENANTCCNSRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETENANTCCNSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/CcnInstanceInfo.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeTenantCcns返回参数结构体
                */
                class DescribeTenantCcnsResponse : public AbstractModel
                {
                public:
                    DescribeTenantCcnsResponse();
                    ~DescribeTenantCcnsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取云联网（CCN）对象。
                     * @return CcnSet 云联网（CCN）对象。
                     * 
                     */
                    std::vector<CcnInstanceInfo> GetCcnSet() const;

                    /**
                     * 判断参数 CcnSet 是否已赋值
                     * @return CcnSet 是否已赋值
                     * 
                     */
                    bool CcnSetHasBeenSet() const;

                    /**
                     * 获取符合条件的对象总数。
                     * @return TotalCount 符合条件的对象总数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 云联网（CCN）对象。
                     */
                    std::vector<CcnInstanceInfo> m_ccnSet;
                    bool m_ccnSetHasBeenSet;

                    /**
                     * 符合条件的对象总数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETENANTCCNSRESPONSE_H_

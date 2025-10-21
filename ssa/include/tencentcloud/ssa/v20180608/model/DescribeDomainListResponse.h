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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEDOMAINLISTRESPONSE_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEDOMAINLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/DomainInfo.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeDomainList返回参数结构体
                */
                class DescribeDomainListResponse : public AbstractModel
                {
                public:
                    DescribeDomainListResponse();
                    ~DescribeDomainListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取无
                     * @return Total 无
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取无
                     * @return DomainInfoCollection 无
                     * 
                     */
                    std::vector<DomainInfo> GetDomainInfoCollection() const;

                    /**
                     * 判断参数 DomainInfoCollection 是否已赋值
                     * @return DomainInfoCollection 是否已赋值
                     * 
                     */
                    bool DomainInfoCollectionHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 无
                     */
                    std::vector<DomainInfo> m_domainInfoCollection;
                    bool m_domainInfoCollectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEDOMAINLISTRESPONSE_H_

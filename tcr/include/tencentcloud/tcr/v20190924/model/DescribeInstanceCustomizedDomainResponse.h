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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEINSTANCECUSTOMIZEDDOMAINRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEINSTANCECUSTOMIZEDDOMAINRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/CustomizedDomainInfo.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeInstanceCustomizedDomain返回参数结构体
                */
                class DescribeInstanceCustomizedDomainResponse : public AbstractModel
                {
                public:
                    DescribeInstanceCustomizedDomainResponse();
                    ~DescribeInstanceCustomizedDomainResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取域名信息列表
                     * @return DomainInfoList 域名信息列表
                     * 
                     */
                    std::vector<CustomizedDomainInfo> GetDomainInfoList() const;

                    /**
                     * 判断参数 DomainInfoList 是否已赋值
                     * @return DomainInfoList 是否已赋值
                     * 
                     */
                    bool DomainInfoListHasBeenSet() const;

                    /**
                     * 获取总个数
                     * @return TotalCount 总个数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 域名信息列表
                     */
                    std::vector<CustomizedDomainInfo> m_domainInfoList;
                    bool m_domainInfoListHasBeenSet;

                    /**
                     * 总个数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEINSTANCECUSTOMIZEDDOMAINRESPONSE_H_

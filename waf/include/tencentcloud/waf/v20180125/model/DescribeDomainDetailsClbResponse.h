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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINDETAILSCLBRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINDETAILSCLBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ClbDomainsInfo.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeDomainDetailsClb返回参数结构体
                */
                class DescribeDomainDetailsClbResponse : public AbstractModel
                {
                public:
                    DescribeDomainDetailsClbResponse();
                    ~DescribeDomainDetailsClbResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取clb域名详情
                     * @return DomainsClbPartInfo clb域名详情
                     * 
                     */
                    ClbDomainsInfo GetDomainsClbPartInfo() const;

                    /**
                     * 判断参数 DomainsClbPartInfo 是否已赋值
                     * @return DomainsClbPartInfo 是否已赋值
                     * 
                     */
                    bool DomainsClbPartInfoHasBeenSet() const;

                private:

                    /**
                     * clb域名详情
                     */
                    ClbDomainsInfo m_domainsClbPartInfo;
                    bool m_domainsClbPartInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINDETAILSCLBRESPONSE_H_

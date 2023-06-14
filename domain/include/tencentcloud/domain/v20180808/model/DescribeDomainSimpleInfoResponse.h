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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEDOMAINSIMPLEINFORESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEDOMAINSIMPLEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/domain/v20180808/model/DomainSimpleInfo.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeDomainSimpleInfo返回参数结构体
                */
                class DescribeDomainSimpleInfoResponse : public AbstractModel
                {
                public:
                    DescribeDomainSimpleInfoResponse();
                    ~DescribeDomainSimpleInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取域名信息
                     * @return DomainInfo 域名信息
                     * 
                     */
                    DomainSimpleInfo GetDomainInfo() const;

                    /**
                     * 判断参数 DomainInfo 是否已赋值
                     * @return DomainInfo 是否已赋值
                     * 
                     */
                    bool DomainInfoHasBeenSet() const;

                    /**
                     * 获取账号ID
                     * @return Uin 账号ID
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * 域名信息
                     */
                    DomainSimpleInfo m_domainInfo;
                    bool m_domainInfoHasBeenSet;

                    /**
                     * 账号ID
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEDOMAINSIMPLEINFORESPONSE_H_

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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_RESERVEDPREDOMAINSRESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_RESERVEDPREDOMAINSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/domain/v20180808/model/FailReservedDomainInfo.h>
#include <tencentcloud/domain/v20180808/model/SucDomainInfo.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * ReservedPreDomains返回参数结构体
                */
                class ReservedPreDomainsResponse : public AbstractModel
                {
                public:
                    ReservedPreDomainsResponse();
                    ~ReservedPreDomainsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取预定成功域名列表
                     * @return SucDomainList 预定成功域名列表
                     * 
                     */
                    std::vector<std::string> GetSucDomainList() const;

                    /**
                     * 判断参数 SucDomainList 是否已赋值
                     * @return SucDomainList 是否已赋值
                     * 
                     */
                    bool SucDomainListHasBeenSet() const;

                    /**
                     * 获取预定失败域名列表
                     * @return FailDomainList 预定失败域名列表
                     * 
                     */
                    std::vector<FailReservedDomainInfo> GetFailDomainList() const;

                    /**
                     * 判断参数 FailDomainList 是否已赋值
                     * @return FailDomainList 是否已赋值
                     * 
                     */
                    bool FailDomainListHasBeenSet() const;

                    /**
                     * 获取域名预定成功详情
                     * @return SucDomains 域名预定成功详情
                     * 
                     */
                    std::vector<SucDomainInfo> GetSucDomains() const;

                    /**
                     * 判断参数 SucDomains 是否已赋值
                     * @return SucDomains 是否已赋值
                     * 
                     */
                    bool SucDomainsHasBeenSet() const;

                private:

                    /**
                     * 预定成功域名列表
                     */
                    std::vector<std::string> m_sucDomainList;
                    bool m_sucDomainListHasBeenSet;

                    /**
                     * 预定失败域名列表
                     */
                    std::vector<FailReservedDomainInfo> m_failDomainList;
                    bool m_failDomainListHasBeenSet;

                    /**
                     * 域名预定成功详情
                     */
                    std::vector<SucDomainInfo> m_sucDomains;
                    bool m_sucDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_RESERVEDPREDOMAINSRESPONSE_H_

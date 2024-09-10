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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINSHAREUSERLISTRESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINSHAREUSERLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/DomainShareUserInfo.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeDomainShareUserList返回参数结构体
                */
                class DescribeDomainShareUserListResponse : public AbstractModel
                {
                public:
                    DescribeDomainShareUserListResponse();
                    ~DescribeDomainShareUserListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取域名套餐信息
                     * @return DomainShareList 域名套餐信息
                     * 
                     */
                    std::vector<DomainShareUserInfo> GetDomainShareList() const;

                    /**
                     * 判断参数 DomainShareList 是否已赋值
                     * @return DomainShareList 是否已赋值
                     * 
                     */
                    bool DomainShareListHasBeenSet() const;

                private:

                    /**
                     * 域名套餐信息
                     */
                    std::vector<DomainShareUserInfo> m_domainShareList;
                    bool m_domainShareListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINSHAREUSERLISTRESPONSE_H_

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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DELETEGLOBALDOMAINDNSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DELETEGLOBALDOMAINDNSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DeleteGlobalDomainDns请求参数结构体
                */
                class DeleteGlobalDomainDnsRequest : public AbstractModel
                {
                public:
                    DeleteGlobalDomainDnsRequest();
                    ~DeleteGlobalDomainDnsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取解析记录的ID
                     * @return DnsRecordId 解析记录的ID
                     * 
                     */
                    uint64_t GetDnsRecordId() const;

                    /**
                     * 设置解析记录的ID
                     * @param _dnsRecordId 解析记录的ID
                     * 
                     */
                    void SetDnsRecordId(const uint64_t& _dnsRecordId);

                    /**
                     * 判断参数 DnsRecordId 是否已赋值
                     * @return DnsRecordId 是否已赋值
                     * 
                     */
                    bool DnsRecordIdHasBeenSet() const;

                private:

                    /**
                     * 解析记录的ID
                     */
                    uint64_t m_dnsRecordId;
                    bool m_dnsRecordIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DELETEGLOBALDOMAINDNSREQUEST_H_

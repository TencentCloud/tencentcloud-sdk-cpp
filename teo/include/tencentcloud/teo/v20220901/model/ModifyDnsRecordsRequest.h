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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDNSRECORDSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDNSRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DnsRecord.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyDnsRecords请求参数结构体
                */
                class ModifyDnsRecordsRequest : public AbstractModel
                {
                public:
                    ModifyDnsRecordsRequest();
                    ~ModifyDnsRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID 。
                     * @return ZoneId 站点 ID 。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID 。
                     * @param _zoneId 站点 ID 。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取DNS 记录修改数据列表，一次最多修改100条。
                     * @return DnsRecords DNS 记录修改数据列表，一次最多修改100条。
                     * 
                     */
                    std::vector<DnsRecord> GetDnsRecords() const;

                    /**
                     * 设置DNS 记录修改数据列表，一次最多修改100条。
                     * @param _dnsRecords DNS 记录修改数据列表，一次最多修改100条。
                     * 
                     */
                    void SetDnsRecords(const std::vector<DnsRecord>& _dnsRecords);

                    /**
                     * 判断参数 DnsRecords 是否已赋值
                     * @return DnsRecords 是否已赋值
                     * 
                     */
                    bool DnsRecordsHasBeenSet() const;

                private:

                    /**
                     * 站点 ID 。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * DNS 记录修改数据列表，一次最多修改100条。
                     */
                    std::vector<DnsRecord> m_dnsRecords;
                    bool m_dnsRecordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDNSRECORDSREQUEST_H_

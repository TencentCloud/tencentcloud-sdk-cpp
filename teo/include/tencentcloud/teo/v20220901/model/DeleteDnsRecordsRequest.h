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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DELETEDNSRECORDSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DELETEDNSRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DeleteDnsRecords请求参数结构体
                */
                class DeleteDnsRecordsRequest : public AbstractModel
                {
                public:
                    DeleteDnsRecordsRequest();
                    ~DeleteDnsRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待删除记录所属站点 ID。
                     * @return ZoneId 待删除记录所属站点 ID。
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置待删除记录所属站点 ID。
                     * @param ZoneId 待删除记录所属站点 ID。
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取待删除记录 ID。
                     * @return DnsRecordIds 待删除记录 ID。
                     */
                    std::vector<std::string> GetDnsRecordIds() const;

                    /**
                     * 设置待删除记录 ID。
                     * @param DnsRecordIds 待删除记录 ID。
                     */
                    void SetDnsRecordIds(const std::vector<std::string>& _dnsRecordIds);

                    /**
                     * 判断参数 DnsRecordIds 是否已赋值
                     * @return DnsRecordIds 是否已赋值
                     */
                    bool DnsRecordIdsHasBeenSet() const;

                private:

                    /**
                     * 待删除记录所属站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 待删除记录 ID。
                     */
                    std::vector<std::string> m_dnsRecordIds;
                    bool m_dnsRecordIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DELETEDNSRECORDSREQUEST_H_

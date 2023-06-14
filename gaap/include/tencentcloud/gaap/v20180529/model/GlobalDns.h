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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_GLOBALDNS_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_GLOBALDNS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/CountryAreaMap.h>
#include <tencentcloud/gaap/v20180529/model/ProxyAccessInfo.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 统一域名解析的DNS记录
                */
                class GlobalDns : public AbstractModel
                {
                public:
                    GlobalDns();
                    ~GlobalDns() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取解析记录ID
                     * @return DnsRecordId 解析记录ID
                     * 
                     */
                    uint64_t GetDnsRecordId() const;

                    /**
                     * 设置解析记录ID
                     * @param _dnsRecordId 解析记录ID
                     * 
                     */
                    void SetDnsRecordId(const uint64_t& _dnsRecordId);

                    /**
                     * 判断参数 DnsRecordId 是否已赋值
                     * @return DnsRecordId 是否已赋值
                     * 
                     */
                    bool DnsRecordIdHasBeenSet() const;

                    /**
                     * 获取域名就近接入地域信息列表
                     * @return CountryAreaList 域名就近接入地域信息列表
                     * 
                     */
                    std::vector<CountryAreaMap> GetCountryAreaList() const;

                    /**
                     * 设置域名就近接入地域信息列表
                     * @param _countryAreaList 域名就近接入地域信息列表
                     * 
                     */
                    void SetCountryAreaList(const std::vector<CountryAreaMap>& _countryAreaList);

                    /**
                     * 判断参数 CountryAreaList 是否已赋值
                     * @return CountryAreaList 是否已赋值
                     * 
                     */
                    bool CountryAreaListHasBeenSet() const;

                    /**
                     * 获取域名解析对应的通道接入点信息列表
                     * @return AccessList 域名解析对应的通道接入点信息列表
                     * 
                     */
                    std::vector<ProxyAccessInfo> GetAccessList() const;

                    /**
                     * 设置域名解析对应的通道接入点信息列表
                     * @param _accessList 域名解析对应的通道接入点信息列表
                     * 
                     */
                    void SetAccessList(const std::vector<ProxyAccessInfo>& _accessList);

                    /**
                     * 判断参数 AccessList 是否已赋值
                     * @return AccessList 是否已赋值
                     * 
                     */
                    bool AccessListHasBeenSet() const;

                    /**
                     * 获取解析状态：1表示运行中，2表示创建中，3表示修改中，4表示删除中
                     * @return Status 解析状态：1表示运行中，2表示创建中，3表示修改中，4表示删除中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置解析状态：1表示运行中，2表示创建中，3表示修改中，4表示删除中
                     * @param _status 解析状态：1表示运行中，2表示创建中，3表示修改中，4表示删除中
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 解析记录ID
                     */
                    uint64_t m_dnsRecordId;
                    bool m_dnsRecordIdHasBeenSet;

                    /**
                     * 域名就近接入地域信息列表
                     */
                    std::vector<CountryAreaMap> m_countryAreaList;
                    bool m_countryAreaListHasBeenSet;

                    /**
                     * 域名解析对应的通道接入点信息列表
                     */
                    std::vector<ProxyAccessInfo> m_accessList;
                    bool m_accessListHasBeenSet;

                    /**
                     * 解析状态：1表示运行中，2表示创建中，3表示修改中，4表示删除中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_GLOBALDNS_H_

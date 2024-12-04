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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEPRIVATEZONERECORDREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEPRIVATEZONERECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * CreatePrivateZoneRecord请求参数结构体
                */
                class CreatePrivateZoneRecordRequest : public AbstractModel
                {
                public:
                    CreatePrivateZoneRecordRequest();
                    ~CreatePrivateZoneRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私有域ID
                     * @return ZoneId 私有域ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置私有域ID
                     * @param _zoneId 私有域ID
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
                     * 获取记录类型，可选的记录类型为："A", "AAAA", "CNAME", "MX", "TXT", "PTR"
                     * @return RecordType 记录类型，可选的记录类型为："A", "AAAA", "CNAME", "MX", "TXT", "PTR"
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置记录类型，可选的记录类型为："A", "AAAA", "CNAME", "MX", "TXT", "PTR"
                     * @param _recordType 记录类型，可选的记录类型为："A", "AAAA", "CNAME", "MX", "TXT", "PTR"
                     * 
                     */
                    void SetRecordType(const std::string& _recordType);

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     * 
                     */
                    bool RecordTypeHasBeenSet() const;

                    /**
                     * 获取子域名，例如 "www", "m", "@"
                     * @return SubDomain 子域名，例如 "www", "m", "@"
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置子域名，例如 "www", "m", "@"
                     * @param _subDomain 子域名，例如 "www", "m", "@"
                     * 
                     */
                    void SetSubDomain(const std::string& _subDomain);

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     * 
                     */
                    bool SubDomainHasBeenSet() const;

                    /**
                     * 获取记录值，例如 IP：192.168.10.2，CNAME：cname.qcloud.com.，MX：mail.qcloud.com.
                     * @return RecordValue 记录值，例如 IP：192.168.10.2，CNAME：cname.qcloud.com.，MX：mail.qcloud.com.
                     * 
                     */
                    std::string GetRecordValue() const;

                    /**
                     * 设置记录值，例如 IP：192.168.10.2，CNAME：cname.qcloud.com.，MX：mail.qcloud.com.
                     * @param _recordValue 记录值，例如 IP：192.168.10.2，CNAME：cname.qcloud.com.，MX：mail.qcloud.com.
                     * 
                     */
                    void SetRecordValue(const std::string& _recordValue);

                    /**
                     * 判断参数 RecordValue 是否已赋值
                     * @return RecordValue 是否已赋值
                     * 
                     */
                    bool RecordValueHasBeenSet() const;

                    /**
                     * 获取记录权重，值为1-100
                     * @return Weight 记录权重，值为1-100
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置记录权重，值为1-100
                     * @param _weight 记录权重，值为1-100
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取MX优先级：记录类型为MX时必填。取值范围：5,10,15,20,30,40,50
                     * @return MX MX优先级：记录类型为MX时必填。取值范围：5,10,15,20,30,40,50
                     * 
                     */
                    int64_t GetMX() const;

                    /**
                     * 设置MX优先级：记录类型为MX时必填。取值范围：5,10,15,20,30,40,50
                     * @param _mX MX优先级：记录类型为MX时必填。取值范围：5,10,15,20,30,40,50
                     * 
                     */
                    void SetMX(const int64_t& _mX);

                    /**
                     * 判断参数 MX 是否已赋值
                     * @return MX 是否已赋值
                     * 
                     */
                    bool MXHasBeenSet() const;

                    /**
                     * 获取记录缓存时间，数值越小生效越快，取值1-86400s, 默认 600
                     * @return TTL 记录缓存时间，数值越小生效越快，取值1-86400s, 默认 600
                     * 
                     */
                    int64_t GetTTL() const;

                    /**
                     * 设置记录缓存时间，数值越小生效越快，取值1-86400s, 默认 600
                     * @param _tTL 记录缓存时间，数值越小生效越快，取值1-86400s, 默认 600
                     * 
                     */
                    void SetTTL(const int64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     * 
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 私有域ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 记录类型，可选的记录类型为："A", "AAAA", "CNAME", "MX", "TXT", "PTR"
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * 子域名，例如 "www", "m", "@"
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * 记录值，例如 IP：192.168.10.2，CNAME：cname.qcloud.com.，MX：mail.qcloud.com.
                     */
                    std::string m_recordValue;
                    bool m_recordValueHasBeenSet;

                    /**
                     * 记录权重，值为1-100
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * MX优先级：记录类型为MX时必填。取值范围：5,10,15,20,30,40,50
                     */
                    int64_t m_mX;
                    bool m_mXHasBeenSet;

                    /**
                     * 记录缓存时间，数值越小生效越快，取值1-86400s, 默认 600
                     */
                    int64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEPRIVATEZONERECORDREQUEST_H_

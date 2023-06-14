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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYPRIVATEZONEREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYPRIVATEZONEREQUEST_H_

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
                * ModifyPrivateZone请求参数结构体
                */
                class ModifyPrivateZoneRequest : public AbstractModel
                {
                public:
                    ModifyPrivateZoneRequest();
                    ~ModifyPrivateZoneRequest() = default;
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

                    /**
                     * 获取是否开启子域名递归, ENABLED， DISABLED
                     * @return DnsForwardStatus 是否开启子域名递归, ENABLED， DISABLED
                     * 
                     */
                    std::string GetDnsForwardStatus() const;

                    /**
                     * 设置是否开启子域名递归, ENABLED， DISABLED
                     * @param _dnsForwardStatus 是否开启子域名递归, ENABLED， DISABLED
                     * 
                     */
                    void SetDnsForwardStatus(const std::string& _dnsForwardStatus);

                    /**
                     * 判断参数 DnsForwardStatus 是否已赋值
                     * @return DnsForwardStatus 是否已赋值
                     * 
                     */
                    bool DnsForwardStatusHasBeenSet() const;

                    /**
                     * 获取是否开启CNAME加速：ENABLED， DISABLED
                     * @return CnameSpeedupStatus 是否开启CNAME加速：ENABLED， DISABLED
                     * 
                     */
                    std::string GetCnameSpeedupStatus() const;

                    /**
                     * 设置是否开启CNAME加速：ENABLED， DISABLED
                     * @param _cnameSpeedupStatus 是否开启CNAME加速：ENABLED， DISABLED
                     * 
                     */
                    void SetCnameSpeedupStatus(const std::string& _cnameSpeedupStatus);

                    /**
                     * 判断参数 CnameSpeedupStatus 是否已赋值
                     * @return CnameSpeedupStatus 是否已赋值
                     * 
                     */
                    bool CnameSpeedupStatusHasBeenSet() const;

                private:

                    /**
                     * 私有域ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 是否开启子域名递归, ENABLED， DISABLED
                     */
                    std::string m_dnsForwardStatus;
                    bool m_dnsForwardStatusHasBeenSet;

                    /**
                     * 是否开启CNAME加速：ENABLED， DISABLED
                     */
                    std::string m_cnameSpeedupStatus;
                    bool m_cnameSpeedupStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYPRIVATEZONEREQUEST_H_

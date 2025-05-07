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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEUNPREDOMAINDETAILRESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEUNPREDOMAINDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeUnPreDomainDetail返回参数结构体
                */
                class DescribeUnPreDomainDetailResponse : public AbstractModel
                {
                public:
                    DescribeUnPreDomainDetailResponse();
                    ~DescribeUnPreDomainDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取预约人数
                     * @return PreCount 预约人数
                     * 
                     */
                    int64_t GetPreCount() const;

                    /**
                     * 判断参数 PreCount 是否已赋值
                     * @return PreCount 是否已赋值
                     * 
                     */
                    bool PreCountHasBeenSet() const;

                    /**
                     * 获取域名注册时间 
格式:YYYY-MM-DD HH:mm:ss
                     * @return RegTime 域名注册时间 
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetRegTime() const;

                    /**
                     * 判断参数 RegTime 是否已赋值
                     * @return RegTime 是否已赋值
                     * 
                     */
                    bool RegTimeHasBeenSet() const;

                    /**
                     * 获取域名删除时间 
格式:YYYY-MM-DD HH:mm:ss
                     * @return DeleteTime 域名删除时间 
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetDeleteTime() const;

                    /**
                     * 判断参数 DeleteTime 是否已赋值
                     * @return DeleteTime 是否已赋值
                     * 
                     */
                    bool DeleteTimeHasBeenSet() const;

                    /**
                     * 获取到期时间 
格式:YYYY-MM-DD HH:mm:ss
                     * @return ExpireTime 到期时间 
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取域名状态
 bid：出价
noAction：无法操作
                     * @return Status 域名状态
 bid：出价
noAction：无法操作
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取域名价格 单位元
                     * @return CurrentPrice 域名价格 单位元
                     * 
                     */
                    double GetCurrentPrice() const;

                    /**
                     * 判断参数 CurrentPrice 是否已赋值
                     * @return CurrentPrice 是否已赋值
                     * 
                     */
                    bool CurrentPriceHasBeenSet() const;

                    /**
                     * 获取域名保证金 单位元
                     * @return AppointBondPrice 域名保证金 单位元
                     * 
                     */
                    double GetAppointBondPrice() const;

                    /**
                     * 判断参数 AppointBondPrice 是否已赋值
                     * @return AppointBondPrice 是否已赋值
                     * 
                     */
                    bool AppointBondPriceHasBeenSet() const;

                    /**
                     * 获取是否已经预约
                     * @return IsAppoint 是否已经预约
                     * 
                     */
                    bool GetIsAppoint() const;

                    /**
                     * 判断参数 IsAppoint 是否已赋值
                     * @return IsAppoint 是否已赋值
                     * 
                     */
                    bool IsAppointHasBeenSet() const;

                    /**
                     * 获取业务ID
                     * @return BusinessId 业务ID
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取是否为原持有者域名
                     * @return IsDomainUser 是否为原持有者域名
                     * 
                     */
                    bool GetIsDomainUser() const;

                    /**
                     * 判断参数 IsDomainUser 是否已赋值
                     * @return IsDomainUser 是否已赋值
                     * 
                     */
                    bool IsDomainUserHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 预约人数
                     */
                    int64_t m_preCount;
                    bool m_preCountHasBeenSet;

                    /**
                     * 域名注册时间 
格式:YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_regTime;
                    bool m_regTimeHasBeenSet;

                    /**
                     * 域名删除时间 
格式:YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                    /**
                     * 到期时间 
格式:YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 域名状态
 bid：出价
noAction：无法操作
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 域名价格 单位元
                     */
                    double m_currentPrice;
                    bool m_currentPriceHasBeenSet;

                    /**
                     * 域名保证金 单位元
                     */
                    double m_appointBondPrice;
                    bool m_appointBondPriceHasBeenSet;

                    /**
                     * 是否已经预约
                     */
                    bool m_isAppoint;
                    bool m_isAppointHasBeenSet;

                    /**
                     * 业务ID
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * 是否为原持有者域名
                     */
                    bool m_isDomainUser;
                    bool m_isDomainUserHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEUNPREDOMAINDETAILRESPONSE_H_

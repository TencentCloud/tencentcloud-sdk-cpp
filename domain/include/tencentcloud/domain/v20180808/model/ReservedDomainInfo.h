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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_RESERVEDDOMAININFO_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_RESERVEDDOMAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 查询预释放预约列表域名详情
                */
                class ReservedDomainInfo : public AbstractModel
                {
                public:
                    ReservedDomainInfo();
                    ~ReservedDomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取注册时间
                     * @return RegTime 注册时间
                     * 
                     */
                    std::string GetRegTime() const;

                    /**
                     * 设置注册时间
                     * @param _regTime 注册时间
                     * 
                     */
                    void SetRegTime(const std::string& _regTime);

                    /**
                     * 判断参数 RegTime 是否已赋值
                     * @return RegTime 是否已赋值
                     * 
                     */
                    bool RegTimeHasBeenSet() const;

                    /**
                     * 获取到期时间
                     * @return ExpireTime 到期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置到期时间
                     * @param _expireTime 到期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取续费时间结束
                     * @return RenewEndTime 续费时间结束
                     * 
                     */
                    std::string GetRenewEndTime() const;

                    /**
                     * 设置续费时间结束
                     * @param _renewEndTime 续费时间结束
                     * 
                     */
                    void SetRenewEndTime(const std::string& _renewEndTime);

                    /**
                     * 判断参数 RenewEndTime 是否已赋值
                     * @return RenewEndTime 是否已赋值
                     * 
                     */
                    bool RenewEndTimeHasBeenSet() const;

                    /**
                     * 获取赎回结束时间
                     * @return RestoreEndTime 赎回结束时间
                     * 
                     */
                    std::string GetRestoreEndTime() const;

                    /**
                     * 设置赎回结束时间
                     * @param _restoreEndTime 赎回结束时间
                     * 
                     */
                    void SetRestoreEndTime(const std::string& _restoreEndTime);

                    /**
                     * 判断参数 RestoreEndTime 是否已赋值
                     * @return RestoreEndTime 是否已赋值
                     * 
                     */
                    bool RestoreEndTimeHasBeenSet() const;

                    /**
                     * 获取域名预约结束时间
                     * @return ReservedEndTime 域名预约结束时间
                     * 
                     */
                    std::string GetReservedEndTime() const;

                    /**
                     * 设置域名预约结束时间
                     * @param _reservedEndTime 域名预约结束时间
                     * 
                     */
                    void SetReservedEndTime(const std::string& _reservedEndTime);

                    /**
                     * 判断参数 ReservedEndTime 是否已赋值
                     * @return ReservedEndTime 是否已赋值
                     * 
                     */
                    bool ReservedEndTimeHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 注册时间
                     */
                    std::string m_regTime;
                    bool m_regTimeHasBeenSet;

                    /**
                     * 到期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 续费时间结束
                     */
                    std::string m_renewEndTime;
                    bool m_renewEndTimeHasBeenSet;

                    /**
                     * 赎回结束时间
                     */
                    std::string m_restoreEndTime;
                    bool m_restoreEndTimeHasBeenSet;

                    /**
                     * 域名预约结束时间
                     */
                    std::string m_reservedEndTime;
                    bool m_reservedEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_RESERVEDDOMAININFO_H_

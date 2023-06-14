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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEATTACKOVERVIEWREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEATTACKOVERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeAttackOverview请求参数结构体
                */
                class DescribeAttackOverviewRequest : public AbstractModel
                {
                public:
                    DescribeAttackOverviewRequest();
                    ~DescribeAttackOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询开始时间
                     * @return FromTime 查询开始时间
                     * 
                     */
                    std::string GetFromTime() const;

                    /**
                     * 设置查询开始时间
                     * @param _fromTime 查询开始时间
                     * 
                     */
                    void SetFromTime(const std::string& _fromTime);

                    /**
                     * 判断参数 FromTime 是否已赋值
                     * @return FromTime 是否已赋值
                     * 
                     */
                    bool FromTimeHasBeenSet() const;

                    /**
                     * 获取查询结束时间
                     * @return ToTime 查询结束时间
                     * 
                     */
                    std::string GetToTime() const;

                    /**
                     * 设置查询结束时间
                     * @param _toTime 查询结束时间
                     * 
                     */
                    void SetToTime(const std::string& _toTime);

                    /**
                     * 判断参数 ToTime 是否已赋值
                     * @return ToTime 是否已赋值
                     * 
                     */
                    bool ToTimeHasBeenSet() const;

                    /**
                     * 获取客户的Appid
                     * @return Appid 客户的Appid
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置客户的Appid
                     * @param _appid 客户的Appid
                     * 
                     */
                    void SetAppid(const uint64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取被查询的域名
                     * @return Domain 被查询的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置被查询的域名
                     * @param _domain 被查询的域名
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
                     * 获取只有两个值有效，sparta-waf，clb-waf，不传则不过滤
                     * @return Edition 只有两个值有效，sparta-waf，clb-waf，不传则不过滤
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置只有两个值有效，sparta-waf，clb-waf，不传则不过滤
                     * @param _edition 只有两个值有效，sparta-waf，clb-waf，不传则不过滤
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取WAF实例ID，不传则不过滤
                     * @return InstanceID WAF实例ID，不传则不过滤
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置WAF实例ID，不传则不过滤
                     * @param _instanceID WAF实例ID，不传则不过滤
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                private:

                    /**
                     * 查询开始时间
                     */
                    std::string m_fromTime;
                    bool m_fromTimeHasBeenSet;

                    /**
                     * 查询结束时间
                     */
                    std::string m_toTime;
                    bool m_toTimeHasBeenSet;

                    /**
                     * 客户的Appid
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * 被查询的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 只有两个值有效，sparta-waf，clb-waf，不传则不过滤
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * WAF实例ID，不传则不过滤
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEATTACKOVERVIEWREQUEST_H_

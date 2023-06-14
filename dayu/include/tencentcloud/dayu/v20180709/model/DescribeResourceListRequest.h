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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBERESOURCELISTREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBERESOURCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/OrderBy.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeResourceList请求参数结构体
                */
                class DescribeResourceListRequest : public AbstractModel
                {
                public:
                    DescribeResourceListRequest();
                    ~DescribeResourceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgp表示独享包；bgp-multip表示共享包；bgpip表示高防IP；net表示高防IP专业版）
                     * @return Business 大禹子产品代号（bgp表示独享包；bgp-multip表示共享包；bgpip表示高防IP；net表示高防IP专业版）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgp表示独享包；bgp-multip表示共享包；bgpip表示高防IP；net表示高防IP专业版）
                     * @param _business 大禹子产品代号（bgp表示独享包；bgp-multip表示共享包；bgpip表示高防IP；net表示高防IP专业版）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取地域码搜索，可选，当不指定地域时空数组，当指定地域时，填地域码。例如：["gz", "sh"]
                     * @return RegionList 地域码搜索，可选，当不指定地域时空数组，当指定地域时，填地域码。例如：["gz", "sh"]
                     * 
                     */
                    std::vector<std::string> GetRegionList() const;

                    /**
                     * 设置地域码搜索，可选，当不指定地域时空数组，当指定地域时，填地域码。例如：["gz", "sh"]
                     * @param _regionList 地域码搜索，可选，当不指定地域时空数组，当指定地域时，填地域码。例如：["gz", "sh"]
                     * 
                     */
                    void SetRegionList(const std::vector<std::string>& _regionList);

                    /**
                     * 判断参数 RegionList 是否已赋值
                     * @return RegionList 是否已赋值
                     * 
                     */
                    bool RegionListHasBeenSet() const;

                    /**
                     * 获取线路搜索，可选，只有当获取高防IP资源列表是可以选填，取值为[1（BGP线路），2（南京电信），3（南京联通），99（第三方合作线路）]，当获取其他产品时请填空数组；
                     * @return Line 线路搜索，可选，只有当获取高防IP资源列表是可以选填，取值为[1（BGP线路），2（南京电信），3（南京联通），99（第三方合作线路）]，当获取其他产品时请填空数组；
                     * 
                     */
                    std::vector<uint64_t> GetLine() const;

                    /**
                     * 设置线路搜索，可选，只有当获取高防IP资源列表是可以选填，取值为[1（BGP线路），2（南京电信），3（南京联通），99（第三方合作线路）]，当获取其他产品时请填空数组；
                     * @param _line 线路搜索，可选，只有当获取高防IP资源列表是可以选填，取值为[1（BGP线路），2（南京电信），3（南京联通），99（第三方合作线路）]，当获取其他产品时请填空数组；
                     * 
                     */
                    void SetLine(const std::vector<uint64_t>& _line);

                    /**
                     * 判断参数 Line 是否已赋值
                     * @return Line 是否已赋值
                     * 
                     */
                    bool LineHasBeenSet() const;

                    /**
                     * 获取资源ID搜索，可选，当不为空数组时表示获取指定资源的资源列表；
                     * @return IdList 资源ID搜索，可选，当不为空数组时表示获取指定资源的资源列表；
                     * 
                     */
                    std::vector<std::string> GetIdList() const;

                    /**
                     * 设置资源ID搜索，可选，当不为空数组时表示获取指定资源的资源列表；
                     * @param _idList 资源ID搜索，可选，当不为空数组时表示获取指定资源的资源列表；
                     * 
                     */
                    void SetIdList(const std::vector<std::string>& _idList);

                    /**
                     * 判断参数 IdList 是否已赋值
                     * @return IdList 是否已赋值
                     * 
                     */
                    bool IdListHasBeenSet() const;

                    /**
                     * 获取资源名称搜索，可选，当不为空字符串时表示按名称搜索资源；
                     * @return Name 资源名称搜索，可选，当不为空字符串时表示按名称搜索资源；
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置资源名称搜索，可选，当不为空字符串时表示按名称搜索资源；
                     * @param _name 资源名称搜索，可选，当不为空字符串时表示按名称搜索资源；
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取IP搜索列表，可选，当不为空时表示按照IP搜索资源；
                     * @return IpList IP搜索列表，可选，当不为空时表示按照IP搜索资源；
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置IP搜索列表，可选，当不为空时表示按照IP搜索资源；
                     * @param _ipList IP搜索列表，可选，当不为空时表示按照IP搜索资源；
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取资源状态搜索列表，可选，取值为[0（运行中）, 1（清洗中）, 2（封堵中）]，当填空数组时不进行状态搜索；
                     * @return Status 资源状态搜索列表，可选，取值为[0（运行中）, 1（清洗中）, 2（封堵中）]，当填空数组时不进行状态搜索；
                     * 
                     */
                    std::vector<uint64_t> GetStatus() const;

                    /**
                     * 设置资源状态搜索列表，可选，取值为[0（运行中）, 1（清洗中）, 2（封堵中）]，当填空数组时不进行状态搜索；
                     * @param _status 资源状态搜索列表，可选，取值为[0（运行中）, 1（清洗中）, 2（封堵中）]，当填空数组时不进行状态搜索；
                     * 
                     */
                    void SetStatus(const std::vector<uint64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取即将到期搜索；可选，取值为[0（不搜索），1（搜索即将到期的资源）]
                     * @return Expire 即将到期搜索；可选，取值为[0（不搜索），1（搜索即将到期的资源）]
                     * 
                     */
                    uint64_t GetExpire() const;

                    /**
                     * 设置即将到期搜索；可选，取值为[0（不搜索），1（搜索即将到期的资源）]
                     * @param _expire 即将到期搜索；可选，取值为[0（不搜索），1（搜索即将到期的资源）]
                     * 
                     */
                    void SetExpire(const uint64_t& _expire);

                    /**
                     * 判断参数 Expire 是否已赋值
                     * @return Expire 是否已赋值
                     * 
                     */
                    bool ExpireHasBeenSet() const;

                    /**
                     * 获取排序字段，可选
                     * @return OderBy 排序字段，可选
                     * 
                     */
                    std::vector<OrderBy> GetOderBy() const;

                    /**
                     * 设置排序字段，可选
                     * @param _oderBy 排序字段，可选
                     * 
                     */
                    void SetOderBy(const std::vector<OrderBy>& _oderBy);

                    /**
                     * 判断参数 OderBy 是否已赋值
                     * @return OderBy 是否已赋值
                     * 
                     */
                    bool OderByHasBeenSet() const;

                    /**
                     * 获取一页条数，填0表示不分页
                     * @return Limit 一页条数，填0表示不分页
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置一页条数，填0表示不分页
                     * @param _limit 一页条数，填0表示不分页
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取页起始偏移，取值为(页码-1)*一页条数
                     * @return Offset 页起始偏移，取值为(页码-1)*一页条数
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置页起始偏移，取值为(页码-1)*一页条数
                     * @param _offset 页起始偏移，取值为(页码-1)*一页条数
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取高防IP专业版资源的CNAME，可选，只对高防IP专业版资源列表有效；
                     * @return CName 高防IP专业版资源的CNAME，可选，只对高防IP专业版资源列表有效；
                     * 
                     */
                    std::string GetCName() const;

                    /**
                     * 设置高防IP专业版资源的CNAME，可选，只对高防IP专业版资源列表有效；
                     * @param _cName 高防IP专业版资源的CNAME，可选，只对高防IP专业版资源列表有效；
                     * 
                     */
                    void SetCName(const std::string& _cName);

                    /**
                     * 判断参数 CName 是否已赋值
                     * @return CName 是否已赋值
                     * 
                     */
                    bool CNameHasBeenSet() const;

                    /**
                     * 获取高防IP专业版资源的域名，可选，只对高防IP专业版资源列表有效；
                     * @return Domain 高防IP专业版资源的域名，可选，只对高防IP专业版资源列表有效；
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置高防IP专业版资源的域名，可选，只对高防IP专业版资源列表有效；
                     * @param _domain 高防IP专业版资源的域名，可选，只对高防IP专业版资源列表有效；
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgp表示独享包；bgp-multip表示共享包；bgpip表示高防IP；net表示高防IP专业版）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 地域码搜索，可选，当不指定地域时空数组，当指定地域时，填地域码。例如：["gz", "sh"]
                     */
                    std::vector<std::string> m_regionList;
                    bool m_regionListHasBeenSet;

                    /**
                     * 线路搜索，可选，只有当获取高防IP资源列表是可以选填，取值为[1（BGP线路），2（南京电信），3（南京联通），99（第三方合作线路）]，当获取其他产品时请填空数组；
                     */
                    std::vector<uint64_t> m_line;
                    bool m_lineHasBeenSet;

                    /**
                     * 资源ID搜索，可选，当不为空数组时表示获取指定资源的资源列表；
                     */
                    std::vector<std::string> m_idList;
                    bool m_idListHasBeenSet;

                    /**
                     * 资源名称搜索，可选，当不为空字符串时表示按名称搜索资源；
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * IP搜索列表，可选，当不为空时表示按照IP搜索资源；
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * 资源状态搜索列表，可选，取值为[0（运行中）, 1（清洗中）, 2（封堵中）]，当填空数组时不进行状态搜索；
                     */
                    std::vector<uint64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 即将到期搜索；可选，取值为[0（不搜索），1（搜索即将到期的资源）]
                     */
                    uint64_t m_expire;
                    bool m_expireHasBeenSet;

                    /**
                     * 排序字段，可选
                     */
                    std::vector<OrderBy> m_oderBy;
                    bool m_oderByHasBeenSet;

                    /**
                     * 一页条数，填0表示不分页
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 页起始偏移，取值为(页码-1)*一页条数
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 高防IP专业版资源的CNAME，可选，只对高防IP专业版资源列表有效；
                     */
                    std::string m_cName;
                    bool m_cNameHasBeenSet;

                    /**
                     * 高防IP专业版资源的域名，可选，只对高防IP专业版资源列表有效；
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBERESOURCELISTREQUEST_H_

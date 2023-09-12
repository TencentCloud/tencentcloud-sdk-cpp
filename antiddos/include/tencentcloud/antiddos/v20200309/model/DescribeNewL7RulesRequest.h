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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBENEWL7RULESREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBENEWL7RULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeNewL7Rules请求参数结构体
                */
                class DescribeNewL7RulesRequest : public AbstractModel
                {
                public:
                    DescribeNewL7RulesRequest();
                    ~DescribeNewL7RulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DDoS防护子产品代号（bgpip表示高防IP）
                     * @return Business DDoS防护子产品代号（bgpip表示高防IP）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置DDoS防护子产品代号（bgpip表示高防IP）
                     * @param _business DDoS防护子产品代号（bgpip表示高防IP）
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
                     * 获取状态搜索，选填，取值[0(规则配置成功)，1(规则配置生效中)，2(规则配置失败)，3(规则删除生效中)，5(规则删除失败)，6(规则等待配置)，7(规则等待删除)，8(规则待配置证书)]
                     * @return StatusList 状态搜索，选填，取值[0(规则配置成功)，1(规则配置生效中)，2(规则配置失败)，3(规则删除生效中)，5(规则删除失败)，6(规则等待配置)，7(规则等待删除)，8(规则待配置证书)]
                     * 
                     */
                    std::vector<uint64_t> GetStatusList() const;

                    /**
                     * 设置状态搜索，选填，取值[0(规则配置成功)，1(规则配置生效中)，2(规则配置失败)，3(规则删除生效中)，5(规则删除失败)，6(规则等待配置)，7(规则等待删除)，8(规则待配置证书)]
                     * @param _statusList 状态搜索，选填，取值[0(规则配置成功)，1(规则配置生效中)，2(规则配置失败)，3(规则删除生效中)，5(规则删除失败)，6(规则等待配置)，7(规则等待删除)，8(规则待配置证书)]
                     * 
                     */
                    void SetStatusList(const std::vector<uint64_t>& _statusList);

                    /**
                     * 判断参数 StatusList 是否已赋值
                     * @return StatusList 是否已赋值
                     * 
                     */
                    bool StatusListHasBeenSet() const;

                    /**
                     * 获取域名搜索，选填，当需要搜索域名请填写
                     * @return Domain 域名搜索，选填，当需要搜索域名请填写
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名搜索，选填，当需要搜索域名请填写
                     * @param _domain 域名搜索，选填，当需要搜索域名请填写
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
                     * 获取IP搜索，选填，当需要搜索IP请填写
                     * @return Ip IP搜索，选填，当需要搜索IP请填写
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP搜索，选填，当需要搜索IP请填写
                     * @param _ip IP搜索，选填，当需要搜索IP请填写
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取一页条数，默认值100，最大值100，超过100最大返回100条
                     * @return Limit 一页条数，默认值100，最大值100，超过100最大返回100条
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置一页条数，默认值100，最大值100，超过100最大返回100条
                     * @param _limit 一页条数，默认值100，最大值100，超过100最大返回100条
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
                     * 获取规则偏移量，取值为(页码-1)*一页条数
                     * @return Offset 规则偏移量，取值为(页码-1)*一页条数
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置规则偏移量，取值为(页码-1)*一页条数
                     * @param _offset 规则偏移量，取值为(页码-1)*一页条数
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
                     * 获取转发协议搜索，选填，取值[http, https, http/https]
                     * @return ProtocolList 转发协议搜索，选填，取值[http, https, http/https]
                     * 
                     */
                    std::vector<std::string> GetProtocolList() const;

                    /**
                     * 设置转发协议搜索，选填，取值[http, https, http/https]
                     * @param _protocolList 转发协议搜索，选填，取值[http, https, http/https]
                     * 
                     */
                    void SetProtocolList(const std::vector<std::string>& _protocolList);

                    /**
                     * 判断参数 ProtocolList 是否已赋值
                     * @return ProtocolList 是否已赋值
                     * 
                     */
                    bool ProtocolListHasBeenSet() const;

                    /**
                     * 获取高防IP实例的Cname
                     * @return Cname 高防IP实例的Cname
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置高防IP实例的Cname
                     * @param _cname 高防IP实例的Cname
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取默认为false，当为true时，将不对各个规则做策略检查，直接导出所有规则
                     * @return Export 默认为false，当为true时，将不对各个规则做策略检查，直接导出所有规则
                     * 
                     */
                    bool GetExport() const;

                    /**
                     * 设置默认为false，当为true时，将不对各个规则做策略检查，直接导出所有规则
                     * @param _export 默认为false，当为true时，将不对各个规则做策略检查，直接导出所有规则
                     * 
                     */
                    void SetExport(const bool& _export);

                    /**
                     * 判断参数 Export 是否已赋值
                     * @return Export 是否已赋值
                     * 
                     */
                    bool ExportHasBeenSet() const;

                private:

                    /**
                     * DDoS防护子产品代号（bgpip表示高防IP）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 状态搜索，选填，取值[0(规则配置成功)，1(规则配置生效中)，2(规则配置失败)，3(规则删除生效中)，5(规则删除失败)，6(规则等待配置)，7(规则等待删除)，8(规则待配置证书)]
                     */
                    std::vector<uint64_t> m_statusList;
                    bool m_statusListHasBeenSet;

                    /**
                     * 域名搜索，选填，当需要搜索域名请填写
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * IP搜索，选填，当需要搜索IP请填写
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 一页条数，默认值100，最大值100，超过100最大返回100条
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 规则偏移量，取值为(页码-1)*一页条数
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 转发协议搜索，选填，取值[http, https, http/https]
                     */
                    std::vector<std::string> m_protocolList;
                    bool m_protocolListHasBeenSet;

                    /**
                     * 高防IP实例的Cname
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * 默认为false，当为true时，将不对各个规则做策略检查，直接导出所有规则
                     */
                    bool m_export;
                    bool m_exportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBENEWL7RULESREQUEST_H_

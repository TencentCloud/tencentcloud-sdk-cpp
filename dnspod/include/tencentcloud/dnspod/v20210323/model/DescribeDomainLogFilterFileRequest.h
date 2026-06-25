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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINLOGFILTERFILEREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINLOGFILTERFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeDomainLogFilterFile请求参数结构体
                */
                class DescribeDomainLogFilterFileRequest : public AbstractModel
                {
                public:
                    DescribeDomainLogFilterFileRequest();
                    ~DescribeDomainLogFilterFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要获取操作日志的域名
                     * @return Domain 要获取操作日志的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置要获取操作日志的域名
                     * @param _domain 要获取操作日志的域名
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
                     * 获取要获取操作日志的域名 Id，如果传了 DomainId，系统将会忽略 Domain 参数。 可以通过接口 DescribeDomainList 查到所有的 Domain 以及 DomainId
                     * @return DomainId 要获取操作日志的域名 Id，如果传了 DomainId，系统将会忽略 Domain 参数。 可以通过接口 DescribeDomainList 查到所有的 Domain 以及 DomainId
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置要获取操作日志的域名 Id，如果传了 DomainId，系统将会忽略 Domain 参数。 可以通过接口 DescribeDomainList 查到所有的 Domain 以及 DomainId
                     * @param _domainId 要获取操作日志的域名 Id，如果传了 DomainId，系统将会忽略 Domain 参数。 可以通过接口 DescribeDomainList 查到所有的 Domain 以及 DomainId
                     * 
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取通过关键字搜索，支持搜索字段：账户 UIN、操作 IP、操作内容
                     * @return Keyword 通过关键字搜索，支持搜索字段：账户 UIN、操作 IP、操作内容
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置通过关键字搜索，支持搜索字段：账户 UIN、操作 IP、操作内容
                     * @param _keyword 通过关键字搜索，支持搜索字段：账户 UIN、操作 IP、操作内容
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取操作时间范围起始时间(仅支持近6个月的日志查询)
                     * @return OperateBegin 操作时间范围起始时间(仅支持近6个月的日志查询)
                     * 
                     */
                    std::string GetOperateBegin() const;

                    /**
                     * 设置操作时间范围起始时间(仅支持近6个月的日志查询)
                     * @param _operateBegin 操作时间范围起始时间(仅支持近6个月的日志查询)
                     * 
                     */
                    void SetOperateBegin(const std::string& _operateBegin);

                    /**
                     * 判断参数 OperateBegin 是否已赋值
                     * @return OperateBegin 是否已赋值
                     * 
                     */
                    bool OperateBeginHasBeenSet() const;

                    /**
                     * 获取操作时间范围截止时间(仅支持近6个月的日志查询)
                     * @return OperateEnd 操作时间范围截止时间(仅支持近6个月的日志查询)
                     * 
                     */
                    std::string GetOperateEnd() const;

                    /**
                     * 设置操作时间范围截止时间(仅支持近6个月的日志查询)
                     * @param _operateEnd 操作时间范围截止时间(仅支持近6个月的日志查询)
                     * 
                     */
                    void SetOperateEnd(const std::string& _operateEnd);

                    /**
                     * 判断参数 OperateEnd 是否已赋值
                     * @return OperateEnd 是否已赋值
                     * 
                     */
                    bool OperateEndHasBeenSet() const;

                    /**
                     * 获取操作账号 UIN 精确匹配
                     * @return OperateUin 操作账号 UIN 精确匹配
                     * 
                     */
                    uint64_t GetOperateUin() const;

                    /**
                     * 设置操作账号 UIN 精确匹配
                     * @param _operateUin 操作账号 UIN 精确匹配
                     * 
                     */
                    void SetOperateUin(const uint64_t& _operateUin);

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
                     * 
                     */
                    bool OperateUinHasBeenSet() const;

                    /**
                     * 获取操作 IP 精确匹配
                     * @return OperateClientIP 操作 IP 精确匹配
                     * 
                     */
                    std::string GetOperateClientIP() const;

                    /**
                     * 设置操作 IP 精确匹配
                     * @param _operateClientIP 操作 IP 精确匹配
                     * 
                     */
                    void SetOperateClientIP(const std::string& _operateClientIP);

                    /**
                     * 判断参数 OperateClientIP 是否已赋值
                     * @return OperateClientIP 是否已赋值
                     * 
                     */
                    bool OperateClientIPHasBeenSet() const;

                    /**
                     * 获取操作内容 模糊匹配
                     * @return OperateContent 操作内容 模糊匹配
                     * 
                     */
                    std::string GetOperateContent() const;

                    /**
                     * 设置操作内容 模糊匹配
                     * @param _operateContent 操作内容 模糊匹配
                     * 
                     */
                    void SetOperateContent(const std::string& _operateContent);

                    /**
                     * 判断参数 OperateContent 是否已赋值
                     * @return OperateContent 是否已赋值
                     * 
                     */
                    bool OperateContentHasBeenSet() const;

                private:

                    /**
                     * 要获取操作日志的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 要获取操作日志的域名 Id，如果传了 DomainId，系统将会忽略 Domain 参数。 可以通过接口 DescribeDomainList 查到所有的 Domain 以及 DomainId
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 通过关键字搜索，支持搜索字段：账户 UIN、操作 IP、操作内容
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 操作时间范围起始时间(仅支持近6个月的日志查询)
                     */
                    std::string m_operateBegin;
                    bool m_operateBeginHasBeenSet;

                    /**
                     * 操作时间范围截止时间(仅支持近6个月的日志查询)
                     */
                    std::string m_operateEnd;
                    bool m_operateEndHasBeenSet;

                    /**
                     * 操作账号 UIN 精确匹配
                     */
                    uint64_t m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * 操作 IP 精确匹配
                     */
                    std::string m_operateClientIP;
                    bool m_operateClientIPHasBeenSet;

                    /**
                     * 操作内容 模糊匹配
                     */
                    std::string m_operateContent;
                    bool m_operateContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINLOGFILTERFILEREQUEST_H_

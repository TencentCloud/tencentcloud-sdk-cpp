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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDLISTREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDLISTREQUEST_H_

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
                * DescribeRecordList请求参数结构体
                */
                class DescribeRecordListRequest : public AbstractModel
                {
                public:
                    DescribeRecordListRequest();
                    ~DescribeRecordListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>域名</p>
                     * @return Domain <p>域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名</p>
                     * @param _domain <p>域名</p>
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
                     * 获取<p>域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId</p>
                     * @return DomainId <p>域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId</p>
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置<p>域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId</p>
                     * @param _domainId <p>域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId</p>
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
                     * 获取<p>解析记录的主机头，如果传了此参数，则只会返回此主机头对应的解析记录</p>
                     * @return Subdomain <p>解析记录的主机头，如果传了此参数，则只会返回此主机头对应的解析记录</p>
                     * 
                     */
                    std::string GetSubdomain() const;

                    /**
                     * 设置<p>解析记录的主机头，如果传了此参数，则只会返回此主机头对应的解析记录</p>
                     * @param _subdomain <p>解析记录的主机头，如果传了此参数，则只会返回此主机头对应的解析记录</p>
                     * 
                     */
                    void SetSubdomain(const std::string& _subdomain);

                    /**
                     * 判断参数 Subdomain 是否已赋值
                     * @return Subdomain 是否已赋值
                     * 
                     */
                    bool SubdomainHasBeenSet() const;

                    /**
                     * 获取<p>获取某种类型的解析记录，如 A，CNAME，NS，AAAA，显性URL，隐性URL，CAA，SPF等</p>
                     * @return RecordType <p>获取某种类型的解析记录，如 A，CNAME，NS，AAAA，显性URL，隐性URL，CAA，SPF等</p>
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置<p>获取某种类型的解析记录，如 A，CNAME，NS，AAAA，显性URL，隐性URL，CAA，SPF等</p>
                     * @param _recordType <p>获取某种类型的解析记录，如 A，CNAME，NS，AAAA，显性URL，隐性URL，CAA，SPF等</p>
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
                     * 获取<p>获取某条线路名称的解析记录。可以通过接口DescribeRecordLineList查看当前域名允许的线路信息</p>
                     * @return RecordLine <p>获取某条线路名称的解析记录。可以通过接口DescribeRecordLineList查看当前域名允许的线路信息</p>
                     * 
                     */
                    std::string GetRecordLine() const;

                    /**
                     * 设置<p>获取某条线路名称的解析记录。可以通过接口DescribeRecordLineList查看当前域名允许的线路信息</p>
                     * @param _recordLine <p>获取某条线路名称的解析记录。可以通过接口DescribeRecordLineList查看当前域名允许的线路信息</p>
                     * 
                     */
                    void SetRecordLine(const std::string& _recordLine);

                    /**
                     * 判断参数 RecordLine 是否已赋值
                     * @return RecordLine 是否已赋值
                     * 
                     */
                    bool RecordLineHasBeenSet() const;

                    /**
                     * 获取<p>获取某个线路Id对应的解析记录，如果传RecordLineId，系统会忽略RecordLine参数。可以通过接口DescribeRecordLineList查看当前域名允许的线路信息</p>
                     * @return RecordLineId <p>获取某个线路Id对应的解析记录，如果传RecordLineId，系统会忽略RecordLine参数。可以通过接口DescribeRecordLineList查看当前域名允许的线路信息</p>
                     * 
                     */
                    std::string GetRecordLineId() const;

                    /**
                     * 设置<p>获取某个线路Id对应的解析记录，如果传RecordLineId，系统会忽略RecordLine参数。可以通过接口DescribeRecordLineList查看当前域名允许的线路信息</p>
                     * @param _recordLineId <p>获取某个线路Id对应的解析记录，如果传RecordLineId，系统会忽略RecordLine参数。可以通过接口DescribeRecordLineList查看当前域名允许的线路信息</p>
                     * 
                     */
                    void SetRecordLineId(const std::string& _recordLineId);

                    /**
                     * 判断参数 RecordLineId 是否已赋值
                     * @return RecordLineId 是否已赋值
                     * 
                     */
                    bool RecordLineIdHasBeenSet() const;

                    /**
                     * 获取<p>获取某个分组下的解析记录时，传这个分组Id。可通过DescribeRecordGroupList接口获取所有分组</p>
                     * @return GroupId <p>获取某个分组下的解析记录时，传这个分组Id。可通过DescribeRecordGroupList接口获取所有分组</p>
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置<p>获取某个分组下的解析记录时，传这个分组Id。可通过DescribeRecordGroupList接口获取所有分组</p>
                     * @param _groupId <p>获取某个分组下的解析记录时，传这个分组Id。可通过DescribeRecordGroupList接口获取所有分组</p>
                     * 
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>通过关键字搜索解析记录，当前支持搜索主机头和记录值</p>
                     * @return Keyword <p>通过关键字搜索解析记录，当前支持搜索主机头和记录值</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>通过关键字搜索解析记录，当前支持搜索主机头和记录值</p>
                     * @param _keyword <p>通过关键字搜索解析记录，当前支持搜索主机头和记录值</p>
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
                     * 获取<p>排序字段，支持 name,line,type,value,weight,mx,ttl,updated_on 几个字段。</p>
                     * @return SortField <p>排序字段，支持 name,line,type,value,weight,mx,ttl,updated_on 几个字段。</p>
                     * 
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置<p>排序字段，支持 name,line,type,value,weight,mx,ttl,updated_on 几个字段。</p>
                     * @param _sortField <p>排序字段，支持 name,line,type,value,weight,mx,ttl,updated_on 几个字段。</p>
                     * 
                     */
                    void SetSortField(const std::string& _sortField);

                    /**
                     * 判断参数 SortField 是否已赋值
                     * @return SortField 是否已赋值
                     * 
                     */
                    bool SortFieldHasBeenSet() const;

                    /**
                     * 获取<p>排序方式，正序：ASC，逆序：DESC。默认值为ASC。</p>
                     * @return SortType <p>排序方式，正序：ASC，逆序：DESC。默认值为ASC。</p>
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置<p>排序方式，正序：ASC，逆序：DESC。默认值为ASC。</p>
                     * @param _sortType <p>排序方式，正序：ASC，逆序：DESC。默认值为ASC。</p>
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取<p>偏移量，默认值为0。</p>
                     * @return Offset <p>偏移量，默认值为0。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认值为0。</p>
                     * @param _offset <p>偏移量，默认值为0。</p>
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
                     * 获取<p>限制数量，当前Limit最大支持3000。默认值为100。</p>
                     * @return Limit <p>限制数量，当前Limit最大支持3000。默认值为100。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>限制数量，当前Limit最大支持3000。默认值为100。</p>
                     * @param _limit <p>限制数量，当前Limit最大支持3000。默认值为100。</p>
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
                     * 获取<p>查询不到数据时是否报错</p>枚举值：<ul><li> yes： 报错</li><li> no： 不报错，返回空列表</li></ul>默认值：yes
                     * @return ErrorOnEmpty <p>查询不到数据时是否报错</p>枚举值：<ul><li> yes： 报错</li><li> no： 不报错，返回空列表</li></ul>默认值：yes
                     * 
                     */
                    std::string GetErrorOnEmpty() const;

                    /**
                     * 设置<p>查询不到数据时是否报错</p>枚举值：<ul><li> yes： 报错</li><li> no： 不报错，返回空列表</li></ul>默认值：yes
                     * @param _errorOnEmpty <p>查询不到数据时是否报错</p>枚举值：<ul><li> yes： 报错</li><li> no： 不报错，返回空列表</li></ul>默认值：yes
                     * 
                     */
                    void SetErrorOnEmpty(const std::string& _errorOnEmpty);

                    /**
                     * 判断参数 ErrorOnEmpty 是否已赋值
                     * @return ErrorOnEmpty 是否已赋值
                     * 
                     */
                    bool ErrorOnEmptyHasBeenSet() const;

                private:

                    /**
                     * <p>域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId</p>
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * <p>解析记录的主机头，如果传了此参数，则只会返回此主机头对应的解析记录</p>
                     */
                    std::string m_subdomain;
                    bool m_subdomainHasBeenSet;

                    /**
                     * <p>获取某种类型的解析记录，如 A，CNAME，NS，AAAA，显性URL，隐性URL，CAA，SPF等</p>
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * <p>获取某条线路名称的解析记录。可以通过接口DescribeRecordLineList查看当前域名允许的线路信息</p>
                     */
                    std::string m_recordLine;
                    bool m_recordLineHasBeenSet;

                    /**
                     * <p>获取某个线路Id对应的解析记录，如果传RecordLineId，系统会忽略RecordLine参数。可以通过接口DescribeRecordLineList查看当前域名允许的线路信息</p>
                     */
                    std::string m_recordLineId;
                    bool m_recordLineIdHasBeenSet;

                    /**
                     * <p>获取某个分组下的解析记录时，传这个分组Id。可通过DescribeRecordGroupList接口获取所有分组</p>
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>通过关键字搜索解析记录，当前支持搜索主机头和记录值</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>排序字段，支持 name,line,type,value,weight,mx,ttl,updated_on 几个字段。</p>
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * <p>排序方式，正序：ASC，逆序：DESC。默认值为ASC。</p>
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * <p>偏移量，默认值为0。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>限制数量，当前Limit最大支持3000。默认值为100。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>查询不到数据时是否报错</p>枚举值：<ul><li> yes： 报错</li><li> no： 不报错，返回空列表</li></ul>默认值：yes
                     */
                    std::string m_errorOnEmpty;
                    bool m_errorOnEmptyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDLISTREQUEST_H_

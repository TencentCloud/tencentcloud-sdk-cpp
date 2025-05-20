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
                     * 获取域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId
                     * @return DomainId 域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId
                     * @param _domainId 域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId
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
                     * 获取解析记录的主机头，如果传了此参数，则只会返回此主机头对应的解析记录
                     * @return Subdomain 解析记录的主机头，如果传了此参数，则只会返回此主机头对应的解析记录
                     * 
                     */
                    std::string GetSubdomain() const;

                    /**
                     * 设置解析记录的主机头，如果传了此参数，则只会返回此主机头对应的解析记录
                     * @param _subdomain 解析记录的主机头，如果传了此参数，则只会返回此主机头对应的解析记录
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
                     * 获取获取某种类型的解析记录，如 A，CNAME，NS，AAAA，显性URL，隐性URL，CAA，SPF等
                     * @return RecordType 获取某种类型的解析记录，如 A，CNAME，NS，AAAA，显性URL，隐性URL，CAA，SPF等
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置获取某种类型的解析记录，如 A，CNAME，NS，AAAA，显性URL，隐性URL，CAA，SPF等
                     * @param _recordType 获取某种类型的解析记录，如 A，CNAME，NS，AAAA，显性URL，隐性URL，CAA，SPF等
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
                     * 获取获取某条线路名称的解析记录。可以通过接口DescribeRecordLineList查看当前域名允许的线路信息
                     * @return RecordLine 获取某条线路名称的解析记录。可以通过接口DescribeRecordLineList查看当前域名允许的线路信息
                     * 
                     */
                    std::string GetRecordLine() const;

                    /**
                     * 设置获取某条线路名称的解析记录。可以通过接口DescribeRecordLineList查看当前域名允许的线路信息
                     * @param _recordLine 获取某条线路名称的解析记录。可以通过接口DescribeRecordLineList查看当前域名允许的线路信息
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
                     * 获取获取某个线路Id对应的解析记录，如果传RecordLineId，系统会忽略RecordLine参数。可以通过接口DescribeRecordLineList查看当前域名允许的线路信息
                     * @return RecordLineId 获取某个线路Id对应的解析记录，如果传RecordLineId，系统会忽略RecordLine参数。可以通过接口DescribeRecordLineList查看当前域名允许的线路信息
                     * 
                     */
                    std::string GetRecordLineId() const;

                    /**
                     * 设置获取某个线路Id对应的解析记录，如果传RecordLineId，系统会忽略RecordLine参数。可以通过接口DescribeRecordLineList查看当前域名允许的线路信息
                     * @param _recordLineId 获取某个线路Id对应的解析记录，如果传RecordLineId，系统会忽略RecordLine参数。可以通过接口DescribeRecordLineList查看当前域名允许的线路信息
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
                     * 获取获取某个分组下的解析记录时，传这个分组Id。可通过DescribeRecordGroupList接口获取所有分组
                     * @return GroupId 获取某个分组下的解析记录时，传这个分组Id。可通过DescribeRecordGroupList接口获取所有分组
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置获取某个分组下的解析记录时，传这个分组Id。可通过DescribeRecordGroupList接口获取所有分组
                     * @param _groupId 获取某个分组下的解析记录时，传这个分组Id。可通过DescribeRecordGroupList接口获取所有分组
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
                     * 获取通过关键字搜索解析记录，当前支持搜索主机头和记录值
                     * @return Keyword 通过关键字搜索解析记录，当前支持搜索主机头和记录值
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置通过关键字搜索解析记录，当前支持搜索主机头和记录值
                     * @param _keyword 通过关键字搜索解析记录，当前支持搜索主机头和记录值
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
                     * 获取排序字段，支持 name,line,type,value,weight,mx,ttl,updated_on 几个字段。
                     * @return SortField 排序字段，支持 name,line,type,value,weight,mx,ttl,updated_on 几个字段。
                     * 
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置排序字段，支持 name,line,type,value,weight,mx,ttl,updated_on 几个字段。
                     * @param _sortField 排序字段，支持 name,line,type,value,weight,mx,ttl,updated_on 几个字段。
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
                     * 获取排序方式，正序：ASC，逆序：DESC。默认值为ASC。
                     * @return SortType 排序方式，正序：ASC，逆序：DESC。默认值为ASC。
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置排序方式，正序：ASC，逆序：DESC。默认值为ASC。
                     * @param _sortType 排序方式，正序：ASC，逆序：DESC。默认值为ASC。
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
                     * 获取偏移量，默认值为0。
                     * @return Offset 偏移量，默认值为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认值为0。
                     * @param _offset 偏移量，默认值为0。
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
                     * 获取限制数量，当前Limit最大支持3000。默认值为100。
                     * @return Limit 限制数量，当前Limit最大支持3000。默认值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数量，当前Limit最大支持3000。默认值为100。
                     * @param _limit 限制数量，当前Limit最大支持3000。默认值为100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 解析记录的主机头，如果传了此参数，则只会返回此主机头对应的解析记录
                     */
                    std::string m_subdomain;
                    bool m_subdomainHasBeenSet;

                    /**
                     * 获取某种类型的解析记录，如 A，CNAME，NS，AAAA，显性URL，隐性URL，CAA，SPF等
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * 获取某条线路名称的解析记录。可以通过接口DescribeRecordLineList查看当前域名允许的线路信息
                     */
                    std::string m_recordLine;
                    bool m_recordLineHasBeenSet;

                    /**
                     * 获取某个线路Id对应的解析记录，如果传RecordLineId，系统会忽略RecordLine参数。可以通过接口DescribeRecordLineList查看当前域名允许的线路信息
                     */
                    std::string m_recordLineId;
                    bool m_recordLineIdHasBeenSet;

                    /**
                     * 获取某个分组下的解析记录时，传这个分组Id。可通过DescribeRecordGroupList接口获取所有分组
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 通过关键字搜索解析记录，当前支持搜索主机头和记录值
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 排序字段，支持 name,line,type,value,weight,mx,ttl,updated_on 几个字段。
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * 排序方式，正序：ASC，逆序：DESC。默认值为ASC。
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * 偏移量，默认值为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数量，当前Limit最大支持3000。默认值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDLISTREQUEST_H_

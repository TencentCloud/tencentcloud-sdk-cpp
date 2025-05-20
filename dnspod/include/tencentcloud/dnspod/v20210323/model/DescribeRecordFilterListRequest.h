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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDFILTERLISTREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDFILTERLISTREQUEST_H_

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
                * DescribeRecordFilterList请求参数结构体
                */
                class DescribeRecordFilterListRequest : public AbstractModel
                {
                public:
                    DescribeRecordFilterListRequest();
                    ~DescribeRecordFilterListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要获取的解析记录所属的域名。
                     * @return Domain 要获取的解析记录所属的域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置要获取的解析记录所属的域名。
                     * @param _domain 要获取的解析记录所属的域名。
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
                     * 获取要获取的解析记录所属的域名 Id，如果传了 DomainId，系统将会忽略 Domain 参数。 
                     * @return DomainId 要获取的解析记录所属的域名 Id，如果传了 DomainId，系统将会忽略 Domain 参数。 
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置要获取的解析记录所属的域名 Id，如果传了 DomainId，系统将会忽略 Domain 参数。 
                     * @param _domainId 要获取的解析记录所属的域名 Id，如果传了 DomainId，系统将会忽略 Domain 参数。 
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
                     * 获取根据解析记录的主机头获取解析记录。默认模糊匹配。可以通过设置 IsExactSubdomain 参数为 true 进行精确查找。
                     * @return SubDomain 根据解析记录的主机头获取解析记录。默认模糊匹配。可以通过设置 IsExactSubdomain 参数为 true 进行精确查找。
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置根据解析记录的主机头获取解析记录。默认模糊匹配。可以通过设置 IsExactSubdomain 参数为 true 进行精确查找。
                     * @param _subDomain 根据解析记录的主机头获取解析记录。默认模糊匹配。可以通过设置 IsExactSubdomain 参数为 true 进行精确查找。
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
                     * 获取获取某些类型的解析记录，如 A，CNAME，NS，AAAA，显性URL，隐性URL，CAA，SPF等。
                     * @return RecordType 获取某些类型的解析记录，如 A，CNAME，NS，AAAA，显性URL，隐性URL，CAA，SPF等。
                     * 
                     */
                    std::vector<std::string> GetRecordType() const;

                    /**
                     * 设置获取某些类型的解析记录，如 A，CNAME，NS，AAAA，显性URL，隐性URL，CAA，SPF等。
                     * @param _recordType 获取某些类型的解析记录，如 A，CNAME，NS，AAAA，显性URL，隐性URL，CAA，SPF等。
                     * 
                     */
                    void SetRecordType(const std::vector<std::string>& _recordType);

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     * 
                     */
                    bool RecordTypeHasBeenSet() const;

                    /**
                     * 获取获取某些线路ID的解析记录。
                     * @return RecordLine 获取某些线路ID的解析记录。
                     * 
                     */
                    std::vector<std::string> GetRecordLine() const;

                    /**
                     * 设置获取某些线路ID的解析记录。
                     * @param _recordLine 获取某些线路ID的解析记录。
                     * 
                     */
                    void SetRecordLine(const std::vector<std::string>& _recordLine);

                    /**
                     * 判断参数 RecordLine 是否已赋值
                     * @return RecordLine 是否已赋值
                     * 
                     */
                    bool RecordLineHasBeenSet() const;

                    /**
                     * 获取获取某些分组下的解析记录时，传这个分组 Id。
                     * @return GroupId 获取某些分组下的解析记录时，传这个分组 Id。
                     * 
                     */
                    std::vector<uint64_t> GetGroupId() const;

                    /**
                     * 设置获取某些分组下的解析记录时，传这个分组 Id。
                     * @param _groupId 获取某些分组下的解析记录时，传这个分组 Id。
                     * 
                     */
                    void SetGroupId(const std::vector<uint64_t>& _groupId);

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
                     * 获取排序字段，支持 NAME，LINE，TYPE，VALUE，WEIGHT，MX，TTL，UPDATED_ON 几个字段。
NAME：解析记录的主机头
LINE：解析记录线路
TYPE：解析记录类型
VALUE：解析记录值
WEIGHT：权重
MX：MX 优先级
TTL：解析记录缓存时间
UPDATED_ON：解析记录更新时间

                     * @return SortField 排序字段，支持 NAME，LINE，TYPE，VALUE，WEIGHT，MX，TTL，UPDATED_ON 几个字段。
NAME：解析记录的主机头
LINE：解析记录线路
TYPE：解析记录类型
VALUE：解析记录值
WEIGHT：权重
MX：MX 优先级
TTL：解析记录缓存时间
UPDATED_ON：解析记录更新时间

                     * 
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置排序字段，支持 NAME，LINE，TYPE，VALUE，WEIGHT，MX，TTL，UPDATED_ON 几个字段。
NAME：解析记录的主机头
LINE：解析记录线路
TYPE：解析记录类型
VALUE：解析记录值
WEIGHT：权重
MX：MX 优先级
TTL：解析记录缓存时间
UPDATED_ON：解析记录更新时间

                     * @param _sortField 排序字段，支持 NAME，LINE，TYPE，VALUE，WEIGHT，MX，TTL，UPDATED_ON 几个字段。
NAME：解析记录的主机头
LINE：解析记录线路
TYPE：解析记录类型
VALUE：解析记录值
WEIGHT：权重
MX：MX 优先级
TTL：解析记录缓存时间
UPDATED_ON：解析记录更新时间

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
                     * 获取排序方式，升序：ASC，降序：DESC。默认值为ASC。
                     * @return SortType 排序方式，升序：ASC，降序：DESC。默认值为ASC。
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置排序方式，升序：ASC，降序：DESC。默认值为ASC。
                     * @param _sortType 排序方式，升序：ASC，降序：DESC。默认值为ASC。
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
                     * 获取偏移量，默认值为0。如果入参携带"Domain","offset","Limit" 这3个以外的参数，记录结果限制最大3000条
                     * @return Offset 偏移量，默认值为0。如果入参携带"Domain","offset","Limit" 这3个以外的参数，记录结果限制最大3000条
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认值为0。如果入参携带"Domain","offset","Limit" 这3个以外的参数，记录结果限制最大3000条
                     * @param _offset 偏移量，默认值为0。如果入参携带"Domain","offset","Limit" 这3个以外的参数，记录结果限制最大3000条
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

                    /**
                     * 获取根据解析记录的值获取解析记录
                     * @return RecordValue 根据解析记录的值获取解析记录
                     * 
                     */
                    std::string GetRecordValue() const;

                    /**
                     * 设置根据解析记录的值获取解析记录
                     * @param _recordValue 根据解析记录的值获取解析记录
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
                     * 获取根据解析记录的状态获取解析记录。可取值为 ENABLE，DISABLE。
ENABLE：正常 
DISABLE：暂停 
                     * @return RecordStatus 根据解析记录的状态获取解析记录。可取值为 ENABLE，DISABLE。
ENABLE：正常 
DISABLE：暂停 
                     * 
                     */
                    std::vector<std::string> GetRecordStatus() const;

                    /**
                     * 设置根据解析记录的状态获取解析记录。可取值为 ENABLE，DISABLE。
ENABLE：正常 
DISABLE：暂停 
                     * @param _recordStatus 根据解析记录的状态获取解析记录。可取值为 ENABLE，DISABLE。
ENABLE：正常 
DISABLE：暂停 
                     * 
                     */
                    void SetRecordStatus(const std::vector<std::string>& _recordStatus);

                    /**
                     * 判断参数 RecordStatus 是否已赋值
                     * @return RecordStatus 是否已赋值
                     * 
                     */
                    bool RecordStatusHasBeenSet() const;

                    /**
                     * 获取要获取解析记录权重查询区间起点。
                     * @return WeightBegin 要获取解析记录权重查询区间起点。
                     * 
                     */
                    uint64_t GetWeightBegin() const;

                    /**
                     * 设置要获取解析记录权重查询区间起点。
                     * @param _weightBegin 要获取解析记录权重查询区间起点。
                     * 
                     */
                    void SetWeightBegin(const uint64_t& _weightBegin);

                    /**
                     * 判断参数 WeightBegin 是否已赋值
                     * @return WeightBegin 是否已赋值
                     * 
                     */
                    bool WeightBeginHasBeenSet() const;

                    /**
                     * 获取要获取解析记录权重查询区间终点。
                     * @return WeightEnd 要获取解析记录权重查询区间终点。
                     * 
                     */
                    uint64_t GetWeightEnd() const;

                    /**
                     * 设置要获取解析记录权重查询区间终点。
                     * @param _weightEnd 要获取解析记录权重查询区间终点。
                     * 
                     */
                    void SetWeightEnd(const uint64_t& _weightEnd);

                    /**
                     * 判断参数 WeightEnd 是否已赋值
                     * @return WeightEnd 是否已赋值
                     * 
                     */
                    bool WeightEndHasBeenSet() const;

                    /**
                     * 获取要获取解析记录 MX 优先级查询区间起点。
                     * @return MXBegin 要获取解析记录 MX 优先级查询区间起点。
                     * 
                     */
                    uint64_t GetMXBegin() const;

                    /**
                     * 设置要获取解析记录 MX 优先级查询区间起点。
                     * @param _mXBegin 要获取解析记录 MX 优先级查询区间起点。
                     * 
                     */
                    void SetMXBegin(const uint64_t& _mXBegin);

                    /**
                     * 判断参数 MXBegin 是否已赋值
                     * @return MXBegin 是否已赋值
                     * 
                     */
                    bool MXBeginHasBeenSet() const;

                    /**
                     * 获取要获取解析记录 MX 优先级查询区间终点。
                     * @return MXEnd 要获取解析记录 MX 优先级查询区间终点。
                     * 
                     */
                    uint64_t GetMXEnd() const;

                    /**
                     * 设置要获取解析记录 MX 优先级查询区间终点。
                     * @param _mXEnd 要获取解析记录 MX 优先级查询区间终点。
                     * 
                     */
                    void SetMXEnd(const uint64_t& _mXEnd);

                    /**
                     * 判断参数 MXEnd 是否已赋值
                     * @return MXEnd 是否已赋值
                     * 
                     */
                    bool MXEndHasBeenSet() const;

                    /**
                     * 获取要获取解析记录 TTL 查询区间起点。
                     * @return TTLBegin 要获取解析记录 TTL 查询区间起点。
                     * 
                     */
                    uint64_t GetTTLBegin() const;

                    /**
                     * 设置要获取解析记录 TTL 查询区间起点。
                     * @param _tTLBegin 要获取解析记录 TTL 查询区间起点。
                     * 
                     */
                    void SetTTLBegin(const uint64_t& _tTLBegin);

                    /**
                     * 判断参数 TTLBegin 是否已赋值
                     * @return TTLBegin 是否已赋值
                     * 
                     */
                    bool TTLBeginHasBeenSet() const;

                    /**
                     * 获取要获取解析记录 TTL 查询区间终点。
                     * @return TTLEnd 要获取解析记录 TTL 查询区间终点。
                     * 
                     */
                    uint64_t GetTTLEnd() const;

                    /**
                     * 设置要获取解析记录 TTL 查询区间终点。
                     * @param _tTLEnd 要获取解析记录 TTL 查询区间终点。
                     * 
                     */
                    void SetTTLEnd(const uint64_t& _tTLEnd);

                    /**
                     * 判断参数 TTLEnd 是否已赋值
                     * @return TTLEnd 是否已赋值
                     * 
                     */
                    bool TTLEndHasBeenSet() const;

                    /**
                     * 获取要获取解析记录更新时间查询区间起点。
                     * @return UpdatedAtBegin 要获取解析记录更新时间查询区间起点。
                     * 
                     */
                    std::string GetUpdatedAtBegin() const;

                    /**
                     * 设置要获取解析记录更新时间查询区间起点。
                     * @param _updatedAtBegin 要获取解析记录更新时间查询区间起点。
                     * 
                     */
                    void SetUpdatedAtBegin(const std::string& _updatedAtBegin);

                    /**
                     * 判断参数 UpdatedAtBegin 是否已赋值
                     * @return UpdatedAtBegin 是否已赋值
                     * 
                     */
                    bool UpdatedAtBeginHasBeenSet() const;

                    /**
                     * 获取要获取解析记录更新时间查询区间终点。
                     * @return UpdatedAtEnd 要获取解析记录更新时间查询区间终点。
                     * 
                     */
                    std::string GetUpdatedAtEnd() const;

                    /**
                     * 设置要获取解析记录更新时间查询区间终点。
                     * @param _updatedAtEnd 要获取解析记录更新时间查询区间终点。
                     * 
                     */
                    void SetUpdatedAtEnd(const std::string& _updatedAtEnd);

                    /**
                     * 判断参数 UpdatedAtEnd 是否已赋值
                     * @return UpdatedAtEnd 是否已赋值
                     * 
                     */
                    bool UpdatedAtEndHasBeenSet() const;

                    /**
                     * 获取根据解析记录的备注获取解析记录。
                     * @return Remark 根据解析记录的备注获取解析记录。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置根据解析记录的备注获取解析记录。
                     * @param _remark 根据解析记录的备注获取解析记录。
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
                     * 获取是否根据 Subdomain 参数进行精确查找。
                     * @return IsExactSubDomain 是否根据 Subdomain 参数进行精确查找。
                     * 
                     */
                    bool GetIsExactSubDomain() const;

                    /**
                     * 设置是否根据 Subdomain 参数进行精确查找。
                     * @param _isExactSubDomain 是否根据 Subdomain 参数进行精确查找。
                     * 
                     */
                    void SetIsExactSubDomain(const bool& _isExactSubDomain);

                    /**
                     * 判断参数 IsExactSubDomain 是否已赋值
                     * @return IsExactSubDomain 是否已赋值
                     * 
                     */
                    bool IsExactSubDomainHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 要获取的解析记录所属的域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 要获取的解析记录所属的域名 Id，如果传了 DomainId，系统将会忽略 Domain 参数。 
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 根据解析记录的主机头获取解析记录。默认模糊匹配。可以通过设置 IsExactSubdomain 参数为 true 进行精确查找。
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * 获取某些类型的解析记录，如 A，CNAME，NS，AAAA，显性URL，隐性URL，CAA，SPF等。
                     */
                    std::vector<std::string> m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * 获取某些线路ID的解析记录。
                     */
                    std::vector<std::string> m_recordLine;
                    bool m_recordLineHasBeenSet;

                    /**
                     * 获取某些分组下的解析记录时，传这个分组 Id。
                     */
                    std::vector<uint64_t> m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 通过关键字搜索解析记录，当前支持搜索主机头和记录值
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 排序字段，支持 NAME，LINE，TYPE，VALUE，WEIGHT，MX，TTL，UPDATED_ON 几个字段。
NAME：解析记录的主机头
LINE：解析记录线路
TYPE：解析记录类型
VALUE：解析记录值
WEIGHT：权重
MX：MX 优先级
TTL：解析记录缓存时间
UPDATED_ON：解析记录更新时间

                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * 排序方式，升序：ASC，降序：DESC。默认值为ASC。
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * 偏移量，默认值为0。如果入参携带"Domain","offset","Limit" 这3个以外的参数，记录结果限制最大3000条
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数量，当前Limit最大支持3000。默认值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 根据解析记录的值获取解析记录
                     */
                    std::string m_recordValue;
                    bool m_recordValueHasBeenSet;

                    /**
                     * 根据解析记录的状态获取解析记录。可取值为 ENABLE，DISABLE。
ENABLE：正常 
DISABLE：暂停 
                     */
                    std::vector<std::string> m_recordStatus;
                    bool m_recordStatusHasBeenSet;

                    /**
                     * 要获取解析记录权重查询区间起点。
                     */
                    uint64_t m_weightBegin;
                    bool m_weightBeginHasBeenSet;

                    /**
                     * 要获取解析记录权重查询区间终点。
                     */
                    uint64_t m_weightEnd;
                    bool m_weightEndHasBeenSet;

                    /**
                     * 要获取解析记录 MX 优先级查询区间起点。
                     */
                    uint64_t m_mXBegin;
                    bool m_mXBeginHasBeenSet;

                    /**
                     * 要获取解析记录 MX 优先级查询区间终点。
                     */
                    uint64_t m_mXEnd;
                    bool m_mXEndHasBeenSet;

                    /**
                     * 要获取解析记录 TTL 查询区间起点。
                     */
                    uint64_t m_tTLBegin;
                    bool m_tTLBeginHasBeenSet;

                    /**
                     * 要获取解析记录 TTL 查询区间终点。
                     */
                    uint64_t m_tTLEnd;
                    bool m_tTLEndHasBeenSet;

                    /**
                     * 要获取解析记录更新时间查询区间起点。
                     */
                    std::string m_updatedAtBegin;
                    bool m_updatedAtBeginHasBeenSet;

                    /**
                     * 要获取解析记录更新时间查询区间终点。
                     */
                    std::string m_updatedAtEnd;
                    bool m_updatedAtEndHasBeenSet;

                    /**
                     * 根据解析记录的备注获取解析记录。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 是否根据 Subdomain 参数进行精确查找。
                     */
                    bool m_isExactSubDomain;
                    bool m_isExactSubDomainHasBeenSet;

                    /**
                     * 项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDFILTERLISTREQUEST_H_

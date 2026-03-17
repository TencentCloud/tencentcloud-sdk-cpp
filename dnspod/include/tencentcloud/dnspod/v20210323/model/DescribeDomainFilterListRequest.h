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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINFILTERLISTREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINFILTERLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/TagItemFilter.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeDomainFilterList请求参数结构体
                */
                class DescribeDomainFilterListRequest : public AbstractModel
                {
                public:
                    DescribeDomainFilterListRequest();
                    ~DescribeDomainFilterListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>根据域名分组类型获取域名。可取值为 ALL，MINE，SHARE，RECENT。<br>ALL：全部<br>MINE：我的域名<br>SHARE：共享给我的域名<br>RECENT：最近操作过的域名</p>
                     * @return Type <p>根据域名分组类型获取域名。可取值为 ALL，MINE，SHARE，RECENT。<br>ALL：全部<br>MINE：我的域名<br>SHARE：共享给我的域名<br>RECENT：最近操作过的域名</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>根据域名分组类型获取域名。可取值为 ALL，MINE，SHARE，RECENT。<br>ALL：全部<br>MINE：我的域名<br>SHARE：共享给我的域名<br>RECENT：最近操作过的域名</p>
                     * @param _type <p>根据域名分组类型获取域名。可取值为 ALL，MINE，SHARE，RECENT。<br>ALL：全部<br>MINE：我的域名<br>SHARE：共享给我的域名<br>RECENT：最近操作过的域名</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>记录开始的偏移, 第一条记录为 0, 依次类推。默认值为 0。</p>
                     * @return Offset <p>记录开始的偏移, 第一条记录为 0, 依次类推。默认值为 0。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>记录开始的偏移, 第一条记录为 0, 依次类推。默认值为 0。</p>
                     * @param _offset <p>记录开始的偏移, 第一条记录为 0, 依次类推。默认值为 0。</p>
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
                     * 获取<p>要获取的域名数量, 比如获取 20 个, 则为 20。默认值为 5000。如果账户中的域名数量超过了 5000, 将会强制分页并且只返回前 5000 条, 这时需要通过 Offset 和 Limit 参数去获取其它域名。</p>
                     * @return Limit <p>要获取的域名数量, 比如获取 20 个, 则为 20。默认值为 5000。如果账户中的域名数量超过了 5000, 将会强制分页并且只返回前 5000 条, 这时需要通过 Offset 和 Limit 参数去获取其它域名。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>要获取的域名数量, 比如获取 20 个, 则为 20。默认值为 5000。如果账户中的域名数量超过了 5000, 将会强制分页并且只返回前 5000 条, 这时需要通过 Offset 和 Limit 参数去获取其它域名。</p>
                     * @param _limit <p>要获取的域名数量, 比如获取 20 个, 则为 20。默认值为 5000。如果账户中的域名数量超过了 5000, 将会强制分页并且只返回前 5000 条, 这时需要通过 Offset 和 Limit 参数去获取其它域名。</p>
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
                     * 获取<p>根据域名分组 id 获取域名</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1427/56172">DescribeDomainList</a></p>
                     * @return GroupId <p>根据域名分组 id 获取域名</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1427/56172">DescribeDomainList</a></p>
                     * 
                     */
                    std::vector<int64_t> GetGroupId() const;

                    /**
                     * 设置<p>根据域名分组 id 获取域名</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1427/56172">DescribeDomainList</a></p>
                     * @param _groupId <p>根据域名分组 id 获取域名</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1427/56172">DescribeDomainList</a></p>
                     * 
                     */
                    void SetGroupId(const std::vector<int64_t>& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>根据关键字获取域名。</p>
                     * @return Keyword <p>根据关键字获取域名。</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>根据关键字获取域名。</p>
                     * @param _keyword <p>根据关键字获取域名。</p>
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
                     * 获取<p>排序字段。可取值为 NAME，STATUS，RECORDS，GRADE，UPDATED_ON。<br>NAME：域名名称<br>STATUS：域名状态<br>RECORDS：记录数量<br>GRADE：套餐等级<br>UPDATED_ON：更新时间</p>
                     * @return SortField <p>排序字段。可取值为 NAME，STATUS，RECORDS，GRADE，UPDATED_ON。<br>NAME：域名名称<br>STATUS：域名状态<br>RECORDS：记录数量<br>GRADE：套餐等级<br>UPDATED_ON：更新时间</p>
                     * 
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置<p>排序字段。可取值为 NAME，STATUS，RECORDS，GRADE，UPDATED_ON。<br>NAME：域名名称<br>STATUS：域名状态<br>RECORDS：记录数量<br>GRADE：套餐等级<br>UPDATED_ON：更新时间</p>
                     * @param _sortField <p>排序字段。可取值为 NAME，STATUS，RECORDS，GRADE，UPDATED_ON。<br>NAME：域名名称<br>STATUS：域名状态<br>RECORDS：记录数量<br>GRADE：套餐等级<br>UPDATED_ON：更新时间</p>
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
                     * 获取<p>排序类型，升序：ASC，降序：DESC。</p>
                     * @return SortType <p>排序类型，升序：ASC，降序：DESC。</p>
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置<p>排序类型，升序：ASC，降序：DESC。</p>
                     * @param _sortType <p>排序类型，升序：ASC，降序：DESC。</p>
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
                     * 获取<p>根据域名状态获取域名。可取值为 ENABLE，LOCK，PAUSE，SPAM。<br>ENABLE：正常<br>LOCK：锁定<br>PAUSE：暂停<br>SPAM：封禁</p>
                     * @return Status <p>根据域名状态获取域名。可取值为 ENABLE，LOCK，PAUSE，SPAM。<br>ENABLE：正常<br>LOCK：锁定<br>PAUSE：暂停<br>SPAM：封禁</p>
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置<p>根据域名状态获取域名。可取值为 ENABLE，LOCK，PAUSE，SPAM。<br>ENABLE：正常<br>LOCK：锁定<br>PAUSE：暂停<br>SPAM：封禁</p>
                     * @param _status <p>根据域名状态获取域名。可取值为 ENABLE，LOCK，PAUSE，SPAM。<br>ENABLE：正常<br>LOCK：锁定<br>PAUSE：暂停<br>SPAM：封禁</p>
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>根据套餐获取域名，可通过 DescribeDomain 或 DescribeDomainList 接口 Grade 字段获取。</p>
                     * @return Package <p>根据套餐获取域名，可通过 DescribeDomain 或 DescribeDomainList 接口 Grade 字段获取。</p>
                     * 
                     */
                    std::vector<std::string> GetPackage() const;

                    /**
                     * 设置<p>根据套餐获取域名，可通过 DescribeDomain 或 DescribeDomainList 接口 Grade 字段获取。</p>
                     * @param _package <p>根据套餐获取域名，可通过 DescribeDomain 或 DescribeDomainList 接口 Grade 字段获取。</p>
                     * 
                     */
                    void SetPackage(const std::vector<std::string>& _package);

                    /**
                     * 判断参数 Package 是否已赋值
                     * @return Package 是否已赋值
                     * 
                     */
                    bool PackageHasBeenSet() const;

                    /**
                     * 获取<p>根据备注信息获取域名。</p>
                     * @return Remark <p>根据备注信息获取域名。</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>根据备注信息获取域名。</p>
                     * @param _remark <p>根据备注信息获取域名。</p>
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
                     * 获取<p>要获取域名的更新时间起始时间点，如 &#39;2021-05-01 03:00:00&#39;。</p>
                     * @return UpdatedAtBegin <p>要获取域名的更新时间起始时间点，如 &#39;2021-05-01 03:00:00&#39;。</p>
                     * 
                     */
                    std::string GetUpdatedAtBegin() const;

                    /**
                     * 设置<p>要获取域名的更新时间起始时间点，如 &#39;2021-05-01 03:00:00&#39;。</p>
                     * @param _updatedAtBegin <p>要获取域名的更新时间起始时间点，如 &#39;2021-05-01 03:00:00&#39;。</p>
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
                     * 获取<p>要获取域名的更新时间终止时间点，如 &#39;2021-05-10 20:00:00&#39;。</p>
                     * @return UpdatedAtEnd <p>要获取域名的更新时间终止时间点，如 &#39;2021-05-10 20:00:00&#39;。</p>
                     * 
                     */
                    std::string GetUpdatedAtEnd() const;

                    /**
                     * 设置<p>要获取域名的更新时间终止时间点，如 &#39;2021-05-10 20:00:00&#39;。</p>
                     * @param _updatedAtEnd <p>要获取域名的更新时间终止时间点，如 &#39;2021-05-10 20:00:00&#39;。</p>
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
                     * 获取<p>要获取域名的记录数查询区间起点。</p>
                     * @return RecordCountBegin <p>要获取域名的记录数查询区间起点。</p>
                     * 
                     */
                    uint64_t GetRecordCountBegin() const;

                    /**
                     * 设置<p>要获取域名的记录数查询区间起点。</p>
                     * @param _recordCountBegin <p>要获取域名的记录数查询区间起点。</p>
                     * 
                     */
                    void SetRecordCountBegin(const uint64_t& _recordCountBegin);

                    /**
                     * 判断参数 RecordCountBegin 是否已赋值
                     * @return RecordCountBegin 是否已赋值
                     * 
                     */
                    bool RecordCountBeginHasBeenSet() const;

                    /**
                     * 获取<p>要获取域名的记录数查询区间终点。</p>
                     * @return RecordCountEnd <p>要获取域名的记录数查询区间终点。</p>
                     * 
                     */
                    uint64_t GetRecordCountEnd() const;

                    /**
                     * 设置<p>要获取域名的记录数查询区间终点。</p>
                     * @param _recordCountEnd <p>要获取域名的记录数查询区间终点。</p>
                     * 
                     */
                    void SetRecordCountEnd(const uint64_t& _recordCountEnd);

                    /**
                     * 判断参数 RecordCountEnd 是否已赋值
                     * @return RecordCountEnd 是否已赋值
                     * 
                     */
                    bool RecordCountEndHasBeenSet() const;

                    /**
                     * 获取<p>项目ID，&quot;账号中心-项目管理&quot;拿到项目ID</p>
                     * @return ProjectId <p>项目ID，&quot;账号中心-项目管理&quot;拿到项目ID</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID，&quot;账号中心-项目管理&quot;拿到项目ID</p>
                     * @param _projectId <p>项目ID，&quot;账号中心-项目管理&quot;拿到项目ID</p>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>标签过滤</p>
                     * @return Tags <p>标签过滤</p>
                     * 
                     */
                    std::vector<TagItemFilter> GetTags() const;

                    /**
                     * 设置<p>标签过滤</p>
                     * @param _tags <p>标签过滤</p>
                     * 
                     */
                    void SetTags(const std::vector<TagItemFilter>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>根据域名分组类型获取域名。可取值为 ALL，MINE，SHARE，RECENT。<br>ALL：全部<br>MINE：我的域名<br>SHARE：共享给我的域名<br>RECENT：最近操作过的域名</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>记录开始的偏移, 第一条记录为 0, 依次类推。默认值为 0。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>要获取的域名数量, 比如获取 20 个, 则为 20。默认值为 5000。如果账户中的域名数量超过了 5000, 将会强制分页并且只返回前 5000 条, 这时需要通过 Offset 和 Limit 参数去获取其它域名。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>根据域名分组 id 获取域名</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1427/56172">DescribeDomainList</a></p>
                     */
                    std::vector<int64_t> m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>根据关键字获取域名。</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>排序字段。可取值为 NAME，STATUS，RECORDS，GRADE，UPDATED_ON。<br>NAME：域名名称<br>STATUS：域名状态<br>RECORDS：记录数量<br>GRADE：套餐等级<br>UPDATED_ON：更新时间</p>
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * <p>排序类型，升序：ASC，降序：DESC。</p>
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * <p>根据域名状态获取域名。可取值为 ENABLE，LOCK，PAUSE，SPAM。<br>ENABLE：正常<br>LOCK：锁定<br>PAUSE：暂停<br>SPAM：封禁</p>
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>根据套餐获取域名，可通过 DescribeDomain 或 DescribeDomainList 接口 Grade 字段获取。</p>
                     */
                    std::vector<std::string> m_package;
                    bool m_packageHasBeenSet;

                    /**
                     * <p>根据备注信息获取域名。</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>要获取域名的更新时间起始时间点，如 &#39;2021-05-01 03:00:00&#39;。</p>
                     */
                    std::string m_updatedAtBegin;
                    bool m_updatedAtBeginHasBeenSet;

                    /**
                     * <p>要获取域名的更新时间终止时间点，如 &#39;2021-05-10 20:00:00&#39;。</p>
                     */
                    std::string m_updatedAtEnd;
                    bool m_updatedAtEndHasBeenSet;

                    /**
                     * <p>要获取域名的记录数查询区间起点。</p>
                     */
                    uint64_t m_recordCountBegin;
                    bool m_recordCountBeginHasBeenSet;

                    /**
                     * <p>要获取域名的记录数查询区间终点。</p>
                     */
                    uint64_t m_recordCountEnd;
                    bool m_recordCountEndHasBeenSet;

                    /**
                     * <p>项目ID，&quot;账号中心-项目管理&quot;拿到项目ID</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>标签过滤</p>
                     */
                    std::vector<TagItemFilter> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINFILTERLISTREQUEST_H_

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
                     * 获取根据域名分组类型获取域名。可取值为 ALL，MINE，SHARE，RECENT。
ALL：全部
MINE：我的域名
SHARE：共享给我的域名
RECENT：最近操作过的域名
                     * @return Type 根据域名分组类型获取域名。可取值为 ALL，MINE，SHARE，RECENT。
ALL：全部
MINE：我的域名
SHARE：共享给我的域名
RECENT：最近操作过的域名
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置根据域名分组类型获取域名。可取值为 ALL，MINE，SHARE，RECENT。
ALL：全部
MINE：我的域名
SHARE：共享给我的域名
RECENT：最近操作过的域名
                     * @param _type 根据域名分组类型获取域名。可取值为 ALL，MINE，SHARE，RECENT。
ALL：全部
MINE：我的域名
SHARE：共享给我的域名
RECENT：最近操作过的域名
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
                     * 获取记录开始的偏移, 第一条记录为 0, 依次类推。默认值为 0。
                     * @return Offset 记录开始的偏移, 第一条记录为 0, 依次类推。默认值为 0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置记录开始的偏移, 第一条记录为 0, 依次类推。默认值为 0。
                     * @param _offset 记录开始的偏移, 第一条记录为 0, 依次类推。默认值为 0。
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
                     * 获取要获取的域名数量, 比如获取 20 个, 则为 20。默认值为 5000。如果账户中的域名数量超过了 5000, 将会强制分页并且只返回前 5000 条, 这时需要通过 Offset 和 Limit 参数去获取其它域名。
                     * @return Limit 要获取的域名数量, 比如获取 20 个, 则为 20。默认值为 5000。如果账户中的域名数量超过了 5000, 将会强制分页并且只返回前 5000 条, 这时需要通过 Offset 和 Limit 参数去获取其它域名。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置要获取的域名数量, 比如获取 20 个, 则为 20。默认值为 5000。如果账户中的域名数量超过了 5000, 将会强制分页并且只返回前 5000 条, 这时需要通过 Offset 和 Limit 参数去获取其它域名。
                     * @param _limit 要获取的域名数量, 比如获取 20 个, 则为 20。默认值为 5000。如果账户中的域名数量超过了 5000, 将会强制分页并且只返回前 5000 条, 这时需要通过 Offset 和 Limit 参数去获取其它域名。
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
                     * 获取根据域名分组 id 获取域名
                     * @return GroupId 根据域名分组 id 获取域名
                     * 
                     */
                    std::vector<int64_t> GetGroupId() const;

                    /**
                     * 设置根据域名分组 id 获取域名
                     * @param _groupId 根据域名分组 id 获取域名
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
                     * 获取根据关键字获取域名。
                     * @return Keyword 根据关键字获取域名。
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置根据关键字获取域名。
                     * @param _keyword 根据关键字获取域名。
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
                     * 获取排序字段。可取值为 NAME，STATUS，RECORDS，GRADE，UPDATED_ON。
NAME：域名名称
STATUS：域名状态
RECORDS：记录数量
GRADE：套餐等级
UPDATED_ON：更新时间
                     * @return SortField 排序字段。可取值为 NAME，STATUS，RECORDS，GRADE，UPDATED_ON。
NAME：域名名称
STATUS：域名状态
RECORDS：记录数量
GRADE：套餐等级
UPDATED_ON：更新时间
                     * 
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置排序字段。可取值为 NAME，STATUS，RECORDS，GRADE，UPDATED_ON。
NAME：域名名称
STATUS：域名状态
RECORDS：记录数量
GRADE：套餐等级
UPDATED_ON：更新时间
                     * @param _sortField 排序字段。可取值为 NAME，STATUS，RECORDS，GRADE，UPDATED_ON。
NAME：域名名称
STATUS：域名状态
RECORDS：记录数量
GRADE：套餐等级
UPDATED_ON：更新时间
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
                     * 获取排序类型，升序：ASC，降序：DESC。
                     * @return SortType 排序类型，升序：ASC，降序：DESC。
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置排序类型，升序：ASC，降序：DESC。
                     * @param _sortType 排序类型，升序：ASC，降序：DESC。
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
                     * 获取根据域名状态获取域名。可取值为 ENABLE，LOCK，PAUSE，SPAM。
ENABLE：正常
LOCK：锁定
PAUSE：暂停
SPAM：封禁
                     * @return Status 根据域名状态获取域名。可取值为 ENABLE，LOCK，PAUSE，SPAM。
ENABLE：正常
LOCK：锁定
PAUSE：暂停
SPAM：封禁
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置根据域名状态获取域名。可取值为 ENABLE，LOCK，PAUSE，SPAM。
ENABLE：正常
LOCK：锁定
PAUSE：暂停
SPAM：封禁
                     * @param _status 根据域名状态获取域名。可取值为 ENABLE，LOCK，PAUSE，SPAM。
ENABLE：正常
LOCK：锁定
PAUSE：暂停
SPAM：封禁
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
                     * 获取根据套餐获取域名，可通过 DescribeDomain 或 DescribeDomainList 接口 Grade 字段获取。
                     * @return Package 根据套餐获取域名，可通过 DescribeDomain 或 DescribeDomainList 接口 Grade 字段获取。
                     * 
                     */
                    std::vector<std::string> GetPackage() const;

                    /**
                     * 设置根据套餐获取域名，可通过 DescribeDomain 或 DescribeDomainList 接口 Grade 字段获取。
                     * @param _package 根据套餐获取域名，可通过 DescribeDomain 或 DescribeDomainList 接口 Grade 字段获取。
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
                     * 获取根据备注信息获取域名。
                     * @return Remark 根据备注信息获取域名。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置根据备注信息获取域名。
                     * @param _remark 根据备注信息获取域名。
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
                     * 获取要获取域名的更新时间起始时间点，如 '2021-05-01 03:00:00'。
                     * @return UpdatedAtBegin 要获取域名的更新时间起始时间点，如 '2021-05-01 03:00:00'。
                     * 
                     */
                    std::string GetUpdatedAtBegin() const;

                    /**
                     * 设置要获取域名的更新时间起始时间点，如 '2021-05-01 03:00:00'。
                     * @param _updatedAtBegin 要获取域名的更新时间起始时间点，如 '2021-05-01 03:00:00'。
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
                     * 获取要获取域名的更新时间终止时间点，如 '2021-05-10 20:00:00'。
                     * @return UpdatedAtEnd 要获取域名的更新时间终止时间点，如 '2021-05-10 20:00:00'。
                     * 
                     */
                    std::string GetUpdatedAtEnd() const;

                    /**
                     * 设置要获取域名的更新时间终止时间点，如 '2021-05-10 20:00:00'。
                     * @param _updatedAtEnd 要获取域名的更新时间终止时间点，如 '2021-05-10 20:00:00'。
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
                     * 获取要获取域名的记录数查询区间起点。
                     * @return RecordCountBegin 要获取域名的记录数查询区间起点。
                     * 
                     */
                    uint64_t GetRecordCountBegin() const;

                    /**
                     * 设置要获取域名的记录数查询区间起点。
                     * @param _recordCountBegin 要获取域名的记录数查询区间起点。
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
                     * 获取要获取域名的记录数查询区间终点。
                     * @return RecordCountEnd 要获取域名的记录数查询区间终点。
                     * 
                     */
                    uint64_t GetRecordCountEnd() const;

                    /**
                     * 设置要获取域名的记录数查询区间终点。
                     * @param _recordCountEnd 要获取域名的记录数查询区间终点。
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

                    /**
                     * 获取标签过滤
                     * @return Tags 标签过滤
                     * 
                     */
                    std::vector<TagItemFilter> GetTags() const;

                    /**
                     * 设置标签过滤
                     * @param _tags 标签过滤
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
                     * 根据域名分组类型获取域名。可取值为 ALL，MINE，SHARE，RECENT。
ALL：全部
MINE：我的域名
SHARE：共享给我的域名
RECENT：最近操作过的域名
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 记录开始的偏移, 第一条记录为 0, 依次类推。默认值为 0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 要获取的域名数量, 比如获取 20 个, 则为 20。默认值为 5000。如果账户中的域名数量超过了 5000, 将会强制分页并且只返回前 5000 条, 这时需要通过 Offset 和 Limit 参数去获取其它域名。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 根据域名分组 id 获取域名
                     */
                    std::vector<int64_t> m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 根据关键字获取域名。
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 排序字段。可取值为 NAME，STATUS，RECORDS，GRADE，UPDATED_ON。
NAME：域名名称
STATUS：域名状态
RECORDS：记录数量
GRADE：套餐等级
UPDATED_ON：更新时间
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * 排序类型，升序：ASC，降序：DESC。
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * 根据域名状态获取域名。可取值为 ENABLE，LOCK，PAUSE，SPAM。
ENABLE：正常
LOCK：锁定
PAUSE：暂停
SPAM：封禁
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 根据套餐获取域名，可通过 DescribeDomain 或 DescribeDomainList 接口 Grade 字段获取。
                     */
                    std::vector<std::string> m_package;
                    bool m_packageHasBeenSet;

                    /**
                     * 根据备注信息获取域名。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 要获取域名的更新时间起始时间点，如 '2021-05-01 03:00:00'。
                     */
                    std::string m_updatedAtBegin;
                    bool m_updatedAtBeginHasBeenSet;

                    /**
                     * 要获取域名的更新时间终止时间点，如 '2021-05-10 20:00:00'。
                     */
                    std::string m_updatedAtEnd;
                    bool m_updatedAtEndHasBeenSet;

                    /**
                     * 要获取域名的记录数查询区间起点。
                     */
                    uint64_t m_recordCountBegin;
                    bool m_recordCountBeginHasBeenSet;

                    /**
                     * 要获取域名的记录数查询区间终点。
                     */
                    uint64_t m_recordCountEnd;
                    bool m_recordCountEndHasBeenSet;

                    /**
                     * 项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 标签过滤
                     */
                    std::vector<TagItemFilter> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINFILTERLISTREQUEST_H_

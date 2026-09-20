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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBESESSIONSREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBESESSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/Filter.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeSessions请求参数结构体
                */
                class DescribeSessionsRequest : public AbstractModel
                {
                public:
                    DescribeSessionsRequest();
                    ~DescribeSessionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>查询的会话空间 ID。</p>
                     * @return SpaceId <p>查询的会话空间 ID。</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>查询的会话空间 ID。</p>
                     * @param _spaceId <p>查询的会话空间 ID。</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>Agent ID 列表，最多支持 100 个。</p>
                     * @return AgentIds <p>Agent ID 列表，最多支持 100 个。</p>
                     * @deprecated
                     */
                    std::vector<std::string> GetAgentIds() const;

                    /**
                     * 设置<p>Agent ID 列表，最多支持 100 个。</p>
                     * @param _agentIds <p>Agent ID 列表，最多支持 100 个。</p>
                     * @deprecated
                     */
                    void SetAgentIds(const std::vector<std::string>& _agentIds);

                    /**
                     * 判断参数 AgentIds 是否已赋值
                     * @return AgentIds 是否已赋值
                     * @deprecated
                     */
                    bool AgentIdsHasBeenSet() const;

                    /**
                     * 获取<p>用户 ID 列表，最多支持 100 个。</p>
                     * @return UserIds <p>用户 ID 列表，最多支持 100 个。</p>
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置<p>用户 ID 列表，最多支持 100 个。</p>
                     * @param _userIds <p>用户 ID 列表，最多支持 100 个。</p>
                     * 
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                    /**
                     * 获取<p>分页偏移量，默认为 0。</p>
                     * @return Offset <p>分页偏移量，默认为 0。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，默认为 0。</p>
                     * @param _offset <p>分页偏移量，默认为 0。</p>
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
                     * 获取<p>返回数量，默认为 20，最大值为 100。</p>
                     * @return Limit <p>返回数量，默认为 20，最大值为 100。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为 20，最大值为 100。</p>
                     * @param _limit <p>返回数量，默认为 20，最大值为 100。</p>
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
                     * 获取<p>会话 ID 列表，最多支持 100 个。</p>
                     * @return SessionIds <p>会话 ID 列表，最多支持 100 个。</p>
                     * 
                     */
                    std::vector<std::string> GetSessionIds() const;

                    /**
                     * 设置<p>会话 ID 列表，最多支持 100 个。</p>
                     * @param _sessionIds <p>会话 ID 列表，最多支持 100 个。</p>
                     * 
                     */
                    void SetSessionIds(const std::vector<std::string>& _sessionIds);

                    /**
                     * 判断参数 SessionIds 是否已赋值
                     * @return SessionIds 是否已赋值
                     * 
                     */
                    bool SessionIdsHasBeenSet() const;

                    /**
                     * 获取<p>会话筛选条件列表，支持 Metadata 精确匹配、标题精确匹配和标题模糊匹配。同一 Filter 内多个 Values 之间为 OR，不同 Filter 之间为 AND。不传或传空数组时不增加筛选限制。</p><p>入参限制：最多传入 10 个 Filter，每个 Filter 最多支持 100 个 Values。Filter.Name 不可重复，支持 metadata:MetadataKey、title、title-like；title 与 title-like 不可同时提供。标题筛选值不可为空或纯空白。匹配区分大小写，标题包含匹配中的 %、_ 按普通字符处理，不具有通配含义。</p><p>例如 Name 为 title-like，Values 为 [&quot;客服&quot;,&quot;测试&quot;]，表示查询标题包含“客服”或“测试”的会话。Name 为 metadata:env，Values 为 [&quot;dev&quot;,&quot;test&quot;]，表示按 Metadata env 的值精确筛选。标题条件与 Metadata、SessionIds、UserIds 筛选条件可组合使用，条件之间为 AND。筛选在分页前执行，TotalCount 为符合条件的会话总数。</p>
                     * @return Filters <p>会话筛选条件列表，支持 Metadata 精确匹配、标题精确匹配和标题模糊匹配。同一 Filter 内多个 Values 之间为 OR，不同 Filter 之间为 AND。不传或传空数组时不增加筛选限制。</p><p>入参限制：最多传入 10 个 Filter，每个 Filter 最多支持 100 个 Values。Filter.Name 不可重复，支持 metadata:MetadataKey、title、title-like；title 与 title-like 不可同时提供。标题筛选值不可为空或纯空白。匹配区分大小写，标题包含匹配中的 %、_ 按普通字符处理，不具有通配含义。</p><p>例如 Name 为 title-like，Values 为 [&quot;客服&quot;,&quot;测试&quot;]，表示查询标题包含“客服”或“测试”的会话。Name 为 metadata:env，Values 为 [&quot;dev&quot;,&quot;test&quot;]，表示按 Metadata env 的值精确筛选。标题条件与 Metadata、SessionIds、UserIds 筛选条件可组合使用，条件之间为 AND。筛选在分页前执行，TotalCount 为符合条件的会话总数。</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>会话筛选条件列表，支持 Metadata 精确匹配、标题精确匹配和标题模糊匹配。同一 Filter 内多个 Values 之间为 OR，不同 Filter 之间为 AND。不传或传空数组时不增加筛选限制。</p><p>入参限制：最多传入 10 个 Filter，每个 Filter 最多支持 100 个 Values。Filter.Name 不可重复，支持 metadata:MetadataKey、title、title-like；title 与 title-like 不可同时提供。标题筛选值不可为空或纯空白。匹配区分大小写，标题包含匹配中的 %、_ 按普通字符处理，不具有通配含义。</p><p>例如 Name 为 title-like，Values 为 [&quot;客服&quot;,&quot;测试&quot;]，表示查询标题包含“客服”或“测试”的会话。Name 为 metadata:env，Values 为 [&quot;dev&quot;,&quot;test&quot;]，表示按 Metadata env 的值精确筛选。标题条件与 Metadata、SessionIds、UserIds 筛选条件可组合使用，条件之间为 AND。筛选在分页前执行，TotalCount 为符合条件的会话总数。</p>
                     * @param _filters <p>会话筛选条件列表，支持 Metadata 精确匹配、标题精确匹配和标题模糊匹配。同一 Filter 内多个 Values 之间为 OR，不同 Filter 之间为 AND。不传或传空数组时不增加筛选限制。</p><p>入参限制：最多传入 10 个 Filter，每个 Filter 最多支持 100 个 Values。Filter.Name 不可重复，支持 metadata:MetadataKey、title、title-like；title 与 title-like 不可同时提供。标题筛选值不可为空或纯空白。匹配区分大小写，标题包含匹配中的 %、_ 按普通字符处理，不具有通配含义。</p><p>例如 Name 为 title-like，Values 为 [&quot;客服&quot;,&quot;测试&quot;]，表示查询标题包含“客服”或“测试”的会话。Name 为 metadata:env，Values 为 [&quot;dev&quot;,&quot;test&quot;]，表示按 Metadata env 的值精确筛选。标题条件与 Metadata、SessionIds、UserIds 筛选条件可组合使用，条件之间为 AND。筛选在分页前执行，TotalCount 为符合条件的会话总数。</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>查询的会话空间 ID。</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>Agent ID 列表，最多支持 100 个。</p>
                     */
                    std::vector<std::string> m_agentIds;
                    bool m_agentIdsHasBeenSet;

                    /**
                     * <p>用户 ID 列表，最多支持 100 个。</p>
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * <p>分页偏移量，默认为 0。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，默认为 20，最大值为 100。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>会话 ID 列表，最多支持 100 个。</p>
                     */
                    std::vector<std::string> m_sessionIds;
                    bool m_sessionIdsHasBeenSet;

                    /**
                     * <p>会话筛选条件列表，支持 Metadata 精确匹配、标题精确匹配和标题模糊匹配。同一 Filter 内多个 Values 之间为 OR，不同 Filter 之间为 AND。不传或传空数组时不增加筛选限制。</p><p>入参限制：最多传入 10 个 Filter，每个 Filter 最多支持 100 个 Values。Filter.Name 不可重复，支持 metadata:MetadataKey、title、title-like；title 与 title-like 不可同时提供。标题筛选值不可为空或纯空白。匹配区分大小写，标题包含匹配中的 %、_ 按普通字符处理，不具有通配含义。</p><p>例如 Name 为 title-like，Values 为 [&quot;客服&quot;,&quot;测试&quot;]，表示查询标题包含“客服”或“测试”的会话。Name 为 metadata:env，Values 为 [&quot;dev&quot;,&quot;test&quot;]，表示按 Metadata env 的值精确筛选。标题条件与 Metadata、SessionIds、UserIds 筛选条件可组合使用，条件之间为 AND。筛选在分页前执行，TotalCount 为符合条件的会话总数。</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBESESSIONSREQUEST_H_

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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEROUNDPLAYSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEROUNDPLAYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TimeRange.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeRoundPlays请求参数结构体
                */
                class DescribeRoundPlaysRequest : public AbstractModel
                {
                public:
                    DescribeRoundPlaysRequest();
                    ~DescribeRoundPlaysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件：轮播播单标识，数组长度限制：100。</p>
                     * @return RoundPlayIds <p>过滤条件：轮播播单标识，数组长度限制：100。</p>
                     * 
                     */
                    std::vector<std::string> GetRoundPlayIds() const;

                    /**
                     * 设置<p>过滤条件：轮播播单标识，数组长度限制：100。</p>
                     * @param _roundPlayIds <p>过滤条件：轮播播单标识，数组长度限制：100。</p>
                     * 
                     */
                    void SetRoundPlayIds(const std::vector<std::string>& _roundPlayIds);

                    /**
                     * 判断参数 RoundPlayIds 是否已赋值
                     * @return RoundPlayIds 是否已赋值
                     * 
                     */
                    bool RoundPlayIdsHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件，轮播播单状态，可选值： <li>Enabled：启动状态；</li> <li>Disabled：停止状态。</li></p>
                     * @return Status <p>过滤条件，轮播播单状态，可选值： <li>Enabled：启动状态；</li> <li>Disabled：停止状态。</li></p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>过滤条件，轮播播单状态，可选值： <li>Enabled：启动状态；</li> <li>Disabled：停止状态。</li></p>
                     * @param _status <p>过滤条件，轮播播单状态，可选值： <li>Enabled：启动状态；</li> <li>Disabled：停止状态。</li></p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件：轮播播单创建时间。</p>
                     * @return CreateTime <p>过滤条件：轮播播单创建时间。</p>
                     * 
                     */
                    TimeRange GetCreateTime() const;

                    /**
                     * 设置<p>过滤条件：轮播播单创建时间。</p>
                     * @param _createTime <p>过滤条件：轮播播单创建时间。</p>
                     * 
                     */
                    void SetCreateTime(const TimeRange& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件：轮播播单更新时间。</p>
                     * @return UpdateTime <p>过滤条件：轮播播单更新时间。</p>
                     * 
                     */
                    TimeRange GetUpdateTime() const;

                    /**
                     * 设置<p>过滤条件：轮播播单更新时间。</p>
                     * @param _updateTime <p>过滤条件：轮播播单更新时间。</p>
                     * 
                     */
                    void SetUpdateTime(const TimeRange& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>翻页标识，分批拉取时使用：当单次请求无法拉取所有数据，接口将会返回 ScrollToken，下一次请求携带该 Token，将会从下一条记录开始获取。</p>
                     * @return ScrollToken <p>翻页标识，分批拉取时使用：当单次请求无法拉取所有数据，接口将会返回 ScrollToken，下一次请求携带该 Token，将会从下一条记录开始获取。</p>
                     * 
                     */
                    std::string GetScrollToken() const;

                    /**
                     * 设置<p>翻页标识，分批拉取时使用：当单次请求无法拉取所有数据，接口将会返回 ScrollToken，下一次请求携带该 Token，将会从下一条记录开始获取。</p>
                     * @param _scrollToken <p>翻页标识，分批拉取时使用：当单次请求无法拉取所有数据，接口将会返回 ScrollToken，下一次请求携带该 Token，将会从下一条记录开始获取。</p>
                     * 
                     */
                    void SetScrollToken(const std::string& _scrollToken);

                    /**
                     * 判断参数 ScrollToken 是否已赋值
                     * @return ScrollToken 是否已赋值
                     * 
                     */
                    bool ScrollTokenHasBeenSet() const;

                    /**
                     * 获取<p>分页偏移量，默认值：0。已经废弃，请根据 ScrollToken 参数进行分批次查询。</p>
                     * @return Offset <p>分页偏移量，默认值：0。已经废弃，请根据 ScrollToken 参数进行分批次查询。</p>
                     * @deprecated
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，默认值：0。已经废弃，请根据 ScrollToken 参数进行分批次查询。</p>
                     * @param _offset <p>分页偏移量，默认值：0。已经废弃，请根据 ScrollToken 参数进行分批次查询。</p>
                     * @deprecated
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * @deprecated
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>返回记录条数，默认值：10，最大值：100。</p>
                     * @return Limit <p>返回记录条数，默认值：10，最大值：100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回记录条数，默认值：10，最大值：100。</p>
                     * @param _limit <p>返回记录条数，默认值：10，最大值：100。</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>过滤条件：轮播播单标识，数组长度限制：100。</p>
                     */
                    std::vector<std::string> m_roundPlayIds;
                    bool m_roundPlayIdsHasBeenSet;

                    /**
                     * <p>过滤条件，轮播播单状态，可选值： <li>Enabled：启动状态；</li> <li>Disabled：停止状态。</li></p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>过滤条件：轮播播单创建时间。</p>
                     */
                    TimeRange m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>过滤条件：轮播播单更新时间。</p>
                     */
                    TimeRange m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>翻页标识，分批拉取时使用：当单次请求无法拉取所有数据，接口将会返回 ScrollToken，下一次请求携带该 Token，将会从下一条记录开始获取。</p>
                     */
                    std::string m_scrollToken;
                    bool m_scrollTokenHasBeenSet;

                    /**
                     * <p>分页偏移量，默认值：0。已经废弃，请根据 ScrollToken 参数进行分批次查询。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回记录条数，默认值：10，最大值：100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEROUNDPLAYSREQUEST_H_

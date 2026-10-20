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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTPERMISSIONAPPLYORDERSREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTPERMISSIONAPPLYORDERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * ListPermissionApplyOrders请求参数结构体
                */
                class ListPermissionApplyOrdersRequest : public AbstractModel
                {
                public:
                    ListPermissionApplyOrdersRequest();
                    ~ListPermissionApplyOrdersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>空间 ID</p>
                     * @return ZoneId <p>空间 ID</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>空间 ID</p>
                     * @param _zoneId <p>空间 ID</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>搜索字段</p><p>按用户名 / 用户 ID 搜索</p>
                     * @return SearchValue <p>搜索字段</p><p>按用户名 / 用户 ID 搜索</p>
                     * 
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置<p>搜索字段</p><p>按用户名 / 用户 ID 搜索</p>
                     * @param _searchValue <p>搜索字段</p><p>按用户名 / 用户 ID 搜索</p>
                     * 
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     * 
                     */
                    bool SearchValueHasBeenSet() const;

                    /**
                     * 获取<p>状态值</p><p>枚举值：</p><ul><li>1： 待审核</li><li>2： 已通过 - 同步中</li><li>3： 已通过 - 同步成功</li><li>4： 已通过 - 同步失败</li><li>5： 已拒绝</li></ul>
                     * @return Status <p>状态值</p><p>枚举值：</p><ul><li>1： 待审核</li><li>2： 已通过 - 同步中</li><li>3： 已通过 - 同步成功</li><li>4： 已通过 - 同步失败</li><li>5： 已拒绝</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态值</p><p>枚举值：</p><ul><li>1： 待审核</li><li>2： 已通过 - 同步中</li><li>3： 已通过 - 同步成功</li><li>4： 已通过 - 同步失败</li><li>5： 已拒绝</li></ul>
                     * @param _status <p>状态值</p><p>枚举值：</p><ul><li>1： 待审核</li><li>2： 已通过 - 同步中</li><li>3： 已通过 - 同步成功</li><li>4： 已通过 - 同步失败</li><li>5： 已拒绝</li></ul>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>每页条数</p><p>取值范围：[1, 100]</p><p>默认值：10</p>
                     * @return MaxResults <p>每页条数</p><p>取值范围：[1, 100]</p><p>默认值：10</p>
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置<p>每页条数</p><p>取值范围：[1, 100]</p><p>默认值：10</p>
                     * @param _maxResults <p>每页条数</p><p>取值范围：[1, 100]</p><p>默认值：10</p>
                     * 
                     */
                    void SetMaxResults(const int64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取<p>翻页游标</p>
                     * @return NextToken <p>翻页游标</p>
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置<p>翻页游标</p>
                     * @param _nextToken <p>翻页游标</p>
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                private:

                    /**
                     * <p>空间 ID</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>搜索字段</p><p>按用户名 / 用户 ID 搜索</p>
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                    /**
                     * <p>状态值</p><p>枚举值：</p><ul><li>1： 待审核</li><li>2： 已通过 - 同步中</li><li>3： 已通过 - 同步成功</li><li>4： 已通过 - 同步失败</li><li>5： 已拒绝</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>每页条数</p><p>取值范围：[1, 100]</p><p>默认值：10</p>
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * <p>翻页游标</p>
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTPERMISSIONAPPLYORDERSREQUEST_H_

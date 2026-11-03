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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DELETELOGINWHITECUSTOMEDRREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DELETELOGINWHITECUSTOMEDRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/EDRFilter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DeleteLoginWhiteCustomEDR请求参数结构体
                */
                class DeleteLoginWhiteCustomEDRRequest : public AbstractModel
                {
                public:
                    DeleteLoginWhiteCustomEDRRequest();
                    ~DeleteLoginWhiteCustomEDRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>显式勾选的规则ID列表，最多 1000 个；与 SelectAll 二选一</p>
                     * @return Ids <p>显式勾选的规则ID列表，最多 1000 个；与 SelectAll 二选一</p>
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置<p>显式勾选的规则ID列表，最多 1000 个；与 SelectAll 二选一</p>
                     * @param _ids <p>显式勾选的规则ID列表，最多 1000 个；与 SelectAll 二选一</p>
                     * 
                     */
                    void SetIds(const std::vector<uint64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取<p>是否跨页全选：true-删除符合 Filters 的全部规则（此时 Filters 必填） false-仅删除 Ids</p>
                     * @return SelectAll <p>是否跨页全选：true-删除符合 Filters 的全部规则（此时 Filters 必填） false-仅删除 Ids</p>
                     * 
                     */
                    bool GetSelectAll() const;

                    /**
                     * 设置<p>是否跨页全选：true-删除符合 Filters 的全部规则（此时 Filters 必填） false-仅删除 Ids</p>
                     * @param _selectAll <p>是否跨页全选：true-删除符合 Filters 的全部规则（此时 Filters 必填） false-仅删除 Ids</p>
                     * 
                     */
                    void SetSelectAll(const bool& _selectAll);

                    /**
                     * 判断参数 SelectAll 是否已赋值
                     * @return SelectAll 是否已赋值
                     * 
                     */
                    bool SelectAllHasBeenSet() const;

                    /**
                     * 获取<p>多账号目标账号 AppId 列表，最多 1000 个；为空表示仅当前账号；传入但全部无权限时返回 InvalidParameter</p>
                     * @return TargetAppIDs <p>多账号目标账号 AppId 列表，最多 1000 个；为空表示仅当前账号；传入但全部无权限时返回 InvalidParameter</p>
                     * 
                     */
                    std::vector<uint64_t> GetTargetAppIDs() const;

                    /**
                     * 设置<p>多账号目标账号 AppId 列表，最多 1000 个；为空表示仅当前账号；传入但全部无权限时返回 InvalidParameter</p>
                     * @param _targetAppIDs <p>多账号目标账号 AppId 列表，最多 1000 个；为空表示仅当前账号；传入但全部无权限时返回 InvalidParameter</p>
                     * 
                     */
                    void SetTargetAppIDs(const std::vector<uint64_t>& _targetAppIDs);

                    /**
                     * 判断参数 TargetAppIDs 是否已赋值
                     * @return TargetAppIDs 是否已赋值
                     * 
                     */
                    bool TargetAppIDsHasBeenSet() const;

                    /**
                     * 获取<p>排除的规则ID列表，最多1000个</p>
                     * @return ExcludeIds <p>排除的规则ID列表，最多1000个</p>
                     * 
                     */
                    std::vector<int64_t> GetExcludeIds() const;

                    /**
                     * 设置<p>排除的规则ID列表，最多1000个</p>
                     * @param _excludeIds <p>排除的规则ID列表，最多1000个</p>
                     * 
                     */
                    void SetExcludeIds(const std::vector<int64_t>& _excludeIds);

                    /**
                     * 判断参数 ExcludeIds 是否已赋值
                     * @return ExcludeIds 是否已赋值
                     * 
                     */
                    bool ExcludeIdsHasBeenSet() const;

                    /**
                     * 获取<p>全选条件下的筛选条件</p>
                     * @return Filters <p>全选条件下的筛选条件</p>
                     * 
                     */
                    std::vector<EDRFilter> GetFilters() const;

                    /**
                     * 设置<p>全选条件下的筛选条件</p>
                     * @param _filters <p>全选条件下的筛选条件</p>
                     * 
                     */
                    void SetFilters(const std::vector<EDRFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>显式勾选的规则ID列表，最多 1000 个；与 SelectAll 二选一</p>
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * <p>是否跨页全选：true-删除符合 Filters 的全部规则（此时 Filters 必填） false-仅删除 Ids</p>
                     */
                    bool m_selectAll;
                    bool m_selectAllHasBeenSet;

                    /**
                     * <p>多账号目标账号 AppId 列表，最多 1000 个；为空表示仅当前账号；传入但全部无权限时返回 InvalidParameter</p>
                     */
                    std::vector<uint64_t> m_targetAppIDs;
                    bool m_targetAppIDsHasBeenSet;

                    /**
                     * <p>排除的规则ID列表，最多1000个</p>
                     */
                    std::vector<int64_t> m_excludeIds;
                    bool m_excludeIdsHasBeenSet;

                    /**
                     * <p>全选条件下的筛选条件</p>
                     */
                    std::vector<EDRFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DELETELOGINWHITECUSTOMEDRREQUEST_H_

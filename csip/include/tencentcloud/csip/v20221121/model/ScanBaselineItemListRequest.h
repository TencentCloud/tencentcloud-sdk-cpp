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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SCANBASELINEITEMLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SCANBASELINEITEMLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ScanBaselineItemList请求参数结构体
                */
                class ScanBaselineItemListRequest : public AbstractModel
                {
                public:
                    ScanBaselineItemListRequest();
                    ~ScanBaselineItemListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     * @return PolicyType <p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置<p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     * @param _policyType <p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取<p>目标基线策略 ID，必须大于 0。</p>
                     * @return PolicyID <p>目标基线策略 ID，必须大于 0。</p>
                     * 
                     */
                    uint64_t GetPolicyID() const;

                    /**
                     * 设置<p>目标基线策略 ID，必须大于 0。</p>
                     * @param _policyID <p>目标基线策略 ID，必须大于 0。</p>
                     * 
                     */
                    void SetPolicyID(const uint64_t& _policyID);

                    /**
                     * 判断参数 PolicyID 是否已赋值
                     * @return PolicyID 是否已赋值
                     * 
                     */
                    bool PolicyIDHasBeenSet() const;

                    /**
                     * 获取<p>基线系统父分类 ID。</p>
                     * @return ParentCategoryID <p>基线系统父分类 ID。</p>
                     * 
                     */
                    uint64_t GetParentCategoryID() const;

                    /**
                     * 设置<p>基线系统父分类 ID。</p>
                     * @param _parentCategoryID <p>基线系统父分类 ID。</p>
                     * 
                     */
                    void SetParentCategoryID(const uint64_t& _parentCategoryID);

                    /**
                     * 判断参数 ParentCategoryID 是否已赋值
                     * @return ParentCategoryID 是否已赋值
                     * 
                     */
                    bool ParentCategoryIDHasBeenSet() const;

                    /**
                     * 获取<p>要重新扫描的检测项 ID 列表，不可为空且元素不可为 0。</p>
                     * @return ItemIDList <p>要重新扫描的检测项 ID 列表，不可为空且元素不可为 0。</p>
                     * 
                     */
                    std::vector<uint64_t> GetItemIDList() const;

                    /**
                     * 设置<p>要重新扫描的检测项 ID 列表，不可为空且元素不可为 0。</p>
                     * @param _itemIDList <p>要重新扫描的检测项 ID 列表，不可为空且元素不可为 0。</p>
                     * 
                     */
                    void SetItemIDList(const std::vector<uint64_t>& _itemIDList);

                    /**
                     * 判断参数 ItemIDList 是否已赋值
                     * @return ItemIDList 是否已赋值
                     * 
                     */
                    bool ItemIDListHasBeenSet() const;

                    /**
                     * 获取<p>基线子分类 ID。</p>
                     * @return CategoryID <p>基线子分类 ID。</p>
                     * 
                     */
                    uint64_t GetCategoryID() const;

                    /**
                     * 设置<p>基线子分类 ID。</p>
                     * @param _categoryID <p>基线子分类 ID。</p>
                     * 
                     */
                    void SetCategoryID(const uint64_t& _categoryID);

                    /**
                     * 判断参数 CategoryID 是否已赋值
                     * @return CategoryID 是否已赋值
                     * 
                     */
                    bool CategoryIDHasBeenSet() const;

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

                private:

                    /**
                     * <p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * <p>目标基线策略 ID，必须大于 0。</p>
                     */
                    uint64_t m_policyID;
                    bool m_policyIDHasBeenSet;

                    /**
                     * <p>基线系统父分类 ID。</p>
                     */
                    uint64_t m_parentCategoryID;
                    bool m_parentCategoryIDHasBeenSet;

                    /**
                     * <p>要重新扫描的检测项 ID 列表，不可为空且元素不可为 0。</p>
                     */
                    std::vector<uint64_t> m_itemIDList;
                    bool m_itemIDListHasBeenSet;

                    /**
                     * <p>基线子分类 ID。</p>
                     */
                    uint64_t m_categoryID;
                    bool m_categoryIDHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SCANBASELINEITEMLISTREQUEST_H_

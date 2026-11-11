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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYBASELINEIGNOREPOLICYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYBASELINEIGNOREPOLICYREQUEST_H_

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
                * ModifyBaselineIgnorePolicy请求参数结构体
                */
                class ModifyBaselineIgnorePolicyRequest : public AbstractModel
                {
                public:
                    ModifyBaselineIgnorePolicyRequest();
                    ~ModifyBaselineIgnorePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>检测项 ID，标识对哪个检测项设置忽略策略。</p>
                     * @return ItemID <p>检测项 ID，标识对哪个检测项设置忽略策略。</p>
                     * 
                     */
                    uint64_t GetItemID() const;

                    /**
                     * 设置<p>检测项 ID，标识对哪个检测项设置忽略策略。</p>
                     * @param _itemID <p>检测项 ID，标识对哪个检测项设置忽略策略。</p>
                     * 
                     */
                    void SetItemID(const uint64_t& _itemID);

                    /**
                     * 判断参数 ItemID 是否已赋值
                     * @return ItemID 是否已赋值
                     * 
                     */
                    bool ItemIDHasBeenSet() const;

                    /**
                     * 获取<p>忽略范围类型。</p><p>枚举值：</p><ul><li>ALL： 全部资产</li><li>PICK： 指定资产</li></ul>
                     * @return ScopeType <p>忽略范围类型。</p><p>枚举值：</p><ul><li>ALL： 全部资产</li><li>PICK： 指定资产</li></ul>
                     * 
                     */
                    std::string GetScopeType() const;

                    /**
                     * 设置<p>忽略范围类型。</p><p>枚举值：</p><ul><li>ALL： 全部资产</li><li>PICK： 指定资产</li></ul>
                     * @param _scopeType <p>忽略范围类型。</p><p>枚举值：</p><ul><li>ALL： 全部资产</li><li>PICK： 指定资产</li></ul>
                     * 
                     */
                    void SetScopeType(const std::string& _scopeType);

                    /**
                     * 判断参数 ScopeType 是否已赋值
                     * @return ScopeType 是否已赋值
                     * 
                     */
                    bool ScopeTypeHasBeenSet() const;

                    /**
                     * 获取<p>备注信息。</p>
                     * @return Remark <p>备注信息。</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注信息。</p>
                     * @param _remark <p>备注信息。</p>
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
                     * 获取<p>忽略策略记录 ID。新建时传 0，更新时传对应记录 ID。</p>
                     * @return ID <p>忽略策略记录 ID。新建时传 0，更新时传对应记录 ID。</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>忽略策略记录 ID。新建时传 0，更新时传对应记录 ID。</p>
                     * @param _iD <p>忽略策略记录 ID。新建时传 0，更新时传对应记录 ID。</p>
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>自选资产 ID 列表，PICK 时生效，传入 instance-id 或集群 ID。</p>
                     * @return ScopeIncludeList <p>自选资产 ID 列表，PICK 时生效，传入 instance-id 或集群 ID。</p>
                     * 
                     */
                    std::vector<std::string> GetScopeIncludeList() const;

                    /**
                     * 设置<p>自选资产 ID 列表，PICK 时生效，传入 instance-id 或集群 ID。</p>
                     * @param _scopeIncludeList <p>自选资产 ID 列表，PICK 时生效，传入 instance-id 或集群 ID。</p>
                     * 
                     */
                    void SetScopeIncludeList(const std::vector<std::string>& _scopeIncludeList);

                    /**
                     * 判断参数 ScopeIncludeList 是否已赋值
                     * @return ScopeIncludeList 是否已赋值
                     * 
                     */
                    bool ScopeIncludeListHasBeenSet() const;

                    /**
                     * 获取<p>剔除资产 ID 列表，ALL 时生效，传入 instance-id 或集群 ID。</p>
                     * @return ScopeExcludeList <p>剔除资产 ID 列表，ALL 时生效，传入 instance-id 或集群 ID。</p>
                     * 
                     */
                    std::vector<std::string> GetScopeExcludeList() const;

                    /**
                     * 设置<p>剔除资产 ID 列表，ALL 时生效，传入 instance-id 或集群 ID。</p>
                     * @param _scopeExcludeList <p>剔除资产 ID 列表，ALL 时生效，传入 instance-id 或集群 ID。</p>
                     * 
                     */
                    void SetScopeExcludeList(const std::vector<std::string>& _scopeExcludeList);

                    /**
                     * 判断参数 ScopeExcludeList 是否已赋值
                     * @return ScopeExcludeList 是否已赋值
                     * 
                     */
                    bool ScopeExcludeListHasBeenSet() const;

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
                     * <p>检测项 ID，标识对哪个检测项设置忽略策略。</p>
                     */
                    uint64_t m_itemID;
                    bool m_itemIDHasBeenSet;

                    /**
                     * <p>忽略范围类型。</p><p>枚举值：</p><ul><li>ALL： 全部资产</li><li>PICK： 指定资产</li></ul>
                     */
                    std::string m_scopeType;
                    bool m_scopeTypeHasBeenSet;

                    /**
                     * <p>备注信息。</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>忽略策略记录 ID。新建时传 0，更新时传对应记录 ID。</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>自选资产 ID 列表，PICK 时生效，传入 instance-id 或集群 ID。</p>
                     */
                    std::vector<std::string> m_scopeIncludeList;
                    bool m_scopeIncludeListHasBeenSet;

                    /**
                     * <p>剔除资产 ID 列表，ALL 时生效，传入 instance-id 或集群 ID。</p>
                     */
                    std::vector<std::string> m_scopeExcludeList;
                    bool m_scopeExcludeListHasBeenSet;

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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYBASELINEIGNOREPOLICYREQUEST_H_

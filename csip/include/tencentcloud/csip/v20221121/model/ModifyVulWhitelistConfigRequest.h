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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYVULWHITELISTCONFIGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYVULWHITELISTCONFIGREQUEST_H_

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
                * ModifyVulWhitelistConfig请求参数结构体
                */
                class ModifyVulWhitelistConfigRequest : public AbstractModel
                {
                public:
                    ModifyVulWhitelistConfigRequest();
                    ~ModifyVulWhitelistConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>id列表</p>
                     * @return Id <p>id列表</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>id列表</p>
                     * @param _id <p>id列表</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
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
                     * 获取<p>资产范围</p><p>枚举值：</p><ul><li>0： 全部资产</li><li>1： 自选资产</li><li>2： 全选剔除资产</li></ul>
                     * @return AssetRange <p>资产范围</p><p>枚举值：</p><ul><li>0： 全部资产</li><li>1： 自选资产</li><li>2： 全选剔除资产</li></ul>
                     * 
                     */
                    uint64_t GetAssetRange() const;

                    /**
                     * 设置<p>资产范围</p><p>枚举值：</p><ul><li>0： 全部资产</li><li>1： 自选资产</li><li>2： 全选剔除资产</li></ul>
                     * @param _assetRange <p>资产范围</p><p>枚举值：</p><ul><li>0： 全部资产</li><li>1： 自选资产</li><li>2： 全选剔除资产</li></ul>
                     * 
                     */
                    void SetAssetRange(const uint64_t& _assetRange);

                    /**
                     * 判断参数 AssetRange 是否已赋值
                     * @return AssetRange 是否已赋值
                     * 
                     */
                    bool AssetRangeHasBeenSet() const;

                    /**
                     * 获取<p>资产列表（Quuid列表）</p>
                     * @return AssetList <p>资产列表（Quuid列表）</p>
                     * 
                     */
                    std::vector<std::string> GetAssetList() const;

                    /**
                     * 设置<p>资产列表（Quuid列表）</p>
                     * @param _assetList <p>资产列表（Quuid列表）</p>
                     * 
                     */
                    void SetAssetList(const std::vector<std::string>& _assetList);

                    /**
                     * 判断参数 AssetList 是否已赋值
                     * @return AssetList 是否已赋值
                     * 
                     */
                    bool AssetListHasBeenSet() const;

                private:

                    /**
                     * <p>id列表</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>资产范围</p><p>枚举值：</p><ul><li>0： 全部资产</li><li>1： 自选资产</li><li>2： 全选剔除资产</li></ul>
                     */
                    uint64_t m_assetRange;
                    bool m_assetRangeHasBeenSet;

                    /**
                     * <p>资产列表（Quuid列表）</p>
                     */
                    std::vector<std::string> m_assetList;
                    bool m_assetListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYVULWHITELISTCONFIGREQUEST_H_

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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ADDVULWHITELISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ADDVULWHITELISTREQUEST_H_

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
                * AddVulWhitelist请求参数结构体
                */
                class AddVulWhitelistRequest : public AbstractModel
                {
                public:
                    AddVulWhitelistRequest();
                    ~AddVulWhitelistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>漏洞ID</p>
                     * @return VulId <p>漏洞ID</p>
                     * 
                     */
                    std::vector<uint64_t> GetVulId() const;

                    /**
                     * 设置<p>漏洞ID</p>
                     * @param _vulId <p>漏洞ID</p>
                     * 
                     */
                    void SetVulId(const std::vector<uint64_t>& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取<p>补丁ID</p>
                     * @return KbId <p>补丁ID</p>
                     * 
                     */
                    std::vector<uint64_t> GetKbId() const;

                    /**
                     * 设置<p>补丁ID</p>
                     * @param _kbId <p>补丁ID</p>
                     * 
                     */
                    void SetKbId(const std::vector<uint64_t>& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

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
                     * 获取<p>资产列表</p>
                     * @return AssetList <p>资产列表</p>
                     * 
                     */
                    std::vector<std::string> GetAssetList() const;

                    /**
                     * 设置<p>资产列表</p>
                     * @param _assetList <p>资产列表</p>
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
                     * <p>漏洞ID</p>
                     */
                    std::vector<uint64_t> m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * <p>补丁ID</p>
                     */
                    std::vector<uint64_t> m_kbId;
                    bool m_kbIdHasBeenSet;

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
                     * <p>资产列表</p>
                     */
                    std::vector<std::string> m_assetList;
                    bool m_assetListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ADDVULWHITELISTREQUEST_H_

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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESECURITYGROUPPOLICYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESECURITYGROUPPOLICYREQUEST_H_

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
                * DescribeSecurityGroupPolicy请求参数结构体
                */
                class DescribeSecurityGroupPolicyRequest : public AbstractModel
                {
                public:
                    DescribeSecurityGroupPolicyRequest();
                    ~DescribeSecurityGroupPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云厂商
                     * @return Provider 云厂商
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置云厂商
                     * @param _provider 云厂商
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取资产ID
                     * @return AssetID 资产ID
                     * 
                     */
                    std::string GetAssetID() const;

                    /**
                     * 设置资产ID
                     * @param _assetID 资产ID
                     * 
                     */
                    void SetAssetID(const std::string& _assetID);

                    /**
                     * 判断参数 AssetID 是否已赋值
                     * @return AssetID 是否已赋值
                     * 
                     */
                    bool AssetIDHasBeenSet() const;

                    /**
                     * 获取资产类型
                     * @return AssetType 资产类型
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型
                     * @param _assetType 资产类型
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

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
                     * 获取安全组ID
                     * @return SecurityGroupID 安全组ID
                     * 
                     */
                    std::string GetSecurityGroupID() const;

                    /**
                     * 设置安全组ID
                     * @param _securityGroupID 安全组ID
                     * 
                     */
                    void SetSecurityGroupID(const std::string& _securityGroupID);

                    /**
                     * 判断参数 SecurityGroupID 是否已赋值
                     * @return SecurityGroupID 是否已赋值
                     * 
                     */
                    bool SecurityGroupIDHasBeenSet() const;

                private:

                    /**
                     * 云厂商
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * 资产ID
                     */
                    std::string m_assetID;
                    bool m_assetIDHasBeenSet;

                    /**
                     * 资产类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 安全组ID
                     */
                    std::string m_securityGroupID;
                    bool m_securityGroupIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESECURITYGROUPPOLICYREQUEST_H_

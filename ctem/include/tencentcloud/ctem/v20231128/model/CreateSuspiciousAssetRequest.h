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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_CREATESUSPICIOUSASSETREQUEST_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_CREATESUSPICIOUSASSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * CreateSuspiciousAsset请求参数结构体
                */
                class CreateSuspiciousAssetRequest : public AbstractModel
                {
                public:
                    CreateSuspiciousAssetRequest();
                    ~CreateSuspiciousAssetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业Id
                     * @return CustomerId 企业Id
                     * 
                     */
                    int64_t GetCustomerId() const;

                    /**
                     * 设置企业Id
                     * @param _customerId 企业Id
                     * 
                     */
                    void SetCustomerId(const int64_t& _customerId);

                    /**
                     * 判断参数 CustomerId 是否已赋值
                     * @return CustomerId 是否已赋值
                     * 
                     */
                    bool CustomerIdHasBeenSet() const;

                    /**
                     * 获取Url
                     * @return Url Url
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Url
                     * @param _url Url
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取子公司
                     * @return EnterpriseUid 子公司
                     * 
                     */
                    std::string GetEnterpriseUid() const;

                    /**
                     * 设置子公司
                     * @param _enterpriseUid 子公司
                     * 
                     */
                    void SetEnterpriseUid(const std::string& _enterpriseUid);

                    /**
                     * 判断参数 EnterpriseUid 是否已赋值
                     * @return EnterpriseUid 是否已赋值
                     * 
                     */
                    bool EnterpriseUidHasBeenSet() const;

                    /**
                     * 获取标题
                     * @return Title 标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置标题
                     * @param _title 标题
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取所属者
                     * @return Owner 所属者
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置所属者
                     * @param _owner 所属者
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取来源类型
                     * @return SourceType 来源类型
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置来源类型
                     * @param _sourceType 来源类型
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取来源值
                     * @return SourceValue 来源值
                     * 
                     */
                    std::string GetSourceValue() const;

                    /**
                     * 设置来源值
                     * @param _sourceValue 来源值
                     * 
                     */
                    void SetSourceValue(const std::string& _sourceValue);

                    /**
                     * 判断参数 SourceValue 是否已赋值
                     * @return SourceValue 是否已赋值
                     * 
                     */
                    bool SourceValueHasBeenSet() const;

                    /**
                     * 获取是否信任
                     * @return Trusted 是否信任
                     * 
                     */
                    bool GetTrusted() const;

                    /**
                     * 设置是否信任
                     * @param _trusted 是否信任
                     * 
                     */
                    void SetTrusted(const bool& _trusted);

                    /**
                     * 判断参数 Trusted 是否已赋值
                     * @return Trusted 是否已赋值
                     * 
                     */
                    bool TrustedHasBeenSet() const;

                private:

                    /**
                     * 企业Id
                     */
                    int64_t m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * Url
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 子公司
                     */
                    std::string m_enterpriseUid;
                    bool m_enterpriseUidHasBeenSet;

                    /**
                     * 标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 标签
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 所属者
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 来源类型
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 来源值
                     */
                    std::string m_sourceValue;
                    bool m_sourceValueHasBeenSet;

                    /**
                     * 是否信任
                     */
                    bool m_trusted;
                    bool m_trustedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_CREATESUSPICIOUSASSETREQUEST_H_

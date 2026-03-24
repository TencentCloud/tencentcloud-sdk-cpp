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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYNAMESPACEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYNAMESPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/CVEWhitelistItem.h>
#include <tencentcloud/tcr/v20190924/model/TagSpecification.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * ModifyNamespace请求参数结构体
                */
                class ModifyNamespaceRequest : public AbstractModel
                {
                public:
                    ModifyNamespaceRequest();
                    ~ModifyNamespaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例Id</p>
                     * @return RegistryId <p>实例Id</p>
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置<p>实例Id</p>
                     * @param _registryId <p>实例Id</p>
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取<p>命名空间名称</p>
                     * @return NamespaceName <p>命名空间名称</p>
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置<p>命名空间名称</p>
                     * @param _namespaceName <p>命名空间名称</p>
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取<p>访问级别，True为公开，False为私有</p>
                     * @return IsPublic <p>访问级别，True为公开，False为私有</p>
                     * 
                     */
                    bool GetIsPublic() const;

                    /**
                     * 设置<p>访问级别，True为公开，False为私有</p>
                     * @param _isPublic <p>访问级别，True为公开，False为私有</p>
                     * 
                     */
                    void SetIsPublic(const bool& _isPublic);

                    /**
                     * 判断参数 IsPublic 是否已赋值
                     * @return IsPublic 是否已赋值
                     * 
                     */
                    bool IsPublicHasBeenSet() const;

                    /**
                     * 获取<p>扫描级别，True为自动，False为手动</p>
                     * @return IsAutoScan <p>扫描级别，True为自动，False为手动</p>
                     * 
                     */
                    bool GetIsAutoScan() const;

                    /**
                     * 设置<p>扫描级别，True为自动，False为手动</p>
                     * @param _isAutoScan <p>扫描级别，True为自动，False为手动</p>
                     * 
                     */
                    void SetIsAutoScan(const bool& _isAutoScan);

                    /**
                     * 判断参数 IsAutoScan 是否已赋值
                     * @return IsAutoScan 是否已赋值
                     * 
                     */
                    bool IsAutoScanHasBeenSet() const;

                    /**
                     * 获取<p>阻断开关，True为开放，False为关闭</p>
                     * @return IsPreventVUL <p>阻断开关，True为开放，False为关闭</p>
                     * 
                     */
                    bool GetIsPreventVUL() const;

                    /**
                     * 设置<p>阻断开关，True为开放，False为关闭</p>
                     * @param _isPreventVUL <p>阻断开关，True为开放，False为关闭</p>
                     * 
                     */
                    void SetIsPreventVUL(const bool& _isPreventVUL);

                    /**
                     * 判断参数 IsPreventVUL 是否已赋值
                     * @return IsPreventVUL 是否已赋值
                     * 
                     */
                    bool IsPreventVULHasBeenSet() const;

                    /**
                     * 获取<p>阻断漏洞等级，目前仅支持 low、medium、high</p>
                     * @return Severity <p>阻断漏洞等级，目前仅支持 low、medium、high</p>
                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置<p>阻断漏洞等级，目前仅支持 low、medium、high</p>
                     * @param _severity <p>阻断漏洞等级，目前仅支持 low、medium、high</p>
                     * 
                     */
                    void SetSeverity(const std::string& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                    /**
                     * 获取<p>漏洞白名单列表</p>
                     * @return CVEWhitelistItems <p>漏洞白名单列表</p>
                     * 
                     */
                    std::vector<CVEWhitelistItem> GetCVEWhitelistItems() const;

                    /**
                     * 设置<p>漏洞白名单列表</p>
                     * @param _cVEWhitelistItems <p>漏洞白名单列表</p>
                     * 
                     */
                    void SetCVEWhitelistItems(const std::vector<CVEWhitelistItem>& _cVEWhitelistItems);

                    /**
                     * 判断参数 CVEWhitelistItems 是否已赋值
                     * @return CVEWhitelistItems 是否已赋值
                     * 
                     */
                    bool CVEWhitelistItemsHasBeenSet() const;

                    /**
                     * 获取<p>tag列表</p>
                     * @return TagSpecification <p>tag列表</p>
                     * 
                     */
                    TagSpecification GetTagSpecification() const;

                    /**
                     * 设置<p>tag列表</p>
                     * @param _tagSpecification <p>tag列表</p>
                     * 
                     */
                    void SetTagSpecification(const TagSpecification& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                private:

                    /**
                     * <p>实例Id</p>
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>命名空间名称</p>
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * <p>访问级别，True为公开，False为私有</p>
                     */
                    bool m_isPublic;
                    bool m_isPublicHasBeenSet;

                    /**
                     * <p>扫描级别，True为自动，False为手动</p>
                     */
                    bool m_isAutoScan;
                    bool m_isAutoScanHasBeenSet;

                    /**
                     * <p>阻断开关，True为开放，False为关闭</p>
                     */
                    bool m_isPreventVUL;
                    bool m_isPreventVULHasBeenSet;

                    /**
                     * <p>阻断漏洞等级，目前仅支持 low、medium、high</p>
                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * <p>漏洞白名单列表</p>
                     */
                    std::vector<CVEWhitelistItem> m_cVEWhitelistItems;
                    bool m_cVEWhitelistItemsHasBeenSet;

                    /**
                     * <p>tag列表</p>
                     */
                    TagSpecification m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYNAMESPACEREQUEST_H_

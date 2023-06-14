/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                     * 获取实例Id
                     * @return RegistryId 实例Id
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例Id
                     * @param _registryId 实例Id
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
                     * 获取命名空间名称
                     * @return NamespaceName 命名空间名称
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间名称
                     * @param _namespaceName 命名空间名称
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
                     * 获取访问级别，True为公开，False为私有
                     * @return IsPublic 访问级别，True为公开，False为私有
                     * 
                     */
                    bool GetIsPublic() const;

                    /**
                     * 设置访问级别，True为公开，False为私有
                     * @param _isPublic 访问级别，True为公开，False为私有
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
                     * 获取扫描级别，True为自动，False为手动
                     * @return IsAutoScan 扫描级别，True为自动，False为手动
                     * 
                     */
                    bool GetIsAutoScan() const;

                    /**
                     * 设置扫描级别，True为自动，False为手动
                     * @param _isAutoScan 扫描级别，True为自动，False为手动
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
                     * 获取阻断开关，True为开放，False为关闭
                     * @return IsPreventVUL 阻断开关，True为开放，False为关闭
                     * 
                     */
                    bool GetIsPreventVUL() const;

                    /**
                     * 设置阻断开关，True为开放，False为关闭
                     * @param _isPreventVUL 阻断开关，True为开放，False为关闭
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
                     * 获取阻断漏洞等级，目前仅支持 low、medium、high
                     * @return Severity 阻断漏洞等级，目前仅支持 low、medium、high
                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置阻断漏洞等级，目前仅支持 low、medium、high
                     * @param _severity 阻断漏洞等级，目前仅支持 low、medium、high
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
                     * 获取漏洞白名单列表
                     * @return CVEWhitelistItems 漏洞白名单列表
                     * 
                     */
                    std::vector<CVEWhitelistItem> GetCVEWhitelistItems() const;

                    /**
                     * 设置漏洞白名单列表
                     * @param _cVEWhitelistItems 漏洞白名单列表
                     * 
                     */
                    void SetCVEWhitelistItems(const std::vector<CVEWhitelistItem>& _cVEWhitelistItems);

                    /**
                     * 判断参数 CVEWhitelistItems 是否已赋值
                     * @return CVEWhitelistItems 是否已赋值
                     * 
                     */
                    bool CVEWhitelistItemsHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 命名空间名称
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 访问级别，True为公开，False为私有
                     */
                    bool m_isPublic;
                    bool m_isPublicHasBeenSet;

                    /**
                     * 扫描级别，True为自动，False为手动
                     */
                    bool m_isAutoScan;
                    bool m_isAutoScanHasBeenSet;

                    /**
                     * 阻断开关，True为开放，False为关闭
                     */
                    bool m_isPreventVUL;
                    bool m_isPreventVULHasBeenSet;

                    /**
                     * 阻断漏洞等级，目前仅支持 low、medium、high
                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * 漏洞白名单列表
                     */
                    std::vector<CVEWhitelistItem> m_cVEWhitelistItems;
                    bool m_cVEWhitelistItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYNAMESPACEREQUEST_H_

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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_TCRNAMESPACEINFO_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_TCRNAMESPACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/TagSpecification.h>
#include <tencentcloud/tcr/v20190924/model/KeyValueString.h>
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
                * Tcr 命名空间的描述
                */
                class TcrNamespaceInfo : public AbstractModel
                {
                public:
                    TcrNamespaceInfo();
                    ~TcrNamespaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间名称
                     * @return Name 命名空间名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置命名空间名称
                     * @param _name 命名空间名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreationTime 创建时间
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置创建时间
                     * @param _creationTime 创建时间
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取访问级别
                     * @return Public 访问级别
                     * 
                     */
                    bool GetPublic() const;

                    /**
                     * 设置访问级别
                     * @param _public 访问级别
                     * 
                     */
                    void SetPublic(const bool& _public);

                    /**
                     * 判断参数 Public 是否已赋值
                     * @return Public 是否已赋值
                     * 
                     */
                    bool PublicHasBeenSet() const;

                    /**
                     * 获取命名空间的Id
                     * @return NamespaceId 命名空间的Id
                     * 
                     */
                    int64_t GetNamespaceId() const;

                    /**
                     * 设置命名空间的Id
                     * @param _namespaceId 命名空间的Id
                     * 
                     */
                    void SetNamespaceId(const int64_t& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取实例云标签
                     * @return TagSpecification 实例云标签
                     * 
                     */
                    TagSpecification GetTagSpecification() const;

                    /**
                     * 设置实例云标签
                     * @param _tagSpecification 实例云标签
                     * 
                     */
                    void SetTagSpecification(const TagSpecification& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取命名空间元数据
                     * @return Metadata 命名空间元数据
                     * 
                     */
                    std::vector<KeyValueString> GetMetadata() const;

                    /**
                     * 设置命名空间元数据
                     * @param _metadata 命名空间元数据
                     * 
                     */
                    void SetMetadata(const std::vector<KeyValueString>& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

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

                    /**
                     * 获取扫描级别，true为自动，false为手动
                     * @return AutoScan 扫描级别，true为自动，false为手动
                     * 
                     */
                    bool GetAutoScan() const;

                    /**
                     * 设置扫描级别，true为自动，false为手动
                     * @param _autoScan 扫描级别，true为自动，false为手动
                     * 
                     */
                    void SetAutoScan(const bool& _autoScan);

                    /**
                     * 判断参数 AutoScan 是否已赋值
                     * @return AutoScan 是否已赋值
                     * 
                     */
                    bool AutoScanHasBeenSet() const;

                    /**
                     * 获取安全阻断级别，true为开启，false为关闭
                     * @return PreventVUL 安全阻断级别，true为开启，false为关闭
                     * 
                     */
                    bool GetPreventVUL() const;

                    /**
                     * 设置安全阻断级别，true为开启，false为关闭
                     * @param _preventVUL 安全阻断级别，true为开启，false为关闭
                     * 
                     */
                    void SetPreventVUL(const bool& _preventVUL);

                    /**
                     * 判断参数 PreventVUL 是否已赋值
                     * @return PreventVUL 是否已赋值
                     * 
                     */
                    bool PreventVULHasBeenSet() const;

                    /**
                     * 获取阻断漏洞等级，目前仅支持low、medium、high, 为""时表示没有设置
                     * @return Severity 阻断漏洞等级，目前仅支持low、medium、high, 为""时表示没有设置
                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置阻断漏洞等级，目前仅支持low、medium、high, 为""时表示没有设置
                     * @param _severity 阻断漏洞等级，目前仅支持low、medium、high, 为""时表示没有设置
                     * 
                     */
                    void SetSeverity(const std::string& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                private:

                    /**
                     * 命名空间名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 访问级别
                     */
                    bool m_public;
                    bool m_publicHasBeenSet;

                    /**
                     * 命名空间的Id
                     */
                    int64_t m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 实例云标签
                     */
                    TagSpecification m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * 命名空间元数据
                     */
                    std::vector<KeyValueString> m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * 漏洞白名单列表
                     */
                    std::vector<CVEWhitelistItem> m_cVEWhitelistItems;
                    bool m_cVEWhitelistItemsHasBeenSet;

                    /**
                     * 扫描级别，true为自动，false为手动
                     */
                    bool m_autoScan;
                    bool m_autoScanHasBeenSet;

                    /**
                     * 安全阻断级别，true为开启，false为关闭
                     */
                    bool m_preventVUL;
                    bool m_preventVULHasBeenSet;

                    /**
                     * 阻断漏洞等级，目前仅支持low、medium、high, 为""时表示没有设置
                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_TCRNAMESPACEINFO_H_

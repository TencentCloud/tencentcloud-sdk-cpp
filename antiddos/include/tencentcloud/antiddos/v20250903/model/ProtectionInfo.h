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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_PROTECTIONINFO_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_PROTECTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20250903/model/TagInfo.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            namespace Model
            {
                /**
                * DDoS 防护实例信息。
                */
                class ProtectionInfo : public AbstractModel
                {
                public:
                    ProtectionInfo();
                    ~ProtectionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>防护实例 ID。</p>
                     * @return ProtectionId <p>防护实例 ID。</p>
                     * 
                     */
                    std::string GetProtectionId() const;

                    /**
                     * 设置<p>防护实例 ID。</p>
                     * @param _protectionId <p>防护实例 ID。</p>
                     * 
                     */
                    void SetProtectionId(const std::string& _protectionId);

                    /**
                     * 判断参数 ProtectionId 是否已赋值
                     * @return ProtectionId 是否已赋值
                     * 
                     */
                    bool ProtectionIdHasBeenSet() const;

                    /**
                     * 获取<p>防护实例名称。</p>
                     * @return Name <p>防护实例名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>防护实例名称。</p>
                     * @param _name <p>防护实例名称。</p>
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
                     * 获取<p>防护实例的防护级别。</p><p>枚举值：</p><ul><li>advanced： 增强防护；</li><li>ultimate： 卓越防护。</li></ul>
                     * @return ProtectionLevel <p>防护实例的防护级别。</p><p>枚举值：</p><ul><li>advanced： 增强防护；</li><li>ultimate： 卓越防护。</li></ul>
                     * 
                     */
                    std::string GetProtectionLevel() const;

                    /**
                     * 设置<p>防护实例的防护级别。</p><p>枚举值：</p><ul><li>advanced： 增强防护；</li><li>ultimate： 卓越防护。</li></ul>
                     * @param _protectionLevel <p>防护实例的防护级别。</p><p>枚举值：</p><ul><li>advanced： 增强防护；</li><li>ultimate： 卓越防护。</li></ul>
                     * 
                     */
                    void SetProtectionLevel(const std::string& _protectionLevel);

                    /**
                     * 判断参数 ProtectionLevel 是否已赋值
                     * @return ProtectionLevel 是否已赋值
                     * 
                     */
                    bool ProtectionLevelHasBeenSet() const;

                    /**
                     * 获取<p>防护实例状态。</p><p>枚举值：</p><ul><li>protecting： 防护中；</li><li>processing： 变更中；</li><li>disabling： 停用中；</li><li>disabled： 已停用。</li></ul>
                     * @return Status <p>防护实例状态。</p><p>枚举值：</p><ul><li>protecting： 防护中；</li><li>processing： 变更中；</li><li>disabling： 停用中；</li><li>disabled： 已停用。</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>防护实例状态。</p><p>枚举值：</p><ul><li>protecting： 防护中；</li><li>processing： 变更中；</li><li>disabling： 停用中；</li><li>disabled： 已停用。</li></ul>
                     * @param _status <p>防护实例状态。</p><p>枚举值：</p><ul><li>protecting： 防护中；</li><li>processing： 变更中；</li><li>disabling： 停用中；</li><li>disabled： 已停用。</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>资源标签列表。</p>
                     * @return Tags <p>资源标签列表。</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>资源标签列表。</p>
                     * @param _tags <p>资源标签列表。</p>
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>防护实例中的防护资源数量。</p>
                     * @return ResourceCount <p>防护实例中的防护资源数量。</p>
                     * 
                     */
                    int64_t GetResourceCount() const;

                    /**
                     * 设置<p>防护实例中的防护资源数量。</p>
                     * @param _resourceCount <p>防护实例中的防护资源数量。</p>
                     * 
                     */
                    void SetResourceCount(const int64_t& _resourceCount);

                    /**
                     * 判断参数 ResourceCount 是否已赋值
                     * @return ResourceCount 是否已赋值
                     * 
                     */
                    bool ResourceCountHasBeenSet() const;

                private:

                    /**
                     * <p>防护实例 ID。</p>
                     */
                    std::string m_protectionId;
                    bool m_protectionIdHasBeenSet;

                    /**
                     * <p>防护实例名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>防护实例的防护级别。</p><p>枚举值：</p><ul><li>advanced： 增强防护；</li><li>ultimate： 卓越防护。</li></ul>
                     */
                    std::string m_protectionLevel;
                    bool m_protectionLevelHasBeenSet;

                    /**
                     * <p>防护实例状态。</p><p>枚举值：</p><ul><li>protecting： 防护中；</li><li>processing： 变更中；</li><li>disabling： 停用中；</li><li>disabled： 已停用。</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>资源标签列表。</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>防护实例中的防护资源数量。</p>
                     */
                    int64_t m_resourceCount;
                    bool m_resourceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_PROTECTIONINFO_H_

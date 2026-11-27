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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_CREATEPROTECTIONREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_CREATEPROTECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateProtection请求参数结构体
                */
                class CreateProtectionRequest : public AbstractModel
                {
                public:
                    CreateProtectionRequest();
                    ~CreateProtectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>防护实例名称。</p><p>入参限制：防护实例名称最多 60 个字符，同一主账号下不可重名。</p>
                     * @return Name <p>防护实例名称。</p><p>入参限制：防护实例名称最多 60 个字符，同一主账号下不可重名。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>防护实例名称。</p><p>入参限制：防护实例名称最多 60 个字符，同一主账号下不可重名。</p>
                     * @param _name <p>防护实例名称。</p><p>入参限制：防护实例名称最多 60 个字符，同一主账号下不可重名。</p>
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
                     * 获取<p>防护实例的防护级别。</p><p>枚举值：</p><ul><li>advanced： 增强防护；</li><li>ultimate： 卓越防护，仅在当前主账号已订阅任意扩展包时可用。</li></ul><p>不同订阅套餐版本下可用的防护级别不同，可接入的防护资源类型与防护容量也相应不同，具体请参见 <a href="https://cloud.tencent.com/document/product/297/137986">DDoS 防护容量说明</a>。</p>
                     * @return ProtectionLevel <p>防护实例的防护级别。</p><p>枚举值：</p><ul><li>advanced： 增强防护；</li><li>ultimate： 卓越防护，仅在当前主账号已订阅任意扩展包时可用。</li></ul><p>不同订阅套餐版本下可用的防护级别不同，可接入的防护资源类型与防护容量也相应不同，具体请参见 <a href="https://cloud.tencent.com/document/product/297/137986">DDoS 防护容量说明</a>。</p>
                     * 
                     */
                    std::string GetProtectionLevel() const;

                    /**
                     * 设置<p>防护实例的防护级别。</p><p>枚举值：</p><ul><li>advanced： 增强防护；</li><li>ultimate： 卓越防护，仅在当前主账号已订阅任意扩展包时可用。</li></ul><p>不同订阅套餐版本下可用的防护级别不同，可接入的防护资源类型与防护容量也相应不同，具体请参见 <a href="https://cloud.tencent.com/document/product/297/137986">DDoS 防护容量说明</a>。</p>
                     * @param _protectionLevel <p>防护实例的防护级别。</p><p>枚举值：</p><ul><li>advanced： 增强防护；</li><li>ultimate： 卓越防护，仅在当前主账号已订阅任意扩展包时可用。</li></ul><p>不同订阅套餐版本下可用的防护级别不同，可接入的防护资源类型与防护容量也相应不同，具体请参见 <a href="https://cloud.tencent.com/document/product/297/137986">DDoS 防护容量说明</a>。</p>
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
                     * 获取<p>标签。用于对防护实例进行分权限管控与分账。<p>需要先前往 <a href="https://console.cloud.tencent.com/tag/taglist">标签控制台</a> 创建对应标签，方可在此处传入标签键与标签值。</p></p>
                     * @return Tags <p>标签。用于对防护实例进行分权限管控与分账。<p>需要先前往 <a href="https://console.cloud.tencent.com/tag/taglist">标签控制台</a> 创建对应标签，方可在此处传入标签键与标签值。</p></p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>标签。用于对防护实例进行分权限管控与分账。<p>需要先前往 <a href="https://console.cloud.tencent.com/tag/taglist">标签控制台</a> 创建对应标签，方可在此处传入标签键与标签值。</p></p>
                     * @param _tags <p>标签。用于对防护实例进行分权限管控与分账。<p>需要先前往 <a href="https://console.cloud.tencent.com/tag/taglist">标签控制台</a> 创建对应标签，方可在此处传入标签键与标签值。</p></p>
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>防护实例名称。</p><p>入参限制：防护实例名称最多 60 个字符，同一主账号下不可重名。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>防护实例的防护级别。</p><p>枚举值：</p><ul><li>advanced： 增强防护；</li><li>ultimate： 卓越防护，仅在当前主账号已订阅任意扩展包时可用。</li></ul><p>不同订阅套餐版本下可用的防护级别不同，可接入的防护资源类型与防护容量也相应不同，具体请参见 <a href="https://cloud.tencent.com/document/product/297/137986">DDoS 防护容量说明</a>。</p>
                     */
                    std::string m_protectionLevel;
                    bool m_protectionLevelHasBeenSet;

                    /**
                     * <p>标签。用于对防护实例进行分权限管控与分账。<p>需要先前往 <a href="https://console.cloud.tencent.com/tag/taglist">标签控制台</a> 创建对应标签，方可在此处传入标签键与标签值。</p></p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_CREATEPROTECTIONREQUEST_H_

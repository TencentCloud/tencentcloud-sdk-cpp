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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_CREATEREGISTRYREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_CREATEREGISTRYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/CloudTag.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * CreateRegistry请求参数结构体
                */
                class CreateRegistryRequest : public AbstractModel
                {
                public:
                    CreateRegistryRequest();
                    ~CreateRegistryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>同一 AppId + Region 唯一、长度 1–255</p>
                     * @return Name <p>同一 AppId + Region 唯一、长度 1–255</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>同一 AppId + Region 唯一、长度 1–255</p>
                     * @param _name <p>同一 AppId + Region 唯一、长度 1–255</p>
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
                     * 获取<p>描述文本；最长 4096。</p>
                     * @return Description <p>描述文本；最长 4096。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述文本；最长 4096。</p>
                     * @param _description <p>描述文本；最长 4096。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>审批模式；创建时确定，创建后不可修改；省略时默认为 AUTO，枚举值区分大小写。</p>
                     * @return ApprovalMode <p>审批模式；创建时确定，创建后不可修改；省略时默认为 AUTO，枚举值区分大小写。</p>
                     * 
                     */
                    std::string GetApprovalMode() const;

                    /**
                     * 设置<p>审批模式；创建时确定，创建后不可修改；省略时默认为 AUTO，枚举值区分大小写。</p>
                     * @param _approvalMode <p>审批模式；创建时确定，创建后不可修改；省略时默认为 AUTO，枚举值区分大小写。</p>
                     * 
                     */
                    void SetApprovalMode(const std::string& _approvalMode);

                    /**
                     * 判断参数 ApprovalMode 是否已赋值
                     * @return ApprovalMode 是否已赋值
                     * 
                     */
                    bool ApprovalModeHasBeenSet() const;

                    /**
                     * 获取<p>创建时绑定的腾讯云自定义标签；Key 不可重复；最多 10 个。</p>
                     * @return Tags <p>创建时绑定的腾讯云自定义标签；Key 不可重复；最多 10 个。</p>
                     * 
                     */
                    std::vector<CloudTag> GetTags() const;

                    /**
                     * 设置<p>创建时绑定的腾讯云自定义标签；Key 不可重复；最多 10 个。</p>
                     * @param _tags <p>创建时绑定的腾讯云自定义标签；Key 不可重复；最多 10 个。</p>
                     * 
                     */
                    void SetTags(const std::vector<CloudTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>同一 AppId + Region 唯一、长度 1–255</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>描述文本；最长 4096。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>审批模式；创建时确定，创建后不可修改；省略时默认为 AUTO，枚举值区分大小写。</p>
                     */
                    std::string m_approvalMode;
                    bool m_approvalModeHasBeenSet;

                    /**
                     * <p>创建时绑定的腾讯云自定义标签；Key 不可重复；最多 10 个。</p>
                     */
                    std::vector<CloudTag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CREATEREGISTRYREQUEST_H_

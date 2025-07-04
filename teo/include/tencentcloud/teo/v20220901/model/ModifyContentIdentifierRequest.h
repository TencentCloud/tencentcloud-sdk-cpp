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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYCONTENTIDENTIFIERREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYCONTENTIDENTIFIERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyContentIdentifier请求参数结构体
                */
                class ModifyContentIdentifierRequest : public AbstractModel
                {
                public:
                    ModifyContentIdentifierRequest();
                    ~ModifyContentIdentifierRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取内容标识符 ID。
                     * @return ContentId 内容标识符 ID。
                     * 
                     */
                    std::string GetContentId() const;

                    /**
                     * 设置内容标识符 ID。
                     * @param _contentId 内容标识符 ID。
                     * 
                     */
                    void SetContentId(const std::string& _contentId);

                    /**
                     * 判断参数 ContentId 是否已赋值
                     * @return ContentId 是否已赋值
                     * 
                     */
                    bool ContentIdHasBeenSet() const;

                    /**
                     * 获取内容标识符描述，长度限制不超过 20 个字符。
                     * @return Description 内容标识符描述，长度限制不超过 20 个字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置内容标识符描述，长度限制不超过 20 个字符。
                     * @param _description 内容标识符描述，长度限制不超过 20 个字符。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 内容标识符 ID。
                     */
                    std::string m_contentId;
                    bool m_contentIdHasBeenSet;

                    /**
                     * 内容标识符描述，长度限制不超过 20 个字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYCONTENTIDENTIFIERREQUEST_H_

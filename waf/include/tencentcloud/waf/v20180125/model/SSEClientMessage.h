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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_SSECLIENTMESSAGE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_SSECLIENTMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 对话消息结构体
                */
                class SSEClientMessage : public AbstractModel
                {
                public:
                    SSEClientMessage();
                    ~SSEClientMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>对话角色，填user</p>
                     * @return Role <p>对话角色，填user</p>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置<p>对话角色，填user</p>
                     * @param _role <p>对话角色，填user</p>
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取<p>prompt内容</p>
                     * @return Content <p>prompt内容</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>prompt内容</p>
                     * @param _content <p>prompt内容</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>检测类型，0是文本内容代答，目前只支持0，可以不传，默认值是0</p><p>枚举值：</p><ul><li>0： 文件内容代答</li></ul>
                     * @return ContentType <p>检测类型，0是文本内容代答，目前只支持0，可以不传，默认值是0</p><p>枚举值：</p><ul><li>0： 文件内容代答</li></ul>
                     * 
                     */
                    int64_t GetContentType() const;

                    /**
                     * 设置<p>检测类型，0是文本内容代答，目前只支持0，可以不传，默认值是0</p><p>枚举值：</p><ul><li>0： 文件内容代答</li></ul>
                     * @param _contentType <p>检测类型，0是文本内容代答，目前只支持0，可以不传，默认值是0</p><p>枚举值：</p><ul><li>0： 文件内容代答</li></ul>
                     * 
                     */
                    void SetContentType(const int64_t& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                private:

                    /**
                     * <p>对话角色，填user</p>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>prompt内容</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>检测类型，0是文本内容代答，目前只支持0，可以不传，默认值是0</p><p>枚举值：</p><ul><li>0： 文件内容代答</li></ul>
                     */
                    int64_t m_contentType;
                    bool m_contentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_SSECLIENTMESSAGE_H_

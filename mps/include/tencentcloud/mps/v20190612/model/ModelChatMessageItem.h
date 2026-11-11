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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODELCHATMESSAGEITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODELCHATMESSAGEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ModelChatContentPart.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 单条对话消息，定义对话中的角色与内容。
                */
                class ModelChatMessageItem : public AbstractModel
                {
                public:
                    ModelChatMessageItem();
                    ~ModelChatMessageItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>角色</p><p>枚举值：</p><ul><li>system： 系统消息</li><li>user： 用户消息</li><li>assistant： 模型消息</li></ul>
                     * @return Role <p>角色</p><p>枚举值：</p><ul><li>system： 系统消息</li><li>user： 用户消息</li><li>assistant： 模型消息</li></ul>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置<p>角色</p><p>枚举值：</p><ul><li>system： 系统消息</li><li>user： 用户消息</li><li>assistant： 模型消息</li></ul>
                     * @param _role <p>角色</p><p>枚举值：</p><ul><li>system： 系统消息</li><li>user： 用户消息</li><li>assistant： 模型消息</li></ul>
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
                     * 获取<p>输入内容</p>
                     * @return Content <p>输入内容</p>
                     * 
                     */
                    std::vector<ModelChatContentPart> GetContent() const;

                    /**
                     * 设置<p>输入内容</p>
                     * @param _content <p>输入内容</p>
                     * 
                     */
                    void SetContent(const std::vector<ModelChatContentPart>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * <p>角色</p><p>枚举值：</p><ul><li>system： 系统消息</li><li>user： 用户消息</li><li>assistant： 模型消息</li></ul>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>输入内容</p>
                     */
                    std::vector<ModelChatContentPart> m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODELCHATMESSAGEITEM_H_

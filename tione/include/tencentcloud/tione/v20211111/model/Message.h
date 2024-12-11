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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_MESSAGE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_MESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/MultiModalContent.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 对话输入内容
                */
                class Message : public AbstractModel
                {
                public:
                    Message();
                    ~Message() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色名。支持三个角色：system、user、assistant，其中system仅开头可出现一次，也可忽略。
                     * @return Role 角色名。支持三个角色：system、user、assistant，其中system仅开头可出现一次，也可忽略。
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置角色名。支持三个角色：system、user、assistant，其中system仅开头可出现一次，也可忽略。
                     * @param _role 角色名。支持三个角色：system、user、assistant，其中system仅开头可出现一次，也可忽略。
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
                     * 获取对话输入内容。
                     * @return Content 对话输入内容。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置对话输入内容。
                     * @param _content 对话输入内容。
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
                     * 获取多模态对话输入内容，Content与MultiModalContents两者只需要填写其中一个即可，当对话中包含多模态对话信息时，则填写本参数
                     * @return MultiModalContents 多模态对话输入内容，Content与MultiModalContents两者只需要填写其中一个即可，当对话中包含多模态对话信息时，则填写本参数
                     * 
                     */
                    std::vector<MultiModalContent> GetMultiModalContents() const;

                    /**
                     * 设置多模态对话输入内容，Content与MultiModalContents两者只需要填写其中一个即可，当对话中包含多模态对话信息时，则填写本参数
                     * @param _multiModalContents 多模态对话输入内容，Content与MultiModalContents两者只需要填写其中一个即可，当对话中包含多模态对话信息时，则填写本参数
                     * 
                     */
                    void SetMultiModalContents(const std::vector<MultiModalContent>& _multiModalContents);

                    /**
                     * 判断参数 MultiModalContents 是否已赋值
                     * @return MultiModalContents 是否已赋值
                     * 
                     */
                    bool MultiModalContentsHasBeenSet() const;

                private:

                    /**
                     * 角色名。支持三个角色：system、user、assistant，其中system仅开头可出现一次，也可忽略。
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 对话输入内容。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 多模态对话输入内容，Content与MultiModalContents两者只需要填写其中一个即可，当对话中包含多模态对话信息时，则填写本参数
                     */
                    std::vector<MultiModalContent> m_multiModalContents;
                    bool m_multiModalContentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_MESSAGE_H_

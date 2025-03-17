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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GROUPMESSAGE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GROUPMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 群聊会话内容
                */
                class GroupMessage : public AbstractModel
                {
                public:
                    GroupMessage();
                    ~GroupMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色，可选值包括 system、user、assistant、 tool。
                     * @return Role 角色，可选值包括 system、user、assistant、 tool。
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置角色，可选值包括 system、user、assistant、 tool。
                     * @param _role 角色，可选值包括 system、user、assistant、 tool。
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
                     * 获取文本内容
                     * @return Content 文本内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置文本内容
                     * @param _content 文本内容
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
                     * 获取角色名称
                     * @return Name 角色名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置角色名称
                     * @param _name 角色名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 角色，可选值包括 system、user、assistant、 tool。
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 文本内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 角色名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GROUPMESSAGE_H_

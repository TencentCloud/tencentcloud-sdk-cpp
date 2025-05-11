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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_IMAGEMESSAGE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_IMAGEMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/Content.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 拍照解题内容
                */
                class ImageMessage : public AbstractModel
                {
                public:
                    ImageMessage();
                    ~ImageMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色，可选值包括 system、user、assistant。
                     * @return Role 角色，可选值包括 system、user、assistant。
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置角色，可选值包括 system、user、assistant。
                     * @param _role 角色，可选值包括 system、user、assistant。
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
                     * 获取多种类型内容（目前支持图片和文本），仅 hunyuan-vision 和 hunyuan-turbo-vision 模型支持
                     * @return Contents 多种类型内容（目前支持图片和文本），仅 hunyuan-vision 和 hunyuan-turbo-vision 模型支持
                     * 
                     */
                    std::vector<Content> GetContents() const;

                    /**
                     * 设置多种类型内容（目前支持图片和文本），仅 hunyuan-vision 和 hunyuan-turbo-vision 模型支持
                     * @param _contents 多种类型内容（目前支持图片和文本），仅 hunyuan-vision 和 hunyuan-turbo-vision 模型支持
                     * 
                     */
                    void SetContents(const std::vector<Content>& _contents);

                    /**
                     * 判断参数 Contents 是否已赋值
                     * @return Contents 是否已赋值
                     * 
                     */
                    bool ContentsHasBeenSet() const;

                private:

                    /**
                     * 角色，可选值包括 system、user、assistant。
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 文本内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 多种类型内容（目前支持图片和文本），仅 hunyuan-vision 和 hunyuan-turbo-vision 模型支持
                     */
                    std::vector<Content> m_contents;
                    bool m_contentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_IMAGEMESSAGE_H_

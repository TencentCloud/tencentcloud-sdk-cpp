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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_UNFAVORITEPROMPTTEMPLATEREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_UNFAVORITEPROMPTTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * UnfavoritePromptTemplate请求参数结构体
                */
                class UnfavoritePromptTemplateRequest : public AbstractModel
                {
                public:
                    UnfavoritePromptTemplateRequest();
                    ~UnfavoritePromptTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>空间ID</p>
                     * @return SpaceId <p>空间ID</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>空间ID</p>
                     * @param _spaceId <p>空间ID</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>提示词模板ID</p>
                     * @return PromptTemplateId <p>提示词模板ID</p>
                     * 
                     */
                    std::string GetPromptTemplateId() const;

                    /**
                     * 设置<p>提示词模板ID</p>
                     * @param _promptTemplateId <p>提示词模板ID</p>
                     * 
                     */
                    void SetPromptTemplateId(const std::string& _promptTemplateId);

                    /**
                     * 判断参数 PromptTemplateId 是否已赋值
                     * @return PromptTemplateId 是否已赋值
                     * 
                     */
                    bool PromptTemplateIdHasBeenSet() const;

                private:

                    /**
                     * <p>空间ID</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>提示词模板ID</p>
                     */
                    std::string m_promptTemplateId;
                    bool m_promptTemplateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_UNFAVORITEPROMPTTEMPLATEREQUEST_H_

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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_CREATEKNOWLEDGESETREQUEST_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_CREATEKNOWLEDGESETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * CreateKnowledgeSet请求参数结构体
                */
                class CreateKnowledgeSetRequest : public AbstractModel
                {
                public:
                    CreateKnowledgeSetRequest();
                    ~CreateKnowledgeSetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取知识库标识
                     * @return Name 知识库标识
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置知识库标识
                     * @param _name 知识库标识
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
                     * 获取知识库名称
                     * @return Title 知识库名称
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置知识库名称
                     * @param _title 知识库名称
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Desc 描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置描述
                     * @param _desc 描述
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * 知识库标识
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 知识库名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_CREATEKNOWLEDGESETREQUEST_H_

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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_CREATEDICTREQUEST_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_CREATEDICTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * CreateDict请求参数结构体
                */
                class CreateDictRequest : public AbstractModel
                {
                public:
                    CreateDictRequest();
                    ~CreateDictRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义词库名称，不超过20字。
                     * @return Name 自定义词库名称，不超过20字。
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定义词库名称，不超过20字。
                     * @param Name 自定义词库名称，不超过20字。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取自定义词库描述，不超过100字。
                     * @return Description 自定义词库描述，不超过100字。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置自定义词库描述，不超过100字。
                     * @param Description 自定义词库描述，不超过100字。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 自定义词库名称，不超过20字。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 自定义词库描述，不超过100字。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_CREATEDICTREQUEST_H_

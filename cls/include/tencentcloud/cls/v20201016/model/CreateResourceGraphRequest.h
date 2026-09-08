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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATERESOURCEGRAPHREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATERESOURCEGRAPHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateResourceGraph请求参数结构体
                */
                class CreateResourceGraphRequest : public AbstractModel
                {
                public:
                    CreateResourceGraphRequest();
                    ~CreateResourceGraphRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资源图谱名称</p>
                     * @return Name <p>资源图谱名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>资源图谱名称</p>
                     * @param _name <p>资源图谱名称</p>
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
                     * 获取<p>资源图谱描述</p>
                     * @return Description <p>资源图谱描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>资源图谱描述</p>
                     * @param _description <p>资源图谱描述</p>
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
                     * 获取<p>标签描述列表，通过指定该参数可以同时绑定标签到相应的主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。</p>
                     * @return Tags <p>标签描述列表，通过指定该参数可以同时绑定标签到相应的主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签描述列表，通过指定该参数可以同时绑定标签到相应的主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。</p>
                     * @param _tags <p>标签描述列表，通过指定该参数可以同时绑定标签到相应的主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>资源图谱名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>资源图谱描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>标签描述列表，通过指定该参数可以同时绑定标签到相应的主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATERESOURCEGRAPHREQUEST_H_

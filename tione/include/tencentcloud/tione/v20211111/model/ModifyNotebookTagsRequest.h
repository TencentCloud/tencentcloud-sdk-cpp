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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYNOTEBOOKTAGSREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYNOTEBOOKTAGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * ModifyNotebookTags请求参数结构体
                */
                class ModifyNotebookTagsRequest : public AbstractModel
                {
                public:
                    ModifyNotebookTagsRequest();
                    ~ModifyNotebookTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Notebook Id
                     * @return Id Notebook Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Notebook Id
                     * @param _id Notebook Id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Notebook修改标签集合
                     * @return Tags Notebook修改标签集合
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Notebook修改标签集合
                     * @param _tags Notebook修改标签集合
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
                     * Notebook Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Notebook修改标签集合
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYNOTEBOOKTAGSREQUEST_H_

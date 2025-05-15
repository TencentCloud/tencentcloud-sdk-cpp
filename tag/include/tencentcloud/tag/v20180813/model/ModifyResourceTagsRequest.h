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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_MODIFYRESOURCETAGSREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_MODIFYRESOURCETAGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tag/v20180813/model/Tag.h>
#include <tencentcloud/tag/v20180813/model/TagKeyObject.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * ModifyResourceTags请求参数结构体
                */
                class ModifyResourceTagsRequest : public AbstractModel
                {
                public:
                    ModifyResourceTagsRequest();
                    ~ModifyResourceTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取[ 资源六段式描述 ](https://cloud.tencent.com/document/product/598/10606)
                     * @return Resource [ 资源六段式描述 ](https://cloud.tencent.com/document/product/598/10606)
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置[ 资源六段式描述 ](https://cloud.tencent.com/document/product/598/10606)
                     * @param _resource [ 资源六段式描述 ](https://cloud.tencent.com/document/product/598/10606)
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取需要增加或修改的标签集合。如果Resource描述的资源未关联输入的标签键，则增加关联；若已关联，则将该资源关联的键对应的标签值修改为输入值。本接口中ReplaceTags和DeleteTags二者必须存在其一，且二者不能包含相同的标签键。可以不传该参数，但不能是空数组。标签数量不超过10个。
                     * @return ReplaceTags 需要增加或修改的标签集合。如果Resource描述的资源未关联输入的标签键，则增加关联；若已关联，则将该资源关联的键对应的标签值修改为输入值。本接口中ReplaceTags和DeleteTags二者必须存在其一，且二者不能包含相同的标签键。可以不传该参数，但不能是空数组。标签数量不超过10个。
                     * 
                     */
                    std::vector<Tag> GetReplaceTags() const;

                    /**
                     * 设置需要增加或修改的标签集合。如果Resource描述的资源未关联输入的标签键，则增加关联；若已关联，则将该资源关联的键对应的标签值修改为输入值。本接口中ReplaceTags和DeleteTags二者必须存在其一，且二者不能包含相同的标签键。可以不传该参数，但不能是空数组。标签数量不超过10个。
                     * @param _replaceTags 需要增加或修改的标签集合。如果Resource描述的资源未关联输入的标签键，则增加关联；若已关联，则将该资源关联的键对应的标签值修改为输入值。本接口中ReplaceTags和DeleteTags二者必须存在其一，且二者不能包含相同的标签键。可以不传该参数，但不能是空数组。标签数量不超过10个。
                     * 
                     */
                    void SetReplaceTags(const std::vector<Tag>& _replaceTags);

                    /**
                     * 判断参数 ReplaceTags 是否已赋值
                     * @return ReplaceTags 是否已赋值
                     * 
                     */
                    bool ReplaceTagsHasBeenSet() const;

                    /**
                     * 获取需要解关联的标签集合。本接口中ReplaceTags和DeleteTags二者必须存在其一，且二者不能包含相同的标签键。可以不传该参数，但不能是空数组。标签数量不超过10个。
                     * @return DeleteTags 需要解关联的标签集合。本接口中ReplaceTags和DeleteTags二者必须存在其一，且二者不能包含相同的标签键。可以不传该参数，但不能是空数组。标签数量不超过10个。
                     * 
                     */
                    std::vector<TagKeyObject> GetDeleteTags() const;

                    /**
                     * 设置需要解关联的标签集合。本接口中ReplaceTags和DeleteTags二者必须存在其一，且二者不能包含相同的标签键。可以不传该参数，但不能是空数组。标签数量不超过10个。
                     * @param _deleteTags 需要解关联的标签集合。本接口中ReplaceTags和DeleteTags二者必须存在其一，且二者不能包含相同的标签键。可以不传该参数，但不能是空数组。标签数量不超过10个。
                     * 
                     */
                    void SetDeleteTags(const std::vector<TagKeyObject>& _deleteTags);

                    /**
                     * 判断参数 DeleteTags 是否已赋值
                     * @return DeleteTags 是否已赋值
                     * 
                     */
                    bool DeleteTagsHasBeenSet() const;

                private:

                    /**
                     * [ 资源六段式描述 ](https://cloud.tencent.com/document/product/598/10606)
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 需要增加或修改的标签集合。如果Resource描述的资源未关联输入的标签键，则增加关联；若已关联，则将该资源关联的键对应的标签值修改为输入值。本接口中ReplaceTags和DeleteTags二者必须存在其一，且二者不能包含相同的标签键。可以不传该参数，但不能是空数组。标签数量不超过10个。
                     */
                    std::vector<Tag> m_replaceTags;
                    bool m_replaceTagsHasBeenSet;

                    /**
                     * 需要解关联的标签集合。本接口中ReplaceTags和DeleteTags二者必须存在其一，且二者不能包含相同的标签键。可以不传该参数，但不能是空数组。标签数量不超过10个。
                     */
                    std::vector<TagKeyObject> m_deleteTags;
                    bool m_deleteTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_MODIFYRESOURCETAGSREQUEST_H_

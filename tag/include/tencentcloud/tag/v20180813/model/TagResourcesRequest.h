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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_TAGRESOURCESREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_TAGRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tag/v20180813/model/Tag.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * TagResources请求参数结构体
                */
                class TagResourcesRequest : public AbstractModel
                {
                public:
                    TagResourcesRequest();
                    ~TagResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待绑定的云资源，用标准的资源六段式表示。正确的资源六段式请参考：[标准的资源六段式](https://cloud.tencent.com/document/product/598/10606)和[支持标签的云产品及资源描述方式](https://cloud.tencent.com/document/product/651/89122)。
N取值范围：0~9
                     * @return ResourceList 待绑定的云资源，用标准的资源六段式表示。正确的资源六段式请参考：[标准的资源六段式](https://cloud.tencent.com/document/product/598/10606)和[支持标签的云产品及资源描述方式](https://cloud.tencent.com/document/product/651/89122)。
N取值范围：0~9
                     * 
                     */
                    std::vector<std::string> GetResourceList() const;

                    /**
                     * 设置待绑定的云资源，用标准的资源六段式表示。正确的资源六段式请参考：[标准的资源六段式](https://cloud.tencent.com/document/product/598/10606)和[支持标签的云产品及资源描述方式](https://cloud.tencent.com/document/product/651/89122)。
N取值范围：0~9
                     * @param _resourceList 待绑定的云资源，用标准的资源六段式表示。正确的资源六段式请参考：[标准的资源六段式](https://cloud.tencent.com/document/product/598/10606)和[支持标签的云产品及资源描述方式](https://cloud.tencent.com/document/product/651/89122)。
N取值范围：0~9
                     * 
                     */
                    void SetResourceList(const std::vector<std::string>& _resourceList);

                    /**
                     * 判断参数 ResourceList 是否已赋值
                     * @return ResourceList 是否已赋值
                     * 
                     */
                    bool ResourceListHasBeenSet() const;

                    /**
                     * 获取标签键和标签值。
如果指定多个标签，则会为指定资源同时创建并绑定该多个标签。
同一个资源上的同一个标签键只能对应一个标签值。如果您尝试添加已有标签键，则对应的标签值会更新为新值。
如果标签不存在会为您自动创建标签。
N取值范围：0~9
                     * @return Tags 标签键和标签值。
如果指定多个标签，则会为指定资源同时创建并绑定该多个标签。
同一个资源上的同一个标签键只能对应一个标签值。如果您尝试添加已有标签键，则对应的标签值会更新为新值。
如果标签不存在会为您自动创建标签。
N取值范围：0~9
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签键和标签值。
如果指定多个标签，则会为指定资源同时创建并绑定该多个标签。
同一个资源上的同一个标签键只能对应一个标签值。如果您尝试添加已有标签键，则对应的标签值会更新为新值。
如果标签不存在会为您自动创建标签。
N取值范围：0~9
                     * @param _tags 标签键和标签值。
如果指定多个标签，则会为指定资源同时创建并绑定该多个标签。
同一个资源上的同一个标签键只能对应一个标签值。如果您尝试添加已有标签键，则对应的标签值会更新为新值。
如果标签不存在会为您自动创建标签。
N取值范围：0~9
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
                     * 待绑定的云资源，用标准的资源六段式表示。正确的资源六段式请参考：[标准的资源六段式](https://cloud.tencent.com/document/product/598/10606)和[支持标签的云产品及资源描述方式](https://cloud.tencent.com/document/product/651/89122)。
N取值范围：0~9
                     */
                    std::vector<std::string> m_resourceList;
                    bool m_resourceListHasBeenSet;

                    /**
                     * 标签键和标签值。
如果指定多个标签，则会为指定资源同时创建并绑定该多个标签。
同一个资源上的同一个标签键只能对应一个标签值。如果您尝试添加已有标签键，则对应的标签值会更新为新值。
如果标签不存在会为您自动创建标签。
N取值范围：0~9
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_TAGRESOURCESREQUEST_H_

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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_DELETERESOURCETAGREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_DELETERESOURCETAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * DeleteResourceTag请求参数结构体
                */
                class DeleteResourceTagRequest : public AbstractModel
                {
                public:
                    DeleteResourceTagRequest();
                    ~DeleteResourceTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取标签键
                     * @return TagKey 标签键
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置标签键
                     * @param TagKey 标签键
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取[ 资源六段式描述 ](https://cloud.tencent.com/document/product/598/10606)
                     * @return Resource [ 资源六段式描述 ](https://cloud.tencent.com/document/product/598/10606)
                     */
                    std::string GetResource() const;

                    /**
                     * 设置[ 资源六段式描述 ](https://cloud.tencent.com/document/product/598/10606)
                     * @param Resource [ 资源六段式描述 ](https://cloud.tencent.com/document/product/598/10606)
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     */
                    bool ResourceHasBeenSet() const;

                private:

                    /**
                     * 标签键
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * [ 资源六段式描述 ](https://cloud.tencent.com/document/product/598/10606)
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_DELETERESOURCETAGREQUEST_H_

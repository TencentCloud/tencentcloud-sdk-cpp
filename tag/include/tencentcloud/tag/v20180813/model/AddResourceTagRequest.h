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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_ADDRESOURCETAGREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_ADDRESOURCETAGREQUEST_H_

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
                * AddResourceTag请求参数结构体
                */
                class AddResourceTagRequest : public AbstractModel
                {
                public:
                    AddResourceTagRequest();
                    ~AddResourceTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要绑定的标签键，取值规范参考：https://cloud.tencent.com/document/product/651/13354
                     * @return TagKey 需要绑定的标签键，取值规范参考：https://cloud.tencent.com/document/product/651/13354
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置需要绑定的标签键，取值规范参考：https://cloud.tencent.com/document/product/651/13354
                     * @param _tagKey 需要绑定的标签键，取值规范参考：https://cloud.tencent.com/document/product/651/13354
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取需要绑定的标签值，取值规范参考：https://cloud.tencent.com/document/product/651/13354
                     * @return TagValue 需要绑定的标签值，取值规范参考：https://cloud.tencent.com/document/product/651/13354
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置需要绑定的标签值，取值规范参考：https://cloud.tencent.com/document/product/651/13354
                     * @param _tagValue 需要绑定的标签值，取值规范参考：https://cloud.tencent.com/document/product/651/13354
                     * 
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     * 
                     */
                    bool TagValueHasBeenSet() const;

                    /**
                     * 获取待关联的资源，用标准的资源六段式表示。正确的资源六段式请参考：https://cloud.tencent.com/document/product/651/89122
                     * @return Resource 待关联的资源，用标准的资源六段式表示。正确的资源六段式请参考：https://cloud.tencent.com/document/product/651/89122
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置待关联的资源，用标准的资源六段式表示。正确的资源六段式请参考：https://cloud.tencent.com/document/product/651/89122
                     * @param _resource 待关联的资源，用标准的资源六段式表示。正确的资源六段式请参考：https://cloud.tencent.com/document/product/651/89122
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                private:

                    /**
                     * 需要绑定的标签键，取值规范参考：https://cloud.tencent.com/document/product/651/13354
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * 需要绑定的标签值，取值规范参考：https://cloud.tencent.com/document/product/651/13354
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * 待关联的资源，用标准的资源六段式表示。正确的资源六段式请参考：https://cloud.tencent.com/document/product/651/89122
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_ADDRESOURCETAGREQUEST_H_

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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_RESOURCEIDTAG_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_RESOURCEIDTAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 资源标签键值
                */
                class ResourceIdTag : public AbstractModel
                {
                public:
                    ResourceIdTag();
                    ~ResourceIdTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源唯一标识
                     * @return ResourceId 资源唯一标识
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源唯一标识
                     * @param _resourceId 资源唯一标识
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取标签键值对
                     * @return TagKeyValues 标签键值对
                     * 
                     */
                    std::vector<Tag> GetTagKeyValues() const;

                    /**
                     * 设置标签键值对
                     * @param _tagKeyValues 标签键值对
                     * 
                     */
                    void SetTagKeyValues(const std::vector<Tag>& _tagKeyValues);

                    /**
                     * 判断参数 TagKeyValues 是否已赋值
                     * @return TagKeyValues 是否已赋值
                     * 
                     */
                    bool TagKeyValuesHasBeenSet() const;

                private:

                    /**
                     * 资源唯一标识
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 标签键值对
                     */
                    std::vector<Tag> m_tagKeyValues;
                    bool m_tagKeyValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_RESOURCEIDTAG_H_

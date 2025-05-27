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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_TAGRESOURCE_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_TAGRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 标签键值对以及资源ID
                */
                class TagResource : public AbstractModel
                {
                public:
                    TagResource();
                    ~TagResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签键
                     * @return TagKey 标签键
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置标签键
                     * @param _tagKey 标签键
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
                     * 获取标签值
                     * @return TagValue 标签值
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置标签值
                     * @param _tagValue 标签值
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
                     * 获取资源ID
                     * @return ResourceId 资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID
                     * @param _resourceId 资源ID
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
                     * 获取标签键MD5值
                     * @return TagKeyMd5 标签键MD5值
                     * 
                     */
                    std::string GetTagKeyMd5() const;

                    /**
                     * 设置标签键MD5值
                     * @param _tagKeyMd5 标签键MD5值
                     * 
                     */
                    void SetTagKeyMd5(const std::string& _tagKeyMd5);

                    /**
                     * 判断参数 TagKeyMd5 是否已赋值
                     * @return TagKeyMd5 是否已赋值
                     * 
                     */
                    bool TagKeyMd5HasBeenSet() const;

                    /**
                     * 获取标签值MD5值
                     * @return TagValueMd5 标签值MD5值
                     * 
                     */
                    std::string GetTagValueMd5() const;

                    /**
                     * 设置标签值MD5值
                     * @param _tagValueMd5 标签值MD5值
                     * 
                     */
                    void SetTagValueMd5(const std::string& _tagValueMd5);

                    /**
                     * 判断参数 TagValueMd5 是否已赋值
                     * @return TagValueMd5 是否已赋值
                     * 
                     */
                    bool TagValueMd5HasBeenSet() const;

                    /**
                     * 获取资源类型
                     * @return ServiceType 资源类型
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置资源类型
                     * @param _serviceType 资源类型
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取标签类型。取值： Custom：自定义标签。 System：系统标签。
                     * @return Category 标签类型。取值： Custom：自定义标签。 System：系统标签。
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置标签类型。取值： Custom：自定义标签。 System：系统标签。
                     * @param _category 标签类型。取值： Custom：自定义标签。 System：系统标签。
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                private:

                    /**
                     * 标签键
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * 标签值
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 标签键MD5值
                     */
                    std::string m_tagKeyMd5;
                    bool m_tagKeyMd5HasBeenSet;

                    /**
                     * 标签值MD5值
                     */
                    std::string m_tagValueMd5;
                    bool m_tagValueMd5HasBeenSet;

                    /**
                     * 资源类型
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 标签类型。取值： Custom：自定义标签。 System：系统标签。
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_TAGRESOURCE_H_

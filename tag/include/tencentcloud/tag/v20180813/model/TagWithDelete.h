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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_TAGWITHDELETE_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_TAGWITHDELETE_H_

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
                * 表示一个标签键值对以及是否允许删除
                */
                class TagWithDelete : public AbstractModel
                {
                public:
                    TagWithDelete();
                    ~TagWithDelete() = default;
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
                     * 获取是否可以删除
                     * @return CanDelete 是否可以删除
                     * 
                     */
                    uint64_t GetCanDelete() const;

                    /**
                     * 设置是否可以删除
                     * @param _canDelete 是否可以删除
                     * 
                     */
                    void SetCanDelete(const uint64_t& _canDelete);

                    /**
                     * 判断参数 CanDelete 是否已赋值
                     * @return CanDelete 是否已赋值
                     * 
                     */
                    bool CanDeleteHasBeenSet() const;

                    /**
                     * 获取标签类型。取值： Custom：自定义标签。 System：系统标签。 All：全部标签。 默认值：All。
                     * @return Category 标签类型。取值： Custom：自定义标签。 System：系统标签。 All：全部标签。 默认值：All。
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置标签类型。取值： Custom：自定义标签。 System：系统标签。 All：全部标签。 默认值：All。
                     * @param _category 标签类型。取值： Custom：自定义标签。 System：系统标签。 All：全部标签。 默认值：All。
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
                     * 是否可以删除
                     */
                    uint64_t m_canDelete;
                    bool m_canDeleteHasBeenSet;

                    /**
                     * 标签类型。取值： Custom：自定义标签。 System：系统标签。 All：全部标签。 默认值：All。
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_TAGWITHDELETE_H_

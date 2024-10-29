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

#ifndef TENCENTCLOUD_BSCA_V20210811_MODEL_COMPONENTTAGFILTER_H_
#define TENCENTCLOUD_BSCA_V20210811_MODEL_COMPONENTTAGFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bsca
    {
        namespace V20210811
        {
            namespace Model
            {
                /**
                * 筛选条件，同一个Tag不能同时出现在IncludeTags和ExcludeTags，可能的Tag包括："CopyrightUpdated", "LicenseUpdated", "ContainsVulnerability"
                */
                class ComponentTagFilter : public AbstractModel
                {
                public:
                    ComponentTagFilter();
                    ~ComponentTagFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取包括的Tag

                     * @return IncludeTags 包括的Tag

                     * 
                     */
                    std::vector<std::string> GetIncludeTags() const;

                    /**
                     * 设置包括的Tag

                     * @param _includeTags 包括的Tag

                     * 
                     */
                    void SetIncludeTags(const std::vector<std::string>& _includeTags);

                    /**
                     * 判断参数 IncludeTags 是否已赋值
                     * @return IncludeTags 是否已赋值
                     * 
                     */
                    bool IncludeTagsHasBeenSet() const;

                    /**
                     * 获取排除的Tag
                     * @return ExcludeTags 排除的Tag
                     * 
                     */
                    std::vector<std::string> GetExcludeTags() const;

                    /**
                     * 设置排除的Tag
                     * @param _excludeTags 排除的Tag
                     * 
                     */
                    void SetExcludeTags(const std::vector<std::string>& _excludeTags);

                    /**
                     * 判断参数 ExcludeTags 是否已赋值
                     * @return ExcludeTags 是否已赋值
                     * 
                     */
                    bool ExcludeTagsHasBeenSet() const;

                private:

                    /**
                     * 包括的Tag

                     */
                    std::vector<std::string> m_includeTags;
                    bool m_includeTagsHasBeenSet;

                    /**
                     * 排除的Tag
                     */
                    std::vector<std::string> m_excludeTags;
                    bool m_excludeTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BSCA_V20210811_MODEL_COMPONENTTAGFILTER_H_

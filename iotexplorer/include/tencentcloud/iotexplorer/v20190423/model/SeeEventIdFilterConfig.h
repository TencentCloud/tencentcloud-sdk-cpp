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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEEVENTIDFILTERCONFIG_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEEVENTIDFILTERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeSee 处理云存事件 EventId 的过滤规则配置
                */
                class SeeEventIdFilterConfig : public AbstractModel
                {
                public:
                    SeeEventIdFilterConfig();
                    ~SeeEventIdFilterConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取包含的云存事件 ID 集合
                     * @return IncludeOnly 包含的云存事件 ID 集合
                     * 
                     */
                    std::vector<std::string> GetIncludeOnly() const;

                    /**
                     * 设置包含的云存事件 ID 集合
                     * @param _includeOnly 包含的云存事件 ID 集合
                     * 
                     */
                    void SetIncludeOnly(const std::vector<std::string>& _includeOnly);

                    /**
                     * 判断参数 IncludeOnly 是否已赋值
                     * @return IncludeOnly 是否已赋值
                     * 
                     */
                    bool IncludeOnlyHasBeenSet() const;

                    /**
                     * 获取排除的云存事件 ID 集合
                     * @return Exclude 排除的云存事件 ID 集合
                     * 
                     */
                    std::vector<std::string> GetExclude() const;

                    /**
                     * 设置排除的云存事件 ID 集合
                     * @param _exclude 排除的云存事件 ID 集合
                     * 
                     */
                    void SetExclude(const std::vector<std::string>& _exclude);

                    /**
                     * 判断参数 Exclude 是否已赋值
                     * @return Exclude 是否已赋值
                     * 
                     */
                    bool ExcludeHasBeenSet() const;

                private:

                    /**
                     * 包含的云存事件 ID 集合
                     */
                    std::vector<std::string> m_includeOnly;
                    bool m_includeOnlyHasBeenSet;

                    /**
                     * 排除的云存事件 ID 集合
                     */
                    std::vector<std::string> m_exclude;
                    bool m_excludeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEEVENTIDFILTERCONFIG_H_

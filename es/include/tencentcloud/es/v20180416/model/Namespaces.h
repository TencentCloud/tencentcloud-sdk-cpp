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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_NAMESPACES_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_NAMESPACES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * TKE命名空间
                */
                class Namespaces : public AbstractModel
                {
                public:
                    Namespaces();
                    ~Namespaces() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取包含的命名空间的列表，单个命名空间支持小写字母、数字、连接符-、下划线_，最多支持63个字符
                     * @return Include 包含的命名空间的列表，单个命名空间支持小写字母、数字、连接符-、下划线_，最多支持63个字符
                     * 
                     */
                    std::vector<std::string> GetInclude() const;

                    /**
                     * 设置包含的命名空间的列表，单个命名空间支持小写字母、数字、连接符-、下划线_，最多支持63个字符
                     * @param _include 包含的命名空间的列表，单个命名空间支持小写字母、数字、连接符-、下划线_，最多支持63个字符
                     * 
                     */
                    void SetInclude(const std::vector<std::string>& _include);

                    /**
                     * 判断参数 Include 是否已赋值
                     * @return Include 是否已赋值
                     * 
                     */
                    bool IncludeHasBeenSet() const;

                    /**
                     * 获取不包含的命名空间列表，单个命名空间支持小写字母、数字、连接符-、下划线_，最多支持63个字符
                     * @return Exclude 不包含的命名空间列表，单个命名空间支持小写字母、数字、连接符-、下划线_，最多支持63个字符
                     * 
                     */
                    std::vector<std::string> GetExclude() const;

                    /**
                     * 设置不包含的命名空间列表，单个命名空间支持小写字母、数字、连接符-、下划线_，最多支持63个字符
                     * @param _exclude 不包含的命名空间列表，单个命名空间支持小写字母、数字、连接符-、下划线_，最多支持63个字符
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
                     * 包含的命名空间的列表，单个命名空间支持小写字母、数字、连接符-、下划线_，最多支持63个字符
                     */
                    std::vector<std::string> m_include;
                    bool m_includeHasBeenSet;

                    /**
                     * 不包含的命名空间列表，单个命名空间支持小写字母、数字、连接符-、下划线_，最多支持63个字符
                     */
                    std::vector<std::string> m_exclude;
                    bool m_excludeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_NAMESPACES_H_

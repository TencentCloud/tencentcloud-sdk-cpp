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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_PARTIALMODULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_PARTIALMODULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 例外规则的详细模块配置。
                */
                class PartialModule : public AbstractModel
                {
                public:
                    PartialModule();
                    ~PartialModule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模块名称，取值为：
<li>waf：托管规则。</li>
                     * @return Module 模块名称，取值为：
<li>waf：托管规则。</li>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名称，取值为：
<li>waf：托管规则。</li>
                     * @param _module 模块名称，取值为：
<li>waf：托管规则。</li>
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取模块下的需要例外的具体规则ID列表。
                     * @return Include 模块下的需要例外的具体规则ID列表。
                     * 
                     */
                    std::vector<int64_t> GetInclude() const;

                    /**
                     * 设置模块下的需要例外的具体规则ID列表。
                     * @param _include 模块下的需要例外的具体规则ID列表。
                     * 
                     */
                    void SetInclude(const std::vector<int64_t>& _include);

                    /**
                     * 判断参数 Include 是否已赋值
                     * @return Include 是否已赋值
                     * 
                     */
                    bool IncludeHasBeenSet() const;

                private:

                    /**
                     * 模块名称，取值为：
<li>waf：托管规则。</li>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 模块下的需要例外的具体规则ID列表。
                     */
                    std::vector<int64_t> m_include;
                    bool m_includeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_PARTIALMODULE_H_

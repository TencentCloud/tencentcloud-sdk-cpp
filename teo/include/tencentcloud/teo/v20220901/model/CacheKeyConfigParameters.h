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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYCONFIGPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYCONFIGPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CacheKeyQueryString.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 缓存键配置。
                */
                class CacheKeyConfigParameters : public AbstractModel
                {
                public:
                    CacheKeyConfigParameters();
                    ~CacheKeyConfigParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启全路径缓存，取值有：
<li>on：开启全路径缓存（即关闭参数忽略）；</li>
<li>off：关闭全路径缓存（即开启参数忽略）。</li>
                     * @return FullURLCache 是否开启全路径缓存，取值有：
<li>on：开启全路径缓存（即关闭参数忽略）；</li>
<li>off：关闭全路径缓存（即开启参数忽略）。</li>
                     * 
                     */
                    std::string GetFullURLCache() const;

                    /**
                     * 设置是否开启全路径缓存，取值有：
<li>on：开启全路径缓存（即关闭参数忽略）；</li>
<li>off：关闭全路径缓存（即开启参数忽略）。</li>
                     * @param _fullURLCache 是否开启全路径缓存，取值有：
<li>on：开启全路径缓存（即关闭参数忽略）；</li>
<li>off：关闭全路径缓存（即开启参数忽略）。</li>
                     * 
                     */
                    void SetFullURLCache(const std::string& _fullURLCache);

                    /**
                     * 判断参数 FullURLCache 是否已赋值
                     * @return FullURLCache 是否已赋值
                     * 
                     */
                    bool FullURLCacheHasBeenSet() const;

                    /**
                     * 获取是否忽略大小写缓存，取值有：
<li>on：忽略；</li>
<li>off：不忽略。</li>
                     * @return IgnoreCase 是否忽略大小写缓存，取值有：
<li>on：忽略；</li>
<li>off：不忽略。</li>
                     * 
                     */
                    std::string GetIgnoreCase() const;

                    /**
                     * 设置是否忽略大小写缓存，取值有：
<li>on：忽略；</li>
<li>off：不忽略。</li>
                     * @param _ignoreCase 是否忽略大小写缓存，取值有：
<li>on：忽略；</li>
<li>off：不忽略。</li>
                     * 
                     */
                    void SetIgnoreCase(const std::string& _ignoreCase);

                    /**
                     * 判断参数 IgnoreCase 是否已赋值
                     * @return IgnoreCase 是否已赋值
                     * 
                     */
                    bool IgnoreCaseHasBeenSet() const;

                    /**
                     * 获取查询字符串保留配置参数。此字段和 FullURLCache 必须同时设置，但不能同为 on。
                     * @return QueryString 查询字符串保留配置参数。此字段和 FullURLCache 必须同时设置，但不能同为 on。
                     * 
                     */
                    CacheKeyQueryString GetQueryString() const;

                    /**
                     * 设置查询字符串保留配置参数。此字段和 FullURLCache 必须同时设置，但不能同为 on。
                     * @param _queryString 查询字符串保留配置参数。此字段和 FullURLCache 必须同时设置，但不能同为 on。
                     * 
                     */
                    void SetQueryString(const CacheKeyQueryString& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     * 
                     */
                    bool QueryStringHasBeenSet() const;

                private:

                    /**
                     * 是否开启全路径缓存，取值有：
<li>on：开启全路径缓存（即关闭参数忽略）；</li>
<li>off：关闭全路径缓存（即开启参数忽略）。</li>
                     */
                    std::string m_fullURLCache;
                    bool m_fullURLCacheHasBeenSet;

                    /**
                     * 是否忽略大小写缓存，取值有：
<li>on：忽略；</li>
<li>off：不忽略。</li>
                     */
                    std::string m_ignoreCase;
                    bool m_ignoreCaseHasBeenSet;

                    /**
                     * 查询字符串保留配置参数。此字段和 FullURLCache 必须同时设置，但不能同为 on。
                     */
                    CacheKeyQueryString m_queryString;
                    bool m_queryStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYCONFIGPARAMETERS_H_

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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICERULECONDITION_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICERULECONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * HTTPService缓存规则匹配条件（必填）
                */
                class HTTPServiceRuleCondition : public AbstractModel
                {
                public:
                    HTTPServiceRuleCondition();
                    ~HTTPServiceRuleCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Target 匹配对象</p><p>枚举值：</p><ul><li>url_path： 请求 URI 路径（不含查询串），例：/static/logo.jpg</li><li>file_extension： 请求文件扩展名（EO 从 path 中解析），例：jpg</li><li>full_uri： 完整 URI（路径 + 查询串），例：/download?type=hd</li></ul>
                     * @return Target <p>Target 匹配对象</p><p>枚举值：</p><ul><li>url_path： 请求 URI 路径（不含查询串），例：/static/logo.jpg</li><li>file_extension： 请求文件扩展名（EO 从 path 中解析），例：jpg</li><li>full_uri： 完整 URI（路径 + 查询串），例：/download?type=hd</li></ul>
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置<p>Target 匹配对象</p><p>枚举值：</p><ul><li>url_path： 请求 URI 路径（不含查询串），例：/static/logo.jpg</li><li>file_extension： 请求文件扩展名（EO 从 path 中解析），例：jpg</li><li>full_uri： 完整 URI（路径 + 查询串），例：/download?type=hd</li></ul>
                     * @param _target <p>Target 匹配对象</p><p>枚举值：</p><ul><li>url_path： 请求 URI 路径（不含查询串），例：/static/logo.jpg</li><li>file_extension： 请求文件扩展名（EO 从 path 中解析），例：jpg</li><li>full_uri： 完整 URI（路径 + 查询串），例：/download?type=hd</li></ul>
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取<p>MatchType 字符串匹配类型</p><p>枚举值：</p><ul><li>prefix：  前缀匹配</li><li>suffix： 后缀匹配</li><li>contains： 包含匹配</li><li>exact： 精确匹配</li></ul>
                     * @return MatchType <p>MatchType 字符串匹配类型</p><p>枚举值：</p><ul><li>prefix：  前缀匹配</li><li>suffix： 后缀匹配</li><li>contains： 包含匹配</li><li>exact： 精确匹配</li></ul>
                     * 
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置<p>MatchType 字符串匹配类型</p><p>枚举值：</p><ul><li>prefix：  前缀匹配</li><li>suffix： 后缀匹配</li><li>contains： 包含匹配</li><li>exact： 精确匹配</li></ul>
                     * @param _matchType <p>MatchType 字符串匹配类型</p><p>枚举值：</p><ul><li>prefix：  前缀匹配</li><li>suffix： 后缀匹配</li><li>contains： 包含匹配</li><li>exact： 精确匹配</li></ul>
                     * 
                     */
                    void SetMatchType(const std::string& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     * 
                     */
                    bool MatchTypeHasBeenSet() const;

                    /**
                     * 获取<p>Values 匹配值集合，Values 内任一命中即认为条件成立（OR 语义）</p><p>入参限制：单项 1~1024 字节，最多 100 条</p>
                     * @return Values <p>Values 匹配值集合，Values 内任一命中即认为条件成立（OR 语义）</p><p>入参限制：单项 1~1024 字节，最多 100 条</p>
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置<p>Values 匹配值集合，Values 内任一命中即认为条件成立（OR 语义）</p><p>入参限制：单项 1~1024 字节，最多 100 条</p>
                     * @param _values <p>Values 匹配值集合，Values 内任一命中即认为条件成立（OR 语义）</p><p>入参限制：单项 1~1024 字节，最多 100 条</p>
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * <p>Target 匹配对象</p><p>枚举值：</p><ul><li>url_path： 请求 URI 路径（不含查询串），例：/static/logo.jpg</li><li>file_extension： 请求文件扩展名（EO 从 path 中解析），例：jpg</li><li>full_uri： 完整 URI（路径 + 查询串），例：/download?type=hd</li></ul>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>MatchType 字符串匹配类型</p><p>枚举值：</p><ul><li>prefix：  前缀匹配</li><li>suffix： 后缀匹配</li><li>contains： 包含匹配</li><li>exact： 精确匹配</li></ul>
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                    /**
                     * <p>Values 匹配值集合，Values 内任一命中即认为条件成立（OR 语义）</p><p>入参限制：单项 1~1024 字节，最多 100 条</p>
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICERULECONDITION_H_

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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_AIANALYSISDATASCOPEENTRY_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_AIANALYSISDATASCOPEENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * AI 分析的数据范围配置，如CLS日志主题配置。Key如果设置为TopicId，Value是对应日志主题topic_id，Key如果设置为Region，Value是地域的英文名，在https://cloud.tencent.com/document/product/614/18940查询。
                */
                class AIAnalysisDataScopeEntry : public AbstractModel
                {
                public:
                    AIAnalysisDataScopeEntry();
                    ~AIAnalysisDataScopeEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>值类型</p><p>枚举值：</p><ul><li>TopicId： 日志主题ID</li><li>Region： 地域</li></ul>
                     * @return Key <p>值类型</p><p>枚举值：</p><ul><li>TopicId： 日志主题ID</li><li>Region： 地域</li></ul>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>值类型</p><p>枚举值：</p><ul><li>TopicId： 日志主题ID</li><li>Region： 地域</li></ul>
                     * @param _key <p>值类型</p><p>枚举值：</p><ul><li>TopicId： 日志主题ID</li><li>Region： 地域</li></ul>
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>Key如果设置为TopicId，Value是对应日志主题topic_id 在https://cloud.tencent.com/document/product/614/56454 查询，Key如果设置为Region，Value是地域的英文名，在https://cloud.tencent.com/document/product/614/18940查询。</p>
                     * @return Value <p>Key如果设置为TopicId，Value是对应日志主题topic_id 在https://cloud.tencent.com/document/product/614/56454 查询，Key如果设置为Region，Value是地域的英文名，在https://cloud.tencent.com/document/product/614/18940查询。</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>Key如果设置为TopicId，Value是对应日志主题topic_id 在https://cloud.tencent.com/document/product/614/56454 查询，Key如果设置为Region，Value是地域的英文名，在https://cloud.tencent.com/document/product/614/18940查询。</p>
                     * @param _value <p>Key如果设置为TopicId，Value是对应日志主题topic_id 在https://cloud.tencent.com/document/product/614/56454 查询，Key如果设置为Region，Value是地域的英文名，在https://cloud.tencent.com/document/product/614/18940查询。</p>
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * <p>值类型</p><p>枚举值：</p><ul><li>TopicId： 日志主题ID</li><li>Region： 地域</li></ul>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>Key如果设置为TopicId，Value是对应日志主题topic_id 在https://cloud.tencent.com/document/product/614/56454 查询，Key如果设置为Region，Value是地域的英文名，在https://cloud.tencent.com/document/product/614/18940查询。</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_AIANALYSISDATASCOPEENTRY_H_

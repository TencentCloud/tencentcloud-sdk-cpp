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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_STRATEGYFORANTIINFOLEAK_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_STRATEGYFORANTIINFOLEAK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 防信息泄露的匹配条件结构体
                */
                class StrategyForAntiInfoLeak : public AbstractModel
                {
                public:
                    StrategyForAntiInfoLeak();
                    ~StrategyForAntiInfoLeak() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取匹配字段
                     * @return Field 匹配字段
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置匹配字段
                     * @param _field 匹配字段
                     * 
                     */
                    void SetField(const std::string& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     * 
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取逻辑符号
                     * @return CompareFunc 逻辑符号
                     * 
                     */
                    std::string GetCompareFunc() const;

                    /**
                     * 设置逻辑符号
                     * @param _compareFunc 逻辑符号
                     * 
                     */
                    void SetCompareFunc(const std::string& _compareFunc);

                    /**
                     * 判断参数 CompareFunc 是否已赋值
                     * @return CompareFunc 是否已赋值
                     * 
                     */
                    bool CompareFuncHasBeenSet() const;

                    /**
                     * 获取匹配内容
                     * @return Content 匹配内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置匹配内容
                     * @param _content 匹配内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 匹配字段
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * 逻辑符号
                     */
                    std::string m_compareFunc;
                    bool m_compareFuncHasBeenSet;

                    /**
                     * 匹配内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_STRATEGYFORANTIINFOLEAK_H_

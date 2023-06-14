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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_COLORENHANCE_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_COLORENHANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 颜色增强参数
                */
                class ColorEnhance : public AbstractModel
                {
                public:
                    ColorEnhance();
                    ~ColorEnhance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取颜色增强类型，可选项：
1.  tra；
2.  weak；
3.  normal;
4.  strong;
注意：tra不支持自适应调整，处理速度更快；weak,normal,strong支持基于画面颜色自适应，处理速度更慢。
                     * @return Type 颜色增强类型，可选项：
1.  tra；
2.  weak；
3.  normal;
4.  strong;
注意：tra不支持自适应调整，处理速度更快；weak,normal,strong支持基于画面颜色自适应，处理速度更慢。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置颜色增强类型，可选项：
1.  tra；
2.  weak；
3.  normal;
4.  strong;
注意：tra不支持自适应调整，处理速度更快；weak,normal,strong支持基于画面颜色自适应，处理速度更慢。
                     * @param _type 颜色增强类型，可选项：
1.  tra；
2.  weak；
3.  normal;
4.  strong;
注意：tra不支持自适应调整，处理速度更快；weak,normal,strong支持基于画面颜色自适应，处理速度更慢。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 颜色增强类型，可选项：
1.  tra；
2.  weak；
3.  normal;
4.  strong;
注意：tra不支持自适应调整，处理速度更快；weak,normal,strong支持基于画面颜色自适应，处理速度更慢。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_COLORENHANCE_H_

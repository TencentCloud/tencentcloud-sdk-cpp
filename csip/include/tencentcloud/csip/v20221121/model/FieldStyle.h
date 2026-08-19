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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_FIELDSTYLE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_FIELDSTYLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 字段样式配置
                */
                class FieldStyle : public AbstractModel
                {
                public:
                    FieldStyle();
                    ~FieldStyle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>类型</p>
                     * @return Type <p>类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>类型</p>
                     * @param _type <p>类型</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>是否支持复制</p>
                     * @return Copy <p>是否支持复制</p>
                     * 
                     */
                    bool GetCopy() const;

                    /**
                     * 设置<p>是否支持复制</p>
                     * @param _copy <p>是否支持复制</p>
                     * 
                     */
                    void SetCopy(const bool& _copy);

                    /**
                     * 判断参数 Copy 是否已赋值
                     * @return Copy 是否已赋值
                     * 
                     */
                    bool CopyHasBeenSet() const;

                    /**
                     * 获取<p>颜色</p>
                     * @return Color <p>颜色</p>
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置<p>颜色</p>
                     * @param _color <p>颜色</p>
                     * 
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                    /**
                     * 获取<p>跳转url</p>
                     * @return URL <p>跳转url</p>
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置<p>跳转url</p>
                     * @param _uRL <p>跳转url</p>
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                private:

                    /**
                     * <p>类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>是否支持复制</p>
                     */
                    bool m_copy;
                    bool m_copyHasBeenSet;

                    /**
                     * <p>颜色</p>
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * <p>跳转url</p>
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_FIELDSTYLE_H_

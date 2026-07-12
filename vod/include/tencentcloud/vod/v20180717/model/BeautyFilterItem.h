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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_BEAUTYFILTERITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_BEAUTYFILTERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 美颜滤镜项。
                */
                class BeautyFilterItem : public AbstractModel
                {
                public:
                    BeautyFilterItem();
                    ~BeautyFilterItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否开启滤镜。</p><p>枚举值：</p><ul><li>ON： 开</li><li>OFF： 关</li></ul>
                     * @return Switch <p>是否开启滤镜。</p><p>枚举值：</p><ul><li>ON： 开</li><li>OFF： 关</li></ul>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>是否开启滤镜。</p><p>枚举值：</p><ul><li>ON： 开</li><li>OFF： 关</li></ul>
                     * @param _switch <p>是否开启滤镜。</p><p>枚举值：</p><ul><li>ON： 开</li><li>OFF： 关</li></ul>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取<p>滤镜项。</p>
                     * @return Type <p>滤镜项。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>滤镜项。</p>
                     * @param _type <p>滤镜项。</p>
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
                     * 获取<p>滤镜强度。</p>
                     * @return Value <p>滤镜强度。</p>
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置<p>滤镜强度。</p>
                     * @param _value <p>滤镜强度。</p>
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启滤镜。</p><p>枚举值：</p><ul><li>ON： 开</li><li>OFF： 关</li></ul>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>滤镜项。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>滤镜强度。</p>
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_BEAUTYFILTERITEM_H_

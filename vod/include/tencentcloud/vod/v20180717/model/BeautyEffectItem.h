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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_BEAUTYEFFECTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_BEAUTYEFFECTITEM_H_

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
                * 图片美颜效果项。
                */
                class BeautyEffectItem : public AbstractModel
                {
                public:
                    BeautyEffectItem();
                    ~BeautyEffectItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否开启美颜。</p><p>枚举值：</p><ul><li>ON： 开</li><li>OFF： 关</li></ul>
                     * @return Switch <p>是否开启美颜。</p><p>枚举值：</p><ul><li>ON： 开</li><li>OFF： 关</li></ul>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>是否开启美颜。</p><p>枚举值：</p><ul><li>ON： 开</li><li>OFF： 关</li></ul>
                     * @param _switch <p>是否开启美颜。</p><p>枚举值：</p><ul><li>ON： 开</li><li>OFF： 关</li></ul>
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
                     * 获取<p>美颜项。</p>
                     * @return Type <p>美颜项。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>美颜项。</p>
                     * @param _type <p>美颜项。</p>
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
                     * 获取<p>美颜强度。</p>
                     * @return Value <p>美颜强度。</p>
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置<p>美颜强度。</p>
                     * @param _value <p>美颜强度。</p>
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取<p>附加资源路径。</p>
                     * @return ResourcePath <p>附加资源路径。</p>
                     * 
                     */
                    std::string GetResourcePath() const;

                    /**
                     * 设置<p>附加资源路径。</p>
                     * @param _resourcePath <p>附加资源路径。</p>
                     * 
                     */
                    void SetResourcePath(const std::string& _resourcePath);

                    /**
                     * 判断参数 ResourcePath 是否已赋值
                     * @return ResourcePath 是否已赋值
                     * 
                     */
                    bool ResourcePathHasBeenSet() const;

                    /**
                     * 获取<p>附加信息。</p>
                     * @return ExtInfo <p>附加信息。</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>附加信息。</p>
                     * @param _extInfo <p>附加信息。</p>
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启美颜。</p><p>枚举值：</p><ul><li>ON： 开</li><li>OFF： 关</li></ul>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>美颜项。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>美颜强度。</p>
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>附加资源路径。</p>
                     */
                    std::string m_resourcePath;
                    bool m_resourcePathHasBeenSet;

                    /**
                     * <p>附加信息。</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_BEAUTYEFFECTITEM_H_

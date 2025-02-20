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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_CHAINVALUE_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_CHAINVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * 上链数据 key-value
                */
                class ChainValue : public AbstractModel
                {
                public:
                    ChainValue();
                    ~ChainValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标题名字
                     * @return Label 标题名字
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置标题名字
                     * @param _label 标题名字
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取类型，文字："text"，图片："image"
                     * @return Type 类型，文字："text"，图片："image"
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型，文字："text"，图片："image"
                     * @param _type 类型，文字："text"，图片："image"
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
                     * 获取值，文字类型："abc"，图片类型：""/images/img.png"
                     * @return Value 值，文字类型："abc"，图片类型：""/images/img.png"
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置值，文字类型："abc"，图片类型：""/images/img.png"
                     * @param _value 值，文字类型："abc"，图片类型：""/images/img.png"
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
                     * 标题名字
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 类型，文字："text"，图片："image"
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 值，文字类型："abc"，图片类型：""/images/img.png"
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_CHAINVALUE_H_

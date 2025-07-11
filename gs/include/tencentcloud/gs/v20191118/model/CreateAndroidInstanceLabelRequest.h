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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCELABELREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCELABELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * CreateAndroidInstanceLabel请求参数结构体
                */
                class CreateAndroidInstanceLabelRequest : public AbstractModel
                {
                public:
                    CreateAndroidInstanceLabelRequest();
                    ~CreateAndroidInstanceLabelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取标签键
                     * @return Key 标签键
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置标签键
                     * @param _key 标签键
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
                     * 获取标签值。普通场景下，该值不需要填写；高级场景下，需要两个层级进行分组时才填写。
                     * @return Value 标签值。普通场景下，该值不需要填写；高级场景下，需要两个层级进行分组时才填写。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置标签值。普通场景下，该值不需要填写；高级场景下，需要两个层级进行分组时才填写。
                     * @param _value 标签值。普通场景下，该值不需要填写；高级场景下，需要两个层级进行分组时才填写。
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取标签描述
                     * @return Description 标签描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置标签描述
                     * @param _description 标签描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 标签键
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 标签值。普通场景下，该值不需要填写；高级场景下，需要两个层级进行分组时才填写。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 标签描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCELABELREQUEST_H_

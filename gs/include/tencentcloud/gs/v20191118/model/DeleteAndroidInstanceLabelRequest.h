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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_DELETEANDROIDINSTANCELABELREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_DELETEANDROIDINSTANCELABELREQUEST_H_

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
                * DeleteAndroidInstanceLabel请求参数结构体
                */
                class DeleteAndroidInstanceLabelRequest : public AbstractModel
                {
                public:
                    DeleteAndroidInstanceLabelRequest();
                    ~DeleteAndroidInstanceLabelRequest() = default;
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
                     * 获取标签值
                     * @return Value 标签值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置标签值
                     * @param _value 标签值
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
                     * 标签键
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 标签值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_DELETEANDROIDINSTANCELABELREQUEST_H_

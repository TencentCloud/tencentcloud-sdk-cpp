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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CUSTOMREQUESTTOADD_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CUSTOMREQUESTTOADD_H_

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
                * 安全网关请求自定义头部
                */
                class CustomRequestToAdd : public AbstractModel
                {
                public:
                    CustomRequestToAdd();
                    ~CustomRequestToAdd() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Header名称
                     * @return Key Header名称
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Header名称
                     * @param _key Header名称
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
                     * 获取Header值
                     * @return Value Header值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Header值
                     * @param _value Header值
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
                     * 获取Header类型
                     * @return AppendAction Header类型
                     * 
                     */
                    std::string GetAppendAction() const;

                    /**
                     * 设置Header类型
                     * @param _appendAction Header类型
                     * 
                     */
                    void SetAppendAction(const std::string& _appendAction);

                    /**
                     * 判断参数 AppendAction 是否已赋值
                     * @return AppendAction 是否已赋值
                     * 
                     */
                    bool AppendActionHasBeenSet() const;

                private:

                    /**
                     * Header名称
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Header值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Header类型
                     */
                    std::string m_appendAction;
                    bool m_appendActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CUSTOMREQUESTTOADD_H_

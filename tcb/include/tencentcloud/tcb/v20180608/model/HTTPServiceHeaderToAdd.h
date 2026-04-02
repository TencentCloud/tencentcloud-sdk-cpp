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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEHEADERTOADD_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEHEADERTOADD_H_

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
                * HTTP访问服务路由添加header
                */
                class HTTPServiceHeaderToAdd : public AbstractModel
                {
                public:
                    HTTPServiceHeaderToAdd();
                    ~HTTPServiceHeaderToAdd() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取添加头部的key
                     * @return Key 添加头部的key
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置添加头部的key
                     * @param _key 添加头部的key
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
                     * 获取添加头部的值
                     * @return Value 添加头部的值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置添加头部的值
                     * @param _value 添加头部的值
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
                     * 获取添加头部的处理行为。默认：OVERWRITE_IF_EXISTS_OR_ADD。APPEND_IF_EXISTS_OR_ADD: 已存在时追加值，不存在时添加，ADD_IF_ABSENT:  仅在 header 不存在时添加，已存在时不做任何操作，OVERWRITE_IF_EXISTS_OR_ADD: 已存在时覆盖值，不存在时添加（默认值），OVERWRITE_IF_EXISTS: 仅在 header 已存在时覆盖值，不存在时不做任何操作
                     * @return Action 添加头部的处理行为。默认：OVERWRITE_IF_EXISTS_OR_ADD。APPEND_IF_EXISTS_OR_ADD: 已存在时追加值，不存在时添加，ADD_IF_ABSENT:  仅在 header 不存在时添加，已存在时不做任何操作，OVERWRITE_IF_EXISTS_OR_ADD: 已存在时覆盖值，不存在时添加（默认值），OVERWRITE_IF_EXISTS: 仅在 header 已存在时覆盖值，不存在时不做任何操作
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置添加头部的处理行为。默认：OVERWRITE_IF_EXISTS_OR_ADD。APPEND_IF_EXISTS_OR_ADD: 已存在时追加值，不存在时添加，ADD_IF_ABSENT:  仅在 header 不存在时添加，已存在时不做任何操作，OVERWRITE_IF_EXISTS_OR_ADD: 已存在时覆盖值，不存在时添加（默认值），OVERWRITE_IF_EXISTS: 仅在 header 已存在时覆盖值，不存在时不做任何操作
                     * @param _action 添加头部的处理行为。默认：OVERWRITE_IF_EXISTS_OR_ADD。APPEND_IF_EXISTS_OR_ADD: 已存在时追加值，不存在时添加，ADD_IF_ABSENT:  仅在 header 不存在时添加，已存在时不做任何操作，OVERWRITE_IF_EXISTS_OR_ADD: 已存在时覆盖值，不存在时添加（默认值），OVERWRITE_IF_EXISTS: 仅在 header 已存在时覆盖值，不存在时不做任何操作
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * 添加头部的key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 添加头部的值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 添加头部的处理行为。默认：OVERWRITE_IF_EXISTS_OR_ADD。APPEND_IF_EXISTS_OR_ADD: 已存在时追加值，不存在时添加，ADD_IF_ABSENT:  仅在 header 不存在时添加，已存在时不做任何操作，OVERWRITE_IF_EXISTS_OR_ADD: 已存在时覆盖值，不存在时添加（默认值），OVERWRITE_IF_EXISTS: 仅在 header 已存在时覆盖值，不存在时不做任何操作
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEHEADERTOADD_H_

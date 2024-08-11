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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_USERFILTER_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_USERFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * 用于唯一查找用户的过滤器。
                */
                class UserFilter : public AbstractModel
                {
                public:
                    UserFilter();
                    ~UserFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤类型，当前支持：UserId、PhoneNumber、Email、AccountName、AccountUserId。
                     * @return Key 过滤类型，当前支持：UserId、PhoneNumber、Email、AccountName、AccountUserId。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置过滤类型，当前支持：UserId、PhoneNumber、Email、AccountName、AccountUserId。
                     * @param _key 过滤类型，当前支持：UserId、PhoneNumber、Email、AccountName、AccountUserId。
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
                     * 获取过滤值，只支持完全匹配，不支持模糊搜索。针对不同的 Key，Value 的取值如下：
UserId: user12345678abcde
PhoneNumber: +86-13800000000（格式为：{CountryCode}-{PhoneNumber}）
Email: admin@mail.foobar.com
AccountName: account_name
AccountUserId: x53mYVqykfPqTCqekbNwwa4aXk4
                     * @return Value 过滤值，只支持完全匹配，不支持模糊搜索。针对不同的 Key，Value 的取值如下：
UserId: user12345678abcde
PhoneNumber: +86-13800000000（格式为：{CountryCode}-{PhoneNumber}）
Email: admin@mail.foobar.com
AccountName: account_name
AccountUserId: x53mYVqykfPqTCqekbNwwa4aXk4
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置过滤值，只支持完全匹配，不支持模糊搜索。针对不同的 Key，Value 的取值如下：
UserId: user12345678abcde
PhoneNumber: +86-13800000000（格式为：{CountryCode}-{PhoneNumber}）
Email: admin@mail.foobar.com
AccountName: account_name
AccountUserId: x53mYVqykfPqTCqekbNwwa4aXk4
                     * @param _value 过滤值，只支持完全匹配，不支持模糊搜索。针对不同的 Key，Value 的取值如下：
UserId: user12345678abcde
PhoneNumber: +86-13800000000（格式为：{CountryCode}-{PhoneNumber}）
Email: admin@mail.foobar.com
AccountName: account_name
AccountUserId: x53mYVqykfPqTCqekbNwwa4aXk4
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
                     * 过滤类型，当前支持：UserId、PhoneNumber、Email、AccountName、AccountUserId。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 过滤值，只支持完全匹配，不支持模糊搜索。针对不同的 Key，Value 的取值如下：
UserId: user12345678abcde
PhoneNumber: +86-13800000000（格式为：{CountryCode}-{PhoneNumber}）
Email: admin@mail.foobar.com
AccountName: account_name
AccountUserId: x53mYVqykfPqTCqekbNwwa4aXk4
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_USERFILTER_H_

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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SETLOCALSTORAGEITEMREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SETLOCALSTORAGEITEMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * SetLocalStorageItem请求参数结构体
                */
                class SetLocalStorageItemRequest : public AbstractModel
                {
                public:
                    SetLocalStorageItemRequest();
                    ~SetLocalStorageItemRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取键
                     * @return Key 键
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置键
                     * @param _key 键
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
                     * 获取值
                     * @return Value 值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置值
                     * @param _value 值
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
                     * 获取失效时间（单位；秒）
                     * @return Expire 失效时间（单位；秒）
                     * 
                     */
                    uint64_t GetExpire() const;

                    /**
                     * 设置失效时间（单位；秒）
                     * @param _expire 失效时间（单位；秒）
                     * 
                     */
                    void SetExpire(const uint64_t& _expire);

                    /**
                     * 判断参数 Expire 是否已赋值
                     * @return Expire 是否已赋值
                     * 
                     */
                    bool ExpireHasBeenSet() const;

                private:

                    /**
                     * 键
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 失效时间（单位；秒）
                     */
                    uint64_t m_expire;
                    bool m_expireHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SETLOCALSTORAGEITEMREQUEST_H_

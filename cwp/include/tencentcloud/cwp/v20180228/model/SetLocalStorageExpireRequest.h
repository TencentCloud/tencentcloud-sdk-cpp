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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SETLOCALSTORAGEEXPIREREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SETLOCALSTORAGEEXPIREREQUEST_H_

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
                * SetLocalStorageExpire请求参数结构体
                */
                class SetLocalStorageExpireRequest : public AbstractModel
                {
                public:
                    SetLocalStorageExpireRequest();
                    ~SetLocalStorageExpireRequest() = default;
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
                     * 获取过期时间（单位：秒）
                     * @return Expire 过期时间（单位：秒）
                     * 
                     */
                    uint64_t GetExpire() const;

                    /**
                     * 设置过期时间（单位：秒）
                     * @param _expire 过期时间（单位：秒）
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
                     * 过期时间（单位：秒）
                     */
                    uint64_t m_expire;
                    bool m_expireHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SETLOCALSTORAGEEXPIREREQUEST_H_

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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_HOTKEYINFO_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_HOTKEYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 热Key详细信息
                */
                class HotKeyInfo : public AbstractModel
                {
                public:
                    HotKeyInfo();
                    ~HotKeyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取热 Key 的名称。
                     * @return Key 热 Key 的名称。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置热 Key 的名称。
                     * @param _key 热 Key 的名称。
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
                     * 获取Key 类型。
                     * @return Type Key 类型。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Key 类型。
                     * @param _type Key 类型。
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
                     * 获取某段时间内热 Key 的访问次数
                     * @return Count 某段时间内热 Key 的访问次数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置某段时间内热 Key 的访问次数
                     * @param _count 某段时间内热 Key 的访问次数
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 热 Key 的名称。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Key 类型。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 某段时间内热 Key 的访问次数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_HOTKEYINFO_H_

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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CUSTOMFIELDINFO_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CUSTOMFIELDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 自定义字段
                */
                class CustomFieldInfo : public AbstractModel
                {
                public:
                    CustomFieldInfo();
                    ~CustomFieldInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段id
                     * @return Id 字段id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置字段id
                     * @param _id 字段id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取字段key
                     * @return Key 字段key
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置字段key
                     * @param _key 字段key
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
                     * 获取字段名
                     * @return Name 字段名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置字段名
                     * @param _name 字段名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取字段值
                     * @return Val 字段值
                     * 
                     */
                    std::string GetVal() const;

                    /**
                     * 设置字段值
                     * @param _val 字段值
                     * 
                     */
                    void SetVal(const std::string& _val);

                    /**
                     * 判断参数 Val 是否已赋值
                     * @return Val 是否已赋值
                     * 
                     */
                    bool ValHasBeenSet() const;

                private:

                    /**
                     * 字段id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 字段key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 字段名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 字段值
                     */
                    std::string m_val;
                    bool m_valHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CUSTOMFIELDINFO_H_

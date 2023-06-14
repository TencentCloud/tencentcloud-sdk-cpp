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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_PLAYERDATAMAP_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_PLAYERDATAMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 玩家自定义数据
                */
                class PlayerDataMap : public AbstractModel
                {
                public:
                    PlayerDataMap();
                    ~PlayerDataMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取玩家自定义数据键，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
                     * @return Key 玩家自定义数据键，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置玩家自定义数据键，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
                     * @param _key 玩家自定义数据键，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
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
                     * 获取玩家自定义数据值，最小长度不小于1个ASCII字符，最大长度不超过2048个ASCII字符
                     * @return Value 玩家自定义数据值，最小长度不小于1个ASCII字符，最大长度不超过2048个ASCII字符
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置玩家自定义数据值，最小长度不小于1个ASCII字符，最大长度不超过2048个ASCII字符
                     * @param _value 玩家自定义数据值，最小长度不小于1个ASCII字符，最大长度不超过2048个ASCII字符
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
                     * 玩家自定义数据键，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 玩家自定义数据值，最小长度不小于1个ASCII字符，最大长度不超过2048个ASCII字符
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_PLAYERDATAMAP_H_

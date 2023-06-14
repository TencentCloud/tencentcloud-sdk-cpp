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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_TOPENTRY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_TOPENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/TopEntryValue.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * TopN的Entry数据
                */
                class TopEntry : public AbstractModel
                {
                public:
                    TopEntry();
                    ~TopEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取top查询维度值。
                     * @return Key top查询维度值。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置top查询维度值。
                     * @param _key top查询维度值。
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
                     * 获取查询具体数据。
                     * @return Value 查询具体数据。
                     * 
                     */
                    std::vector<TopEntryValue> GetValue() const;

                    /**
                     * 设置查询具体数据。
                     * @param _value 查询具体数据。
                     * 
                     */
                    void SetValue(const std::vector<TopEntryValue>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * top查询维度值。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 查询具体数据。
                     */
                    std::vector<TopEntryValue> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_TOPENTRY_H_

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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSCREDENTIALOUTPUT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSCREDENTIALOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 常规密钥凭据（出参专用），用于查询详情接口的响应。Value字段返回打码后的值，不暴露明文
                */
                class AccessCredentialOutput : public AbstractModel
                {
                public:
                    AccessCredentialOutput();
                    ~AccessCredentialOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取凭据键名（原文），如SecretId、SecretKey、Token等
                     * @return Key 凭据键名（原文），如SecretId、SecretKey、Token等
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置凭据键名（原文），如SecretId、SecretKey、Token等
                     * @param _key 凭据键名（原文），如SecretId、SecretKey、Token等
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
                     * 获取凭据键值（打码后）
补充说明：保留前3后4位，中间用***替代；长度不足7位时全部替换为***
                     * @return Value 凭据键值（打码后）
补充说明：保留前3后4位，中间用***替代；长度不足7位时全部替换为***
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置凭据键值（打码后）
补充说明：保留前3后4位，中间用***替代；长度不足7位时全部替换为***
                     * @param _value 凭据键值（打码后）
补充说明：保留前3后4位，中间用***替代；长度不足7位时全部替换为***
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
                     * 凭据键名（原文），如SecretId、SecretKey、Token等
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 凭据键值（打码后）
补充说明：保留前3后4位，中间用***替代；长度不足7位时全部替换为***
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSCREDENTIALOUTPUT_H_

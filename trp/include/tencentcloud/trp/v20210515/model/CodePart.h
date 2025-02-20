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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_CODEPART_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_CODEPART_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * 码段配置
                */
                class CodePart : public AbstractModel
                {
                public:
                    CodePart();
                    ~CodePart() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取码段名称
                     * @return Name 码段名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置码段名称
                     * @param _name 码段名称
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
                     * 获取码段类型
                     * @return Type 码段类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置码段类型
                     * @param _type 码段类型
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
                     * 获取码段内容
                     * @return Value 码段内容
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置码段内容
                     * @param _value 码段内容
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
                     * 获取码段长度
                     * @return Length 码段长度
                     * 
                     */
                    uint64_t GetLength() const;

                    /**
                     * 设置码段长度
                     * @param _length 码段长度
                     * 
                     */
                    void SetLength(const uint64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取扩展字段
                     * @return Ext 扩展字段
                     * 
                     */
                    std::string GetExt() const;

                    /**
                     * 设置扩展字段
                     * @param _ext 扩展字段
                     * 
                     */
                    void SetExt(const std::string& _ext);

                    /**
                     * 判断参数 Ext 是否已赋值
                     * @return Ext 是否已赋值
                     * 
                     */
                    bool ExtHasBeenSet() const;

                private:

                    /**
                     * 码段名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 码段类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 码段内容
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 码段长度
                     */
                    uint64_t m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * 扩展字段
                     */
                    std::string m_ext;
                    bool m_extHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_CODEPART_H_

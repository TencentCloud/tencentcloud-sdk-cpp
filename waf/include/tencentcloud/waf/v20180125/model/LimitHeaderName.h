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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LIMITHEADERNAME_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LIMITHEADERNAME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 限流Header参数名
                */
                class LimitHeaderName : public AbstractModel
                {
                public:
                    LimitHeaderName();
                    ~LimitHeaderName() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamsName 参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamsName() const;

                    /**
                     * 设置参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramsName 参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamsName(const std::string& _paramsName);

                    /**
                     * 判断参数 ParamsName 是否已赋值
                     * @return ParamsName 是否已赋值
                     * 
                     */
                    bool ParamsNameHasBeenSet() const;

                    /**
                     * 获取操作符号,支持REGEX(正则),IN(属于),NOT_IN(不属于), EACH(每个参数值)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 操作符号,支持REGEX(正则),IN(属于),NOT_IN(不属于), EACH(每个参数值)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置操作符号,支持REGEX(正则),IN(属于),NOT_IN(不属于), EACH(每个参数值)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 操作符号,支持REGEX(正则),IN(属于),NOT_IN(不属于), EACH(每个参数值)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 参数名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramsName;
                    bool m_paramsNameHasBeenSet;

                    /**
                     * 操作符号,支持REGEX(正则),IN(属于),NOT_IN(不属于), EACH(每个参数值)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LIMITHEADERNAME_H_

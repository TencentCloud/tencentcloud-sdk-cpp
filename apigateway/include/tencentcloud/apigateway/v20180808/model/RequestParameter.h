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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_REQUESTPARAMETER_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_REQUESTPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 请求参数
                */
                class RequestParameter : public AbstractModel
                {
                public:
                    RequestParameter();
                    ~RequestParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取请求参数名称
                     * @return Name 请求参数名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置请求参数名称
                     * @param _name 请求参数名称
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
                     * 获取描述
                     * @return Desc 描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置描述
                     * @param _desc 描述
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取参数位置
                     * @return Position 参数位置
                     * 
                     */
                    std::string GetPosition() const;

                    /**
                     * 设置参数位置
                     * @param _position 参数位置
                     * 
                     */
                    void SetPosition(const std::string& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取参数类型
                     * @return Type 参数类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置参数类型
                     * @param _type 参数类型
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
                     * 获取默认值
                     * @return DefaultValue 默认值
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置默认值
                     * @param _defaultValue 默认值
                     * 
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     * 
                     */
                    bool DefaultValueHasBeenSet() const;

                    /**
                     * 获取是否必须
                     * @return Required 是否必须
                     * 
                     */
                    bool GetRequired() const;

                    /**
                     * 设置是否必须
                     * @param _required 是否必须
                     * 
                     */
                    void SetRequired(const bool& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     * 
                     */
                    bool RequiredHasBeenSet() const;

                private:

                    /**
                     * 请求参数名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 参数位置
                     */
                    std::string m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 参数类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 默认值
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * 是否必须
                     */
                    bool m_required;
                    bool m_requiredHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_REQUESTPARAMETER_H_

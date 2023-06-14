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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_REQPARAMETER_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_REQPARAMETER_H_

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
                class ReqParameter : public AbstractModel
                {
                public:
                    ReqParameter();
                    ~ReqParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API 的前端参数名称。
                     * @return Name API 的前端参数名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置API 的前端参数名称。
                     * @param _name API 的前端参数名称。
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
                     * 获取API 的前端参数位置，如 header。目前支持 header、query、path。
                     * @return Position API 的前端参数位置，如 header。目前支持 header、query、path。
                     * 
                     */
                    std::string GetPosition() const;

                    /**
                     * 设置API 的前端参数位置，如 header。目前支持 header、query、path。
                     * @param _position API 的前端参数位置，如 header。目前支持 header、query、path。
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
                     * 获取API 的前端参数类型，如 String、int。
                     * @return Type API 的前端参数类型，如 String、int。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置API 的前端参数类型，如 String、int。
                     * @param _type API 的前端参数类型，如 String、int。
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
                     * 获取API 的前端参数默认值。
                     * @return DefaultValue API 的前端参数默认值。
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置API 的前端参数默认值。
                     * @param _defaultValue API 的前端参数默认值。
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
                     * 获取API 的前端参数是否必填，True：表示必填，False：表示可选。
                     * @return Required API 的前端参数是否必填，True：表示必填，False：表示可选。
                     * 
                     */
                    bool GetRequired() const;

                    /**
                     * 设置API 的前端参数是否必填，True：表示必填，False：表示可选。
                     * @param _required API 的前端参数是否必填，True：表示必填，False：表示可选。
                     * 
                     */
                    void SetRequired(const bool& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     * 
                     */
                    bool RequiredHasBeenSet() const;

                    /**
                     * 获取API 的前端参数备注。
                     * @return Desc API 的前端参数备注。
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置API 的前端参数备注。
                     * @param _desc API 的前端参数备注。
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * API 的前端参数名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * API 的前端参数位置，如 header。目前支持 header、query、path。
                     */
                    std::string m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * API 的前端参数类型，如 String、int。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * API 的前端参数默认值。
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * API 的前端参数是否必填，True：表示必填，False：表示可选。
                     */
                    bool m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * API 的前端参数备注。
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_REQPARAMETER_H_

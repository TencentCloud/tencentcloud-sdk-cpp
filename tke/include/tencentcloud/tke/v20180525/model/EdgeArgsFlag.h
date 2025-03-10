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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EDGEARGSFLAG_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EDGEARGSFLAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 边缘容器参数描述
                */
                class EdgeArgsFlag : public AbstractModel
                {
                public:
                    EdgeArgsFlag();
                    ~EdgeArgsFlag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名
                     * @return Name 参数名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置参数名
                     * @param _name 参数名
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
                     * 获取参数描述
                     * @return Usage 参数描述
                     * 
                     */
                    std::string GetUsage() const;

                    /**
                     * 设置参数描述
                     * @param _usage 参数描述
                     * 
                     */
                    void SetUsage(const std::string& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取参数默认值
                     * @return Default 参数默认值
                     * 
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置参数默认值
                     * @param _default 参数默认值
                     * 
                     */
                    void SetDefault(const std::string& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取参数可选范围（目前包含range和in两种，"[]"代表range，如"[1, 5]"表示参数必须>=1且 <=5, "()"代表in， 如"('aa', 'bb')"表示参数只能为字符串'aa'或者'bb'，该参数为空表示不校验）
                     * @return Constraint 参数可选范围（目前包含range和in两种，"[]"代表range，如"[1, 5]"表示参数必须>=1且 <=5, "()"代表in， 如"('aa', 'bb')"表示参数只能为字符串'aa'或者'bb'，该参数为空表示不校验）
                     * 
                     */
                    std::string GetConstraint() const;

                    /**
                     * 设置参数可选范围（目前包含range和in两种，"[]"代表range，如"[1, 5]"表示参数必须>=1且 <=5, "()"代表in， 如"('aa', 'bb')"表示参数只能为字符串'aa'或者'bb'，该参数为空表示不校验）
                     * @param _constraint 参数可选范围（目前包含range和in两种，"[]"代表range，如"[1, 5]"表示参数必须>=1且 <=5, "()"代表in， 如"('aa', 'bb')"表示参数只能为字符串'aa'或者'bb'，该参数为空表示不校验）
                     * 
                     */
                    void SetConstraint(const std::string& _constraint);

                    /**
                     * 判断参数 Constraint 是否已赋值
                     * @return Constraint 是否已赋值
                     * 
                     */
                    bool ConstraintHasBeenSet() const;

                private:

                    /**
                     * 参数名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 参数类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 参数描述
                     */
                    std::string m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * 参数默认值
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * 参数可选范围（目前包含range和in两种，"[]"代表range，如"[1, 5]"表示参数必须>=1且 <=5, "()"代表in， 如"('aa', 'bb')"表示参数只能为字符串'aa'或者'bb'，该参数为空表示不校验）
                     */
                    std::string m_constraint;
                    bool m_constraintHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EDGEARGSFLAG_H_

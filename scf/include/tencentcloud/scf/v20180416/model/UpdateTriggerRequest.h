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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_UPDATETRIGGERREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_UPDATETRIGGERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * UpdateTrigger请求参数结构体
                */
                class UpdateTriggerRequest : public AbstractModel
                {
                public:
                    UpdateTriggerRequest();
                    ~UpdateTriggerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取函数名称
                     * @return FunctionName 函数名称
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置函数名称
                     * @param _functionName 函数名称
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取触发器名称
                     * @return TriggerName 触发器名称
                     * 
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置触发器名称
                     * @param _triggerName 触发器名称
                     * 
                     */
                    void SetTriggerName(const std::string& _triggerName);

                    /**
                     * 判断参数 TriggerName 是否已赋值
                     * @return TriggerName 是否已赋值
                     * 
                     */
                    bool TriggerNameHasBeenSet() const;

                    /**
                     * 获取触发器类型，目前只支持timer、ckafka、http三种类型
                     * @return Type 触发器类型，目前只支持timer、ckafka、http三种类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置触发器类型，目前只支持timer、ckafka、http三种类型
                     * @param _type 触发器类型，目前只支持timer、ckafka、http三种类型
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
                     * 获取触发器开启或关闭，传参为OPEN为开启，CLOSE为关闭
                     * @return Enable 触发器开启或关闭，传参为OPEN为开启，CLOSE为关闭
                     * 
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置触发器开启或关闭，传参为OPEN为开启，CLOSE为关闭
                     * @param _enable 触发器开启或关闭，传参为OPEN为开启，CLOSE为关闭
                     * 
                     */
                    void SetEnable(const std::string& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取触发器创建时所指向的函数版本或别名，默认为 $LATEST
                     * @return Qualifier 触发器创建时所指向的函数版本或别名，默认为 $LATEST
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置触发器创建时所指向的函数版本或别名，默认为 $LATEST
                     * @param _qualifier 触发器创建时所指向的函数版本或别名，默认为 $LATEST
                     * 
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     * 
                     */
                    bool QualifierHasBeenSet() const;

                    /**
                     * 获取函数的命名空间，默认值为default
                     * @return Namespace 函数的命名空间，默认值为default
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置函数的命名空间，默认值为default
                     * @param _namespace 函数的命名空间，默认值为default
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取TriggerDesc参数
                     * @return TriggerDesc TriggerDesc参数
                     * 
                     */
                    std::string GetTriggerDesc() const;

                    /**
                     * 设置TriggerDesc参数
                     * @param _triggerDesc TriggerDesc参数
                     * 
                     */
                    void SetTriggerDesc(const std::string& _triggerDesc);

                    /**
                     * 判断参数 TriggerDesc 是否已赋值
                     * @return TriggerDesc 是否已赋值
                     * 
                     */
                    bool TriggerDescHasBeenSet() const;

                    /**
                     * 获取触发器描述
                     * @return Description 触发器描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置触发器描述
                     * @param _description 触发器描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取用户附加信息
                     * @return CustomArgument 用户附加信息
                     * 
                     */
                    std::string GetCustomArgument() const;

                    /**
                     * 设置用户附加信息
                     * @param _customArgument 用户附加信息
                     * 
                     */
                    void SetCustomArgument(const std::string& _customArgument);

                    /**
                     * 判断参数 CustomArgument 是否已赋值
                     * @return CustomArgument 是否已赋值
                     * 
                     */
                    bool CustomArgumentHasBeenSet() const;

                private:

                    /**
                     * 函数名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 触发器名称
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * 触发器类型，目前只支持timer、ckafka、http三种类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 触发器开启或关闭，传参为OPEN为开启，CLOSE为关闭
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 触发器创建时所指向的函数版本或别名，默认为 $LATEST
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * 函数的命名空间，默认值为default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * TriggerDesc参数
                     */
                    std::string m_triggerDesc;
                    bool m_triggerDescHasBeenSet;

                    /**
                     * 触发器描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 用户附加信息
                     */
                    std::string m_customArgument;
                    bool m_customArgumentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_UPDATETRIGGERREQUEST_H_

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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_CREATETRIGGERREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_CREATETRIGGERREQUEST_H_

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
                * CreateTrigger请求参数结构体
                */
                class CreateTriggerRequest : public AbstractModel
                {
                public:
                    CreateTriggerRequest();
                    ~CreateTriggerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取新建触发器绑定的函数名称
                     * @return FunctionName 新建触发器绑定的函数名称
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置新建触发器绑定的函数名称
                     * @param FunctionName 新建触发器绑定的函数名称
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取新建触发器名称。如果是定时触发器，名称支持英文字母、数字、连接符和下划线，最长100个字符；如果是cos触发器，需要是对应cos存储桶适用于XML API的访问域名(例如:5401-5ff414-12345.cos.ap-shanghai.myqcloud.com);如果是其他触发器，见具体触发器绑定参数的说明
                     * @return TriggerName 新建触发器名称。如果是定时触发器，名称支持英文字母、数字、连接符和下划线，最长100个字符；如果是cos触发器，需要是对应cos存储桶适用于XML API的访问域名(例如:5401-5ff414-12345.cos.ap-shanghai.myqcloud.com);如果是其他触发器，见具体触发器绑定参数的说明
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置新建触发器名称。如果是定时触发器，名称支持英文字母、数字、连接符和下划线，最长100个字符；如果是cos触发器，需要是对应cos存储桶适用于XML API的访问域名(例如:5401-5ff414-12345.cos.ap-shanghai.myqcloud.com);如果是其他触发器，见具体触发器绑定参数的说明
                     * @param TriggerName 新建触发器名称。如果是定时触发器，名称支持英文字母、数字、连接符和下划线，最长100个字符；如果是cos触发器，需要是对应cos存储桶适用于XML API的访问域名(例如:5401-5ff414-12345.cos.ap-shanghai.myqcloud.com);如果是其他触发器，见具体触发器绑定参数的说明
                     */
                    void SetTriggerName(const std::string& _triggerName);

                    /**
                     * 判断参数 TriggerName 是否已赋值
                     * @return TriggerName 是否已赋值
                     */
                    bool TriggerNameHasBeenSet() const;

                    /**
                     * 获取触发器类型，目前支持 cos 、cmq、 timer、 ckafka、apigw类型
                     * @return Type 触发器类型，目前支持 cos 、cmq、 timer、 ckafka、apigw类型
                     */
                    std::string GetType() const;

                    /**
                     * 设置触发器类型，目前支持 cos 、cmq、 timer、 ckafka、apigw类型
                     * @param Type 触发器类型，目前支持 cos 、cmq、 timer、 ckafka、apigw类型
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取触发器对应的参数，可见具体[触发器描述说明](https://cloud.tencent.com/document/product/583/39901)
                     * @return TriggerDesc 触发器对应的参数，可见具体[触发器描述说明](https://cloud.tencent.com/document/product/583/39901)
                     */
                    std::string GetTriggerDesc() const;

                    /**
                     * 设置触发器对应的参数，可见具体[触发器描述说明](https://cloud.tencent.com/document/product/583/39901)
                     * @param TriggerDesc 触发器对应的参数，可见具体[触发器描述说明](https://cloud.tencent.com/document/product/583/39901)
                     */
                    void SetTriggerDesc(const std::string& _triggerDesc);

                    /**
                     * 判断参数 TriggerDesc 是否已赋值
                     * @return TriggerDesc 是否已赋值
                     */
                    bool TriggerDescHasBeenSet() const;

                    /**
                     * 获取函数的命名空间
                     * @return Namespace 函数的命名空间
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置函数的命名空间
                     * @param Namespace 函数的命名空间
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取函数的版本
                     * @return Qualifier 函数的版本
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置函数的版本
                     * @param Qualifier 函数的版本
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     */
                    bool QualifierHasBeenSet() const;

                    /**
                     * 获取触发器的初始是能状态 OPEN表示开启 CLOSE表示关闭
                     * @return Enable 触发器的初始是能状态 OPEN表示开启 CLOSE表示关闭
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置触发器的初始是能状态 OPEN表示开启 CLOSE表示关闭
                     * @param Enable 触发器的初始是能状态 OPEN表示开启 CLOSE表示关闭
                     */
                    void SetEnable(const std::string& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * 新建触发器绑定的函数名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 新建触发器名称。如果是定时触发器，名称支持英文字母、数字、连接符和下划线，最长100个字符；如果是cos触发器，需要是对应cos存储桶适用于XML API的访问域名(例如:5401-5ff414-12345.cos.ap-shanghai.myqcloud.com);如果是其他触发器，见具体触发器绑定参数的说明
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * 触发器类型，目前支持 cos 、cmq、 timer、 ckafka、apigw类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 触发器对应的参数，可见具体[触发器描述说明](https://cloud.tencent.com/document/product/583/39901)
                     */
                    std::string m_triggerDesc;
                    bool m_triggerDescHasBeenSet;

                    /**
                     * 函数的命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 函数的版本
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * 触发器的初始是能状态 OPEN表示开启 CLOSE表示关闭
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_CREATETRIGGERREQUEST_H_

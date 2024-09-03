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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_DELETETRIGGERREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_DELETETRIGGERREQUEST_H_

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
                * DeleteTrigger请求参数结构体
                */
                class DeleteTriggerRequest : public AbstractModel
                {
                public:
                    DeleteTriggerRequest();
                    ~DeleteTriggerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取函数的名称
                     * @return FunctionName 函数的名称
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置函数的名称
                     * @param _functionName 函数的名称
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
                     * 获取要删除的触发器名称
                     * @return TriggerName 要删除的触发器名称
                     * 
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置要删除的触发器名称
                     * @param _triggerName 要删除的触发器名称
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
                     * 获取要删除的触发器类型，目前只支持  timer、ckafka 、apigw 、cls 、cos 、cmq 、http 类型
                     * @return Type 要删除的触发器类型，目前只支持  timer、ckafka 、apigw 、cls 、cos 、cmq 、http 类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置要删除的触发器类型，目前只支持  timer、ckafka 、apigw 、cls 、cos 、cmq 、http 类型
                     * @param _type 要删除的触发器类型，目前只支持  timer、ckafka 、apigw 、cls 、cos 、cmq 、http 类型
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
                     * 获取函数所属命名空间
                     * @return Namespace 函数所属命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置函数所属命名空间
                     * @param _namespace 函数所属命名空间
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
                     * 获取如果删除的触发器类型为 COS 触发器，该字段为必填值，存放 JSON 格式的数据 {"event":"cos:ObjectCreated:*"}，数据内容和 SetTrigger 接口中该字段的格式相同；如果删除的触发器类型为定时触发器或 CMQ 触发器，可以不指定该字段
                     * @return TriggerDesc 如果删除的触发器类型为 COS 触发器，该字段为必填值，存放 JSON 格式的数据 {"event":"cos:ObjectCreated:*"}，数据内容和 SetTrigger 接口中该字段的格式相同；如果删除的触发器类型为定时触发器或 CMQ 触发器，可以不指定该字段
                     * 
                     */
                    std::string GetTriggerDesc() const;

                    /**
                     * 设置如果删除的触发器类型为 COS 触发器，该字段为必填值，存放 JSON 格式的数据 {"event":"cos:ObjectCreated:*"}，数据内容和 SetTrigger 接口中该字段的格式相同；如果删除的触发器类型为定时触发器或 CMQ 触发器，可以不指定该字段
                     * @param _triggerDesc 如果删除的触发器类型为 COS 触发器，该字段为必填值，存放 JSON 格式的数据 {"event":"cos:ObjectCreated:*"}，数据内容和 SetTrigger 接口中该字段的格式相同；如果删除的触发器类型为定时触发器或 CMQ 触发器，可以不指定该字段
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
                     * 获取要删除的触发器实际所指向的版本或别名，默认值为 $LATEST
                     * @return Qualifier 要删除的触发器实际所指向的版本或别名，默认值为 $LATEST
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置要删除的触发器实际所指向的版本或别名，默认值为 $LATEST
                     * @param _qualifier 要删除的触发器实际所指向的版本或别名，默认值为 $LATEST
                     * 
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     * 
                     */
                    bool QualifierHasBeenSet() const;

                private:

                    /**
                     * 函数的名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 要删除的触发器名称
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * 要删除的触发器类型，目前只支持  timer、ckafka 、apigw 、cls 、cos 、cmq 、http 类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 函数所属命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 如果删除的触发器类型为 COS 触发器，该字段为必填值，存放 JSON 格式的数据 {"event":"cos:ObjectCreated:*"}，数据内容和 SetTrigger 接口中该字段的格式相同；如果删除的触发器类型为定时触发器或 CMQ 触发器，可以不指定该字段
                     */
                    std::string m_triggerDesc;
                    bool m_triggerDescHasBeenSet;

                    /**
                     * 要删除的触发器实际所指向的版本或别名，默认值为 $LATEST
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_DELETETRIGGERREQUEST_H_

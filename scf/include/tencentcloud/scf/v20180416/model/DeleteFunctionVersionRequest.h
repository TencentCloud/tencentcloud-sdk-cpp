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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_DELETEFUNCTIONVERSIONREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_DELETEFUNCTIONVERSIONREQUEST_H_

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
                * DeleteFunctionVersion请求参数结构体
                */
                class DeleteFunctionVersionRequest : public AbstractModel
                {
                public:
                    DeleteFunctionVersionRequest();
                    ~DeleteFunctionVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要删除的函数名称
                     * @return FunctionName 要删除的函数名称
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置要删除的函数名称
                     * @param _functionName 要删除的函数名称
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
                     * 获取填写需要删除的版本号
                     * @return Qualifier 填写需要删除的版本号
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置填写需要删除的版本号
                     * @param _qualifier 填写需要删除的版本号
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
                     * 获取强制删除标记，传true会直接删除容器，并强制关闭还在执行中的函数
                     * @return ForceDelete 强制删除标记，传true会直接删除容器，并强制关闭还在执行中的函数
                     * 
                     */
                    std::string GetForceDelete() const;

                    /**
                     * 设置强制删除标记，传true会直接删除容器，并强制关闭还在执行中的函数
                     * @param _forceDelete 强制删除标记，传true会直接删除容器，并强制关闭还在执行中的函数
                     * 
                     */
                    void SetForceDelete(const std::string& _forceDelete);

                    /**
                     * 判断参数 ForceDelete 是否已赋值
                     * @return ForceDelete 是否已赋值
                     * 
                     */
                    bool ForceDeleteHasBeenSet() const;

                private:

                    /**
                     * 要删除的函数名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 填写需要删除的版本号
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * 函数所属命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 强制删除标记，传true会直接删除容器，并强制关闭还在执行中的函数
                     */
                    std::string m_forceDelete;
                    bool m_forceDeleteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_DELETEFUNCTIONVERSIONREQUEST_H_

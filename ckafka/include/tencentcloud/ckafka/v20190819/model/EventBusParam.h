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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_EVENTBUSPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_EVENTBUSPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * EventBus配置
                */
                class EventBusParam : public AbstractModel
                {
                public:
                    EventBusParam();
                    ~EventBusParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源类型。COS/ES/CLS
                     * @return Type 资源类型。COS/ES/CLS
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置资源类型。COS/ES/CLS
                     * @param _type 资源类型。COS/ES/CLS
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
                     * 获取是否为自建集群
                     * @return SelfBuilt 是否为自建集群
                     * 
                     */
                    bool GetSelfBuilt() const;

                    /**
                     * 设置是否为自建集群
                     * @param _selfBuilt 是否为自建集群
                     * 
                     */
                    void SetSelfBuilt(const bool& _selfBuilt);

                    /**
                     * 判断参数 SelfBuilt 是否已赋值
                     * @return SelfBuilt 是否已赋值
                     * 
                     */
                    bool SelfBuiltHasBeenSet() const;

                    /**
                     * 获取实例资源
                     * @return Resource 实例资源
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置实例资源
                     * @param _resource 实例资源
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取SCF云函数命名空间
                     * @return Namespace SCF云函数命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置SCF云函数命名空间
                     * @param _namespace SCF云函数命名空间
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
                     * 获取SCF云函数函数名
                     * @return FunctionName SCF云函数函数名
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置SCF云函数函数名
                     * @param _functionName SCF云函数函数名
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
                     * 获取SCF云函数版本及别名
                     * @return Qualifier SCF云函数版本及别名
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置SCF云函数版本及别名
                     * @param _qualifier SCF云函数版本及别名
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
                     * 资源类型。COS/ES/CLS
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 是否为自建集群
                     */
                    bool m_selfBuilt;
                    bool m_selfBuiltHasBeenSet;

                    /**
                     * 实例资源
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * SCF云函数命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * SCF云函数函数名
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * SCF云函数版本及别名
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_EVENTBUSPARAM_H_

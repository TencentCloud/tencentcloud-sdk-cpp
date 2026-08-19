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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SCFCUSTOMDOMAINENDPOINTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SCFCUSTOMDOMAINENDPOINTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * SCF自定义域名端点
                */
                class ScfCustomDomainEndpointItem : public AbstractModel
                {
                public:
                    ScfCustomDomainEndpointItem();
                    ~ScfCustomDomainEndpointItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>匹配路径</p>
                     * @return PathMatch <p>匹配路径</p>
                     * 
                     */
                    std::string GetPathMatch() const;

                    /**
                     * 设置<p>匹配路径</p>
                     * @param _pathMatch <p>匹配路径</p>
                     * 
                     */
                    void SetPathMatch(const std::string& _pathMatch);

                    /**
                     * 判断参数 PathMatch 是否已赋值
                     * @return PathMatch 是否已赋值
                     * 
                     */
                    bool PathMatchHasBeenSet() const;

                    /**
                     * 获取<p>命名空间</p>
                     * @return Namespace <p>命名空间</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>命名空间</p>
                     * @param _namespace <p>命名空间</p>
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
                     * 获取<p>函数名称</p>
                     * @return FunctionName <p>函数名称</p>
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置<p>函数名称</p>
                     * @param _functionName <p>函数名称</p>
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
                     * 获取<p>函数版本</p>
                     * @return Qualifier <p>函数版本</p>
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置<p>函数版本</p>
                     * @param _qualifier <p>函数版本</p>
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
                     * <p>匹配路径</p>
                     */
                    std::string m_pathMatch;
                    bool m_pathMatchHasBeenSet;

                    /**
                     * <p>命名空间</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>函数名称</p>
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * <p>函数版本</p>
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SCFCUSTOMDOMAINENDPOINTITEM_H_

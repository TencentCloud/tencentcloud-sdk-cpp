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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_ENDPOINTSCONF_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_ENDPOINTSCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/PathRewriteRule.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 后端路由配置信息
                */
                class EndpointsConf : public AbstractModel
                {
                public:
                    EndpointsConf();
                    ~EndpointsConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取函数命名空间
                     * @return Namespace 函数命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置函数命名空间
                     * @param _namespace 函数命名空间
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
                     * 获取函数名
                     * @return FunctionName 函数名
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置函数名
                     * @param _functionName 函数名
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
                     * 获取函数别名或版本
                     * @return Qualifier 函数别名或版本
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置函数别名或版本
                     * @param _qualifier 函数别名或版本
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
                     * 获取路径,取值规范：/，/*，/xxx，/xxx/a，/xxx/*"
                     * @return PathMatch 路径,取值规范：/，/*，/xxx，/xxx/a，/xxx/*"
                     * 
                     */
                    std::string GetPathMatch() const;

                    /**
                     * 设置路径,取值规范：/，/*，/xxx，/xxx/a，/xxx/*"
                     * @param _pathMatch 路径,取值规范：/，/*，/xxx，/xxx/a，/xxx/*"
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
                     * 获取路径重写策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PathRewrite 路径重写策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PathRewriteRule> GetPathRewrite() const;

                    /**
                     * 设置路径重写策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pathRewrite 路径重写策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPathRewrite(const std::vector<PathRewriteRule>& _pathRewrite);

                    /**
                     * 判断参数 PathRewrite 是否已赋值
                     * @return PathRewrite 是否已赋值
                     * 
                     */
                    bool PathRewriteHasBeenSet() const;

                private:

                    /**
                     * 函数命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 函数名
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 函数别名或版本
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * 路径,取值规范：/，/*，/xxx，/xxx/a，/xxx/*"
                     */
                    std::string m_pathMatch;
                    bool m_pathMatchHasBeenSet;

                    /**
                     * 路径重写策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PathRewriteRule> m_pathRewrite;
                    bool m_pathRewriteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_ENDPOINTSCONF_H_

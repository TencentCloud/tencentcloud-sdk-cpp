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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEALIASREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEALIASREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/RoutingConfig.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * UpdateAlias请求参数结构体
                */
                class UpdateAliasRequest : public AbstractModel
                {
                public:
                    UpdateAliasRequest();
                    ~UpdateAliasRequest() = default;
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
                     * 获取别名的名称
                     * @return Name 别名的名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置别名的名称
                     * @param _name 别名的名称
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
                     * 获取别名指向的主版本
                     * @return FunctionVersion 别名指向的主版本
                     * 
                     */
                    std::string GetFunctionVersion() const;

                    /**
                     * 设置别名指向的主版本
                     * @param _functionVersion 别名指向的主版本
                     * 
                     */
                    void SetFunctionVersion(const std::string& _functionVersion);

                    /**
                     * 判断参数 FunctionVersion 是否已赋值
                     * @return FunctionVersion 是否已赋值
                     * 
                     */
                    bool FunctionVersionHasBeenSet() const;

                    /**
                     * 获取函数所在的命名空间
                     * @return Namespace 函数所在的命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置函数所在的命名空间
                     * @param _namespace 函数所在的命名空间
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
                     * 获取别名的路由信息，需要为别名指定附加版本时，必须提供此参数；	  附加版本指的是：除主版本 FunctionVersion 外，为此别名再指定一个函数可正常使用的版本；   这里附加版本中的 Version 值 不能是别名指向的主版本；  要注意的是：如果想要某个版本的流量全部指向这个别名，不需配置此参数； 目前一个别名最多只能指定一个附加版本
                     * @return RoutingConfig 别名的路由信息，需要为别名指定附加版本时，必须提供此参数；	  附加版本指的是：除主版本 FunctionVersion 外，为此别名再指定一个函数可正常使用的版本；   这里附加版本中的 Version 值 不能是别名指向的主版本；  要注意的是：如果想要某个版本的流量全部指向这个别名，不需配置此参数； 目前一个别名最多只能指定一个附加版本
                     * 
                     */
                    RoutingConfig GetRoutingConfig() const;

                    /**
                     * 设置别名的路由信息，需要为别名指定附加版本时，必须提供此参数；	  附加版本指的是：除主版本 FunctionVersion 外，为此别名再指定一个函数可正常使用的版本；   这里附加版本中的 Version 值 不能是别名指向的主版本；  要注意的是：如果想要某个版本的流量全部指向这个别名，不需配置此参数； 目前一个别名最多只能指定一个附加版本
                     * @param _routingConfig 别名的路由信息，需要为别名指定附加版本时，必须提供此参数；	  附加版本指的是：除主版本 FunctionVersion 外，为此别名再指定一个函数可正常使用的版本；   这里附加版本中的 Version 值 不能是别名指向的主版本；  要注意的是：如果想要某个版本的流量全部指向这个别名，不需配置此参数； 目前一个别名最多只能指定一个附加版本
                     * 
                     */
                    void SetRoutingConfig(const RoutingConfig& _routingConfig);

                    /**
                     * 判断参数 RoutingConfig 是否已赋值
                     * @return RoutingConfig 是否已赋值
                     * 
                     */
                    bool RoutingConfigHasBeenSet() const;

                    /**
                     * 获取别名的描述
                     * @return Description 别名的描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置别名的描述
                     * @param _description 别名的描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 函数名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 别名的名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 别名指向的主版本
                     */
                    std::string m_functionVersion;
                    bool m_functionVersionHasBeenSet;

                    /**
                     * 函数所在的命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 别名的路由信息，需要为别名指定附加版本时，必须提供此参数；	  附加版本指的是：除主版本 FunctionVersion 外，为此别名再指定一个函数可正常使用的版本；   这里附加版本中的 Version 值 不能是别名指向的主版本；  要注意的是：如果想要某个版本的流量全部指向这个别名，不需配置此参数； 目前一个别名最多只能指定一个附加版本
                     */
                    RoutingConfig m_routingConfig;
                    bool m_routingConfigHasBeenSet;

                    /**
                     * 别名的描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEALIASREQUEST_H_

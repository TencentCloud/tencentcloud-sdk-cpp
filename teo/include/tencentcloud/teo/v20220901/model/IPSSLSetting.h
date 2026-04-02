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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IPSSLSETTING_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IPSSLSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * IP SSL 配置信息
                */
                class IPSSLSetting : public AbstractModel
                {
                public:
                    IPSSLSetting();
                    ~IPSSLSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作类型， 取值如下： <li>bind：绑定</li> <li>unbind：解绑</li>
                     * @return Operation 操作类型， 取值如下： <li>bind：绑定</li> <li>unbind：解绑</li>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作类型， 取值如下： <li>bind：绑定</li> <li>unbind：解绑</li>
                     * @param _operation 操作类型， 取值如下： <li>bind：绑定</li> <li>unbind：解绑</li>
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取要绑定的IP SSL的所属域名。
                     * @return AssociatedDomain 要绑定的IP SSL的所属域名。
                     * 
                     */
                    std::string GetAssociatedDomain() const;

                    /**
                     * 设置要绑定的IP SSL的所属域名。
                     * @param _associatedDomain 要绑定的IP SSL的所属域名。
                     * 
                     */
                    void SetAssociatedDomain(const std::string& _associatedDomain);

                    /**
                     * 判断参数 AssociatedDomain 是否已赋值
                     * @return AssociatedDomain 是否已赋值
                     * 
                     */
                    bool AssociatedDomainHasBeenSet() const;

                private:

                    /**
                     * 操作类型， 取值如下： <li>bind：绑定</li> <li>unbind：解绑</li>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 要绑定的IP SSL的所属域名。
                     */
                    std::string m_associatedDomain;
                    bool m_associatedDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IPSSLSETTING_H_

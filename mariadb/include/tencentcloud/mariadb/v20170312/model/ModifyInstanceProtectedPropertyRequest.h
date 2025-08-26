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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYINSTANCEPROTECTEDPROPERTYREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYINSTANCEPROTECTEDPROPERTYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyInstanceProtectedProperty请求参数结构体
                */
                class ModifyInstanceProtectedPropertyRequest : public AbstractModel
                {
                public:
                    ModifyInstanceProtectedPropertyRequest();
                    ~ModifyInstanceProtectedPropertyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取0-允许删除，无销毁保护，1-禁止删除，有销毁保护
                     * @return ProtectedProperty 0-允许删除，无销毁保护，1-禁止删除，有销毁保护
                     * 
                     */
                    int64_t GetProtectedProperty() const;

                    /**
                     * 设置0-允许删除，无销毁保护，1-禁止删除，有销毁保护
                     * @param _protectedProperty 0-允许删除，无销毁保护，1-禁止删除，有销毁保护
                     * 
                     */
                    void SetProtectedProperty(const int64_t& _protectedProperty);

                    /**
                     * 判断参数 ProtectedProperty 是否已赋值
                     * @return ProtectedProperty 是否已赋值
                     * 
                     */
                    bool ProtectedPropertyHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 0-允许删除，无销毁保护，1-禁止删除，有销毁保护
                     */
                    int64_t m_protectedProperty;
                    bool m_protectedPropertyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYINSTANCEPROTECTEDPROPERTYREQUEST_H_

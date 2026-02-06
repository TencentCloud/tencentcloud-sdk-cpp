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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYINSTANCENAMEREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYINSTANCENAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * ModifyInstanceName请求参数结构体
                */
                class ModifyInstanceNameRequest : public AbstractModel
                {
                public:
                    ModifyInstanceNameRequest();
                    ~ModifyInstanceNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要修改的实例id
                     * @return InstanceId 需要修改的实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置需要修改的实例id
                     * @param _instanceId 需要修改的实例id
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
                     * 获取修改的实例名称，要求长度1-60，允许包含中文、英文大小写、数字、-、_
                     * @return InstanceName 修改的实例名称，要求长度1-60，允许包含中文、英文大小写、数字、-、_
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置修改的实例名称，要求长度1-60，允许包含中文、英文大小写、数字、-、_
                     * @param _instanceName 修改的实例名称，要求长度1-60，允许包含中文、英文大小写、数字、-、_
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                private:

                    /**
                     * 需要修改的实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 修改的实例名称，要求长度1-60，允许包含中文、英文大小写、数字、-、_
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYINSTANCENAMEREQUEST_H_

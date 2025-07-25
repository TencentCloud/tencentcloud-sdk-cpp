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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_KILLOPSREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_KILLOPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/Operation.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * KillOps请求参数结构体
                */
                class KillOpsRequest : public AbstractModel
                {
                public:
                    KillOpsRequest();
                    ~KillOpsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     * @return InstanceId 实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     * @param _instanceId 实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
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
                     * 获取待终止的操作
                     * @return Operations 待终止的操作
                     * 
                     */
                    std::vector<Operation> GetOperations() const;

                    /**
                     * 设置待终止的操作
                     * @param _operations 待终止的操作
                     * 
                     */
                    void SetOperations(const std::vector<Operation>& _operations);

                    /**
                     * 判断参数 Operations 是否已赋值
                     * @return Operations 是否已赋值
                     * 
                     */
                    bool OperationsHasBeenSet() const;

                private:

                    /**
                     * 实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 待终止的操作
                     */
                    std::vector<Operation> m_operations;
                    bool m_operationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_KILLOPSREQUEST_H_

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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETESERVERLESSDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETESERVERLESSDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteServerlessDBInstance请求参数结构体
                */
                class DeleteServerlessDBInstanceRequest : public AbstractModel
                {
                public:
                    DeleteServerlessDBInstanceRequest();
                    ~DeleteServerlessDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DB实例名称，实例名和实例ID必须至少传一个，如果同时存在，将只以实例ID为准。
                     * @return DBInstanceName DB实例名称，实例名和实例ID必须至少传一个，如果同时存在，将只以实例ID为准。
                     * 
                     */
                    std::string GetDBInstanceName() const;

                    /**
                     * 设置DB实例名称，实例名和实例ID必须至少传一个，如果同时存在，将只以实例ID为准。
                     * @param _dBInstanceName DB实例名称，实例名和实例ID必须至少传一个，如果同时存在，将只以实例ID为准。
                     * 
                     */
                    void SetDBInstanceName(const std::string& _dBInstanceName);

                    /**
                     * 判断参数 DBInstanceName 是否已赋值
                     * @return DBInstanceName 是否已赋值
                     * 
                     */
                    bool DBInstanceNameHasBeenSet() const;

                    /**
                     * 获取DB实例ID，实例名和实例ID必须至少传一个，如果同时存在，将只以实例ID为准。
                     * @return DBInstanceId DB实例ID，实例名和实例ID必须至少传一个，如果同时存在，将只以实例ID为准。
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置DB实例ID，实例名和实例ID必须至少传一个，如果同时存在，将只以实例ID为准。
                     * @param _dBInstanceId DB实例ID，实例名和实例ID必须至少传一个，如果同时存在，将只以实例ID为准。
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                private:

                    /**
                     * DB实例名称，实例名和实例ID必须至少传一个，如果同时存在，将只以实例ID为准。
                     */
                    std::string m_dBInstanceName;
                    bool m_dBInstanceNameHasBeenSet;

                    /**
                     * DB实例ID，实例名和实例ID必须至少传一个，如果同时存在，将只以实例ID为准。
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETESERVERLESSDBINSTANCEREQUEST_H_

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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLOSESERVERLESSDBEXTRANETACCESSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLOSESERVERLESSDBEXTRANETACCESSREQUEST_H_

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
                * CloseServerlessDBExtranetAccess请求参数结构体
                */
                class CloseServerlessDBExtranetAccessRequest : public AbstractModel
                {
                public:
                    CloseServerlessDBExtranetAccessRequest();
                    ~CloseServerlessDBExtranetAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例唯一标识符
                     * @return DBInstanceId 实例唯一标识符
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例唯一标识符
                     * @param DBInstanceId 实例唯一标识符
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return DBInstanceName 实例名称
                     */
                    std::string GetDBInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param DBInstanceName 实例名称
                     */
                    void SetDBInstanceName(const std::string& _dBInstanceName);

                    /**
                     * 判断参数 DBInstanceName 是否已赋值
                     * @return DBInstanceName 是否已赋值
                     */
                    bool DBInstanceNameHasBeenSet() const;

                private:

                    /**
                     * 实例唯一标识符
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_dBInstanceName;
                    bool m_dBInstanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLOSESERVERLESSDBEXTRANETACCESSREQUEST_H_

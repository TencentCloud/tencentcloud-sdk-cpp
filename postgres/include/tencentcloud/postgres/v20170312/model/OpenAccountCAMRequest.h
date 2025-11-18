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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_OPENACCOUNTCAMREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_OPENACCOUNTCAMREQUEST_H_

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
                * OpenAccountCAM请求参数结构体
                */
                class OpenAccountCAMRequest : public AbstractModel
                {
                public:
                    OpenAccountCAMRequest();
                    ~OpenAccountCAMRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库实例ID
                     * @return DBInstanceId 数据库实例ID
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置数据库实例ID
                     * @param _dBInstanceId 数据库实例ID
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取需要开启CAM服务的账号名称
                     * @return UserName 需要开启CAM服务的账号名称
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置需要开启CAM服务的账号名称
                     * @param _userName 需要开启CAM服务的账号名称
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                private:

                    /**
                     * 数据库实例ID
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 需要开启CAM服务的账号名称
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_OPENACCOUNTCAMREQUEST_H_

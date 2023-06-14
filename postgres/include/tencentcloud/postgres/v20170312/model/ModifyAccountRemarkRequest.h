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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYACCOUNTREMARKREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYACCOUNTREMARKREQUEST_H_

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
                * ModifyAccountRemark请求参数结构体
                */
                class ModifyAccountRemarkRequest : public AbstractModel
                {
                public:
                    ModifyAccountRemarkRequest();
                    ~ModifyAccountRemarkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如postgres-4wdeb0zv
                     * @return DBInstanceId 实例ID，形如postgres-4wdeb0zv
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID，形如postgres-4wdeb0zv
                     * @param _dBInstanceId 实例ID，形如postgres-4wdeb0zv
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
                     * 获取实例用户名
                     * @return UserName 实例用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置实例用户名
                     * @param _userName 实例用户名
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取用户UserName对应的新备注
                     * @return Remark 用户UserName对应的新备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置用户UserName对应的新备注
                     * @param _remark 用户UserName对应的新备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 实例ID，形如postgres-4wdeb0zv
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 实例用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 用户UserName对应的新备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYACCOUNTREMARKREQUEST_H_

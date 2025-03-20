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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_SERVERLESSDBACCOUNT_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_SERVERLESSDBACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * serverless账号描述
                */
                class ServerlessDBAccount : public AbstractModel
                {
                public:
                    ServerlessDBAccount();
                    ~ServerlessDBAccount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户名
                     * @return DBUser 用户名
                     * 
                     */
                    std::string GetDBUser() const;

                    /**
                     * 设置用户名
                     * @param _dBUser 用户名
                     * 
                     */
                    void SetDBUser(const std::string& _dBUser);

                    /**
                     * 判断参数 DBUser 是否已赋值
                     * @return DBUser 是否已赋值
                     * 
                     */
                    bool DBUserHasBeenSet() const;

                    /**
                     * 获取密码
                     * @return DBPassword 密码
                     * 
                     */
                    std::string GetDBPassword() const;

                    /**
                     * 设置密码
                     * @param _dBPassword 密码
                     * 
                     */
                    void SetDBPassword(const std::string& _dBPassword);

                    /**
                     * 判断参数 DBPassword 是否已赋值
                     * @return DBPassword 是否已赋值
                     * 
                     */
                    bool DBPasswordHasBeenSet() const;

                    /**
                     * 获取连接数限制
                     * @return DBConnLimit 连接数限制
                     * 
                     */
                    int64_t GetDBConnLimit() const;

                    /**
                     * 设置连接数限制
                     * @param _dBConnLimit 连接数限制
                     * 
                     */
                    void SetDBConnLimit(const int64_t& _dBConnLimit);

                    /**
                     * 判断参数 DBConnLimit 是否已赋值
                     * @return DBConnLimit 是否已赋值
                     * 
                     */
                    bool DBConnLimitHasBeenSet() const;

                private:

                    /**
                     * 用户名
                     */
                    std::string m_dBUser;
                    bool m_dBUserHasBeenSet;

                    /**
                     * 密码
                     */
                    std::string m_dBPassword;
                    bool m_dBPasswordHasBeenSet;

                    /**
                     * 连接数限制
                     */
                    int64_t m_dBConnLimit;
                    bool m_dBConnLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_SERVERLESSDBACCOUNT_H_

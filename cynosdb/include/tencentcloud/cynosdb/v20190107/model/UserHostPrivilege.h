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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_USERHOSTPRIVILEGE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_USERHOSTPRIVILEGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 用户主机权限
                */
                class UserHostPrivilege : public AbstractModel
                {
                public:
                    UserHostPrivilege();
                    ~UserHostPrivilege() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取授权用户
                     * @return DbUserName 授权用户
                     * 
                     */
                    std::string GetDbUserName() const;

                    /**
                     * 设置授权用户
                     * @param _dbUserName 授权用户
                     * 
                     */
                    void SetDbUserName(const std::string& _dbUserName);

                    /**
                     * 判断参数 DbUserName 是否已赋值
                     * @return DbUserName 是否已赋值
                     * 
                     */
                    bool DbUserNameHasBeenSet() const;

                    /**
                     * 获取客户端ip
                     * @return DbHost 客户端ip
                     * 
                     */
                    std::string GetDbHost() const;

                    /**
                     * 设置客户端ip
                     * @param _dbHost 客户端ip
                     * 
                     */
                    void SetDbHost(const std::string& _dbHost);

                    /**
                     * 判断参数 DbHost 是否已赋值
                     * @return DbHost 是否已赋值
                     * 
                     */
                    bool DbHostHasBeenSet() const;

                    /**
                     * 获取用户权限
                     * @return DbPrivilege 用户权限
                     * 
                     */
                    std::string GetDbPrivilege() const;

                    /**
                     * 设置用户权限
                     * @param _dbPrivilege 用户权限
                     * 
                     */
                    void SetDbPrivilege(const std::string& _dbPrivilege);

                    /**
                     * 判断参数 DbPrivilege 是否已赋值
                     * @return DbPrivilege 是否已赋值
                     * 
                     */
                    bool DbPrivilegeHasBeenSet() const;

                private:

                    /**
                     * 授权用户
                     */
                    std::string m_dbUserName;
                    bool m_dbUserNameHasBeenSet;

                    /**
                     * 客户端ip
                     */
                    std::string m_dbHost;
                    bool m_dbHostHasBeenSet;

                    /**
                     * 用户权限
                     */
                    std::string m_dbPrivilege;
                    bool m_dbPrivilegeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_USERHOSTPRIVILEGE_H_

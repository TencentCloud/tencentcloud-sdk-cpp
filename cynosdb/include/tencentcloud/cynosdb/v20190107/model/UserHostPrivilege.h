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
                     * 获取<p>授权用户</p>
                     * @return DbUserName <p>授权用户</p>
                     * 
                     */
                    std::string GetDbUserName() const;

                    /**
                     * 设置<p>授权用户</p>
                     * @param _dbUserName <p>授权用户</p>
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
                     * 获取<p>客户端ip</p>
                     * @return DbHost <p>客户端ip</p>
                     * 
                     */
                    std::string GetDbHost() const;

                    /**
                     * 设置<p>客户端ip</p>
                     * @param _dbHost <p>客户端ip</p>
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
                     * 获取<p>用户权限</p>
                     * @return DbPrivilege <p>用户权限</p>
                     * 
                     */
                    std::string GetDbPrivilege() const;

                    /**
                     * 设置<p>用户权限</p>
                     * @param _dbPrivilege <p>用户权限</p>
                     * 
                     */
                    void SetDbPrivilege(const std::string& _dbPrivilege);

                    /**
                     * 判断参数 DbPrivilege 是否已赋值
                     * @return DbPrivilege 是否已赋值
                     * 
                     */
                    bool DbPrivilegeHasBeenSet() const;

                    /**
                     * 获取<p>权限明细列表</p>
                     * @return PrivilegeList <p>权限明细列表</p>
                     * 
                     */
                    std::vector<std::string> GetPrivilegeList() const;

                    /**
                     * 设置<p>权限明细列表</p>
                     * @param _privilegeList <p>权限明细列表</p>
                     * 
                     */
                    void SetPrivilegeList(const std::vector<std::string>& _privilegeList);

                    /**
                     * 判断参数 PrivilegeList 是否已赋值
                     * @return PrivilegeList 是否已赋值
                     * 
                     */
                    bool PrivilegeListHasBeenSet() const;

                private:

                    /**
                     * <p>授权用户</p>
                     */
                    std::string m_dbUserName;
                    bool m_dbUserNameHasBeenSet;

                    /**
                     * <p>客户端ip</p>
                     */
                    std::string m_dbHost;
                    bool m_dbHostHasBeenSet;

                    /**
                     * <p>用户权限</p>
                     */
                    std::string m_dbPrivilege;
                    bool m_dbPrivilegeHasBeenSet;

                    /**
                     * <p>权限明细列表</p>
                     */
                    std::vector<std::string> m_privilegeList;
                    bool m_privilegeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_USERHOSTPRIVILEGE_H_

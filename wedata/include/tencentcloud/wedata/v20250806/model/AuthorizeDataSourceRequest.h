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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_AUTHORIZEDATASOURCEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_AUTHORIZEDATASOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * AuthorizeDataSource请求参数结构体
                */
                class AuthorizeDataSourceRequest : public AbstractModel
                {
                public:
                    AuthorizeDataSourceRequest();
                    ~AuthorizeDataSourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据源ID
                     * @return DataSourceId 数据源ID
                     * 
                     */
                    std::string GetDataSourceId() const;

                    /**
                     * 设置数据源ID
                     * @param _dataSourceId 数据源ID
                     * 
                     */
                    void SetDataSourceId(const std::string& _dataSourceId);

                    /**
                     * 判断参数 DataSourceId 是否已赋值
                     * @return DataSourceId 是否已赋值
                     * 
                     */
                    bool DataSourceIdHasBeenSet() const;

                    /**
                     * 获取授权给的目标项目id
                     * @return AuthProjectId 授权给的目标项目id
                     * 
                     */
                    std::string GetAuthProjectId() const;

                    /**
                     * 设置授权给的目标项目id
                     * @param _authProjectId 授权给的目标项目id
                     * 
                     */
                    void SetAuthProjectId(const std::string& _authProjectId);

                    /**
                     * 判断参数 AuthProjectId 是否已赋值
                     * @return AuthProjectId 是否已赋值
                     * 
                     */
                    bool AuthProjectIdHasBeenSet() const;

                    /**
                     * 获取授权项目下用户列表，格式为：项目id_用户id
与AuthProjectId参数只能选填一个
当授权给多个对象时，项目id必须一致
                     * @return AuthUsers 授权项目下用户列表，格式为：项目id_用户id
与AuthProjectId参数只能选填一个
当授权给多个对象时，项目id必须一致
                     * 
                     */
                    std::vector<std::string> GetAuthUsers() const;

                    /**
                     * 设置授权项目下用户列表，格式为：项目id_用户id
与AuthProjectId参数只能选填一个
当授权给多个对象时，项目id必须一致
                     * @param _authUsers 授权项目下用户列表，格式为：项目id_用户id
与AuthProjectId参数只能选填一个
当授权给多个对象时，项目id必须一致
                     * 
                     */
                    void SetAuthUsers(const std::vector<std::string>& _authUsers);

                    /**
                     * 判断参数 AuthUsers 是否已赋值
                     * @return AuthUsers 是否已赋值
                     * 
                     */
                    bool AuthUsersHasBeenSet() const;

                private:

                    /**
                     * 数据源ID
                     */
                    std::string m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                    /**
                     * 授权给的目标项目id
                     */
                    std::string m_authProjectId;
                    bool m_authProjectIdHasBeenSet;

                    /**
                     * 授权项目下用户列表，格式为：项目id_用户id
与AuthProjectId参数只能选填一个
当授权给多个对象时，项目id必须一致
                     */
                    std::vector<std::string> m_authUsers;
                    bool m_authUsersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_AUTHORIZEDATASOURCEREQUEST_H_

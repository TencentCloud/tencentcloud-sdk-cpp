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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_REVOKEDATASOURCEAUTHORIZATIONREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_REVOKEDATASOURCEAUTHORIZATIONREQUEST_H_

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
                * RevokeDataSourceAuthorization请求参数结构体
                */
                class RevokeDataSourceAuthorizationRequest : public AbstractModel
                {
                public:
                    RevokeDataSourceAuthorizationRequest();
                    ~RevokeDataSourceAuthorizationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据源id
                     * @return DataSourceId 数据源id
                     * 
                     */
                    std::string GetDataSourceId() const;

                    /**
                     * 设置数据源id
                     * @param _dataSourceId 数据源id
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
                     * 获取回收的项目id，与UserUin参数只能填一个
                     * @return RevokeProjectId 回收的项目id，与UserUin参数只能填一个
                     * 
                     */
                    std::string GetRevokeProjectId() const;

                    /**
                     * 设置回收的项目id，与UserUin参数只能填一个
                     * @param _revokeProjectId 回收的项目id，与UserUin参数只能填一个
                     * 
                     */
                    void SetRevokeProjectId(const std::string& _revokeProjectId);

                    /**
                     * 判断参数 RevokeProjectId 是否已赋值
                     * @return RevokeProjectId 是否已赋值
                     * 
                     */
                    bool RevokeProjectIdHasBeenSet() const;

                    /**
                     * 获取回收项目下用户列表，格式为：项目id_用户id
与RevokeProjectId参数只能填一个


                     * @return RevokeUser 回收项目下用户列表，格式为：项目id_用户id
与RevokeProjectId参数只能填一个


                     * 
                     */
                    std::string GetRevokeUser() const;

                    /**
                     * 设置回收项目下用户列表，格式为：项目id_用户id
与RevokeProjectId参数只能填一个


                     * @param _revokeUser 回收项目下用户列表，格式为：项目id_用户id
与RevokeProjectId参数只能填一个


                     * 
                     */
                    void SetRevokeUser(const std::string& _revokeUser);

                    /**
                     * 判断参数 RevokeUser 是否已赋值
                     * @return RevokeUser 是否已赋值
                     * 
                     */
                    bool RevokeUserHasBeenSet() const;

                private:

                    /**
                     * 数据源id
                     */
                    std::string m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                    /**
                     * 回收的项目id，与UserUin参数只能填一个
                     */
                    std::string m_revokeProjectId;
                    bool m_revokeProjectIdHasBeenSet;

                    /**
                     * 回收项目下用户列表，格式为：项目id_用户id
与RevokeProjectId参数只能填一个


                     */
                    std::string m_revokeUser;
                    bool m_revokeUserHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_REVOKEDATASOURCEAUTHORIZATIONREQUEST_H_

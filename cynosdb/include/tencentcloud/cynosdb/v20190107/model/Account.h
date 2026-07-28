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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ACCOUNT_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ACCOUNT_H_

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
                * 数据库账号信息
                */
                class Account : public AbstractModel
                {
                public:
                    Account();
                    ~Account() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据库账号名</p>
                     * @return AccountName <p>数据库账号名</p>
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>数据库账号名</p>
                     * @param _accountName <p>数据库账号名</p>
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取<p>主机</p>
                     * @return Host <p>主机</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>主机</p>
                     * @param _host <p>主机</p>
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>数据库账号描述</p>
                     * @return Description <p>数据库账号描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>数据库账号描述</p>
                     * @param _description <p>数据库账号描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>用户最大连接数</p>
                     * @return MaxUserConnections <p>用户最大连接数</p>
                     * 
                     */
                    int64_t GetMaxUserConnections() const;

                    /**
                     * 设置<p>用户最大连接数</p>
                     * @param _maxUserConnections <p>用户最大连接数</p>
                     * 
                     */
                    void SetMaxUserConnections(const int64_t& _maxUserConnections);

                    /**
                     * 判断参数 MaxUserConnections 是否已赋值
                     * @return MaxUserConnections 是否已赋值
                     * 
                     */
                    bool MaxUserConnectionsHasBeenSet() const;

                    /**
                     * 获取<p>是否开启密码轮转(0:关闭;1:开启)</p>
                     * @return PasswordRotation <p>是否开启密码轮转(0:关闭;1:开启)</p>
                     * 
                     */
                    int64_t GetPasswordRotation() const;

                    /**
                     * 设置<p>是否开启密码轮转(0:关闭;1:开启)</p>
                     * @param _passwordRotation <p>是否开启密码轮转(0:关闭;1:开启)</p>
                     * 
                     */
                    void SetPasswordRotation(const int64_t& _passwordRotation);

                    /**
                     * 判断参数 PasswordRotation 是否已赋值
                     * @return PasswordRotation 是否已赋值
                     * 
                     */
                    bool PasswordRotationHasBeenSet() const;

                private:

                    /**
                     * <p>数据库账号名</p>
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>主机</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>数据库账号描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>用户最大连接数</p>
                     */
                    int64_t m_maxUserConnections;
                    bool m_maxUserConnectionsHasBeenSet;

                    /**
                     * <p>是否开启密码轮转(0:关闭;1:开启)</p>
                     */
                    int64_t m_passwordRotation;
                    bool m_passwordRotationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ACCOUNT_H_

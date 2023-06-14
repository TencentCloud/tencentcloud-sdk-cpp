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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYACCOUNTCONFIGREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYACCOUNTCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/ConfigValue.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * ModifyAccountConfig请求参数结构体
                */
                class ModifyAccountConfigRequest : public AbstractModel
                {
                public:
                    ModifyAccountConfigRequest();
                    ~ModifyAccountConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，格式如：tdsqlshard-kpkvq5oj，与云数据库控制台页面中显示的实例 ID 相同。
                     * @return InstanceId 实例 ID，格式如：tdsqlshard-kpkvq5oj，与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：tdsqlshard-kpkvq5oj，与云数据库控制台页面中显示的实例 ID 相同。
                     * @param _instanceId 实例 ID，格式如：tdsqlshard-kpkvq5oj，与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取账号的名称
                     * @return UserName 账号的名称
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置账号的名称
                     * @param _userName 账号的名称
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
                     * 获取账号的域名
                     * @return Host 账号的域名
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置账号的域名
                     * @param _host 账号的域名
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
                     * 获取配置列表，每一个元素是Config和Value的组合
                     * @return Configs 配置列表，每一个元素是Config和Value的组合
                     * 
                     */
                    std::vector<ConfigValue> GetConfigs() const;

                    /**
                     * 设置配置列表，每一个元素是Config和Value的组合
                     * @param _configs 配置列表，每一个元素是Config和Value的组合
                     * 
                     */
                    void SetConfigs(const std::vector<ConfigValue>& _configs);

                    /**
                     * 判断参数 Configs 是否已赋值
                     * @return Configs 是否已赋值
                     * 
                     */
                    bool ConfigsHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，格式如：tdsqlshard-kpkvq5oj，与云数据库控制台页面中显示的实例 ID 相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 账号的名称
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 账号的域名
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 配置列表，每一个元素是Config和Value的组合
                     */
                    std::vector<ConfigValue> m_configs;
                    bool m_configsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYACCOUNTCONFIGREQUEST_H_

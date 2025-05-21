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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_DSTINFO_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_DSTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * 目的实例信息，具体内容跟迁移任务类型相关
                */
                class DstInfo : public AbstractModel
                {
                public:
                    DstInfo();
                    ~DstInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标实例地域，如ap-guangzhou
                     * @return Region 目标实例地域，如ap-guangzhou
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置目标实例地域，如ap-guangzhou
                     * @param _region 目标实例地域，如ap-guangzhou
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取目标实例ID，如cdb-jd92ijd8
                     * @return InstanceId 目标实例ID，如cdb-jd92ijd8
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置目标实例ID，如cdb-jd92ijd8
                     * @param _instanceId 目标实例ID，如cdb-jd92ijd8
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
                     * 获取目标实例vip。已废弃，无需填写
                     * @return Ip 目标实例vip。已废弃，无需填写
                     * @deprecated
                     */
                    std::string GetIp() const;

                    /**
                     * 设置目标实例vip。已废弃，无需填写
                     * @param _ip 目标实例vip。已废弃，无需填写
                     * @deprecated
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * @deprecated
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取目标实例vport。已废弃，无需填写
                     * @return Port 目标实例vport。已废弃，无需填写
                     * @deprecated
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置目标实例vport。已废弃，无需填写
                     * @param _port 目标实例vport。已废弃，无需填写
                     * @deprecated
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * @deprecated
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取目前只对MySQL有效。当为整实例迁移时，1-只读，0-可读写。
                     * @return ReadOnly 目前只对MySQL有效。当为整实例迁移时，1-只读，0-可读写。
                     * 
                     */
                    int64_t GetReadOnly() const;

                    /**
                     * 设置目前只对MySQL有效。当为整实例迁移时，1-只读，0-可读写。
                     * @param _readOnly 目前只对MySQL有效。当为整实例迁移时，1-只读，0-可读写。
                     * 
                     */
                    void SetReadOnly(const int64_t& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     * 
                     */
                    bool ReadOnlyHasBeenSet() const;

                    /**
                     * 获取目标数据库账号
                     * @return User 目标数据库账号
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置目标数据库账号
                     * @param _user 目标数据库账号
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取目标数据库密码
                     * @return Password 目标数据库密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置目标数据库密码
                     * @param _password 目标数据库密码
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * 目标实例地域，如ap-guangzhou
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 目标实例ID，如cdb-jd92ijd8
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 目标实例vip。已废弃，无需填写
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 目标实例vport。已废弃，无需填写
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 目前只对MySQL有效。当为整实例迁移时，1-只读，0-可读写。
                     */
                    int64_t m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * 目标数据库账号
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 目标数据库密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_DSTINFO_H_

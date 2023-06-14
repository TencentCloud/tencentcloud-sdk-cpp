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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_EXTERNALDEVICE_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_EXTERNALDEVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * 主机参数，导入外部主机时使用
                */
                class ExternalDevice : public AbstractModel
                {
                public:
                    ExternalDevice();
                    ~ExternalDevice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作系统名称，只能是Linux、Windows或MySQL
                     * @return OsName 操作系统名称，只能是Linux、Windows或MySQL
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置操作系统名称，只能是Linux、Windows或MySQL
                     * @param _osName 操作系统名称，只能是Linux、Windows或MySQL
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取IP地址
                     * @return Ip IP地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP地址
                     * @param _ip IP地址
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取管理端口
                     * @return Port 管理端口
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置管理端口
                     * @param _port 管理端口
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取主机名，可为空
                     * @return Name 主机名，可为空
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置主机名，可为空
                     * @param _name 主机名，可为空
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取资产所属的部门ID
                     * @return DepartmentId 资产所属的部门ID
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置资产所属的部门ID
                     * @param _departmentId 资产所属的部门ID
                     * 
                     */
                    void SetDepartmentId(const std::string& _departmentId);

                    /**
                     * 判断参数 DepartmentId 是否已赋值
                     * @return DepartmentId 是否已赋值
                     * 
                     */
                    bool DepartmentIdHasBeenSet() const;

                private:

                    /**
                     * 操作系统名称，只能是Linux、Windows或MySQL
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * IP地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 管理端口
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 主机名，可为空
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 资产所属的部门ID
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_EXTERNALDEVICE_H_

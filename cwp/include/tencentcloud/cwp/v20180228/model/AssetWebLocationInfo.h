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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBLOCATIONINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBLOCATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 资产管理Web站点列表信息
                */
                class AssetWebLocationInfo : public AbstractModel
                {
                public:
                    AssetWebLocationInfo();
                    ~AssetWebLocationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名
                     * @return Name 域名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置域名
                     * @param _name 域名
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
                     * 获取站点端口
                     * @return Port 站点端口
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置站点端口
                     * @param _port 站点端口
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取站点协议
                     * @return Proto 站点协议
                     * 
                     */
                    std::string GetProto() const;

                    /**
                     * 设置站点协议
                     * @param _proto 站点协议
                     * 
                     */
                    void SetProto(const std::string& _proto);

                    /**
                     * 判断参数 Proto 是否已赋值
                     * @return Proto 是否已赋值
                     * 
                     */
                    bool ProtoHasBeenSet() const;

                    /**
                     * 获取服务类型
                     * @return ServiceType 服务类型
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置服务类型
                     * @param _serviceType 服务类型
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取安全模块状态：0未启用，1启用，999空，仅nginx
                     * @return SafeStatus 安全模块状态：0未启用，1启用，999空，仅nginx
                     * 
                     */
                    uint64_t GetSafeStatus() const;

                    /**
                     * 设置安全模块状态：0未启用，1启用，999空，仅nginx
                     * @param _safeStatus 安全模块状态：0未启用，1启用，999空，仅nginx
                     * 
                     */
                    void SetSafeStatus(const uint64_t& _safeStatus);

                    /**
                     * 判断参数 SafeStatus 是否已赋值
                     * @return SafeStatus 是否已赋值
                     * 
                     */
                    bool SafeStatusHasBeenSet() const;

                    /**
                     * 获取运行用户
                     * @return User 运行用户
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置运行用户
                     * @param _user 运行用户
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
                     * 获取主目录
                     * @return MainPath 主目录
                     * 
                     */
                    std::string GetMainPath() const;

                    /**
                     * 设置主目录
                     * @param _mainPath 主目录
                     * 
                     */
                    void SetMainPath(const std::string& _mainPath);

                    /**
                     * 判断参数 MainPath 是否已赋值
                     * @return MainPath 是否已赋值
                     * 
                     */
                    bool MainPathHasBeenSet() const;

                    /**
                     * 获取启动命令
                     * @return Command 启动命令
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置启动命令
                     * @param _command 启动命令
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取绑定IP
                     * @return Ip 绑定IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置绑定IP
                     * @param _ip 绑定IP
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
                     * 获取数据更新时间
                     * @return UpdateTime 数据更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置数据更新时间
                     * @param _updateTime 数据更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 站点端口
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 站点协议
                     */
                    std::string m_proto;
                    bool m_protoHasBeenSet;

                    /**
                     * 服务类型
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 安全模块状态：0未启用，1启用，999空，仅nginx
                     */
                    uint64_t m_safeStatus;
                    bool m_safeStatusHasBeenSet;

                    /**
                     * 运行用户
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 主目录
                     */
                    std::string m_mainPath;
                    bool m_mainPathHasBeenSet;

                    /**
                     * 启动命令
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 绑定IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 数据更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBLOCATIONINFO_H_

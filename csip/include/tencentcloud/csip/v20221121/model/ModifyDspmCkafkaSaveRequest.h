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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMCKAFKASAVEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMCKAFKASAVEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RouteInfo.h>
#include <tencentcloud/csip/v20221121/model/LogDeliveryInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyDspmCkafkaSave请求参数结构体
                */
                class ModifyDspmCkafkaSaveRequest : public AbstractModel
                {
                public:
                    ModifyDspmCkafkaSaveRequest();
                    ~ModifyDspmCkafkaSaveRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取接入类型，当前支持 1和7, 类型vip网络类型（1:外网TGW 2:基础网络 3:VPC网络 4:支撑网络(idc 环境) 5:SSL外网访问方式访问 6:黑石环境vpc 7:支撑网络(cvm 环境）
                     * @return VipType 接入类型，当前支持 1和7, 类型vip网络类型（1:外网TGW 2:基础网络 3:VPC网络 4:支撑网络(idc 环境) 5:SSL外网访问方式访问 6:黑石环境vpc 7:支撑网络(cvm 环境）
                     * 
                     */
                    int64_t GetVipType() const;

                    /**
                     * 设置接入类型，当前支持 1和7, 类型vip网络类型（1:外网TGW 2:基础网络 3:VPC网络 4:支撑网络(idc 环境) 5:SSL外网访问方式访问 6:黑石环境vpc 7:支撑网络(cvm 环境）
                     * @param _vipType 接入类型，当前支持 1和7, 类型vip网络类型（1:外网TGW 2:基础网络 3:VPC网络 4:支撑网络(idc 环境) 5:SSL外网访问方式访问 6:黑石环境vpc 7:支撑网络(cvm 环境）
                     * 
                     */
                    void SetVipType(const int64_t& _vipType);

                    /**
                     * 判断参数 VipType 是否已赋值
                     * @return VipType 是否已赋值
                     * 
                     */
                    bool VipTypeHasBeenSet() const;

                    /**
                     * 获取实例的地域
                     * @return RegionId 实例的地域
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置实例的地域
                     * @param _regionId 实例的地域
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取实例的id
                     * @return InstanceId 实例的id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例的id
                     * @param _instanceId 实例的id
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
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例的接入信息
                     * @return RouteInfo 实例的接入信息
                     * 
                     */
                    RouteInfo GetRouteInfo() const;

                    /**
                     * 设置实例的接入信息
                     * @param _routeInfo 实例的接入信息
                     * 
                     */
                    void SetRouteInfo(const RouteInfo& _routeInfo);

                    /**
                     * 判断参数 RouteInfo 是否已赋值
                     * @return RouteInfo 是否已赋值
                     * 
                     */
                    bool RouteInfoHasBeenSet() const;

                    /**
                     * 获取接入为域名的时候，有效
                     * @return Username 接入为域名的时候，有效
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置接入为域名的时候，有效
                     * @param _username 接入为域名的时候，有效
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取接入为域名的时候，有效
                     * @return Password 接入为域名的时候，有效
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置接入为域名的时候，有效
                     * @param _password 接入为域名的时候，有效
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取日志投递的主题配置
                     * @return LogDeliveryInfo 日志投递的主题配置
                     * 
                     */
                    std::vector<LogDeliveryInfo> GetLogDeliveryInfo() const;

                    /**
                     * 设置日志投递的主题配置
                     * @param _logDeliveryInfo 日志投递的主题配置
                     * 
                     */
                    void SetLogDeliveryInfo(const std::vector<LogDeliveryInfo>& _logDeliveryInfo);

                    /**
                     * 判断参数 LogDeliveryInfo 是否已赋值
                     * @return LogDeliveryInfo 是否已赋值
                     * 
                     */
                    bool LogDeliveryInfoHasBeenSet() const;

                    /**
                     * 获取已存在配置时是否覆盖，默认 false（不覆盖，保持兼容）
                     * @return IsOverwrite 已存在配置时是否覆盖，默认 false（不覆盖，保持兼容）
                     * 
                     */
                    bool GetIsOverwrite() const;

                    /**
                     * 设置已存在配置时是否覆盖，默认 false（不覆盖，保持兼容）
                     * @param _isOverwrite 已存在配置时是否覆盖，默认 false（不覆盖，保持兼容）
                     * 
                     */
                    void SetIsOverwrite(const bool& _isOverwrite);

                    /**
                     * 判断参数 IsOverwrite 是否已赋值
                     * @return IsOverwrite 是否已赋值
                     * 
                     */
                    bool IsOverwriteHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * 接入类型，当前支持 1和7, 类型vip网络类型（1:外网TGW 2:基础网络 3:VPC网络 4:支撑网络(idc 环境) 5:SSL外网访问方式访问 6:黑石环境vpc 7:支撑网络(cvm 环境）
                     */
                    int64_t m_vipType;
                    bool m_vipTypeHasBeenSet;

                    /**
                     * 实例的地域
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 实例的id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例的接入信息
                     */
                    RouteInfo m_routeInfo;
                    bool m_routeInfoHasBeenSet;

                    /**
                     * 接入为域名的时候，有效
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 接入为域名的时候，有效
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 日志投递的主题配置
                     */
                    std::vector<LogDeliveryInfo> m_logDeliveryInfo;
                    bool m_logDeliveryInfoHasBeenSet;

                    /**
                     * 已存在配置时是否覆盖，默认 false（不覆盖，保持兼容）
                     */
                    bool m_isOverwrite;
                    bool m_isOverwriteHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMCKAFKASAVEREQUEST_H_

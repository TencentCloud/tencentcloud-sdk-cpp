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
                     * 获取<p>接入类型，当前支持 1和7</p><p>枚举值：</p><ul><li>1： 外网TGW</li><li>2： 基础网络</li><li>3： VPC网络</li><li>4： idc环境-支撑网络</li><li>5： SSL外网访问方式访问</li><li>6： 黑石环境vpc</li><li>7： cvm环境-支撑网络</li></ul>
                     * @return VipType <p>接入类型，当前支持 1和7</p><p>枚举值：</p><ul><li>1： 外网TGW</li><li>2： 基础网络</li><li>3： VPC网络</li><li>4： idc环境-支撑网络</li><li>5： SSL外网访问方式访问</li><li>6： 黑石环境vpc</li><li>7： cvm环境-支撑网络</li></ul>
                     * 
                     */
                    int64_t GetVipType() const;

                    /**
                     * 设置<p>接入类型，当前支持 1和7</p><p>枚举值：</p><ul><li>1： 外网TGW</li><li>2： 基础网络</li><li>3： VPC网络</li><li>4： idc环境-支撑网络</li><li>5： SSL外网访问方式访问</li><li>6： 黑石环境vpc</li><li>7： cvm环境-支撑网络</li></ul>
                     * @param _vipType <p>接入类型，当前支持 1和7</p><p>枚举值：</p><ul><li>1： 外网TGW</li><li>2： 基础网络</li><li>3： VPC网络</li><li>4： idc环境-支撑网络</li><li>5： SSL外网访问方式访问</li><li>6： 黑石环境vpc</li><li>7： cvm环境-支撑网络</li></ul>
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
                     * 获取<p>实例的地域</p>
                     * @return RegionId <p>实例的地域</p>
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置<p>实例的地域</p>
                     * @param _regionId <p>实例的地域</p>
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
                     * 获取<p>实例的id</p>
                     * @return InstanceId <p>实例的id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例的id</p>
                     * @param _instanceId <p>实例的id</p>
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
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>实例的接入信息</p>
                     * @return RouteInfo <p>实例的接入信息</p>
                     * 
                     */
                    RouteInfo GetRouteInfo() const;

                    /**
                     * 设置<p>实例的接入信息</p>
                     * @param _routeInfo <p>实例的接入信息</p>
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
                     * 获取<p>接入为域名的时候，有效</p>
                     * @return Username <p>接入为域名的时候，有效</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>接入为域名的时候，有效</p>
                     * @param _username <p>接入为域名的时候，有效</p>
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
                     * 获取<p>接入为域名的时候，有效</p>
                     * @return Password <p>接入为域名的时候，有效</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>接入为域名的时候，有效</p>
                     * @param _password <p>接入为域名的时候，有效</p>
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
                     * 获取<p>日志投递的主题配置</p>
                     * @return LogDeliveryInfo <p>日志投递的主题配置</p>
                     * 
                     */
                    std::vector<LogDeliveryInfo> GetLogDeliveryInfo() const;

                    /**
                     * 设置<p>日志投递的主题配置</p>
                     * @param _logDeliveryInfo <p>日志投递的主题配置</p>
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
                     * 获取<p>已存在配置时是否覆盖，默认 false（不覆盖，保持兼容）</p>
                     * @return IsOverwrite <p>已存在配置时是否覆盖，默认 false（不覆盖，保持兼容）</p>
                     * 
                     */
                    bool GetIsOverwrite() const;

                    /**
                     * 设置<p>已存在配置时是否覆盖，默认 false（不覆盖，保持兼容）</p>
                     * @param _isOverwrite <p>已存在配置时是否覆盖，默认 false（不覆盖，保持兼容）</p>
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
                     * <p>接入类型，当前支持 1和7</p><p>枚举值：</p><ul><li>1： 外网TGW</li><li>2： 基础网络</li><li>3： VPC网络</li><li>4： idc环境-支撑网络</li><li>5： SSL外网访问方式访问</li><li>6： 黑石环境vpc</li><li>7： cvm环境-支撑网络</li></ul>
                     */
                    int64_t m_vipType;
                    bool m_vipTypeHasBeenSet;

                    /**
                     * <p>实例的地域</p>
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>实例的id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例的接入信息</p>
                     */
                    RouteInfo m_routeInfo;
                    bool m_routeInfoHasBeenSet;

                    /**
                     * <p>接入为域名的时候，有效</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>接入为域名的时候，有效</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>日志投递的主题配置</p>
                     */
                    std::vector<LogDeliveryInfo> m_logDeliveryInfo;
                    bool m_logDeliveryInfoHasBeenSet;

                    /**
                     * <p>已存在配置时是否覆盖，默认 false（不覆盖，保持兼容）</p>
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

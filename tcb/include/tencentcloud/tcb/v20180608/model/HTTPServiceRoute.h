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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEROUTE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/HTTPServicePathRewrite.h>
#include <tencentcloud/tcb/v20180608/model/HTTPServiceRouteQPSPolicy.h>
#include <tencentcloud/tcb/v20180608/model/HTTPServiceExtension.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 查询HTTP访问服务输出路由信息
                */
                class HTTPServiceRoute : public AbstractModel
                {
                public:
                    HTTPServiceRoute();
                    ~HTTPServiceRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>路径</p>
                     * @return Path <p>路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>路径</p>
                     * @param _path <p>路径</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>路径重写规则</p>
                     * @return PathRewrite <p>路径重写规则</p>
                     * 
                     */
                    HTTPServicePathRewrite GetPathRewrite() const;

                    /**
                     * 设置<p>路径重写规则</p>
                     * @param _pathRewrite <p>路径重写规则</p>
                     * 
                     */
                    void SetPathRewrite(const HTTPServicePathRewrite& _pathRewrite);

                    /**
                     * 判断参数 PathRewrite 是否已赋值
                     * @return PathRewrite 是否已赋值
                     * 
                     */
                    bool PathRewriteHasBeenSet() const;

                    /**
                     * 获取<p>上游服务类型。SCF: 云函数，CBR: 云托管，STATIC_STORE: 静态托管，WEB_SCF: WEB云函数，LH: Lighthouse</p>
                     * @return UpstreamResourceType <p>上游服务类型。SCF: 云函数，CBR: 云托管，STATIC_STORE: 静态托管，WEB_SCF: WEB云函数，LH: Lighthouse</p>
                     * 
                     */
                    std::string GetUpstreamResourceType() const;

                    /**
                     * 设置<p>上游服务类型。SCF: 云函数，CBR: 云托管，STATIC_STORE: 静态托管，WEB_SCF: WEB云函数，LH: Lighthouse</p>
                     * @param _upstreamResourceType <p>上游服务类型。SCF: 云函数，CBR: 云托管，STATIC_STORE: 静态托管，WEB_SCF: WEB云函数，LH: Lighthouse</p>
                     * 
                     */
                    void SetUpstreamResourceType(const std::string& _upstreamResourceType);

                    /**
                     * 判断参数 UpstreamResourceType 是否已赋值
                     * @return UpstreamResourceType 是否已赋值
                     * 
                     */
                    bool UpstreamResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>上游服务名</p>
                     * @return UpstreamResourceName <p>上游服务名</p>
                     * 
                     */
                    std::string GetUpstreamResourceName() const;

                    /**
                     * 设置<p>上游服务名</p>
                     * @param _upstreamResourceName <p>上游服务名</p>
                     * 
                     */
                    void SetUpstreamResourceName(const std::string& _upstreamResourceName);

                    /**
                     * 判断参数 UpstreamResourceName 是否已赋值
                     * @return UpstreamResourceName 是否已赋值
                     * 
                     */
                    bool UpstreamResourceNameHasBeenSet() const;

                    /**
                     * 获取<p>是否开启安全域名</p>
                     * @return EnableSafeDomain <p>是否开启安全域名</p>
                     * 
                     */
                    bool GetEnableSafeDomain() const;

                    /**
                     * 设置<p>是否开启安全域名</p>
                     * @param _enableSafeDomain <p>是否开启安全域名</p>
                     * 
                     */
                    void SetEnableSafeDomain(const bool& _enableSafeDomain);

                    /**
                     * 判断参数 EnableSafeDomain 是否已赋值
                     * @return EnableSafeDomain 是否已赋值
                     * 
                     */
                    bool EnableSafeDomainHasBeenSet() const;

                    /**
                     * 获取<p>是否开启身份认证</p>
                     * @return EnableAuth <p>是否开启身份认证</p>
                     * 
                     */
                    bool GetEnableAuth() const;

                    /**
                     * 设置<p>是否开启身份认证</p>
                     * @param _enableAuth <p>是否开启身份认证</p>
                     * 
                     */
                    void SetEnableAuth(const bool& _enableAuth);

                    /**
                     * 判断参数 EnableAuth 是否已赋值
                     * @return EnableAuth 是否已赋值
                     * 
                     */
                    bool EnableAuthHasBeenSet() const;

                    /**
                     * 获取<p>是否开启路径透传</p>
                     * @return EnablePathTransmission <p>是否开启路径透传</p>
                     * 
                     */
                    bool GetEnablePathTransmission() const;

                    /**
                     * 设置<p>是否开启路径透传</p>
                     * @param _enablePathTransmission <p>是否开启路径透传</p>
                     * 
                     */
                    void SetEnablePathTransmission(const bool& _enablePathTransmission);

                    /**
                     * 判断参数 EnablePathTransmission 是否已赋值
                     * @return EnablePathTransmission 是否已赋值
                     * 
                     */
                    bool EnablePathTransmissionHasBeenSet() const;

                    /**
                     * 获取<p>QPS限频策略</p>
                     * @return QPSPolicy <p>QPS限频策略</p>
                     * 
                     */
                    HTTPServiceRouteQPSPolicy GetQPSPolicy() const;

                    /**
                     * 设置<p>QPS限频策略</p>
                     * @param _qPSPolicy <p>QPS限频策略</p>
                     * 
                     */
                    void SetQPSPolicy(const HTTPServiceRouteQPSPolicy& _qPSPolicy);

                    /**
                     * 判断参数 QPSPolicy 是否已赋值
                     * @return QPSPolicy 是否已赋值
                     * 
                     */
                    bool QPSPolicyHasBeenSet() const;

                    /**
                     * 获取<p>是否开启路由</p>
                     * @return Enable <p>是否开启路由</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>是否开启路由</p>
                     * @param _enable <p>是否开启路由</p>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>扩展字段，内部包含headers处理等</p>
                     * @return Extension <p>扩展字段，内部包含headers处理等</p>
                     * 
                     */
                    HTTPServiceExtension GetExtension() const;

                    /**
                     * 设置<p>扩展字段，内部包含headers处理等</p>
                     * @param _extension <p>扩展字段，内部包含headers处理等</p>
                     * 
                     */
                    void SetExtension(const HTTPServiceExtension& _extension);

                    /**
                     * 判断参数 Extension 是否已赋值
                     * @return Extension 是否已赋值
                     * 
                     */
                    bool ExtensionHasBeenSet() const;

                    /**
                     * 获取<p>路由创建时间，格式  YYYY-MM-DDTHH:mm:ss±HH:mm，时区为 UTC+8</p>
                     * @return CreateTime <p>路由创建时间，格式  YYYY-MM-DDTHH:mm:ss±HH:mm，时区为 UTC+8</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>路由创建时间，格式  YYYY-MM-DDTHH:mm:ss±HH:mm，时区为 UTC+8</p>
                     * @param _createTime <p>路由创建时间，格式  YYYY-MM-DDTHH:mm:ss±HH:mm，时区为 UTC+8</p>
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
                     * 获取<p>路由更新时间，格式  YYYY-MM-DDTHH:mm:ss±HH:mm，时区为 UTC+8</p>
                     * @return UpdateTime <p>路由更新时间，格式  YYYY-MM-DDTHH:mm:ss±HH:mm，时区为 UTC+8</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>路由更新时间，格式  YYYY-MM-DDTHH:mm:ss±HH:mm，时区为 UTC+8</p>
                     * @param _updateTime <p>路由更新时间，格式  YYYY-MM-DDTHH:mm:ss±HH:mm，时区为 UTC+8</p>
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
                     * <p>路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>路径重写规则</p>
                     */
                    HTTPServicePathRewrite m_pathRewrite;
                    bool m_pathRewriteHasBeenSet;

                    /**
                     * <p>上游服务类型。SCF: 云函数，CBR: 云托管，STATIC_STORE: 静态托管，WEB_SCF: WEB云函数，LH: Lighthouse</p>
                     */
                    std::string m_upstreamResourceType;
                    bool m_upstreamResourceTypeHasBeenSet;

                    /**
                     * <p>上游服务名</p>
                     */
                    std::string m_upstreamResourceName;
                    bool m_upstreamResourceNameHasBeenSet;

                    /**
                     * <p>是否开启安全域名</p>
                     */
                    bool m_enableSafeDomain;
                    bool m_enableSafeDomainHasBeenSet;

                    /**
                     * <p>是否开启身份认证</p>
                     */
                    bool m_enableAuth;
                    bool m_enableAuthHasBeenSet;

                    /**
                     * <p>是否开启路径透传</p>
                     */
                    bool m_enablePathTransmission;
                    bool m_enablePathTransmissionHasBeenSet;

                    /**
                     * <p>QPS限频策略</p>
                     */
                    HTTPServiceRouteQPSPolicy m_qPSPolicy;
                    bool m_qPSPolicyHasBeenSet;

                    /**
                     * <p>是否开启路由</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>扩展字段，内部包含headers处理等</p>
                     */
                    HTTPServiceExtension m_extension;
                    bool m_extensionHasBeenSet;

                    /**
                     * <p>路由创建时间，格式  YYYY-MM-DDTHH:mm:ss±HH:mm，时区为 UTC+8</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>路由更新时间，格式  YYYY-MM-DDTHH:mm:ss±HH:mm，时区为 UTC+8</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEROUTE_H_

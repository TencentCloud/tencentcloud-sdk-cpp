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
                     * 获取路径
                     * @return Path 路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置路径
                     * @param _path 路径
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
                     * 获取路径重写
                     * @return PathRewrite 路径重写
                     * 
                     */
                    HTTPServicePathRewrite GetPathRewrite() const;

                    /**
                     * 设置路径重写
                     * @param _pathRewrite 路径重写
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
                     * 获取上游服务类型。SCF: 云函数，CBR: 云托管，STATIC_STORE: 静态托管，WEB_SCF: WEB云函数，LH: Lighthouse
                     * @return UpstreamResourceType 上游服务类型。SCF: 云函数，CBR: 云托管，STATIC_STORE: 静态托管，WEB_SCF: WEB云函数，LH: Lighthouse
                     * 
                     */
                    std::string GetUpstreamResourceType() const;

                    /**
                     * 设置上游服务类型。SCF: 云函数，CBR: 云托管，STATIC_STORE: 静态托管，WEB_SCF: WEB云函数，LH: Lighthouse
                     * @param _upstreamResourceType 上游服务类型。SCF: 云函数，CBR: 云托管，STATIC_STORE: 静态托管，WEB_SCF: WEB云函数，LH: Lighthouse
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
                     * 获取上游服务名
                     * @return UpstreamResourceName 上游服务名
                     * 
                     */
                    std::string GetUpstreamResourceName() const;

                    /**
                     * 设置上游服务名
                     * @param _upstreamResourceName 上游服务名
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
                     * 获取是否开启安全域名
                     * @return EnableSafeDomain 是否开启安全域名
                     * 
                     */
                    bool GetEnableSafeDomain() const;

                    /**
                     * 设置是否开启安全域名
                     * @param _enableSafeDomain 是否开启安全域名
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
                     * 获取是否开启身份认证
                     * @return EnableAuth 是否开启身份认证
                     * 
                     */
                    bool GetEnableAuth() const;

                    /**
                     * 设置是否开启身份认证
                     * @param _enableAuth 是否开启身份认证
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
                     * 获取是否开启路径透传
                     * @return EnablePathTransmission 是否开启路径透传
                     * 
                     */
                    bool GetEnablePathTransmission() const;

                    /**
                     * 设置是否开启路径透传
                     * @param _enablePathTransmission 是否开启路径透传
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
                     * 获取QPS限频策略
                     * @return QPSPolicy QPS限频策略
                     * 
                     */
                    HTTPServiceRouteQPSPolicy GetQPSPolicy() const;

                    /**
                     * 设置QPS限频策略
                     * @param _qPSPolicy QPS限频策略
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
                     * 获取是否开启路由
                     * @return Enable 是否开启路由
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置是否开启路由
                     * @param _enable 是否开启路由
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
                     * 获取扩展字段，内部包含headers处理等
                     * @return Extension 扩展字段，内部包含headers处理等
                     * 
                     */
                    HTTPServiceExtension GetExtension() const;

                    /**
                     * 设置扩展字段，内部包含headers处理等
                     * @param _extension 扩展字段，内部包含headers处理等
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
                     * 获取路由创建时间
                     * @return CreateTime 路由创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置路由创建时间
                     * @param _createTime 路由创建时间
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
                     * 获取路由更新时间
                     * @return UpdateTime 路由更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置路由更新时间
                     * @param _updateTime 路由更新时间
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
                     * 路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 路径重写
                     */
                    HTTPServicePathRewrite m_pathRewrite;
                    bool m_pathRewriteHasBeenSet;

                    /**
                     * 上游服务类型。SCF: 云函数，CBR: 云托管，STATIC_STORE: 静态托管，WEB_SCF: WEB云函数，LH: Lighthouse
                     */
                    std::string m_upstreamResourceType;
                    bool m_upstreamResourceTypeHasBeenSet;

                    /**
                     * 上游服务名
                     */
                    std::string m_upstreamResourceName;
                    bool m_upstreamResourceNameHasBeenSet;

                    /**
                     * 是否开启安全域名
                     */
                    bool m_enableSafeDomain;
                    bool m_enableSafeDomainHasBeenSet;

                    /**
                     * 是否开启身份认证
                     */
                    bool m_enableAuth;
                    bool m_enableAuthHasBeenSet;

                    /**
                     * 是否开启路径透传
                     */
                    bool m_enablePathTransmission;
                    bool m_enablePathTransmissionHasBeenSet;

                    /**
                     * QPS限频策略
                     */
                    HTTPServiceRouteQPSPolicy m_qPSPolicy;
                    bool m_qPSPolicyHasBeenSet;

                    /**
                     * 是否开启路由
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 扩展字段，内部包含headers处理等
                     */
                    HTTPServiceExtension m_extension;
                    bool m_extensionHasBeenSet;

                    /**
                     * 路由创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 路由更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEROUTE_H_

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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNFORGATEWAYCONF_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNFORGATEWAYCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 独立网关云托管服务配置信息
                */
                class CloudBaseRunForGatewayConf : public AbstractModel
                {
                public:
                    CloudBaseRunForGatewayConf();
                    ~CloudBaseRunForGatewayConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否缩容到0
                     * @return IsZero 是否缩容到0
                     * 
                     */
                    bool GetIsZero() const;

                    /**
                     * 设置是否缩容到0
                     * @param _isZero 是否缩容到0
                     * 
                     */
                    void SetIsZero(const bool& _isZero);

                    /**
                     * 判断参数 IsZero 是否已赋值
                     * @return IsZero 是否已赋值
                     * 
                     */
                    bool IsZeroHasBeenSet() const;

                    /**
                     * 获取按百分比灰度的权重
                     * @return Weight 按百分比灰度的权重
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置按百分比灰度的权重
                     * @param _weight 按百分比灰度的权重
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取按请求/header参数的灰度Key
                     * @return GrayKey 按请求/header参数的灰度Key
                     * 
                     */
                    std::string GetGrayKey() const;

                    /**
                     * 设置按请求/header参数的灰度Key
                     * @param _grayKey 按请求/header参数的灰度Key
                     * 
                     */
                    void SetGrayKey(const std::string& _grayKey);

                    /**
                     * 判断参数 GrayKey 是否已赋值
                     * @return GrayKey 是否已赋值
                     * 
                     */
                    bool GrayKeyHasBeenSet() const;

                    /**
                     * 获取按请求/header参数的灰度Value
                     * @return GrayValue 按请求/header参数的灰度Value
                     * 
                     */
                    std::string GetGrayValue() const;

                    /**
                     * 设置按请求/header参数的灰度Value
                     * @param _grayValue 按请求/header参数的灰度Value
                     * 
                     */
                    void SetGrayValue(const std::string& _grayValue);

                    /**
                     * 判断参数 GrayValue 是否已赋值
                     * @return GrayValue 是否已赋值
                     * 
                     */
                    bool GrayValueHasBeenSet() const;

                    /**
                     * 获取是否为默认版本(按请求/header参数)
                     * @return IsDefault 是否为默认版本(按请求/header参数)
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否为默认版本(按请求/header参数)
                     * @param _isDefault 是否为默认版本(按请求/header参数)
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取访问权限，对应二进制分多段，vpc内网｜公网｜oa
                     * @return AccessType 访问权限，对应二进制分多段，vpc内网｜公网｜oa
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置访问权限，对应二进制分多段，vpc内网｜公网｜oa
                     * @param _accessType 访问权限，对应二进制分多段，vpc内网｜公网｜oa
                     * 
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取访问的URL（域名＋路径）列表
                     * @return URLs 访问的URL（域名＋路径）列表
                     * 
                     */
                    std::vector<std::string> GetURLs() const;

                    /**
                     * 设置访问的URL（域名＋路径）列表
                     * @param _uRLs 访问的URL（域名＋路径）列表
                     * 
                     */
                    void SetURLs(const std::vector<std::string>& _uRLs);

                    /**
                     * 判断参数 URLs 是否已赋值
                     * @return URLs 是否已赋值
                     * 
                     */
                    bool URLsHasBeenSet() const;

                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取服务名称
                     * @return ServerName 服务名称
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置服务名称
                     * @param _serverName 服务名称
                     * 
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取版本名称
                     * @return VersionName 版本名称
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置版本名称
                     * @param _versionName 版本名称
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取灰度类型：FLOW(权重), URL_PARAMS/HEAD_PARAMS
                     * @return GrayType 灰度类型：FLOW(权重), URL_PARAMS/HEAD_PARAMS
                     * 
                     */
                    std::string GetGrayType() const;

                    /**
                     * 设置灰度类型：FLOW(权重), URL_PARAMS/HEAD_PARAMS
                     * @param _grayType 灰度类型：FLOW(权重), URL_PARAMS/HEAD_PARAMS
                     * 
                     */
                    void SetGrayType(const std::string& _grayType);

                    /**
                     * 判断参数 GrayType 是否已赋值
                     * @return GrayType 是否已赋值
                     * 
                     */
                    bool GrayTypeHasBeenSet() const;

                    /**
                     * 获取CLB的IP:Port
                     * @return LbAddr CLB的IP:Port
                     * 
                     */
                    std::string GetLbAddr() const;

                    /**
                     * 设置CLB的IP:Port
                     * @param _lbAddr CLB的IP:Port
                     * 
                     */
                    void SetLbAddr(const std::string& _lbAddr);

                    /**
                     * 判断参数 LbAddr 是否已赋值
                     * @return LbAddr 是否已赋值
                     * 
                     */
                    bool LbAddrHasBeenSet() const;

                    /**
                     * 获取0:http访问服务配置信息, 1: 服务域名
                     * @return ConfigType 0:http访问服务配置信息, 1: 服务域名
                     * 
                     */
                    int64_t GetConfigType() const;

                    /**
                     * 设置0:http访问服务配置信息, 1: 服务域名
                     * @param _configType 0:http访问服务配置信息, 1: 服务域名
                     * 
                     */
                    void SetConfigType(const int64_t& _configType);

                    /**
                     * 判断参数 ConfigType 是否已赋值
                     * @return ConfigType 是否已赋值
                     * 
                     */
                    bool ConfigTypeHasBeenSet() const;

                private:

                    /**
                     * 是否缩容到0
                     */
                    bool m_isZero;
                    bool m_isZeroHasBeenSet;

                    /**
                     * 按百分比灰度的权重
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 按请求/header参数的灰度Key
                     */
                    std::string m_grayKey;
                    bool m_grayKeyHasBeenSet;

                    /**
                     * 按请求/header参数的灰度Value
                     */
                    std::string m_grayValue;
                    bool m_grayValueHasBeenSet;

                    /**
                     * 是否为默认版本(按请求/header参数)
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 访问权限，对应二进制分多段，vpc内网｜公网｜oa
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 访问的URL（域名＋路径）列表
                     */
                    std::vector<std::string> m_uRLs;
                    bool m_uRLsHasBeenSet;

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * 版本名称
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 灰度类型：FLOW(权重), URL_PARAMS/HEAD_PARAMS
                     */
                    std::string m_grayType;
                    bool m_grayTypeHasBeenSet;

                    /**
                     * CLB的IP:Port
                     */
                    std::string m_lbAddr;
                    bool m_lbAddrHasBeenSet;

                    /**
                     * 0:http访问服务配置信息, 1: 服务域名
                     */
                    int64_t m_configType;
                    bool m_configTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNFORGATEWAYCONF_H_

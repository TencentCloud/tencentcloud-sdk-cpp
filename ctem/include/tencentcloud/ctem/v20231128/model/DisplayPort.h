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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYPORT_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctem/v20231128/model/DisplayToolCommon.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * 端口详情
                */
                class DisplayPort : public AbstractModel
                {
                public:
                    DisplayPort();
                    ~DisplayPort() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主键ID
                     * @return Id 主键ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置主键ID
                     * @param _id 主键ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取公共字段
                     * @return DisplayToolCommon 公共字段
                     * 
                     */
                    DisplayToolCommon GetDisplayToolCommon() const;

                    /**
                     * 设置公共字段
                     * @param _displayToolCommon 公共字段
                     * 
                     */
                    void SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon);

                    /**
                     * 判断参数 DisplayToolCommon 是否已赋值
                     * @return DisplayToolCommon 是否已赋值
                     * 
                     */
                    bool DisplayToolCommonHasBeenSet() const;

                    /**
                     * 获取IP或域名地址
                     * @return Asset IP或域名地址
                     * 
                     */
                    std::string GetAsset() const;

                    /**
                     * 设置IP或域名地址
                     * @param _asset IP或域名地址
                     * 
                     */
                    void SetAsset(const std::string& _asset);

                    /**
                     * 判断参数 Asset 是否已赋值
                     * @return Asset 是否已赋值
                     * 
                     */
                    bool AssetHasBeenSet() const;

                    /**
                     * 获取解析的IP
                     * @return Ip 解析的IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置解析的IP
                     * @param _ip 解析的IP
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
                     * 获取端口
                     * @return Port 端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置端口
                     * @param _port 端口
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取是否高危
                     * @return IsHighRisk 是否高危
                     * 
                     */
                    bool GetIsHighRisk() const;

                    /**
                     * 设置是否高危
                     * @param _isHighRisk 是否高危
                     * 
                     */
                    void SetIsHighRisk(const bool& _isHighRisk);

                    /**
                     * 判断参数 IsHighRisk 是否已赋值
                     * @return IsHighRisk 是否已赋值
                     * 
                     */
                    bool IsHighRiskHasBeenSet() const;

                    /**
                     * 获取组件名称
                     * @return App 组件名称
                     * 
                     */
                    std::string GetApp() const;

                    /**
                     * 设置组件名称
                     * @param _app 组件名称
                     * 
                     */
                    void SetApp(const std::string& _app);

                    /**
                     * 判断参数 App 是否已赋值
                     * @return App 是否已赋值
                     * 
                     */
                    bool AppHasBeenSet() const;

                    /**
                     * 获取服务名称
                     * @return Service 服务名称
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置服务名称
                     * @param _service 服务名称
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取端口响应详情
                     * @return Banner 端口响应详情
                     * 
                     */
                    std::string GetBanner() const;

                    /**
                     * 设置端口响应详情
                     * @param _banner 端口响应详情
                     * 
                     */
                    void SetBanner(const std::string& _banner);

                    /**
                     * 判断参数 Banner 是否已赋值
                     * @return Banner 是否已赋值
                     * 
                     */
                    bool BannerHasBeenSet() const;

                    /**
                     * 获取上次检测时间
                     * @return LastCheckTime 上次检测时间
                     * 
                     */
                    std::string GetLastCheckTime() const;

                    /**
                     * 设置上次检测时间
                     * @param _lastCheckTime 上次检测时间
                     * 
                     */
                    void SetLastCheckTime(const std::string& _lastCheckTime);

                    /**
                     * 判断参数 LastCheckTime 是否已赋值
                     * @return LastCheckTime 是否已赋值
                     * 
                     */
                    bool LastCheckTimeHasBeenSet() const;

                    /**
                     * 获取状态，close:连接超时，端口可能已关闭，open:端口开放, checking:复测中, ignore:已忽略
                     * @return Status 状态，close:连接超时，端口可能已关闭，open:端口开放, checking:复测中, ignore:已忽略
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态，close:连接超时，端口可能已关闭，open:端口开放, checking:复测中, ignore:已忽略
                     * @param _status 状态，close:连接超时，端口可能已关闭，open:端口开放, checking:复测中, ignore:已忽略
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 主键ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 公共字段
                     */
                    DisplayToolCommon m_displayToolCommon;
                    bool m_displayToolCommonHasBeenSet;

                    /**
                     * IP或域名地址
                     */
                    std::string m_asset;
                    bool m_assetHasBeenSet;

                    /**
                     * 解析的IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 是否高危
                     */
                    bool m_isHighRisk;
                    bool m_isHighRiskHasBeenSet;

                    /**
                     * 组件名称
                     */
                    std::string m_app;
                    bool m_appHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 端口响应详情
                     */
                    std::string m_banner;
                    bool m_bannerHasBeenSet;

                    /**
                     * 上次检测时间
                     */
                    std::string m_lastCheckTime;
                    bool m_lastCheckTimeHasBeenSet;

                    /**
                     * 状态，close:连接超时，端口可能已关闭，open:端口开放, checking:复测中, ignore:已忽略
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYPORT_H_

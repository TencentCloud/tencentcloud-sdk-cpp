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
                     * 获取<p>主键ID</p>
                     * @return Id <p>主键ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>主键ID</p>
                     * @param _id <p>主键ID</p>
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
                     * 获取<p>公共字段</p>
                     * @return DisplayToolCommon <p>公共字段</p>
                     * 
                     */
                    DisplayToolCommon GetDisplayToolCommon() const;

                    /**
                     * 设置<p>公共字段</p>
                     * @param _displayToolCommon <p>公共字段</p>
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
                     * 获取<p>IP或域名地址</p>
                     * @return Asset <p>IP或域名地址</p>
                     * 
                     */
                    std::string GetAsset() const;

                    /**
                     * 设置<p>IP或域名地址</p>
                     * @param _asset <p>IP或域名地址</p>
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
                     * 获取<p>解析的IP</p>
                     * @return Ip <p>解析的IP</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>解析的IP</p>
                     * @param _ip <p>解析的IP</p>
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
                     * 获取<p>端口</p>
                     * @return Port <p>端口</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>端口</p>
                     * @param _port <p>端口</p>
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
                     * 获取<p>是否高危</p>
                     * @return IsHighRisk <p>是否高危</p>
                     * 
                     */
                    bool GetIsHighRisk() const;

                    /**
                     * 设置<p>是否高危</p>
                     * @param _isHighRisk <p>是否高危</p>
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
                     * 获取<p>组件名称</p>
                     * @return App <p>组件名称</p>
                     * 
                     */
                    std::string GetApp() const;

                    /**
                     * 设置<p>组件名称</p>
                     * @param _app <p>组件名称</p>
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
                     * 获取<p>服务名称</p>
                     * @return Service <p>服务名称</p>
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置<p>服务名称</p>
                     * @param _service <p>服务名称</p>
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
                     * 获取<p>端口响应详情</p>
                     * @return Banner <p>端口响应详情</p>
                     * 
                     */
                    std::string GetBanner() const;

                    /**
                     * 设置<p>端口响应详情</p>
                     * @param _banner <p>端口响应详情</p>
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
                     * 获取<p>上次检测时间</p>
                     * @return LastCheckTime <p>上次检测时间</p>
                     * 
                     */
                    std::string GetLastCheckTime() const;

                    /**
                     * 设置<p>上次检测时间</p>
                     * @param _lastCheckTime <p>上次检测时间</p>
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
                     * 获取<p>状态，close:连接超时，端口可能已关闭，open:端口开放, checking:复测中, ignore:已忽略</p>
                     * @return Status <p>状态，close:连接超时，端口可能已关闭，open:端口开放, checking:复测中, ignore:已忽略</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态，close:连接超时，端口可能已关闭，open:端口开放, checking:复测中, ignore:已忽略</p>
                     * @param _status <p>状态，close:连接超时，端口可能已关闭，open:端口开放, checking:复测中, ignore:已忽略</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>是否为云资产：0-非云资产 1-是云资产</p>
                     * @return IsCloudAsset <p>是否为云资产：0-非云资产 1-是云资产</p>
                     * 
                     */
                    int64_t GetIsCloudAsset() const;

                    /**
                     * 设置<p>是否为云资产：0-非云资产 1-是云资产</p>
                     * @param _isCloudAsset <p>是否为云资产：0-非云资产 1-是云资产</p>
                     * 
                     */
                    void SetIsCloudAsset(const int64_t& _isCloudAsset);

                    /**
                     * 判断参数 IsCloudAsset 是否已赋值
                     * @return IsCloudAsset 是否已赋值
                     * 
                     */
                    bool IsCloudAssetHasBeenSet() const;

                    /**
                     * 获取<p>云资产是否下线：-1-已下线 0-正常</p>
                     * @return CloudAssetStatus <p>云资产是否下线：-1-已下线 0-正常</p>
                     * 
                     */
                    int64_t GetCloudAssetStatus() const;

                    /**
                     * 设置<p>云资产是否下线：-1-已下线 0-正常</p>
                     * @param _cloudAssetStatus <p>云资产是否下线：-1-已下线 0-正常</p>
                     * 
                     */
                    void SetCloudAssetStatus(const int64_t& _cloudAssetStatus);

                    /**
                     * 判断参数 CloudAssetStatus 是否已赋值
                     * @return CloudAssetStatus 是否已赋值
                     * 
                     */
                    bool CloudAssetStatusHasBeenSet() const;

                    /**
                     * 获取<p>域名解析状态 1:异常 0:正常</p>
                     * @return AnalysisState <p>域名解析状态 1:异常 0:正常</p>
                     * 
                     */
                    int64_t GetAnalysisState() const;

                    /**
                     * 设置<p>域名解析状态 1:异常 0:正常</p>
                     * @param _analysisState <p>域名解析状态 1:异常 0:正常</p>
                     * 
                     */
                    void SetAnalysisState(const int64_t& _analysisState);

                    /**
                     * 判断参数 AnalysisState 是否已赋值
                     * @return AnalysisState 是否已赋值
                     * 
                     */
                    bool AnalysisStateHasBeenSet() const;

                    /**
                     * 获取<p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     * @return AggregationCount <p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     * 
                     */
                    int64_t GetAggregationCount() const;

                    /**
                     * 设置<p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     * @param _aggregationCount <p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     * 
                     */
                    void SetAggregationCount(const int64_t& _aggregationCount);

                    /**
                     * 判断参数 AggregationCount 是否已赋值
                     * @return AggregationCount 是否已赋值
                     * 
                     */
                    bool AggregationCountHasBeenSet() const;

                private:

                    /**
                     * <p>主键ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>公共字段</p>
                     */
                    DisplayToolCommon m_displayToolCommon;
                    bool m_displayToolCommonHasBeenSet;

                    /**
                     * <p>IP或域名地址</p>
                     */
                    std::string m_asset;
                    bool m_assetHasBeenSet;

                    /**
                     * <p>解析的IP</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>端口</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>是否高危</p>
                     */
                    bool m_isHighRisk;
                    bool m_isHighRiskHasBeenSet;

                    /**
                     * <p>组件名称</p>
                     */
                    std::string m_app;
                    bool m_appHasBeenSet;

                    /**
                     * <p>服务名称</p>
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * <p>端口响应详情</p>
                     */
                    std::string m_banner;
                    bool m_bannerHasBeenSet;

                    /**
                     * <p>上次检测时间</p>
                     */
                    std::string m_lastCheckTime;
                    bool m_lastCheckTimeHasBeenSet;

                    /**
                     * <p>状态，close:连接超时，端口可能已关闭，open:端口开放, checking:复测中, ignore:已忽略</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>是否为云资产：0-非云资产 1-是云资产</p>
                     */
                    int64_t m_isCloudAsset;
                    bool m_isCloudAssetHasBeenSet;

                    /**
                     * <p>云资产是否下线：-1-已下线 0-正常</p>
                     */
                    int64_t m_cloudAssetStatus;
                    bool m_cloudAssetStatusHasBeenSet;

                    /**
                     * <p>域名解析状态 1:异常 0:正常</p>
                     */
                    int64_t m_analysisState;
                    bool m_analysisStateHasBeenSet;

                    /**
                     * <p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     */
                    int64_t m_aggregationCount;
                    bool m_aggregationCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYPORT_H_

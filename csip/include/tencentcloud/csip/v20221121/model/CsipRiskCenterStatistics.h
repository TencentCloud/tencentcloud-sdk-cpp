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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CSIPRISKCENTERSTATISTICS_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CSIPRISKCENTERSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 风险中心风险概览统计数据
                */
                class CsipRiskCenterStatistics : public AbstractModel
                {
                public:
                    CsipRiskCenterStatistics();
                    ~CsipRiskCenterStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取端口风险总数
                     * @return PortTotal 端口风险总数
                     * 
                     */
                    uint64_t GetPortTotal() const;

                    /**
                     * 设置端口风险总数
                     * @param _portTotal 端口风险总数
                     * 
                     */
                    void SetPortTotal(const uint64_t& _portTotal);

                    /**
                     * 判断参数 PortTotal 是否已赋值
                     * @return PortTotal 是否已赋值
                     * 
                     */
                    bool PortTotalHasBeenSet() const;

                    /**
                     * 获取端口风险高危数量
                     * @return PortHighLevel 端口风险高危数量
                     * 
                     */
                    uint64_t GetPortHighLevel() const;

                    /**
                     * 设置端口风险高危数量
                     * @param _portHighLevel 端口风险高危数量
                     * 
                     */
                    void SetPortHighLevel(const uint64_t& _portHighLevel);

                    /**
                     * 判断参数 PortHighLevel 是否已赋值
                     * @return PortHighLevel 是否已赋值
                     * 
                     */
                    bool PortHighLevelHasBeenSet() const;

                    /**
                     * 获取	弱口令风险总数
                     * @return WeakPasswordTotal 	弱口令风险总数
                     * 
                     */
                    uint64_t GetWeakPasswordTotal() const;

                    /**
                     * 设置	弱口令风险总数
                     * @param _weakPasswordTotal 	弱口令风险总数
                     * 
                     */
                    void SetWeakPasswordTotal(const uint64_t& _weakPasswordTotal);

                    /**
                     * 判断参数 WeakPasswordTotal 是否已赋值
                     * @return WeakPasswordTotal 是否已赋值
                     * 
                     */
                    bool WeakPasswordTotalHasBeenSet() const;

                    /**
                     * 获取弱口令风险高危数量
                     * @return WeakPasswordHighLevel 弱口令风险高危数量
                     * 
                     */
                    uint64_t GetWeakPasswordHighLevel() const;

                    /**
                     * 设置弱口令风险高危数量
                     * @param _weakPasswordHighLevel 弱口令风险高危数量
                     * 
                     */
                    void SetWeakPasswordHighLevel(const uint64_t& _weakPasswordHighLevel);

                    /**
                     * 判断参数 WeakPasswordHighLevel 是否已赋值
                     * @return WeakPasswordHighLevel 是否已赋值
                     * 
                     */
                    bool WeakPasswordHighLevelHasBeenSet() const;

                    /**
                     * 获取网站风险数量
                     * @return WebsiteTotal 网站风险数量
                     * 
                     */
                    uint64_t GetWebsiteTotal() const;

                    /**
                     * 设置网站风险数量
                     * @param _websiteTotal 网站风险数量
                     * 
                     */
                    void SetWebsiteTotal(const uint64_t& _websiteTotal);

                    /**
                     * 判断参数 WebsiteTotal 是否已赋值
                     * @return WebsiteTotal 是否已赋值
                     * 
                     */
                    bool WebsiteTotalHasBeenSet() const;

                    /**
                     * 获取网站高危风险数量
                     * @return WebsiteHighLevel 网站高危风险数量
                     * 
                     */
                    uint64_t GetWebsiteHighLevel() const;

                    /**
                     * 设置网站高危风险数量
                     * @param _websiteHighLevel 网站高危风险数量
                     * 
                     */
                    void SetWebsiteHighLevel(const uint64_t& _websiteHighLevel);

                    /**
                     * 判断参数 WebsiteHighLevel 是否已赋值
                     * @return WebsiteHighLevel 是否已赋值
                     * 
                     */
                    bool WebsiteHighLevelHasBeenSet() const;

                    /**
                     * 获取最新的扫描时间
                     * @return LastScanTime 最新的扫描时间
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置最新的扫描时间
                     * @param _lastScanTime 最新的扫描时间
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取漏洞风险数
                     * @return VULTotal 漏洞风险数
                     * 
                     */
                    int64_t GetVULTotal() const;

                    /**
                     * 设置漏洞风险数
                     * @param _vULTotal 漏洞风险数
                     * 
                     */
                    void SetVULTotal(const int64_t& _vULTotal);

                    /**
                     * 判断参数 VULTotal 是否已赋值
                     * @return VULTotal 是否已赋值
                     * 
                     */
                    bool VULTotalHasBeenSet() const;

                    /**
                     * 获取高危漏洞风险数
                     * @return VULHighLevel 高危漏洞风险数
                     * 
                     */
                    int64_t GetVULHighLevel() const;

                    /**
                     * 设置高危漏洞风险数
                     * @param _vULHighLevel 高危漏洞风险数
                     * 
                     */
                    void SetVULHighLevel(const int64_t& _vULHighLevel);

                    /**
                     * 判断参数 VULHighLevel 是否已赋值
                     * @return VULHighLevel 是否已赋值
                     * 
                     */
                    bool VULHighLevelHasBeenSet() const;

                    /**
                     * 获取配置项风险数量
                     * @return CFGTotal 配置项风险数量
                     * 
                     */
                    int64_t GetCFGTotal() const;

                    /**
                     * 设置配置项风险数量
                     * @param _cFGTotal 配置项风险数量
                     * 
                     */
                    void SetCFGTotal(const int64_t& _cFGTotal);

                    /**
                     * 判断参数 CFGTotal 是否已赋值
                     * @return CFGTotal 是否已赋值
                     * 
                     */
                    bool CFGTotalHasBeenSet() const;

                    /**
                     * 获取高危配置项风险数量
                     * @return CFGHighLevel 高危配置项风险数量
                     * 
                     */
                    int64_t GetCFGHighLevel() const;

                    /**
                     * 设置高危配置项风险数量
                     * @param _cFGHighLevel 高危配置项风险数量
                     * 
                     */
                    void SetCFGHighLevel(const int64_t& _cFGHighLevel);

                    /**
                     * 判断参数 CFGHighLevel 是否已赋值
                     * @return CFGHighLevel 是否已赋值
                     * 
                     */
                    bool CFGHighLevelHasBeenSet() const;

                    /**
                     * 获取测绘服务风险数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerTotal 测绘服务风险数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetServerTotal() const;

                    /**
                     * 设置测绘服务风险数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serverTotal 测绘服务风险数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServerTotal(const int64_t& _serverTotal);

                    /**
                     * 判断参数 ServerTotal 是否已赋值
                     * @return ServerTotal 是否已赋值
                     * 
                     */
                    bool ServerTotalHasBeenSet() const;

                    /**
                     * 获取测绘服务高危数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerHighLevel 测绘服务高危数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetServerHighLevel() const;

                    /**
                     * 设置测绘服务高危数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serverHighLevel 测绘服务高危数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServerHighLevel(const int64_t& _serverHighLevel);

                    /**
                     * 判断参数 ServerHighLevel 是否已赋值
                     * @return ServerHighLevel 是否已赋值
                     * 
                     */
                    bool ServerHighLevelHasBeenSet() const;

                    /**
                     * 获取主机基线风险数量
                     * @return HostBaseLineRiskTotal 主机基线风险数量
                     * 
                     */
                    int64_t GetHostBaseLineRiskTotal() const;

                    /**
                     * 设置主机基线风险数量
                     * @param _hostBaseLineRiskTotal 主机基线风险数量
                     * 
                     */
                    void SetHostBaseLineRiskTotal(const int64_t& _hostBaseLineRiskTotal);

                    /**
                     * 判断参数 HostBaseLineRiskTotal 是否已赋值
                     * @return HostBaseLineRiskTotal 是否已赋值
                     * 
                     */
                    bool HostBaseLineRiskTotalHasBeenSet() const;

                    /**
                     * 获取主机基线高危风险数量
                     * @return HostBaseLineRiskHighLevel 主机基线高危风险数量
                     * 
                     */
                    int64_t GetHostBaseLineRiskHighLevel() const;

                    /**
                     * 设置主机基线高危风险数量
                     * @param _hostBaseLineRiskHighLevel 主机基线高危风险数量
                     * 
                     */
                    void SetHostBaseLineRiskHighLevel(const int64_t& _hostBaseLineRiskHighLevel);

                    /**
                     * 判断参数 HostBaseLineRiskHighLevel 是否已赋值
                     * @return HostBaseLineRiskHighLevel 是否已赋值
                     * 
                     */
                    bool HostBaseLineRiskHighLevelHasBeenSet() const;

                    /**
                     * 获取容器基线风险数量
                     * @return PodBaseLineRiskTotal 容器基线风险数量
                     * 
                     */
                    int64_t GetPodBaseLineRiskTotal() const;

                    /**
                     * 设置容器基线风险数量
                     * @param _podBaseLineRiskTotal 容器基线风险数量
                     * 
                     */
                    void SetPodBaseLineRiskTotal(const int64_t& _podBaseLineRiskTotal);

                    /**
                     * 判断参数 PodBaseLineRiskTotal 是否已赋值
                     * @return PodBaseLineRiskTotal 是否已赋值
                     * 
                     */
                    bool PodBaseLineRiskTotalHasBeenSet() const;

                    /**
                     * 获取容器基线高危风险数量
                     * @return PodBaseLineRiskHighLevel 容器基线高危风险数量
                     * 
                     */
                    int64_t GetPodBaseLineRiskHighLevel() const;

                    /**
                     * 设置容器基线高危风险数量
                     * @param _podBaseLineRiskHighLevel 容器基线高危风险数量
                     * 
                     */
                    void SetPodBaseLineRiskHighLevel(const int64_t& _podBaseLineRiskHighLevel);

                    /**
                     * 判断参数 PodBaseLineRiskHighLevel 是否已赋值
                     * @return PodBaseLineRiskHighLevel 是否已赋值
                     * 
                     */
                    bool PodBaseLineRiskHighLevelHasBeenSet() const;

                private:

                    /**
                     * 端口风险总数
                     */
                    uint64_t m_portTotal;
                    bool m_portTotalHasBeenSet;

                    /**
                     * 端口风险高危数量
                     */
                    uint64_t m_portHighLevel;
                    bool m_portHighLevelHasBeenSet;

                    /**
                     * 	弱口令风险总数
                     */
                    uint64_t m_weakPasswordTotal;
                    bool m_weakPasswordTotalHasBeenSet;

                    /**
                     * 弱口令风险高危数量
                     */
                    uint64_t m_weakPasswordHighLevel;
                    bool m_weakPasswordHighLevelHasBeenSet;

                    /**
                     * 网站风险数量
                     */
                    uint64_t m_websiteTotal;
                    bool m_websiteTotalHasBeenSet;

                    /**
                     * 网站高危风险数量
                     */
                    uint64_t m_websiteHighLevel;
                    bool m_websiteHighLevelHasBeenSet;

                    /**
                     * 最新的扫描时间
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * 漏洞风险数
                     */
                    int64_t m_vULTotal;
                    bool m_vULTotalHasBeenSet;

                    /**
                     * 高危漏洞风险数
                     */
                    int64_t m_vULHighLevel;
                    bool m_vULHighLevelHasBeenSet;

                    /**
                     * 配置项风险数量
                     */
                    int64_t m_cFGTotal;
                    bool m_cFGTotalHasBeenSet;

                    /**
                     * 高危配置项风险数量
                     */
                    int64_t m_cFGHighLevel;
                    bool m_cFGHighLevelHasBeenSet;

                    /**
                     * 测绘服务风险数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_serverTotal;
                    bool m_serverTotalHasBeenSet;

                    /**
                     * 测绘服务高危数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_serverHighLevel;
                    bool m_serverHighLevelHasBeenSet;

                    /**
                     * 主机基线风险数量
                     */
                    int64_t m_hostBaseLineRiskTotal;
                    bool m_hostBaseLineRiskTotalHasBeenSet;

                    /**
                     * 主机基线高危风险数量
                     */
                    int64_t m_hostBaseLineRiskHighLevel;
                    bool m_hostBaseLineRiskHighLevelHasBeenSet;

                    /**
                     * 容器基线风险数量
                     */
                    int64_t m_podBaseLineRiskTotal;
                    bool m_podBaseLineRiskTotalHasBeenSet;

                    /**
                     * 容器基线高危风险数量
                     */
                    int64_t m_podBaseLineRiskHighLevel;
                    bool m_podBaseLineRiskHighLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CSIPRISKCENTERSTATISTICS_H_

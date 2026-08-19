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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_RISKCENTEROVERVIEWTRENDANALYSIS_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_RISKCENTEROVERVIEWTRENDANALYSIS_H_

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
                * 风险趋势
                */
                class RiskCenterOverviewTrendAnalysis : public AbstractModel
                {
                public:
                    RiskCenterOverviewTrendAnalysis();
                    ~RiskCenterOverviewTrendAnalysis() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日期
                     * @return Date 日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置日期
                     * @param _date 日期
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取端口数
                     * @return Port 端口数
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置端口数
                     * @param _port 端口数
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
                     * 获取漏洞数
                     * @return VUL 漏洞数
                     * 
                     */
                    int64_t GetVUL() const;

                    /**
                     * 设置漏洞数
                     * @param _vUL 漏洞数
                     * 
                     */
                    void SetVUL(const int64_t& _vUL);

                    /**
                     * 判断参数 VUL 是否已赋值
                     * @return VUL 是否已赋值
                     * 
                     */
                    bool VULHasBeenSet() const;

                    /**
                     * 获取弱口令数
                     * @return WeakPassword 弱口令数
                     * 
                     */
                    int64_t GetWeakPassword() const;

                    /**
                     * 设置弱口令数
                     * @param _weakPassword 弱口令数
                     * 
                     */
                    void SetWeakPassword(const int64_t& _weakPassword);

                    /**
                     * 判断参数 WeakPassword 是否已赋值
                     * @return WeakPassword 是否已赋值
                     * 
                     */
                    bool WeakPasswordHasBeenSet() const;

                    /**
                     * 获取网站数
                     * @return Website 网站数
                     * 
                     */
                    int64_t GetWebsite() const;

                    /**
                     * 设置网站数
                     * @param _website 网站数
                     * 
                     */
                    void SetWebsite(const int64_t& _website);

                    /**
                     * 判断参数 Website 是否已赋值
                     * @return Website 是否已赋值
                     * 
                     */
                    bool WebsiteHasBeenSet() const;

                    /**
                     * 获取配置数
                     * @return CFG 配置数
                     * 
                     */
                    int64_t GetCFG() const;

                    /**
                     * 设置配置数
                     * @param _cFG 配置数
                     * 
                     */
                    void SetCFG(const int64_t& _cFG);

                    /**
                     * 判断参数 CFG 是否已赋值
                     * @return CFG 是否已赋值
                     * 
                     */
                    bool CFGHasBeenSet() const;

                    /**
                     * 获取测绘风险数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Server 测绘风险数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetServer() const;

                    /**
                     * 设置测绘风险数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _server 测绘风险数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServer(const int64_t& _server);

                    /**
                     * 判断参数 Server 是否已赋值
                     * @return Server 是否已赋值
                     * 
                     */
                    bool ServerHasBeenSet() const;

                    /**
                     * 获取主机风险配置数量
                     * @return HostCFG 主机风险配置数量
                     * 
                     */
                    int64_t GetHostCFG() const;

                    /**
                     * 设置主机风险配置数量
                     * @param _hostCFG 主机风险配置数量
                     * 
                     */
                    void SetHostCFG(const int64_t& _hostCFG);

                    /**
                     * 判断参数 HostCFG 是否已赋值
                     * @return HostCFG 是否已赋值
                     * 
                     */
                    bool HostCFGHasBeenSet() const;

                    /**
                     * 获取容器基线风险配置数量
                     * @return PodCFG 容器基线风险配置数量
                     * 
                     */
                    int64_t GetPodCFG() const;

                    /**
                     * 设置容器基线风险配置数量
                     * @param _podCFG 容器基线风险配置数量
                     * 
                     */
                    void SetPodCFG(const int64_t& _podCFG);

                    /**
                     * 判断参数 PodCFG 是否已赋值
                     * @return PodCFG 是否已赋值
                     * 
                     */
                    bool PodCFGHasBeenSet() const;

                private:

                    /**
                     * 日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 端口数
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 漏洞数
                     */
                    int64_t m_vUL;
                    bool m_vULHasBeenSet;

                    /**
                     * 弱口令数
                     */
                    int64_t m_weakPassword;
                    bool m_weakPasswordHasBeenSet;

                    /**
                     * 网站数
                     */
                    int64_t m_website;
                    bool m_websiteHasBeenSet;

                    /**
                     * 配置数
                     */
                    int64_t m_cFG;
                    bool m_cFGHasBeenSet;

                    /**
                     * 测绘风险数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_server;
                    bool m_serverHasBeenSet;

                    /**
                     * 主机风险配置数量
                     */
                    int64_t m_hostCFG;
                    bool m_hostCFGHasBeenSet;

                    /**
                     * 容器基线风险配置数量
                     */
                    int64_t m_podCFG;
                    bool m_podCFGHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_RISKCENTEROVERVIEWTRENDANALYSIS_H_

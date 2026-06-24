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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_ENABLESPARKAPPMONITORINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_ENABLESPARKAPPMONITORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * spark开启app监控 对应的Prometheus
                */
                class EnableSparkAppMonitorInfo : public AbstractModel
                {
                public:
                    EnableSparkAppMonitorInfo();
                    ~EnableSparkAppMonitorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrometheusInstanceId <p>实例id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrometheusInstanceId() const;

                    /**
                     * 设置<p>实例id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _prometheusInstanceId <p>实例id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrometheusInstanceId(const std::string& _prometheusInstanceId);

                    /**
                     * 判断参数 PrometheusInstanceId 是否已赋值
                     * @return PrometheusInstanceId 是否已赋值
                     * 
                     */
                    bool PrometheusInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>grafana实例id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GrafanaInstanceId <p>grafana实例id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGrafanaInstanceId() const;

                    /**
                     * 设置<p>grafana实例id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _grafanaInstanceId <p>grafana实例id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGrafanaInstanceId(const std::string& _grafanaInstanceId);

                    /**
                     * 判断参数 GrafanaInstanceId 是否已赋值
                     * @return GrafanaInstanceId 是否已赋值
                     * 
                     */
                    bool GrafanaInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>开启关闭状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableMonitor <p>开启关闭状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableMonitor() const;

                    /**
                     * 设置<p>开启关闭状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableMonitor <p>开启关闭状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableMonitor(const bool& _enableMonitor);

                    /**
                     * 判断参数 EnableMonitor 是否已赋值
                     * @return EnableMonitor 是否已赋值
                     * 
                     */
                    bool EnableMonitorHasBeenSet() const;

                    /**
                     * 获取<p>grafana访问地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GrafanaURL <p>grafana访问地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGrafanaURL() const;

                    /**
                     * 设置<p>grafana访问地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _grafanaURL <p>grafana访问地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGrafanaURL(const std::string& _grafanaURL);

                    /**
                     * 判断参数 GrafanaURL 是否已赋值
                     * @return GrafanaURL 是否已赋值
                     * 
                     */
                    bool GrafanaURLHasBeenSet() const;

                private:

                    /**
                     * <p>实例id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_prometheusInstanceId;
                    bool m_prometheusInstanceIdHasBeenSet;

                    /**
                     * <p>grafana实例id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_grafanaInstanceId;
                    bool m_grafanaInstanceIdHasBeenSet;

                    /**
                     * <p>开启关闭状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableMonitor;
                    bool m_enableMonitorHasBeenSet;

                    /**
                     * <p>grafana访问地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_grafanaURL;
                    bool m_grafanaURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_ENABLESPARKAPPMONITORINFO_H_

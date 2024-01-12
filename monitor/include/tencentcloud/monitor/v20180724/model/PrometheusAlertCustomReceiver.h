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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTCUSTOMRECEIVER_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTCUSTOMRECEIVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusAlertAllowTimeRange.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Prometheus告警自定义通知模板
                */
                class PrometheusAlertCustomReceiver : public AbstractModel
                {
                public:
                    PrometheusAlertCustomReceiver();
                    ~PrometheusAlertCustomReceiver() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义通知类型
alertmanager -- vpc内自建alertmanager
webhook -- vpc内webhook地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 自定义通知类型
alertmanager -- vpc内自建alertmanager
webhook -- vpc内webhook地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置自定义通知类型
alertmanager -- vpc内自建alertmanager
webhook -- vpc内webhook地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 自定义通知类型
alertmanager -- vpc内自建alertmanager
webhook -- vpc内webhook地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取alertmanager/webhook地址。（prometheus实例同vpc内ip）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url alertmanager/webhook地址。（prometheus实例同vpc内ip）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置alertmanager/webhook地址。（prometheus实例同vpc内ip）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url alertmanager/webhook地址。（prometheus实例同vpc内ip）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取允许发送告警的时间范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllowedTimeRanges 允许发送告警的时间范围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusAlertAllowTimeRange> GetAllowedTimeRanges() const;

                    /**
                     * 设置允许发送告警的时间范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allowedTimeRanges 允许发送告警的时间范围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllowedTimeRanges(const std::vector<PrometheusAlertAllowTimeRange>& _allowedTimeRanges);

                    /**
                     * 判断参数 AllowedTimeRanges 是否已赋值
                     * @return AllowedTimeRanges 是否已赋值
                     * 
                     */
                    bool AllowedTimeRangesHasBeenSet() const;

                    /**
                     * 获取alertmanager所在的内网集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId alertmanager所在的内网集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置alertmanager所在的内网集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId alertmanager所在的内网集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取alertmanager所在的内网集群类型(tke/eks/tdcc)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterType alertmanager所在的内网集群类型(tke/eks/tdcc)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置alertmanager所在的内网集群类型(tke/eks/tdcc)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterType alertmanager所在的内网集群类型(tke/eks/tdcc)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                private:

                    /**
                     * 自定义通知类型
alertmanager -- vpc内自建alertmanager
webhook -- vpc内webhook地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * alertmanager/webhook地址。（prometheus实例同vpc内ip）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 允许发送告警的时间范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusAlertAllowTimeRange> m_allowedTimeRanges;
                    bool m_allowedTimeRangesHasBeenSet;

                    /**
                     * alertmanager所在的内网集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * alertmanager所在的内网集群类型(tke/eks/tdcc)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTCUSTOMRECEIVER_H_

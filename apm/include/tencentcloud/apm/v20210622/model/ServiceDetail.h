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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_SERVICEDETAIL_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_SERVICEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 应用详细信息
                */
                class ServiceDetail : public AbstractModel
                {
                public:
                    ServiceDetail();
                    ~ServiceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceID <p>应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceID() const;

                    /**
                     * 设置<p>应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceID <p>应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceID(const std::string& _serviceID);

                    /**
                     * 判断参数 ServiceID 是否已赋值
                     * @return ServiceID 是否已赋值
                     * 
                     */
                    bool ServiceIDHasBeenSet() const;

                    /**
                     * 获取<p>业务系统ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceKey <p>业务系统ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置<p>业务系统ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceKey <p>业务系统ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                    /**
                     * 获取<p>用户appid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppID <p>用户appid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置<p>用户appid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appID <p>用户appid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>主账号uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUIN <p>主账号uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUIN() const;

                    /**
                     * 设置<p>主账号uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUIN <p>主账号uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateUIN(const std::string& _createUIN);

                    /**
                     * 判断参数 CreateUIN 是否已赋值
                     * @return CreateUIN 是否已赋值
                     * 
                     */
                    bool CreateUINHasBeenSet() const;

                    /**
                     * 获取<p>应用名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceName <p>应用名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>应用名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceName <p>应用名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取<p>应用描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceDescription <p>应用描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceDescription() const;

                    /**
                     * 设置<p>应用描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceDescription <p>应用描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceDescription(const std::string& _serviceDescription);

                    /**
                     * 判断参数 ServiceDescription 是否已赋值
                     * @return ServiceDescription 是否已赋值
                     * 
                     */
                    bool ServiceDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置<p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>业务系统名称</p>
                     * @return InstanceName <p>业务系统名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>业务系统名称</p>
                     * @param _instanceName <p>业务系统名称</p>
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
                     * 获取<p>阈值配置开关。true 表示使用应用级阈值；false 表示使用业务系统级阈值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableThresholdConfig <p>阈值配置开关。true 表示使用应用级阈值；false 表示使用业务系统级阈值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableThresholdConfig() const;

                    /**
                     * 设置<p>阈值配置开关。true 表示使用应用级阈值；false 表示使用业务系统级阈值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableThresholdConfig <p>阈值配置开关。true 表示使用应用级阈值；false 表示使用业务系统级阈值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableThresholdConfig(const bool& _enableThresholdConfig);

                    /**
                     * 判断参数 EnableThresholdConfig 是否已赋值
                     * @return EnableThresholdConfig 是否已赋值
                     * 
                     */
                    bool EnableThresholdConfigHasBeenSet() const;

                    /**
                     * 获取<p>错误率阈值（%），用于判断应用健康状态为&quot;红色&quot;</p><p>单位：%</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrRateThreshold <p>错误率阈值（%），用于判断应用健康状态为&quot;红色&quot;</p><p>单位：%</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetErrRateThreshold() const;

                    /**
                     * 设置<p>错误率阈值（%），用于判断应用健康状态为&quot;红色&quot;</p><p>单位：%</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errRateThreshold <p>错误率阈值（%），用于判断应用健康状态为&quot;红色&quot;</p><p>单位：%</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrRateThreshold(const int64_t& _errRateThreshold);

                    /**
                     * 判断参数 ErrRateThreshold 是否已赋值
                     * @return ErrRateThreshold 是否已赋值
                     * 
                     */
                    bool ErrRateThresholdHasBeenSet() const;

                    /**
                     * 获取<p>响应时间预警阈值（ms），用于判断应用健康状态为&quot;黄色&quot;</p><p>单位：ms</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseDurationWarningThreshold <p>响应时间预警阈值（ms），用于判断应用健康状态为&quot;黄色&quot;</p><p>单位：ms</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetResponseDurationWarningThreshold() const;

                    /**
                     * 设置<p>响应时间预警阈值（ms），用于判断应用健康状态为&quot;黄色&quot;</p><p>单位：ms</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _responseDurationWarningThreshold <p>响应时间预警阈值（ms），用于判断应用健康状态为&quot;黄色&quot;</p><p>单位：ms</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResponseDurationWarningThreshold(const int64_t& _responseDurationWarningThreshold);

                    /**
                     * 判断参数 ResponseDurationWarningThreshold 是否已赋值
                     * @return ResponseDurationWarningThreshold 是否已赋值
                     * 
                     */
                    bool ResponseDurationWarningThresholdHasBeenSet() const;

                private:

                    /**
                     * <p>应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceID;
                    bool m_serviceIDHasBeenSet;

                    /**
                     * <p>业务系统ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * <p>用户appid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>主账号uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUIN;
                    bool m_createUINHasBeenSet;

                    /**
                     * <p>应用名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>应用描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceDescription;
                    bool m_serviceDescriptionHasBeenSet;

                    /**
                     * <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>业务系统名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>阈值配置开关。true 表示使用应用级阈值；false 表示使用业务系统级阈值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableThresholdConfig;
                    bool m_enableThresholdConfigHasBeenSet;

                    /**
                     * <p>错误率阈值（%），用于判断应用健康状态为&quot;红色&quot;</p><p>单位：%</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_errRateThreshold;
                    bool m_errRateThresholdHasBeenSet;

                    /**
                     * <p>响应时间预警阈值（ms），用于判断应用健康状态为&quot;黄色&quot;</p><p>单位：ms</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_responseDurationWarningThreshold;
                    bool m_responseDurationWarningThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_SERVICEDETAIL_H_

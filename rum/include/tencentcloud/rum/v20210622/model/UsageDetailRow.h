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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_USAGEDETAILROW_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_USAGEDETAILROW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/UsageTimePoint.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 用量明细行
                */
                class UsageDetailRow : public AbstractModel
                {
                public:
                    UsageDetailRow();
                    ~UsageDetailRow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>业务系统 ID</p>
                     * @return InstanceId <p>业务系统 ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>业务系统 ID</p>
                     * @param _instanceId <p>业务系统 ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

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
                     * 获取<p>业务系统状态</p>
                     * @return InstanceStatus <p>业务系统状态</p>
                     * 
                     */
                    int64_t GetInstanceStatus() const;

                    /**
                     * 设置<p>业务系统状态</p>
                     * @param _instanceStatus <p>业务系统状态</p>
                     * 
                     */
                    void SetInstanceStatus(const int64_t& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取<p>应用 ID</p>
                     * @return AppId <p>应用 ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID</p>
                     * @param _appId <p>应用 ID</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>应用名称</p>
                     * @return AppName <p>应用名称</p>
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置<p>应用名称</p>
                     * @param _appName <p>应用名称</p>
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取<p>端类型</p>
                     * @return AppType <p>端类型</p>
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置<p>端类型</p>
                     * @param _appType <p>端类型</p>
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取<p>应用状态</p>
                     * @return AppStatus <p>应用状态</p>
                     * 
                     */
                    int64_t GetAppStatus() const;

                    /**
                     * 设置<p>应用状态</p>
                     * @param _appStatus <p>应用状态</p>
                     * 
                     */
                    void SetAppStatus(const int64_t& _appStatus);

                    /**
                     * 判断参数 AppStatus 是否已赋值
                     * @return AppStatus 是否已赋值
                     * 
                     */
                    bool AppStatusHasBeenSet() const;

                    /**
                     * 获取<p>上报量</p>
                     * @return ReportVolume <p>上报量</p>
                     * 
                     */
                    int64_t GetReportVolume() const;

                    /**
                     * 设置<p>上报量</p>
                     * @param _reportVolume <p>上报量</p>
                     * 
                     */
                    void SetReportVolume(const int64_t& _reportVolume);

                    /**
                     * 判断参数 ReportVolume 是否已赋值
                     * @return ReportVolume 是否已赋值
                     * 
                     */
                    bool ReportVolumeHasBeenSet() const;

                    /**
                     * 获取<p>占当前结果集比例</p>
                     * @return Percent <p>占当前结果集比例</p>
                     * 
                     */
                    double GetPercent() const;

                    /**
                     * 设置<p>占当前结果集比例</p>
                     * @param _percent <p>占当前结果集比例</p>
                     * 
                     */
                    void SetPercent(const double& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取<p>行趋势</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ByDate <p>行趋势</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UsageTimePoint> GetByDate() const;

                    /**
                     * 设置<p>行趋势</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _byDate <p>行趋势</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetByDate(const std::vector<UsageTimePoint>& _byDate);

                    /**
                     * 判断参数 ByDate 是否已赋值
                     * @return ByDate 是否已赋值
                     * 
                     */
                    bool ByDateHasBeenSet() const;

                private:

                    /**
                     * <p>业务系统 ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>业务系统名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>业务系统状态</p>
                     */
                    int64_t m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>应用 ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>应用名称</p>
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * <p>端类型</p>
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * <p>应用状态</p>
                     */
                    int64_t m_appStatus;
                    bool m_appStatusHasBeenSet;

                    /**
                     * <p>上报量</p>
                     */
                    int64_t m_reportVolume;
                    bool m_reportVolumeHasBeenSet;

                    /**
                     * <p>占当前结果集比例</p>
                     */
                    double m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * <p>行趋势</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UsageTimePoint> m_byDate;
                    bool m_byDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_USAGEDETAILROW_H_

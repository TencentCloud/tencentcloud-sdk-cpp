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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_REPORTDATA_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_REPORTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * CDN报表数据
                */
                class ReportData : public AbstractModel
                {
                public:
                    ReportData();
                    ~ReportData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目ID/域名ID。
                     * @return ResourceId 项目ID/域名ID。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置项目ID/域名ID。
                     * @param _resourceId 项目ID/域名ID。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取项目名称/域名。
                     * @return Resource 项目名称/域名。
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置项目名称/域名。
                     * @param _resource 项目名称/域名。
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取流量总和/带宽最大值，单位分别为bytes，bps。
                     * @return Value 流量总和/带宽最大值，单位分别为bytes，bps。
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置流量总和/带宽最大值，单位分别为bytes，bps。
                     * @param _value 流量总和/带宽最大值，单位分别为bytes，bps。
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取单个资源占总体百分比。
                     * @return Percentage 单个资源占总体百分比。
                     * 
                     */
                    double GetPercentage() const;

                    /**
                     * 设置单个资源占总体百分比。
                     * @param _percentage 单个资源占总体百分比。
                     * 
                     */
                    void SetPercentage(const double& _percentage);

                    /**
                     * 判断参数 Percentage 是否已赋值
                     * @return Percentage 是否已赋值
                     * 
                     */
                    bool PercentageHasBeenSet() const;

                    /**
                     * 获取计费流量总和/计费带宽最大值，单位分别为bytes，bps。
                     * @return BillingValue 计费流量总和/计费带宽最大值，单位分别为bytes，bps。
                     * 
                     */
                    int64_t GetBillingValue() const;

                    /**
                     * 设置计费流量总和/计费带宽最大值，单位分别为bytes，bps。
                     * @param _billingValue 计费流量总和/计费带宽最大值，单位分别为bytes，bps。
                     * 
                     */
                    void SetBillingValue(const int64_t& _billingValue);

                    /**
                     * 判断参数 BillingValue 是否已赋值
                     * @return BillingValue 是否已赋值
                     * 
                     */
                    bool BillingValueHasBeenSet() const;

                    /**
                     * 获取计费数值占总体百分比。
                     * @return BillingPercentage 计费数值占总体百分比。
                     * 
                     */
                    double GetBillingPercentage() const;

                    /**
                     * 设置计费数值占总体百分比。
                     * @param _billingPercentage 计费数值占总体百分比。
                     * 
                     */
                    void SetBillingPercentage(const double& _billingPercentage);

                    /**
                     * 判断参数 BillingPercentage 是否已赋值
                     * @return BillingPercentage 是否已赋值
                     * 
                     */
                    bool BillingPercentageHasBeenSet() const;

                private:

                    /**
                     * 项目ID/域名ID。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 项目名称/域名。
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 流量总和/带宽最大值，单位分别为bytes，bps。
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 单个资源占总体百分比。
                     */
                    double m_percentage;
                    bool m_percentageHasBeenSet;

                    /**
                     * 计费流量总和/计费带宽最大值，单位分别为bytes，bps。
                     */
                    int64_t m_billingValue;
                    bool m_billingValueHasBeenSet;

                    /**
                     * 计费数值占总体百分比。
                     */
                    double m_billingPercentage;
                    bool m_billingPercentageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_REPORTDATA_H_

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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_HEALTHCHECKCONF_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_HEALTHCHECKCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 健康检查配置，包括TsfHealthCheckConf和TargetServicesHealthCheckConf
                */
                class HealthCheckConf : public AbstractModel
                {
                public:
                    HealthCheckConf();
                    ~HealthCheckConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启健康检查。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsHealthCheck 是否开启健康检查。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsHealthCheck() const;

                    /**
                     * 设置是否开启健康检查。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isHealthCheck 是否开启健康检查。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsHealthCheck(const bool& _isHealthCheck);

                    /**
                     * 判断参数 IsHealthCheck 是否已赋值
                     * @return IsHealthCheck 是否已赋值
                     * 
                     */
                    bool IsHealthCheckHasBeenSet() const;

                    /**
                     * 获取健康检查阈值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestVolumeThreshold 健康检查阈值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRequestVolumeThreshold() const;

                    /**
                     * 设置健康检查阈值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestVolumeThreshold 健康检查阈值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestVolumeThreshold(const int64_t& _requestVolumeThreshold);

                    /**
                     * 判断参数 RequestVolumeThreshold 是否已赋值
                     * @return RequestVolumeThreshold 是否已赋值
                     * 
                     */
                    bool RequestVolumeThresholdHasBeenSet() const;

                    /**
                     * 获取窗口大小。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SleepWindowInMilliseconds 窗口大小。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSleepWindowInMilliseconds() const;

                    /**
                     * 设置窗口大小。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sleepWindowInMilliseconds 窗口大小。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSleepWindowInMilliseconds(const int64_t& _sleepWindowInMilliseconds);

                    /**
                     * 判断参数 SleepWindowInMilliseconds 是否已赋值
                     * @return SleepWindowInMilliseconds 是否已赋值
                     * 
                     */
                    bool SleepWindowInMillisecondsHasBeenSet() const;

                    /**
                     * 获取阈值百分比。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorThresholdPercentage 阈值百分比。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetErrorThresholdPercentage() const;

                    /**
                     * 设置阈值百分比。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorThresholdPercentage 阈值百分比。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorThresholdPercentage(const int64_t& _errorThresholdPercentage);

                    /**
                     * 判断参数 ErrorThresholdPercentage 是否已赋值
                     * @return ErrorThresholdPercentage 是否已赋值
                     * 
                     */
                    bool ErrorThresholdPercentageHasBeenSet() const;

                private:

                    /**
                     * 是否开启健康检查。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isHealthCheck;
                    bool m_isHealthCheckHasBeenSet;

                    /**
                     * 健康检查阈值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_requestVolumeThreshold;
                    bool m_requestVolumeThresholdHasBeenSet;

                    /**
                     * 窗口大小。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sleepWindowInMilliseconds;
                    bool m_sleepWindowInMillisecondsHasBeenSet;

                    /**
                     * 阈值百分比。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_errorThresholdPercentage;
                    bool m_errorThresholdPercentageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_HEALTHCHECKCONF_H_

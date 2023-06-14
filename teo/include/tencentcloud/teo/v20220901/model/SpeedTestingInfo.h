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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SpeedTestingConfig.h>
#include <tencentcloud/teo/v20220901/model/SpeedTestingStatistics.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 拨测结果信息
                */
                class SpeedTestingInfo : public AbstractModel
                {
                public:
                    SpeedTestingInfo();
                    ~SpeedTestingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务状态，取值有：
<li> 200：任务完成;</li>
<li> 100：任务进行中；</li>
<li> 503: 任务失败。</li>
                     * @return StatusCode 任务状态，取值有：
<li> 200：任务完成;</li>
<li> 100：任务进行中；</li>
<li> 503: 任务失败。</li>
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置任务状态，取值有：
<li> 200：任务完成;</li>
<li> 100：任务进行中；</li>
<li> 503: 任务失败。</li>
                     * @param _statusCode 任务状态，取值有：
<li> 200：任务完成;</li>
<li> 100：任务进行中；</li>
<li> 503: 任务失败。</li>
                     * 
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取拨测任务 ID。
                     * @return TestId 拨测任务 ID。
                     * 
                     */
                    std::string GetTestId() const;

                    /**
                     * 设置拨测任务 ID。
                     * @param _testId 拨测任务 ID。
                     * 
                     */
                    void SetTestId(const std::string& _testId);

                    /**
                     * 判断参数 TestId 是否已赋值
                     * @return TestId 是否已赋值
                     * 
                     */
                    bool TestIdHasBeenSet() const;

                    /**
                     * 获取拨测任务配置。
                     * @return SpeedTestingConfig 拨测任务配置。
                     * 
                     */
                    SpeedTestingConfig GetSpeedTestingConfig() const;

                    /**
                     * 设置拨测任务配置。
                     * @param _speedTestingConfig 拨测任务配置。
                     * 
                     */
                    void SetSpeedTestingConfig(const SpeedTestingConfig& _speedTestingConfig);

                    /**
                     * 判断参数 SpeedTestingConfig 是否已赋值
                     * @return SpeedTestingConfig 是否已赋值
                     * 
                     */
                    bool SpeedTestingConfigHasBeenSet() const;

                    /**
                     * 获取拨测任务统计结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpeedTestingStatistics 拨测任务统计结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SpeedTestingStatistics GetSpeedTestingStatistics() const;

                    /**
                     * 设置拨测任务统计结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _speedTestingStatistics 拨测任务统计结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpeedTestingStatistics(const SpeedTestingStatistics& _speedTestingStatistics);

                    /**
                     * 判断参数 SpeedTestingStatistics 是否已赋值
                     * @return SpeedTestingStatistics 是否已赋值
                     * 
                     */
                    bool SpeedTestingStatisticsHasBeenSet() const;

                private:

                    /**
                     * 任务状态，取值有：
<li> 200：任务完成;</li>
<li> 100：任务进行中；</li>
<li> 503: 任务失败。</li>
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * 拨测任务 ID。
                     */
                    std::string m_testId;
                    bool m_testIdHasBeenSet;

                    /**
                     * 拨测任务配置。
                     */
                    SpeedTestingConfig m_speedTestingConfig;
                    bool m_speedTestingConfigHasBeenSet;

                    /**
                     * 拨测任务统计结果。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SpeedTestingStatistics m_speedTestingStatistics;
                    bool m_speedTestingStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGINFO_H_

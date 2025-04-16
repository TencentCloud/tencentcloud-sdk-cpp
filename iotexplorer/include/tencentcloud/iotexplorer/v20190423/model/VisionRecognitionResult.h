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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_VISIONRECOGNITIONRESULT_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_VISIONRECOGNITIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeSee 语义理解结果
                */
                class VisionRecognitionResult : public AbstractModel
                {
                public:
                    VisionRecognitionResult();
                    ~VisionRecognitionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务状态（1：失败；2：成功但结果为空；3：成功且结果非空）
                     * @return Status 任务状态（1：失败；2：成功但结果为空；3：成功且结果非空）
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态（1：失败；2：成功但结果为空；3：成功且结果非空）
                     * @param _status 任务状态（1：失败；2：成功但结果为空；3：成功且结果非空）
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取识别到的目标类型。可能取值：

- `person`：人
- `vehicle`：车辆
- `dog`：狗
- `cat`：猫
- `fire`：火焰
- `smoke`：烟雾
- `package`：快递包裹
- `license_plate`：车牌

                     * @return DetectedClassifications 识别到的目标类型。可能取值：

- `person`：人
- `vehicle`：车辆
- `dog`：狗
- `cat`：猫
- `fire`：火焰
- `smoke`：烟雾
- `package`：快递包裹
- `license_plate`：车牌

                     * 
                     */
                    std::vector<std::string> GetDetectedClassifications() const;

                    /**
                     * 设置识别到的目标类型。可能取值：

- `person`：人
- `vehicle`：车辆
- `dog`：狗
- `cat`：猫
- `fire`：火焰
- `smoke`：烟雾
- `package`：快递包裹
- `license_plate`：车牌

                     * @param _detectedClassifications 识别到的目标类型。可能取值：

- `person`：人
- `vehicle`：车辆
- `dog`：狗
- `cat`：猫
- `fire`：火焰
- `smoke`：烟雾
- `package`：快递包裹
- `license_plate`：车牌

                     * 
                     */
                    void SetDetectedClassifications(const std::vector<std::string>& _detectedClassifications);

                    /**
                     * 判断参数 DetectedClassifications 是否已赋值
                     * @return DetectedClassifications 是否已赋值
                     * 
                     */
                    bool DetectedClassificationsHasBeenSet() const;

                    /**
                     * 获取视频摘要文本
                     * @return Summary 视频摘要文本
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置视频摘要文本
                     * @param _summary 视频摘要文本
                     * 
                     */
                    void SetSummary(const std::string& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                private:

                    /**
                     * 任务状态（1：失败；2：成功但结果为空；3：成功且结果非空）
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 识别到的目标类型。可能取值：

- `person`：人
- `vehicle`：车辆
- `dog`：狗
- `cat`：猫
- `fire`：火焰
- `smoke`：烟雾
- `package`：快递包裹
- `license_plate`：车牌

                     */
                    std::vector<std::string> m_detectedClassifications;
                    bool m_detectedClassificationsHasBeenSet;

                    /**
                     * 视频摘要文本
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_VISIONRECOGNITIONRESULT_H_

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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AICONTENTREVIEWRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AICONTENTREVIEWRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiReviewTaskPornResult.h>
#include <tencentcloud/mps/v20190612/model/AiReviewTaskTerrorismResult.h>
#include <tencentcloud/mps/v20190612/model/AiReviewTaskPoliticalResult.h>
#include <tencentcloud/mps/v20190612/model/AiReviewTaskPornAsrResult.h>
#include <tencentcloud/mps/v20190612/model/AiReviewTaskPornOcrResult.h>
#include <tencentcloud/mps/v20190612/model/AiReviewTaskPoliticalAsrResult.h>
#include <tencentcloud/mps/v20190612/model/AiReviewTaskPoliticalOcrResult.h>
#include <tencentcloud/mps/v20190612/model/AiReviewTaskTerrorismOcrResult.h>
#include <tencentcloud/mps/v20190612/model/AiReviewTaskProhibitedAsrResult.h>
#include <tencentcloud/mps/v20190612/model/AiReviewTaskProhibitedOcrResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 内容审核结果
                */
                class AiContentReviewResult : public AbstractModel
                {
                public:
                    AiContentReviewResult();
                    ~AiContentReviewResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务的类型，可以取的值有：
<li>Porn：图片鉴黄</li>
<li>Terrorism：图片敏感</li>
<li>Political：图片敏感</li>
<li>Porn.Asr：Asr 文字鉴黄</li>
<li>Porn.Ocr：Ocr 文字鉴黄</li>
<li>Political.Asr：Asr 文字敏感</li>
<li>Political.Ocr：Ocr 文字敏感</li>
<li>Terrorism.Ocr：Ocr 文字敏感</li>
<li>Prohibited.Asr：Asr 文字鉴违禁</li>
<li>Prohibited.Ocr：Ocr 文字鉴违禁</li>
                     * @return Type 任务的类型，可以取的值有：
<li>Porn：图片鉴黄</li>
<li>Terrorism：图片敏感</li>
<li>Political：图片敏感</li>
<li>Porn.Asr：Asr 文字鉴黄</li>
<li>Porn.Ocr：Ocr 文字鉴黄</li>
<li>Political.Asr：Asr 文字敏感</li>
<li>Political.Ocr：Ocr 文字敏感</li>
<li>Terrorism.Ocr：Ocr 文字敏感</li>
<li>Prohibited.Asr：Asr 文字鉴违禁</li>
<li>Prohibited.Ocr：Ocr 文字鉴违禁</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置任务的类型，可以取的值有：
<li>Porn：图片鉴黄</li>
<li>Terrorism：图片敏感</li>
<li>Political：图片敏感</li>
<li>Porn.Asr：Asr 文字鉴黄</li>
<li>Porn.Ocr：Ocr 文字鉴黄</li>
<li>Political.Asr：Asr 文字敏感</li>
<li>Political.Ocr：Ocr 文字敏感</li>
<li>Terrorism.Ocr：Ocr 文字敏感</li>
<li>Prohibited.Asr：Asr 文字鉴违禁</li>
<li>Prohibited.Ocr：Ocr 文字鉴违禁</li>
                     * @param _type 任务的类型，可以取的值有：
<li>Porn：图片鉴黄</li>
<li>Terrorism：图片敏感</li>
<li>Political：图片敏感</li>
<li>Porn.Asr：Asr 文字鉴黄</li>
<li>Porn.Ocr：Ocr 文字鉴黄</li>
<li>Political.Asr：Asr 文字敏感</li>
<li>Political.Ocr：Ocr 文字敏感</li>
<li>Terrorism.Ocr：Ocr 文字敏感</li>
<li>Prohibited.Asr：Asr 文字鉴违禁</li>
<li>Prohibited.Ocr：Ocr 文字鉴违禁</li>
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
                     * 获取采样频率，即对视频每秒截取进行审核的帧数。
                     * @return SampleRate 采样频率，即对视频每秒截取进行审核的帧数。
                     * 
                     */
                    double GetSampleRate() const;

                    /**
                     * 设置采样频率，即对视频每秒截取进行审核的帧数。
                     * @param _sampleRate 采样频率，即对视频每秒截取进行审核的帧数。
                     * 
                     */
                    void SetSampleRate(const double& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取审核的视频时长，单位：秒。
                     * @return Duration 审核的视频时长，单位：秒。
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置审核的视频时长，单位：秒。
                     * @param _duration 审核的视频时长，单位：秒。
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取视频内容审核智能画面鉴黄任务的查询结果，当任务类型为 Porn 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PornTask 视频内容审核智能画面鉴黄任务的查询结果，当任务类型为 Porn 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiReviewTaskPornResult GetPornTask() const;

                    /**
                     * 设置视频内容审核智能画面鉴黄任务的查询结果，当任务类型为 Porn 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pornTask 视频内容审核智能画面鉴黄任务的查询结果，当任务类型为 Porn 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPornTask(const AiReviewTaskPornResult& _pornTask);

                    /**
                     * 判断参数 PornTask 是否已赋值
                     * @return PornTask 是否已赋值
                     * 
                     */
                    bool PornTaskHasBeenSet() const;

                    /**
                     * 获取视频内容审核智能画面敏感任务的查询结果，当任务类型为 Terrorism 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TerrorismTask 视频内容审核智能画面敏感任务的查询结果，当任务类型为 Terrorism 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiReviewTaskTerrorismResult GetTerrorismTask() const;

                    /**
                     * 设置视频内容审核智能画面敏感任务的查询结果，当任务类型为 Terrorism 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _terrorismTask 视频内容审核智能画面敏感任务的查询结果，当任务类型为 Terrorism 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTerrorismTask(const AiReviewTaskTerrorismResult& _terrorismTask);

                    /**
                     * 判断参数 TerrorismTask 是否已赋值
                     * @return TerrorismTask 是否已赋值
                     * 
                     */
                    bool TerrorismTaskHasBeenSet() const;

                    /**
                     * 获取视频内容审核智能画面敏感任务的查询结果，当任务类型为 Political 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PoliticalTask 视频内容审核智能画面敏感任务的查询结果，当任务类型为 Political 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiReviewTaskPoliticalResult GetPoliticalTask() const;

                    /**
                     * 设置视频内容审核智能画面敏感任务的查询结果，当任务类型为 Political 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _politicalTask 视频内容审核智能画面敏感任务的查询结果，当任务类型为 Political 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPoliticalTask(const AiReviewTaskPoliticalResult& _politicalTask);

                    /**
                     * 判断参数 PoliticalTask 是否已赋值
                     * @return PoliticalTask 是否已赋值
                     * 
                     */
                    bool PoliticalTaskHasBeenSet() const;

                    /**
                     * 获取视频内容审核 Asr 文字鉴黄任务的查询结果，当任务类型为 Porn.Asr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PornAsrTask 视频内容审核 Asr 文字鉴黄任务的查询结果，当任务类型为 Porn.Asr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiReviewTaskPornAsrResult GetPornAsrTask() const;

                    /**
                     * 设置视频内容审核 Asr 文字鉴黄任务的查询结果，当任务类型为 Porn.Asr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pornAsrTask 视频内容审核 Asr 文字鉴黄任务的查询结果，当任务类型为 Porn.Asr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPornAsrTask(const AiReviewTaskPornAsrResult& _pornAsrTask);

                    /**
                     * 判断参数 PornAsrTask 是否已赋值
                     * @return PornAsrTask 是否已赋值
                     * 
                     */
                    bool PornAsrTaskHasBeenSet() const;

                    /**
                     * 获取视频内容审核 Ocr 文字鉴黄任务的查询结果，当任务类型为 Porn.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PornOcrTask 视频内容审核 Ocr 文字鉴黄任务的查询结果，当任务类型为 Porn.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiReviewTaskPornOcrResult GetPornOcrTask() const;

                    /**
                     * 设置视频内容审核 Ocr 文字鉴黄任务的查询结果，当任务类型为 Porn.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pornOcrTask 视频内容审核 Ocr 文字鉴黄任务的查询结果，当任务类型为 Porn.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPornOcrTask(const AiReviewTaskPornOcrResult& _pornOcrTask);

                    /**
                     * 判断参数 PornOcrTask 是否已赋值
                     * @return PornOcrTask 是否已赋值
                     * 
                     */
                    bool PornOcrTaskHasBeenSet() const;

                    /**
                     * 获取视频内容审核 Asr 文字敏感任务的查询结果，当任务类型为 Political.Asr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PoliticalAsrTask 视频内容审核 Asr 文字敏感任务的查询结果，当任务类型为 Political.Asr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiReviewTaskPoliticalAsrResult GetPoliticalAsrTask() const;

                    /**
                     * 设置视频内容审核 Asr 文字敏感任务的查询结果，当任务类型为 Political.Asr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _politicalAsrTask 视频内容审核 Asr 文字敏感任务的查询结果，当任务类型为 Political.Asr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPoliticalAsrTask(const AiReviewTaskPoliticalAsrResult& _politicalAsrTask);

                    /**
                     * 判断参数 PoliticalAsrTask 是否已赋值
                     * @return PoliticalAsrTask 是否已赋值
                     * 
                     */
                    bool PoliticalAsrTaskHasBeenSet() const;

                    /**
                     * 获取视频内容审核 Ocr 文字敏感任务的查询结果，当任务类型为 Political.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PoliticalOcrTask 视频内容审核 Ocr 文字敏感任务的查询结果，当任务类型为 Political.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiReviewTaskPoliticalOcrResult GetPoliticalOcrTask() const;

                    /**
                     * 设置视频内容审核 Ocr 文字敏感任务的查询结果，当任务类型为 Political.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _politicalOcrTask 视频内容审核 Ocr 文字敏感任务的查询结果，当任务类型为 Political.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPoliticalOcrTask(const AiReviewTaskPoliticalOcrResult& _politicalOcrTask);

                    /**
                     * 判断参数 PoliticalOcrTask 是否已赋值
                     * @return PoliticalOcrTask 是否已赋值
                     * 
                     */
                    bool PoliticalOcrTaskHasBeenSet() const;

                    /**
                     * 获取视频内容审核 Ocr 文字敏感任务的查询结果，当任务类型为 Terrorism.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TerrorismOcrTask 视频内容审核 Ocr 文字敏感任务的查询结果，当任务类型为 Terrorism.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiReviewTaskTerrorismOcrResult GetTerrorismOcrTask() const;

                    /**
                     * 设置视频内容审核 Ocr 文字敏感任务的查询结果，当任务类型为 Terrorism.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _terrorismOcrTask 视频内容审核 Ocr 文字敏感任务的查询结果，当任务类型为 Terrorism.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTerrorismOcrTask(const AiReviewTaskTerrorismOcrResult& _terrorismOcrTask);

                    /**
                     * 判断参数 TerrorismOcrTask 是否已赋值
                     * @return TerrorismOcrTask 是否已赋值
                     * 
                     */
                    bool TerrorismOcrTaskHasBeenSet() const;

                    /**
                     * 获取视频内容审核 Asr 文字鉴违禁任务的查询结果，当任务类型为 Prohibited.Asr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProhibitedAsrTask 视频内容审核 Asr 文字鉴违禁任务的查询结果，当任务类型为 Prohibited.Asr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiReviewTaskProhibitedAsrResult GetProhibitedAsrTask() const;

                    /**
                     * 设置视频内容审核 Asr 文字鉴违禁任务的查询结果，当任务类型为 Prohibited.Asr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _prohibitedAsrTask 视频内容审核 Asr 文字鉴违禁任务的查询结果，当任务类型为 Prohibited.Asr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProhibitedAsrTask(const AiReviewTaskProhibitedAsrResult& _prohibitedAsrTask);

                    /**
                     * 判断参数 ProhibitedAsrTask 是否已赋值
                     * @return ProhibitedAsrTask 是否已赋值
                     * 
                     */
                    bool ProhibitedAsrTaskHasBeenSet() const;

                    /**
                     * 获取视频内容审核 Ocr 文字鉴违禁任务的查询结果，当任务类型为 Prohibited.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProhibitedOcrTask 视频内容审核 Ocr 文字鉴违禁任务的查询结果，当任务类型为 Prohibited.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiReviewTaskProhibitedOcrResult GetProhibitedOcrTask() const;

                    /**
                     * 设置视频内容审核 Ocr 文字鉴违禁任务的查询结果，当任务类型为 Prohibited.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _prohibitedOcrTask 视频内容审核 Ocr 文字鉴违禁任务的查询结果，当任务类型为 Prohibited.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProhibitedOcrTask(const AiReviewTaskProhibitedOcrResult& _prohibitedOcrTask);

                    /**
                     * 判断参数 ProhibitedOcrTask 是否已赋值
                     * @return ProhibitedOcrTask 是否已赋值
                     * 
                     */
                    bool ProhibitedOcrTaskHasBeenSet() const;

                private:

                    /**
                     * 任务的类型，可以取的值有：
<li>Porn：图片鉴黄</li>
<li>Terrorism：图片敏感</li>
<li>Political：图片敏感</li>
<li>Porn.Asr：Asr 文字鉴黄</li>
<li>Porn.Ocr：Ocr 文字鉴黄</li>
<li>Political.Asr：Asr 文字敏感</li>
<li>Political.Ocr：Ocr 文字敏感</li>
<li>Terrorism.Ocr：Ocr 文字敏感</li>
<li>Prohibited.Asr：Asr 文字鉴违禁</li>
<li>Prohibited.Ocr：Ocr 文字鉴违禁</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 采样频率，即对视频每秒截取进行审核的帧数。
                     */
                    double m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 审核的视频时长，单位：秒。
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 视频内容审核智能画面鉴黄任务的查询结果，当任务类型为 Porn 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiReviewTaskPornResult m_pornTask;
                    bool m_pornTaskHasBeenSet;

                    /**
                     * 视频内容审核智能画面敏感任务的查询结果，当任务类型为 Terrorism 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiReviewTaskTerrorismResult m_terrorismTask;
                    bool m_terrorismTaskHasBeenSet;

                    /**
                     * 视频内容审核智能画面敏感任务的查询结果，当任务类型为 Political 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiReviewTaskPoliticalResult m_politicalTask;
                    bool m_politicalTaskHasBeenSet;

                    /**
                     * 视频内容审核 Asr 文字鉴黄任务的查询结果，当任务类型为 Porn.Asr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiReviewTaskPornAsrResult m_pornAsrTask;
                    bool m_pornAsrTaskHasBeenSet;

                    /**
                     * 视频内容审核 Ocr 文字鉴黄任务的查询结果，当任务类型为 Porn.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiReviewTaskPornOcrResult m_pornOcrTask;
                    bool m_pornOcrTaskHasBeenSet;

                    /**
                     * 视频内容审核 Asr 文字敏感任务的查询结果，当任务类型为 Political.Asr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiReviewTaskPoliticalAsrResult m_politicalAsrTask;
                    bool m_politicalAsrTaskHasBeenSet;

                    /**
                     * 视频内容审核 Ocr 文字敏感任务的查询结果，当任务类型为 Political.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiReviewTaskPoliticalOcrResult m_politicalOcrTask;
                    bool m_politicalOcrTaskHasBeenSet;

                    /**
                     * 视频内容审核 Ocr 文字敏感任务的查询结果，当任务类型为 Terrorism.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiReviewTaskTerrorismOcrResult m_terrorismOcrTask;
                    bool m_terrorismOcrTaskHasBeenSet;

                    /**
                     * 视频内容审核 Asr 文字鉴违禁任务的查询结果，当任务类型为 Prohibited.Asr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiReviewTaskProhibitedAsrResult m_prohibitedAsrTask;
                    bool m_prohibitedAsrTaskHasBeenSet;

                    /**
                     * 视频内容审核 Ocr 文字鉴违禁任务的查询结果，当任务类型为 Prohibited.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiReviewTaskProhibitedOcrResult m_prohibitedOcrTask;
                    bool m_prohibitedOcrTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AICONTENTREVIEWRESULT_H_

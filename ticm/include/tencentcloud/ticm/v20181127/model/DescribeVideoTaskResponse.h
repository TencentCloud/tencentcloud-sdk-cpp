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

#ifndef TENCENTCLOUD_TICM_V20181127_MODEL_DESCRIBEVIDEOTASKRESPONSE_H_
#define TENCENTCLOUD_TICM_V20181127_MODEL_DESCRIBEVIDEOTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ticm/v20181127/model/VodPornReviewResult.h>
#include <tencentcloud/ticm/v20181127/model/VodTerrorismReviewResult.h>
#include <tencentcloud/ticm/v20181127/model/VodPoliticalReviewResult.h>
#include <tencentcloud/ticm/v20181127/model/VodPoliticalOcrReviewResult.h>
#include <tencentcloud/ticm/v20181127/model/VodPornAsrReviewResult.h>
#include <tencentcloud/ticm/v20181127/model/VodPoliticalAsrReviewResult.h>
#include <tencentcloud/ticm/v20181127/model/VodPornOcrResult.h>
#include <tencentcloud/ticm/v20181127/model/VodMetaData.h>


namespace TencentCloud
{
    namespace Ticm
    {
        namespace V20181127
        {
            namespace Model
            {
                /**
                * DescribeVideoTask返回参数结构体
                */
                class DescribeVideoTaskResponse : public AbstractModel
                {
                public:
                    DescribeVideoTaskResponse();
                    ~DescribeVideoTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务状态，取值：
WAITING：等待中；
PROCESSING：处理中；
FINISH：已完成。
                     * @return Status 任务状态，取值：
WAITING：等待中；
PROCESSING：处理中；
FINISH：已完成。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务开始执行的时间，采用 ISO 日期格式。
                     * @return BeginProcessTime 任务开始执行的时间，采用 ISO 日期格式。
                     * 
                     */
                    std::string GetBeginProcessTime() const;

                    /**
                     * 判断参数 BeginProcessTime 是否已赋值
                     * @return BeginProcessTime 是否已赋值
                     * 
                     */
                    bool BeginProcessTimeHasBeenSet() const;

                    /**
                     * 获取任务执行完毕的时间，采用 ISO 日期格式。
                     * @return FinishTime 任务执行完毕的时间，采用 ISO 日期格式。
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取视频内容审核智能画面鉴黄任务的查询结果。
                     * @return PornResult 视频内容审核智能画面鉴黄任务的查询结果。
                     * 
                     */
                    VodPornReviewResult GetPornResult() const;

                    /**
                     * 判断参数 PornResult 是否已赋值
                     * @return PornResult 是否已赋值
                     * 
                     */
                    bool PornResultHasBeenSet() const;

                    /**
                     * 获取视频内容审核智能画面鉴恐任务的查询结果。
                     * @return TerrorismResult 视频内容审核智能画面鉴恐任务的查询结果。
                     * 
                     */
                    VodTerrorismReviewResult GetTerrorismResult() const;

                    /**
                     * 判断参数 TerrorismResult 是否已赋值
                     * @return TerrorismResult 是否已赋值
                     * 
                     */
                    bool TerrorismResultHasBeenSet() const;

                    /**
                     * 获取视频内容审核智能画面鉴政任务的查询结果。
                     * @return PoliticalResult 视频内容审核智能画面鉴政任务的查询结果。
                     * 
                     */
                    VodPoliticalReviewResult GetPoliticalResult() const;

                    /**
                     * 判断参数 PoliticalResult 是否已赋值
                     * @return PoliticalResult 是否已赋值
                     * 
                     */
                    bool PoliticalResultHasBeenSet() const;

                    /**
                     * 获取视频内容审核 Ocr 文字鉴政任务的查询结果。
                     * @return PoliticalOcrResult 视频内容审核 Ocr 文字鉴政任务的查询结果。
                     * 
                     */
                    VodPoliticalOcrReviewResult GetPoliticalOcrResult() const;

                    /**
                     * 判断参数 PoliticalOcrResult 是否已赋值
                     * @return PoliticalOcrResult 是否已赋值
                     * 
                     */
                    bool PoliticalOcrResultHasBeenSet() const;

                    /**
                     * 获取视频内容审核 Asr 文字鉴黄任务的查询结果。
                     * @return PornAsrResult 视频内容审核 Asr 文字鉴黄任务的查询结果。
                     * 
                     */
                    VodPornAsrReviewResult GetPornAsrResult() const;

                    /**
                     * 判断参数 PornAsrResult 是否已赋值
                     * @return PornAsrResult 是否已赋值
                     * 
                     */
                    bool PornAsrResultHasBeenSet() const;

                    /**
                     * 获取视频内容审核 Asr 文字鉴政任务的查询结果。
                     * @return PoliticalAsrResult 视频内容审核 Asr 文字鉴政任务的查询结果。
                     * 
                     */
                    VodPoliticalAsrReviewResult GetPoliticalAsrResult() const;

                    /**
                     * 判断参数 PoliticalAsrResult 是否已赋值
                     * @return PoliticalAsrResult 是否已赋值
                     * 
                     */
                    bool PoliticalAsrResultHasBeenSet() const;

                    /**
                     * 获取视频内容审核 Ocr 文字鉴黄任务的查询结果。
                     * @return PornOcrResult 视频内容审核 Ocr 文字鉴黄任务的查询结果。
                     * 
                     */
                    VodPornOcrResult GetPornOcrResult() const;

                    /**
                     * 判断参数 PornOcrResult 是否已赋值
                     * @return PornOcrResult 是否已赋值
                     * 
                     */
                    bool PornOcrResultHasBeenSet() const;

                    /**
                     * 获取原始视频的元信息。
                     * @return MetaData 原始视频的元信息。
                     * 
                     */
                    VodMetaData GetMetaData() const;

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                private:

                    /**
                     * 任务状态，取值：
WAITING：等待中；
PROCESSING：处理中；
FINISH：已完成。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务开始执行的时间，采用 ISO 日期格式。
                     */
                    std::string m_beginProcessTime;
                    bool m_beginProcessTimeHasBeenSet;

                    /**
                     * 任务执行完毕的时间，采用 ISO 日期格式。
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 视频内容审核智能画面鉴黄任务的查询结果。
                     */
                    VodPornReviewResult m_pornResult;
                    bool m_pornResultHasBeenSet;

                    /**
                     * 视频内容审核智能画面鉴恐任务的查询结果。
                     */
                    VodTerrorismReviewResult m_terrorismResult;
                    bool m_terrorismResultHasBeenSet;

                    /**
                     * 视频内容审核智能画面鉴政任务的查询结果。
                     */
                    VodPoliticalReviewResult m_politicalResult;
                    bool m_politicalResultHasBeenSet;

                    /**
                     * 视频内容审核 Ocr 文字鉴政任务的查询结果。
                     */
                    VodPoliticalOcrReviewResult m_politicalOcrResult;
                    bool m_politicalOcrResultHasBeenSet;

                    /**
                     * 视频内容审核 Asr 文字鉴黄任务的查询结果。
                     */
                    VodPornAsrReviewResult m_pornAsrResult;
                    bool m_pornAsrResultHasBeenSet;

                    /**
                     * 视频内容审核 Asr 文字鉴政任务的查询结果。
                     */
                    VodPoliticalAsrReviewResult m_politicalAsrResult;
                    bool m_politicalAsrResultHasBeenSet;

                    /**
                     * 视频内容审核 Ocr 文字鉴黄任务的查询结果。
                     */
                    VodPornOcrResult m_pornOcrResult;
                    bool m_pornOcrResultHasBeenSet;

                    /**
                     * 原始视频的元信息。
                     */
                    VodMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TICM_V20181127_MODEL_DESCRIBEVIDEOTASKRESPONSE_H_

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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEPPTCHECKRESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEPPTCHECKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/PPTErrSlide.h>
#include <tencentcloud/tiw/v20190919/model/PPTErr.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribePPTCheck返回参数结构体
                */
                class DescribePPTCheckResponse : public AbstractModel
                {
                public:
                    DescribePPTCheckResponse();
                    ~DescribePPTCheckResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务的唯一标识Id
                     * @return TaskId 任务的唯一标识Id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取PPT文件是否正常
                     * @return IsOK PPT文件是否正常
                     * 
                     */
                    bool GetIsOK() const;

                    /**
                     * 判断参数 IsOK 是否已赋值
                     * @return IsOK 是否已赋值
                     * 
                     */
                    bool IsOKHasBeenSet() const;

                    /**
                     * 获取修复后的PPT URL，只有创建任务时参数AutoHandleUnsupportedElement=true，才返回此参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultUrl 修复后的PPT URL，只有创建任务时参数AutoHandleUnsupportedElement=true，才返回此参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultUrl() const;

                    /**
                     * 判断参数 ResultUrl 是否已赋值
                     * @return ResultUrl 是否已赋值
                     * 
                     */
                    bool ResultUrlHasBeenSet() const;

                    /**
                     * 获取错误PPT页面列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Slides 错误PPT页面列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PPTErrSlide> GetSlides() const;

                    /**
                     * 判断参数 Slides 是否已赋值
                     * @return Slides 是否已赋值
                     * 
                     */
                    bool SlidesHasBeenSet() const;

                    /**
                     * 获取任务的当前状态 - QUEUED: 正在排队等待 - PROCESSING: 执行中 - FINISHED: 执行完成	
                     * @return Status 任务的当前状态 - QUEUED: 正在排队等待 - PROCESSING: 执行中 - FINISHED: 执行完成	
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
                     * 获取当前进度,取值范围为0~100
                     * @return Progress 当前进度,取值范围为0~100
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取错误列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Errs 错误列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PPTErr> GetErrs() const;

                    /**
                     * 判断参数 Errs 是否已赋值
                     * @return Errs 是否已赋值
                     * 
                     */
                    bool ErrsHasBeenSet() const;

                private:

                    /**
                     * 任务的唯一标识Id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * PPT文件是否正常
                     */
                    bool m_isOK;
                    bool m_isOKHasBeenSet;

                    /**
                     * 修复后的PPT URL，只有创建任务时参数AutoHandleUnsupportedElement=true，才返回此参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultUrl;
                    bool m_resultUrlHasBeenSet;

                    /**
                     * 错误PPT页面列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PPTErrSlide> m_slides;
                    bool m_slidesHasBeenSet;

                    /**
                     * 任务的当前状态 - QUEUED: 正在排队等待 - PROCESSING: 执行中 - FINISHED: 执行完成	
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 当前进度,取值范围为0~100
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 错误列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PPTErr> m_errs;
                    bool m_errsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEPPTCHECKRESPONSE_H_

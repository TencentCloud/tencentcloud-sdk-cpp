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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_DESCRIBEEXTRACTDOCAGENTJOBRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_DESCRIBEEXTRACTDOCAGENTJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/GroupInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * DescribeExtractDocAgentJob返回参数结构体
                */
                class DescribeExtractDocAgentJobResponse : public AbstractModel
                {
                public:
                    DescribeExtractDocAgentJobResponse();
                    ~DescribeExtractDocAgentJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取图片旋转角度(角度制)，文本的水平方向为 0；顺时针为正，逆时针为负。
                     * @return Angle 图片旋转角度(角度制)，文本的水平方向为 0；顺时针为正，逆时针为负。
                     * 
                     */
                    double GetAngle() const;

                    /**
                     * 判断参数 Angle 是否已赋值
                     * @return Angle 是否已赋值
                     * 
                     */
                    bool AngleHasBeenSet() const;

                    /**
                     * 获取配置结构化文本信息。
                     * @return StructuralList 配置结构化文本信息。
                     * 
                     */
                    std::vector<GroupInfo> GetStructuralList() const;

                    /**
                     * 判断参数 StructuralList 是否已赋值
                     * @return StructuralList 是否已赋值
                     * 
                     */
                    bool StructuralListHasBeenSet() const;

                    /**
                     * 获取任务执行错误码。当任务状态不为 FAIL 时，该值为""。
                     * @return ErrorCode 任务执行错误码。当任务状态不为 FAIL 时，该值为""。
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取任务执行错误信息。当任务状态不为 FAIL 时，该值为""。
                     * @return ErrorMessage 任务执行错误信息。当任务状态不为 FAIL 时，该值为""。
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取任务状态。WAIT：等待中，RUN：执行中，FAIL：任务失败，DONE：任务成功
                     * @return JobStatus 任务状态。WAIT：等待中，RUN：执行中，FAIL：任务失败，DONE：任务成功
                     * 
                     */
                    std::string GetJobStatus() const;

                    /**
                     * 判断参数 JobStatus 是否已赋值
                     * @return JobStatus 是否已赋值
                     * 
                     */
                    bool JobStatusHasBeenSet() const;

                    /**
                     * 获取思考过程
                     * @return ThoughtContent 思考过程
                     * 
                     */
                    std::string GetThoughtContent() const;

                    /**
                     * 判断参数 ThoughtContent 是否已赋值
                     * @return ThoughtContent 是否已赋值
                     * 
                     */
                    bool ThoughtContentHasBeenSet() const;

                private:

                    /**
                     * 图片旋转角度(角度制)，文本的水平方向为 0；顺时针为正，逆时针为负。
                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                    /**
                     * 配置结构化文本信息。
                     */
                    std::vector<GroupInfo> m_structuralList;
                    bool m_structuralListHasBeenSet;

                    /**
                     * 任务执行错误码。当任务状态不为 FAIL 时，该值为""。
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 任务执行错误信息。当任务状态不为 FAIL 时，该值为""。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 任务状态。WAIT：等待中，RUN：执行中，FAIL：任务失败，DONE：任务成功
                     */
                    std::string m_jobStatus;
                    bool m_jobStatusHasBeenSet;

                    /**
                     * 思考过程
                     */
                    std::string m_thoughtContent;
                    bool m_thoughtContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_DESCRIBEEXTRACTDOCAGENTJOBRESPONSE_H_

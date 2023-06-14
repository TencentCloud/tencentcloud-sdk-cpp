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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_DESCRIBESEGMENTATIONTASKRESPONSE_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_DESCRIBESEGMENTATIONTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bda/v20200324/model/VideoBasicInformation.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeSegmentationTask返回参数结构体
                */
                class DescribeSegmentationTaskResponse : public AbstractModel
                {
                public:
                    DescribeSegmentationTaskResponse();
                    ~DescribeSegmentationTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当前任务状态：
QUEUING 排队中
PROCESSING 处理中
FINISHED 处理完成
                     * @return TaskStatus 当前任务状态：
QUEUING 排队中
PROCESSING 处理中
FINISHED 处理完成
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取分割后视频URL, 存储于腾讯云COS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultVideoUrl 分割后视频URL, 存储于腾讯云COS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultVideoUrl() const;

                    /**
                     * 判断参数 ResultVideoUrl 是否已赋值
                     * @return ResultVideoUrl 是否已赋值
                     * 
                     */
                    bool ResultVideoUrlHasBeenSet() const;

                    /**
                     * 获取分割后视频MD5，用于校验
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultVideoMD5 分割后视频MD5，用于校验
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultVideoMD5() const;

                    /**
                     * 判断参数 ResultVideoMD5 是否已赋值
                     * @return ResultVideoMD5 是否已赋值
                     * 
                     */
                    bool ResultVideoMD5HasBeenSet() const;

                    /**
                     * 获取视频基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoBasicInformation 视频基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VideoBasicInformation GetVideoBasicInformation() const;

                    /**
                     * 判断参数 VideoBasicInformation 是否已赋值
                     * @return VideoBasicInformation 是否已赋值
                     * 
                     */
                    bool VideoBasicInformationHasBeenSet() const;

                    /**
                     * 获取分割任务错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMsg 分割任务错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * 当前任务状态：
QUEUING 排队中
PROCESSING 处理中
FINISHED 处理完成
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 分割后视频URL, 存储于腾讯云COS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultVideoUrl;
                    bool m_resultVideoUrlHasBeenSet;

                    /**
                     * 分割后视频MD5，用于校验
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultVideoMD5;
                    bool m_resultVideoMD5HasBeenSet;

                    /**
                     * 视频基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VideoBasicInformation m_videoBasicInformation;
                    bool m_videoBasicInformationHasBeenSet;

                    /**
                     * 分割任务错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_DESCRIBESEGMENTATIONTASKRESPONSE_H_

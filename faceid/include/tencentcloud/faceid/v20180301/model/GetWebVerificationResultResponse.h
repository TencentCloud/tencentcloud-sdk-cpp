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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETWEBVERIFICATIONRESULTRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETWEBVERIFICATIONRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/VerificationDetail.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetWebVerificationResult返回参数结构体
                */
                class GetWebVerificationResultResponse : public AbstractModel
                {
                public:
                    GetWebVerificationResultResponse();
                    ~GetWebVerificationResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取本次核验最终结果。0为核验通过，是同一人。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCode 本次核验最终结果。0为核验通过，是同一人。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取本次核验最终结果描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMsg 本次核验最终结果描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取视频流中采集的最佳人脸照片临时地址，下载有效时间10分钟，如果需要存储请及时下载。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoBestFrameUrl 视频流中采集的最佳人脸照片临时地址，下载有效时间10分钟，如果需要存储请及时下载。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVideoBestFrameUrl() const;

                    /**
                     * 判断参数 VideoBestFrameUrl 是否已赋值
                     * @return VideoBestFrameUrl 是否已赋值
                     */
                    bool VideoBestFrameUrlHasBeenSet() const;

                    /**
                     * 获取视频流中采集的最佳人脸照片内容MD5散列值，可以使用此值校验文件内容是否一致。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoBestFrameMd5 视频流中采集的最佳人脸照片内容MD5散列值，可以使用此值校验文件内容是否一致。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVideoBestFrameMd5() const;

                    /**
                     * 判断参数 VideoBestFrameMd5 是否已赋值
                     * @return VideoBestFrameMd5 是否已赋值
                     */
                    bool VideoBestFrameMd5HasBeenSet() const;

                    /**
                     * 获取本次核验流程的详细信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VerificationDetailList 本次核验流程的详细信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VerificationDetail> GetVerificationDetailList() const;

                    /**
                     * 判断参数 VerificationDetailList 是否已赋值
                     * @return VerificationDetailList 是否已赋值
                     */
                    bool VerificationDetailListHasBeenSet() const;

                    /**
                     * 获取视频流中采集的视频临时地址，下载有效时间10分钟，如果需要存储请及时下载。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoUrl 视频流中采集的视频临时地址，下载有效时间10分钟，如果需要存储请及时下载。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     */
                    bool VideoUrlHasBeenSet() const;

                    /**
                     * 获取视频流中采集的视频内容MD5散列值，可以使用此值校验文件内容是否一致。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoMd5 视频流中采集的视频内容MD5散列值，可以使用此值校验文件内容是否一致。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVideoMd5() const;

                    /**
                     * 判断参数 VideoMd5 是否已赋值
                     * @return VideoMd5 是否已赋值
                     */
                    bool VideoMd5HasBeenSet() const;

                private:

                    /**
                     * 本次核验最终结果。0为核验通过，是同一人。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 本次核验最终结果描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * 视频流中采集的最佳人脸照片临时地址，下载有效时间10分钟，如果需要存储请及时下载。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_videoBestFrameUrl;
                    bool m_videoBestFrameUrlHasBeenSet;

                    /**
                     * 视频流中采集的最佳人脸照片内容MD5散列值，可以使用此值校验文件内容是否一致。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_videoBestFrameMd5;
                    bool m_videoBestFrameMd5HasBeenSet;

                    /**
                     * 本次核验流程的详细信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VerificationDetail> m_verificationDetailList;
                    bool m_verificationDetailListHasBeenSet;

                    /**
                     * 视频流中采集的视频临时地址，下载有效时间10分钟，如果需要存储请及时下载。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * 视频流中采集的视频内容MD5散列值，可以使用此值校验文件内容是否一致。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_videoMd5;
                    bool m_videoMd5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETWEBVERIFICATIONRESULTRESPONSE_H_

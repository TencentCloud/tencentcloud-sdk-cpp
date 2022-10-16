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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_VERIFICATIONDETAIL_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_VERIFICATIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 核验流程详细信息
                */
                class VerificationDetail : public AbstractModel
                {
                public:
                    VerificationDetail();
                    ~VerificationDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取本次核验最终结果。0为核验通过，是同一人。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCode 本次核验最终结果。0为核验通过，是同一人。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 设置本次核验最终结果。0为核验通过，是同一人。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ErrorCode 本次核验最终结果。0为核验通过，是同一人。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetErrorCode(const int64_t& _errorCode);

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
                     * 设置本次核验最终结果描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ErrorMsg 本次核验最终结果描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取本次核验活体结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LivenessErrorCode 本次核验活体结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetLivenessErrorCode() const;

                    /**
                     * 设置本次核验活体结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LivenessErrorCode 本次核验活体结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLivenessErrorCode(const int64_t& _livenessErrorCode);

                    /**
                     * 判断参数 LivenessErrorCode 是否已赋值
                     * @return LivenessErrorCode 是否已赋值
                     */
                    bool LivenessErrorCodeHasBeenSet() const;

                    /**
                     * 获取本次核验活体结果描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LivenessErrorMsg 本次核验活体结果描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLivenessErrorMsg() const;

                    /**
                     * 设置本次核验活体结果描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LivenessErrorMsg 本次核验活体结果描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLivenessErrorMsg(const std::string& _livenessErrorMsg);

                    /**
                     * 判断参数 LivenessErrorMsg 是否已赋值
                     * @return LivenessErrorMsg 是否已赋值
                     */
                    bool LivenessErrorMsgHasBeenSet() const;

                    /**
                     * 获取本次核验比对结果。0为视频流中采集的最佳人脸照片和上传的比对照片是同一人。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompareErrorCode 本次核验比对结果。0为视频流中采集的最佳人脸照片和上传的比对照片是同一人。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCompareErrorCode() const;

                    /**
                     * 设置本次核验比对结果。0为视频流中采集的最佳人脸照片和上传的比对照片是同一人。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CompareErrorCode 本次核验比对结果。0为视频流中采集的最佳人脸照片和上传的比对照片是同一人。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCompareErrorCode(const int64_t& _compareErrorCode);

                    /**
                     * 判断参数 CompareErrorCode 是否已赋值
                     * @return CompareErrorCode 是否已赋值
                     */
                    bool CompareErrorCodeHasBeenSet() const;

                    /**
                     * 获取本次核验比对结果描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompareErrorMsg 本次核验比对结果描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCompareErrorMsg() const;

                    /**
                     * 设置本次核验比对结果描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CompareErrorMsg 本次核验比对结果描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCompareErrorMsg(const std::string& _compareErrorMsg);

                    /**
                     * 判断参数 CompareErrorMsg 是否已赋值
                     * @return CompareErrorMsg 是否已赋值
                     */
                    bool CompareErrorMsgHasBeenSet() const;

                    /**
                     * 获取本次核验时间戳(毫秒)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReqTimestamp 本次核验时间戳(毫秒)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetReqTimestamp() const;

                    /**
                     * 设置本次核验时间戳(毫秒)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ReqTimestamp 本次核验时间戳(毫秒)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReqTimestamp(const uint64_t& _reqTimestamp);

                    /**
                     * 判断参数 ReqTimestamp 是否已赋值
                     * @return ReqTimestamp 是否已赋值
                     */
                    bool ReqTimestampHasBeenSet() const;

                    /**
                     * 获取本次核验视频流中采集的最佳人脸照片和上传的比对照片的相似度， 范围[0.00, 100.00]，默认大于等于70时判断为同一人。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Similarity 本次核验视频流中采集的最佳人脸照片和上传的比对照片的相似度， 范围[0.00, 100.00]，默认大于等于70时判断为同一人。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetSimilarity() const;

                    /**
                     * 设置本次核验视频流中采集的最佳人脸照片和上传的比对照片的相似度， 范围[0.00, 100.00]，默认大于等于70时判断为同一人。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Similarity 本次核验视频流中采集的最佳人脸照片和上传的比对照片的相似度， 范围[0.00, 100.00]，默认大于等于70时判断为同一人。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSimilarity(const double& _similarity);

                    /**
                     * 判断参数 Similarity 是否已赋值
                     * @return Similarity 是否已赋值
                     */
                    bool SimilarityHasBeenSet() const;

                    /**
                     * 获取本次核验的唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Seq 本次核验的唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSeq() const;

                    /**
                     * 设置本次核验的唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Seq 本次核验的唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSeq(const std::string& _seq);

                    /**
                     * 判断参数 Seq 是否已赋值
                     * @return Seq 是否已赋值
                     */
                    bool SeqHasBeenSet() const;

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
                     * 本次核验活体结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_livenessErrorCode;
                    bool m_livenessErrorCodeHasBeenSet;

                    /**
                     * 本次核验活体结果描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_livenessErrorMsg;
                    bool m_livenessErrorMsgHasBeenSet;

                    /**
                     * 本次核验比对结果。0为视频流中采集的最佳人脸照片和上传的比对照片是同一人。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_compareErrorCode;
                    bool m_compareErrorCodeHasBeenSet;

                    /**
                     * 本次核验比对结果描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_compareErrorMsg;
                    bool m_compareErrorMsgHasBeenSet;

                    /**
                     * 本次核验时间戳(毫秒)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_reqTimestamp;
                    bool m_reqTimestampHasBeenSet;

                    /**
                     * 本次核验视频流中采集的最佳人脸照片和上传的比对照片的相似度， 范围[0.00, 100.00]，默认大于等于70时判断为同一人。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_similarity;
                    bool m_similarityHasBeenSet;

                    /**
                     * 本次核验的唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_seq;
                    bool m_seqHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_VERIFICATIONDETAIL_H_

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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VOICEPRINTBATCHDELETERESULT_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VOICEPRINTBATCHDELETERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 批量删除逐项结果（VoicePrintBatchDelete 出参 Results 元素）
                */
                class VoicePrintBatchDeleteResult : public AbstractModel
                {
                public:
                    VoicePrintBatchDeleteResult();
                    ~VoicePrintBatchDeleteResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>本项对应的声纹 ID。成功项与失败项均会返回。<br>示例值：59d83c76-8f4e-4a1b-9c2d-0e7f8a6b5c4d</p>
                     * @return VoicePrintId <p>本项对应的声纹 ID。成功项与失败项均会返回。<br>示例值：59d83c76-8f4e-4a1b-9c2d-0e7f8a6b5c4d</p>
                     * 
                     */
                    std::string GetVoicePrintId() const;

                    /**
                     * 设置<p>本项对应的声纹 ID。成功项与失败项均会返回。<br>示例值：59d83c76-8f4e-4a1b-9c2d-0e7f8a6b5c4d</p>
                     * @param _voicePrintId <p>本项对应的声纹 ID。成功项与失败项均会返回。<br>示例值：59d83c76-8f4e-4a1b-9c2d-0e7f8a6b5c4d</p>
                     * 
                     */
                    void SetVoicePrintId(const std::string& _voicePrintId);

                    /**
                     * 判断参数 VoicePrintId 是否已赋值
                     * @return VoicePrintId 是否已赋值
                     * 
                     */
                    bool VoicePrintIdHasBeenSet() const;

                    /**
                     * 获取<p>本项失败时的错误码，成功项为空。常见值：FailedOperation.VoicePrintNotFound（声纹不存在或已删除）、InvalidParameterValue.InvalidVoicePrintId（ID 格式非法）。<br>示例值：FailedOperation.VoicePrintNotFound</p>
                     * @return ErrorCode <p>本项失败时的错误码，成功项为空。常见值：FailedOperation.VoicePrintNotFound（声纹不存在或已删除）、InvalidParameterValue.InvalidVoicePrintId（ID 格式非法）。<br>示例值：FailedOperation.VoicePrintNotFound</p>
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 设置<p>本项失败时的错误码，成功项为空。常见值：FailedOperation.VoicePrintNotFound（声纹不存在或已删除）、InvalidParameterValue.InvalidVoicePrintId（ID 格式非法）。<br>示例值：FailedOperation.VoicePrintNotFound</p>
                     * @param _errorCode <p>本项失败时的错误码，成功项为空。常见值：FailedOperation.VoicePrintNotFound（声纹不存在或已删除）、InvalidParameterValue.InvalidVoicePrintId（ID 格式非法）。<br>示例值：FailedOperation.VoicePrintNotFound</p>
                     * 
                     */
                    void SetErrorCode(const std::string& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取<p>本项失败时的错误描述，成功项为空。<br>示例值：voiceprint not found</p>
                     * @return ErrorMessage <p>本项失败时的错误描述，成功项为空。<br>示例值：voiceprint not found</p>
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置<p>本项失败时的错误描述，成功项为空。<br>示例值：voiceprint not found</p>
                     * @param _errorMessage <p>本项失败时的错误描述，成功项为空。<br>示例值：voiceprint not found</p>
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                private:

                    /**
                     * <p>本项对应的声纹 ID。成功项与失败项均会返回。<br>示例值：59d83c76-8f4e-4a1b-9c2d-0e7f8a6b5c4d</p>
                     */
                    std::string m_voicePrintId;
                    bool m_voicePrintIdHasBeenSet;

                    /**
                     * <p>本项失败时的错误码，成功项为空。常见值：FailedOperation.VoicePrintNotFound（声纹不存在或已删除）、InvalidParameterValue.InvalidVoicePrintId（ID 格式非法）。<br>示例值：FailedOperation.VoicePrintNotFound</p>
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * <p>本项失败时的错误描述，成功项为空。<br>示例值：voiceprint not found</p>
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VOICEPRINTBATCHDELETERESULT_H_

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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_LIVENESSRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_LIVENESSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * Liveness返回参数结构体
                */
                class LivenessResponse : public AbstractModel
                {
                public:
                    LivenessResponse();
                    ~LivenessResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取验证通过后的视频最佳截图照片，照片为BASE64编码后的值，jpg格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BestFrameBase64 验证通过后的视频最佳截图照片，照片为BASE64编码后的值，jpg格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBestFrameBase64() const;

                    /**
                     * 判断参数 BestFrameBase64 是否已赋值
                     * @return BestFrameBase64 是否已赋值
                     * 
                     */
                    bool BestFrameBase64HasBeenSet() const;

                    /**
                     * 获取业务错误码，成功情况返回Success, 错误情况请参考下方错误码 列表中FailedOperation部分
                     * @return Result 业务错误码，成功情况返回Success, 错误情况请参考下方错误码 列表中FailedOperation部分
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取业务结果描述。
                     * @return Description 业务结果描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取最佳最佳截图列表，仅在配置了返回多张最佳截图时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BestFrameList 最佳最佳截图列表，仅在配置了返回多张最佳截图时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBestFrameList() const;

                    /**
                     * 判断参数 BestFrameList 是否已赋值
                     * @return BestFrameList 是否已赋值
                     * 
                     */
                    bool BestFrameListHasBeenSet() const;

                private:

                    /**
                     * 验证通过后的视频最佳截图照片，照片为BASE64编码后的值，jpg格式。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bestFrameBase64;
                    bool m_bestFrameBase64HasBeenSet;

                    /**
                     * 业务错误码，成功情况返回Success, 错误情况请参考下方错误码 列表中FailedOperation部分
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 业务结果描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 最佳最佳截图列表，仅在配置了返回多张最佳截图时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_bestFrameList;
                    bool m_bestFrameListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_LIVENESSRESPONSE_H_

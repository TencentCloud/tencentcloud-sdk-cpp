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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTINFOBESTFRAME_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTINFOBESTFRAME_H_

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
                * 核身最佳帧信息。
                */
                class DetectInfoBestFrame : public AbstractModel
                {
                public:
                    DetectInfoBestFrame();
                    ~DetectInfoBestFrame() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取活体比对最佳帧Base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BestFrame 活体比对最佳帧Base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBestFrame() const;

                    /**
                     * 设置活体比对最佳帧Base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bestFrame 活体比对最佳帧Base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBestFrame(const std::string& _bestFrame);

                    /**
                     * 判断参数 BestFrame 是否已赋值
                     * @return BestFrame 是否已赋值
                     * 
                     */
                    bool BestFrameHasBeenSet() const;

                    /**
                     * 获取自截帧Base64编码数组。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BestFrames 自截帧Base64编码数组。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBestFrames() const;

                    /**
                     * 设置自截帧Base64编码数组。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bestFrames 自截帧Base64编码数组。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBestFrames(const std::vector<std::string>& _bestFrames);

                    /**
                     * 判断参数 BestFrames 是否已赋值
                     * @return BestFrames 是否已赋值
                     * 
                     */
                    bool BestFramesHasBeenSet() const;

                private:

                    /**
                     * 活体比对最佳帧Base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bestFrame;
                    bool m_bestFrameHasBeenSet;

                    /**
                     * 自截帧Base64编码数组。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_bestFrames;
                    bool m_bestFramesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTINFOBESTFRAME_H_

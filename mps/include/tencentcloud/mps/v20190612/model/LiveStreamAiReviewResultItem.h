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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIREVIEWRESULTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIREVIEWRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamAiReviewImagePornResult.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamAiReviewImageTerrorismResult.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamAiReviewImagePoliticalResult.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamAiReviewVoicePornResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 直播流 AI 审核结果
                */
                class LiveStreamAiReviewResultItem : public AbstractModel
                {
                public:
                    LiveStreamAiReviewResultItem();
                    ~LiveStreamAiReviewResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取审核结果的类型，可以取的值有：
<li>ImagePorn：图片鉴黄</li>
<li>ImageTerrorism：图片涉敏</li>
<li>ImagePolitical：图片涉敏</li>
<li>VoicePorn：声音违规</li>
                     * @return Type 审核结果的类型，可以取的值有：
<li>ImagePorn：图片鉴黄</li>
<li>ImageTerrorism：图片涉敏</li>
<li>ImagePolitical：图片涉敏</li>
<li>VoicePorn：声音违规</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置审核结果的类型，可以取的值有：
<li>ImagePorn：图片鉴黄</li>
<li>ImageTerrorism：图片涉敏</li>
<li>ImagePolitical：图片涉敏</li>
<li>VoicePorn：声音违规</li>
                     * @param _type 审核结果的类型，可以取的值有：
<li>ImagePorn：图片鉴黄</li>
<li>ImageTerrorism：图片涉敏</li>
<li>ImagePolitical：图片涉敏</li>
<li>VoicePorn：声音违规</li>
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
                     * 获取图片鉴黄的结果，当 Type 为 ImagePorn 时有效。
                     * @return ImagePornResultSet 图片鉴黄的结果，当 Type 为 ImagePorn 时有效。
                     * 
                     */
                    std::vector<LiveStreamAiReviewImagePornResult> GetImagePornResultSet() const;

                    /**
                     * 设置图片鉴黄的结果，当 Type 为 ImagePorn 时有效。
                     * @param _imagePornResultSet 图片鉴黄的结果，当 Type 为 ImagePorn 时有效。
                     * 
                     */
                    void SetImagePornResultSet(const std::vector<LiveStreamAiReviewImagePornResult>& _imagePornResultSet);

                    /**
                     * 判断参数 ImagePornResultSet 是否已赋值
                     * @return ImagePornResultSet 是否已赋值
                     * 
                     */
                    bool ImagePornResultSetHasBeenSet() const;

                    /**
                     * 获取图片涉敏的结果，当 Type 为 ImageTerrorism 时有效。
                     * @return ImageTerrorismResultSet 图片涉敏的结果，当 Type 为 ImageTerrorism 时有效。
                     * 
                     */
                    std::vector<LiveStreamAiReviewImageTerrorismResult> GetImageTerrorismResultSet() const;

                    /**
                     * 设置图片涉敏的结果，当 Type 为 ImageTerrorism 时有效。
                     * @param _imageTerrorismResultSet 图片涉敏的结果，当 Type 为 ImageTerrorism 时有效。
                     * 
                     */
                    void SetImageTerrorismResultSet(const std::vector<LiveStreamAiReviewImageTerrorismResult>& _imageTerrorismResultSet);

                    /**
                     * 判断参数 ImageTerrorismResultSet 是否已赋值
                     * @return ImageTerrorismResultSet 是否已赋值
                     * 
                     */
                    bool ImageTerrorismResultSetHasBeenSet() const;

                    /**
                     * 获取图片涉敏的结果，当 Type 为 ImagePolitical 时有效。
                     * @return ImagePoliticalResultSet 图片涉敏的结果，当 Type 为 ImagePolitical 时有效。
                     * 
                     */
                    std::vector<LiveStreamAiReviewImagePoliticalResult> GetImagePoliticalResultSet() const;

                    /**
                     * 设置图片涉敏的结果，当 Type 为 ImagePolitical 时有效。
                     * @param _imagePoliticalResultSet 图片涉敏的结果，当 Type 为 ImagePolitical 时有效。
                     * 
                     */
                    void SetImagePoliticalResultSet(const std::vector<LiveStreamAiReviewImagePoliticalResult>& _imagePoliticalResultSet);

                    /**
                     * 判断参数 ImagePoliticalResultSet 是否已赋值
                     * @return ImagePoliticalResultSet 是否已赋值
                     * 
                     */
                    bool ImagePoliticalResultSetHasBeenSet() const;

                    /**
                     * 获取声音违规的结果，当 Type 为 VoicePorn 时有效。
                     * @return VoicePornResultSet 声音违规的结果，当 Type 为 VoicePorn 时有效。
                     * 
                     */
                    std::vector<LiveStreamAiReviewVoicePornResult> GetVoicePornResultSet() const;

                    /**
                     * 设置声音违规的结果，当 Type 为 VoicePorn 时有效。
                     * @param _voicePornResultSet 声音违规的结果，当 Type 为 VoicePorn 时有效。
                     * 
                     */
                    void SetVoicePornResultSet(const std::vector<LiveStreamAiReviewVoicePornResult>& _voicePornResultSet);

                    /**
                     * 判断参数 VoicePornResultSet 是否已赋值
                     * @return VoicePornResultSet 是否已赋值
                     * 
                     */
                    bool VoicePornResultSetHasBeenSet() const;

                private:

                    /**
                     * 审核结果的类型，可以取的值有：
<li>ImagePorn：图片鉴黄</li>
<li>ImageTerrorism：图片涉敏</li>
<li>ImagePolitical：图片涉敏</li>
<li>VoicePorn：声音违规</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 图片鉴黄的结果，当 Type 为 ImagePorn 时有效。
                     */
                    std::vector<LiveStreamAiReviewImagePornResult> m_imagePornResultSet;
                    bool m_imagePornResultSetHasBeenSet;

                    /**
                     * 图片涉敏的结果，当 Type 为 ImageTerrorism 时有效。
                     */
                    std::vector<LiveStreamAiReviewImageTerrorismResult> m_imageTerrorismResultSet;
                    bool m_imageTerrorismResultSetHasBeenSet;

                    /**
                     * 图片涉敏的结果，当 Type 为 ImagePolitical 时有效。
                     */
                    std::vector<LiveStreamAiReviewImagePoliticalResult> m_imagePoliticalResultSet;
                    bool m_imagePoliticalResultSetHasBeenSet;

                    /**
                     * 声音违规的结果，当 Type 为 VoicePorn 时有效。
                     */
                    std::vector<LiveStreamAiReviewVoicePornResult> m_voicePornResultSet;
                    bool m_voicePornResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIREVIEWRESULTITEM_H_

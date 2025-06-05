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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGERESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ContentReviewResult.h>
#include <tencentcloud/vod/v20180717/model/ReviewImageResult.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ReviewImage返回参数结构体
                */
                class ReviewImageResponse : public AbstractModel
                {
                public:
                    ReviewImageResponse();
                    ~ReviewImageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取图片审核任务结果。
<font color=red>注意：该字段已废弃，建议使用 MediaReviewResult。</font> 
                     * @return ReviewResultSet 图片审核任务结果。
<font color=red>注意：该字段已废弃，建议使用 MediaReviewResult。</font> 
                     * @deprecated
                     */
                    std::vector<ContentReviewResult> GetReviewResultSet() const;

                    /**
                     * 判断参数 ReviewResultSet 是否已赋值
                     * @return ReviewResultSet 是否已赋值
                     * @deprecated
                     */
                    bool ReviewResultSetHasBeenSet() const;

                    /**
                     * 获取图片审核任务结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaReviewResult 图片审核任务结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ReviewImageResult GetMediaReviewResult() const;

                    /**
                     * 判断参数 MediaReviewResult 是否已赋值
                     * @return MediaReviewResult 是否已赋值
                     * 
                     */
                    bool MediaReviewResultHasBeenSet() const;

                private:

                    /**
                     * 图片审核任务结果。
<font color=red>注意：该字段已废弃，建议使用 MediaReviewResult。</font> 
                     */
                    std::vector<ContentReviewResult> m_reviewResultSet;
                    bool m_reviewResultSetHasBeenSet;

                    /**
                     * 图片审核任务结果。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ReviewImageResult m_mediaReviewResult;
                    bool m_mediaReviewResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGERESPONSE_H_

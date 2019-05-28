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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TERRORISMCONFIGUREINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TERRORISMCONFIGUREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TerrorismImgReviewTemplateInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 鉴恐任务控制参数
                */
                class TerrorismConfigureInfo : public AbstractModel
                {
                public:
                    TerrorismConfigureInfo();
                    ~TerrorismConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取画面鉴恐任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImgReviewInfo 画面鉴恐任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TerrorismImgReviewTemplateInfo GetImgReviewInfo() const;

                    /**
                     * 设置画面鉴恐任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ImgReviewInfo 画面鉴恐任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetImgReviewInfo(const TerrorismImgReviewTemplateInfo& _imgReviewInfo);

                    /**
                     * 判断参数 ImgReviewInfo 是否已赋值
                     * @return ImgReviewInfo 是否已赋值
                     */
                    bool ImgReviewInfoHasBeenSet() const;

                private:

                    /**
                     * 画面鉴恐任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TerrorismImgReviewTemplateInfo m_imgReviewInfo;
                    bool m_imgReviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TERRORISMCONFIGUREINFO_H_

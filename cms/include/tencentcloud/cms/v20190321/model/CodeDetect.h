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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_CODEDETECT_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_CODEDETECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cms/v20190321/model/CodeDetail.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 图片二维码详情
                */
                class CodeDetect : public AbstractModel
                {
                public:
                    CodeDetect();
                    ~CodeDetect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检测是否成功，0：成功，-1：出错
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModerationCode 检测是否成功，0：成功，-1：出错
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetModerationCode() const;

                    /**
                     * 设置检测是否成功，0：成功，-1：出错
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _moderationCode 检测是否成功，0：成功，-1：出错
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModerationCode(const int64_t& _moderationCode);

                    /**
                     * 判断参数 ModerationCode 是否已赋值
                     * @return ModerationCode 是否已赋值
                     * 
                     */
                    bool ModerationCodeHasBeenSet() const;

                    /**
                     * 获取从图片中检测到的二维码，可能为多个
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModerationDetail 从图片中检测到的二维码，可能为多个
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CodeDetail> GetModerationDetail() const;

                    /**
                     * 设置从图片中检测到的二维码，可能为多个
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _moderationDetail 从图片中检测到的二维码，可能为多个
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModerationDetail(const std::vector<CodeDetail>& _moderationDetail);

                    /**
                     * 判断参数 ModerationDetail 是否已赋值
                     * @return ModerationDetail 是否已赋值
                     * 
                     */
                    bool ModerationDetailHasBeenSet() const;

                private:

                    /**
                     * 检测是否成功，0：成功，-1：出错
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_moderationCode;
                    bool m_moderationCodeHasBeenSet;

                    /**
                     * 从图片中检测到的二维码，可能为多个
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CodeDetail> m_moderationDetail;
                    bool m_moderationDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_CODEDETECT_H_

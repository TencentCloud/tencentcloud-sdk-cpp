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

#ifndef TENCENTCLOUD_IMS_V20201229_MODEL_LIBDETAIL_H_
#define TENCENTCLOUD_IMS_V20201229_MODEL_LIBDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 用于返回自定义库/黑白库的明细信息
                */
                class LibDetail : public AbstractModel
                {
                public:
                    LibDetail();
                    ~LibDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该字段用于返回识别对象的ID以方便识别和区分。
                     * @return Id 该字段用于返回识别对象的ID以方便识别和区分。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置该字段用于返回识别对象的ID以方便识别和区分。
                     * @param _id 该字段用于返回识别对象的ID以方便识别和区分。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取该字段用于返回自定义库的ID，以方便自定义库管理和配置。
                     * @return LibId 该字段用于返回自定义库的ID，以方便自定义库管理和配置。
                     * 
                     */
                    std::string GetLibId() const;

                    /**
                     * 设置该字段用于返回自定义库的ID，以方便自定义库管理和配置。
                     * @param _libId 该字段用于返回自定义库的ID，以方便自定义库管理和配置。
                     * 
                     */
                    void SetLibId(const std::string& _libId);

                    /**
                     * 判断参数 LibId 是否已赋值
                     * @return LibId 是否已赋值
                     * 
                     */
                    bool LibIdHasBeenSet() const;

                    /**
                     * 获取该字段用于返回自定义库的名称,以方便自定义库管理和配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LibName 该字段用于返回自定义库的名称,以方便自定义库管理和配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLibName() const;

                    /**
                     * 设置该字段用于返回自定义库的名称,以方便自定义库管理和配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _libName 该字段用于返回自定义库的名称,以方便自定义库管理和配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLibName(const std::string& _libName);

                    /**
                     * 判断参数 LibName 是否已赋值
                     * @return LibName 是否已赋值
                     * 
                     */
                    bool LibNameHasBeenSet() const;

                    /**
                     * 获取该字段用于返回识别图像对象的ID以方便文件管理。
                     * @return ImageId 该字段用于返回识别图像对象的ID以方便文件管理。
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置该字段用于返回识别图像对象的ID以方便文件管理。
                     * @param _imageId 该字段用于返回识别图像对象的ID以方便文件管理。
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告；以及其他令人反感、不安全或不适宜的内容类型。
                     * @return Label 该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告；以及其他令人反感、不安全或不适宜的内容类型。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告；以及其他令人反感、不安全或不适宜的内容类型。
                     * @param _label 该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告；以及其他令人反感、不安全或不适宜的内容类型。
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取该字段用于返回其他自定义标签以满足您的定制化场景需求，若无需求则可略过。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tag 该字段用于返回其他自定义标签以满足您的定制化场景需求，若无需求则可略过。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置该字段用于返回其他自定义标签以满足您的定制化场景需求，若无需求则可略过。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tag 该字段用于返回其他自定义标签以满足您的定制化场景需求，若无需求则可略过。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取该字段用于返回对应模型命中的分值，取值为**0-100**，如：*Porn 99* 则代表相应识别内容命中色情标签的分值为99。
                     * @return Score 该字段用于返回对应模型命中的分值，取值为**0-100**，如：*Porn 99* 则代表相应识别内容命中色情标签的分值为99。
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置该字段用于返回对应模型命中的分值，取值为**0-100**，如：*Porn 99* 则代表相应识别内容命中色情标签的分值为99。
                     * @param _score 该字段用于返回对应模型命中的分值，取值为**0-100**，如：*Porn 99* 则代表相应识别内容命中色情标签的分值为99。
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                private:

                    /**
                     * 该字段用于返回识别对象的ID以方便识别和区分。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 该字段用于返回自定义库的ID，以方便自定义库管理和配置。
                     */
                    std::string m_libId;
                    bool m_libIdHasBeenSet;

                    /**
                     * 该字段用于返回自定义库的名称,以方便自定义库管理和配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_libName;
                    bool m_libNameHasBeenSet;

                    /**
                     * 该字段用于返回识别图像对象的ID以方便文件管理。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告；以及其他令人反感、不安全或不适宜的内容类型。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 该字段用于返回其他自定义标签以满足您的定制化场景需求，若无需求则可略过。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 该字段用于返回对应模型命中的分值，取值为**0-100**，如：*Porn 99* 则代表相应识别内容命中色情标签的分值为99。
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_LIBDETAIL_H_

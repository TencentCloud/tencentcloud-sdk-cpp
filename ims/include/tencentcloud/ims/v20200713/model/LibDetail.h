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

#ifndef TENCENTCLOUD_IMS_V20200713_MODEL_LIBDETAIL_H_
#define TENCENTCLOUD_IMS_V20200713_MODEL_LIBDETAIL_H_

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
        namespace V20200713
        {
            namespace Model
            {
                /**
                * 自定义库/黑白库明细
                */
                class LibDetail : public AbstractModel
                {
                public:
                    LibDetail();
                    ~LibDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取序号
                     * @return Id 序号
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置序号
                     * @param _id 序号
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
                     * 获取仅当Label为Custom自定义关键词时有效，表示自定义库id
                     * @return LibId 仅当Label为Custom自定义关键词时有效，表示自定义库id
                     * 
                     */
                    std::string GetLibId() const;

                    /**
                     * 设置仅当Label为Custom自定义关键词时有效，表示自定义库id
                     * @param _libId 仅当Label为Custom自定义关键词时有效，表示自定义库id
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
                     * 获取仅当Label为Custom自定义关键词时有效，表示自定义库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LibName 仅当Label为Custom自定义关键词时有效，表示自定义库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLibName() const;

                    /**
                     * 设置仅当Label为Custom自定义关键词时有效，表示自定义库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _libName 仅当Label为Custom自定义关键词时有效，表示自定义库名称
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
                     * 获取图片ID
                     * @return ImageId 图片ID
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置图片ID
                     * @param _imageId 图片ID
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
                     * 获取恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告，Custom：自定义词库。
以及其他令人反感、不安全或不适宜的内容类型。
                     * @return Label 恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告，Custom：自定义词库。
以及其他令人反感、不安全或不适宜的内容类型。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告，Custom：自定义词库。
以及其他令人反感、不安全或不适宜的内容类型。
                     * @param _label 恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告，Custom：自定义词库。
以及其他令人反感、不安全或不适宜的内容类型。
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
                     * 获取自定义标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tag 自定义标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置自定义标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tag 自定义标签
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
                     * 获取命中的模型分值
                     * @return Score 命中的模型分值
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置命中的模型分值
                     * @param _score 命中的模型分值
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
                     * 序号
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 仅当Label为Custom自定义关键词时有效，表示自定义库id
                     */
                    std::string m_libId;
                    bool m_libIdHasBeenSet;

                    /**
                     * 仅当Label为Custom自定义关键词时有效，表示自定义库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_libName;
                    bool m_libNameHasBeenSet;

                    /**
                     * 图片ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告，Custom：自定义词库。
以及其他令人反感、不安全或不适宜的内容类型。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 自定义标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 命中的模型分值
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20200713_MODEL_LIBDETAIL_H_

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

#ifndef TENCENTCLOUD_IMS_V20201229_MODEL_OBJECTDETAIL_H_
#define TENCENTCLOUD_IMS_V20201229_MODEL_OBJECTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ims/v20201229/model/Location.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 实体检测结果明细，当检测场景为实体、广告台标、二维码时表示模型检测目标框的标签名称、标签值、标签分数以及检测框的位置信息。
                */
                class ObjectDetail : public AbstractModel
                {
                public:
                    ObjectDetail();
                    ~ObjectDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该参数用于返回识别对象的ID以方便识别和区分。
                     * @return Id 该参数用于返回识别对象的ID以方便识别和区分。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置该参数用于返回识别对象的ID以方便识别和区分。
                     * @param _id 该参数用于返回识别对象的ID以方便识别和区分。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取该参数用于返回命中的实体标签。
                     * @return Name 该参数用于返回命中的实体标签。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置该参数用于返回命中的实体标签。
                     * @param _name 该参数用于返回命中的实体标签。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取该参数用于返回对应实体标签所对应的值或内容。如：当标签为*二维码(QrCode)*时，该字段为识别出的二维码对应的URL地址。
                     * @return Value 该参数用于返回对应实体标签所对应的值或内容。如：当标签为*二维码(QrCode)*时，该字段为识别出的二维码对应的URL地址。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置该参数用于返回对应实体标签所对应的值或内容。如：当标签为*二维码(QrCode)*时，该字段为识别出的二维码对应的URL地址。
                     * @param _value 该参数用于返回对应实体标签所对应的值或内容。如：当标签为*二维码(QrCode)*时，该字段为识别出的二维码对应的URL地址。
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取该参数用于返回对应实体标签命中的分值，取值为**0-100**，如：*QrCode 99* 则代表相应识别内容命中二维码场景标签的概率非常高。
                     * @return Score 该参数用于返回对应实体标签命中的分值，取值为**0-100**，如：*QrCode 99* 则代表相应识别内容命中二维码场景标签的概率非常高。
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置该参数用于返回对应实体标签命中的分值，取值为**0-100**，如：*QrCode 99* 则代表相应识别内容命中二维码场景标签的概率非常高。
                     * @param _score 该参数用于返回对应实体标签命中的分值，取值为**0-100**，如：*QrCode 99* 则代表相应识别内容命中二维码场景标签的概率非常高。
                     * 
                     */
                    void SetScore(const uint64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取该字段用于返回实体检测框的坐标位置（左上角xy坐标、长宽、旋转角度）以方便快速定位实体的相关信息。
                     * @return Location 该字段用于返回实体检测框的坐标位置（左上角xy坐标、长宽、旋转角度）以方便快速定位实体的相关信息。
                     * 
                     */
                    Location GetLocation() const;

                    /**
                     * 设置该字段用于返回实体检测框的坐标位置（左上角xy坐标、长宽、旋转角度）以方便快速定位实体的相关信息。
                     * @param _location 该字段用于返回实体检测框的坐标位置（左上角xy坐标、长宽、旋转角度）以方便快速定位实体的相关信息。
                     * 
                     */
                    void SetLocation(const Location& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取该参数用于返回命中的实体二级标签。
                     * @return SubLabel 该参数用于返回命中的实体二级标签。
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置该参数用于返回命中的实体二级标签。
                     * @param _subLabel 该参数用于返回命中的实体二级标签。
                     * 
                     */
                    void SetSubLabel(const std::string& _subLabel);

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     * 
                     */
                    bool SubLabelHasBeenSet() const;

                    /**
                     * 获取该参数用于返回命中的人脸id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectId 该参数用于返回命中的人脸id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置该参数用于返回命中的人脸id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objectId 该参数用于返回命中的人脸id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetObjectId(const std::string& _objectId);

                    /**
                     * 判断参数 ObjectId 是否已赋值
                     * @return ObjectId 是否已赋值
                     * 
                     */
                    bool ObjectIdHasBeenSet() const;

                private:

                    /**
                     * 该参数用于返回识别对象的ID以方便识别和区分。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 该参数用于返回命中的实体标签。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 该参数用于返回对应实体标签所对应的值或内容。如：当标签为*二维码(QrCode)*时，该字段为识别出的二维码对应的URL地址。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 该参数用于返回对应实体标签命中的分值，取值为**0-100**，如：*QrCode 99* 则代表相应识别内容命中二维码场景标签的概率非常高。
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 该字段用于返回实体检测框的坐标位置（左上角xy坐标、长宽、旋转角度）以方便快速定位实体的相关信息。
                     */
                    Location m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 该参数用于返回命中的实体二级标签。
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * 该参数用于返回命中的人脸id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_OBJECTDETAIL_H_

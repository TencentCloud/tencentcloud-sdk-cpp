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

#ifndef TENCENTCLOUD_IMS_V20200713_MODEL_OBJECTDETAIL_H_
#define TENCENTCLOUD_IMS_V20200713_MODEL_OBJECTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ims/v20200713/model/Location.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20200713
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
                     * 获取序号
                     * @return Id 序号
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置序号
                     * @param _id 序号
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
                     * 获取标签名称
                     * @return Name 标签名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置标签名称
                     * @param _name 标签名称
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
                     * 获取标签值，
当标签为二维码时，表示URL地址，如Name为QrCode时，Value为"http//abc.com/aaa"
                     * @return Value 标签值，
当标签为二维码时，表示URL地址，如Name为QrCode时，Value为"http//abc.com/aaa"
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置标签值，
当标签为二维码时，表示URL地址，如Name为QrCode时，Value为"http//abc.com/aaa"
                     * @param _value 标签值，
当标签为二维码时，表示URL地址，如Name为QrCode时，Value为"http//abc.com/aaa"
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
                     * 获取分数
                     * @return Score 分数
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置分数
                     * @param _score 分数
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
                     * 获取检测框坐标
                     * @return Location 检测框坐标
                     * 
                     */
                    Location GetLocation() const;

                    /**
                     * 设置检测框坐标
                     * @param _location 检测框坐标
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
                     * 获取二级标签名称
                     * @return SubLabel 二级标签名称
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置二级标签名称
                     * @param _subLabel 二级标签名称
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
                     * 获取图库或人脸库id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 图库或人脸库id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置图库或人脸库id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupId 图库或人脸库id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取图或人脸id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectId 图或人脸id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置图或人脸id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objectId 图或人脸id
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
                     * 序号
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 标签名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 标签值，
当标签为二维码时，表示URL地址，如Name为QrCode时，Value为"http//abc.com/aaa"
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 分数
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 检测框坐标
                     */
                    Location m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 二级标签名称
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * 图库或人脸库id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 图或人脸id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20200713_MODEL_OBJECTDETAIL_H_

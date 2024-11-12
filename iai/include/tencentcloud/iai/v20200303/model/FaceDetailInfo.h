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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_FACEDETAILINFO_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_FACEDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/FaceRect.h>
#include <tencentcloud/iai/v20200303/model/FaceDetailAttributesInfo.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * 人脸信息列表。
                */
                class FaceDetailInfo : public AbstractModel
                {
                public:
                    FaceDetailInfo();
                    ~FaceDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检测出的人脸框位置。
                     * @return FaceRect 检测出的人脸框位置。
                     * 
                     */
                    FaceRect GetFaceRect() const;

                    /**
                     * 设置检测出的人脸框位置。
                     * @param _faceRect 检测出的人脸框位置。
                     * 
                     */
                    void SetFaceRect(const FaceRect& _faceRect);

                    /**
                     * 判断参数 FaceRect 是否已赋值
                     * @return FaceRect 是否已赋值
                     * 
                     */
                    bool FaceRectHasBeenSet() const;

                    /**
                     * 获取人脸属性信息。
- 根据 FaceAttributesType 输入的类型，返回年龄（Age）、颜值（Beauty）、情绪（Emotion）、眼睛信息（Eye）、眉毛（Eyebrow）、性别（Gender）、头发（Hair）、帽子（Hat）、姿态（Headpose）、口罩（Mask）、嘴巴（Mouth）、胡子（Moustache） 、鼻子（Nose）、脸型（Shape）、肤色（Skin）、微笑（Smile）等人脸属性信息。  
- 若 FaceAttributesType 没有输入相关类型，则FaceDetaiAttributesInfo返回的细项不具备参考意义。
                     * @return FaceDetailAttributesInfo 人脸属性信息。
- 根据 FaceAttributesType 输入的类型，返回年龄（Age）、颜值（Beauty）、情绪（Emotion）、眼睛信息（Eye）、眉毛（Eyebrow）、性别（Gender）、头发（Hair）、帽子（Hat）、姿态（Headpose）、口罩（Mask）、嘴巴（Mouth）、胡子（Moustache） 、鼻子（Nose）、脸型（Shape）、肤色（Skin）、微笑（Smile）等人脸属性信息。  
- 若 FaceAttributesType 没有输入相关类型，则FaceDetaiAttributesInfo返回的细项不具备参考意义。
                     * 
                     */
                    FaceDetailAttributesInfo GetFaceDetailAttributesInfo() const;

                    /**
                     * 设置人脸属性信息。
- 根据 FaceAttributesType 输入的类型，返回年龄（Age）、颜值（Beauty）、情绪（Emotion）、眼睛信息（Eye）、眉毛（Eyebrow）、性别（Gender）、头发（Hair）、帽子（Hat）、姿态（Headpose）、口罩（Mask）、嘴巴（Mouth）、胡子（Moustache） 、鼻子（Nose）、脸型（Shape）、肤色（Skin）、微笑（Smile）等人脸属性信息。  
- 若 FaceAttributesType 没有输入相关类型，则FaceDetaiAttributesInfo返回的细项不具备参考意义。
                     * @param _faceDetailAttributesInfo 人脸属性信息。
- 根据 FaceAttributesType 输入的类型，返回年龄（Age）、颜值（Beauty）、情绪（Emotion）、眼睛信息（Eye）、眉毛（Eyebrow）、性别（Gender）、头发（Hair）、帽子（Hat）、姿态（Headpose）、口罩（Mask）、嘴巴（Mouth）、胡子（Moustache） 、鼻子（Nose）、脸型（Shape）、肤色（Skin）、微笑（Smile）等人脸属性信息。  
- 若 FaceAttributesType 没有输入相关类型，则FaceDetaiAttributesInfo返回的细项不具备参考意义。
                     * 
                     */
                    void SetFaceDetailAttributesInfo(const FaceDetailAttributesInfo& _faceDetailAttributesInfo);

                    /**
                     * 判断参数 FaceDetailAttributesInfo 是否已赋值
                     * @return FaceDetailAttributesInfo 是否已赋值
                     * 
                     */
                    bool FaceDetailAttributesInfoHasBeenSet() const;

                private:

                    /**
                     * 检测出的人脸框位置。
                     */
                    FaceRect m_faceRect;
                    bool m_faceRectHasBeenSet;

                    /**
                     * 人脸属性信息。
- 根据 FaceAttributesType 输入的类型，返回年龄（Age）、颜值（Beauty）、情绪（Emotion）、眼睛信息（Eye）、眉毛（Eyebrow）、性别（Gender）、头发（Hair）、帽子（Hat）、姿态（Headpose）、口罩（Mask）、嘴巴（Mouth）、胡子（Moustache） 、鼻子（Nose）、脸型（Shape）、肤色（Skin）、微笑（Smile）等人脸属性信息。  
- 若 FaceAttributesType 没有输入相关类型，则FaceDetaiAttributesInfo返回的细项不具备参考意义。
                     */
                    FaceDetailAttributesInfo m_faceDetailAttributesInfo;
                    bool m_faceDetailAttributesInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_FACEDETAILINFO_H_

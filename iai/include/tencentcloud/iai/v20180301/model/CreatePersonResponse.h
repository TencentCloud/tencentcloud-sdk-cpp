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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_CREATEPERSONRESPONSE_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_CREATEPERSONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20180301/model/FaceRect.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * CreatePerson返回参数结构体
                */
                class CreatePersonResponse : public AbstractModel
                {
                public:
                    CreatePersonResponse();
                    ~CreatePersonResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取人脸图片唯一标识。
                     * @return FaceId 人脸图片唯一标识。
                     * 
                     */
                    std::string GetFaceId() const;

                    /**
                     * 判断参数 FaceId 是否已赋值
                     * @return FaceId 是否已赋值
                     * 
                     */
                    bool FaceIdHasBeenSet() const;

                    /**
                     * 获取检测出的人脸框的位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FaceRect 检测出的人脸框的位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FaceRect GetFaceRect() const;

                    /**
                     * 判断参数 FaceRect 是否已赋值
                     * @return FaceRect 是否已赋值
                     * 
                     */
                    bool FaceRectHasBeenSet() const;

                    /**
                     * 获取疑似同一人的PersonId。 
当 UniquePersonControl 参数不为0且人员库中有疑似的同一人，此参数才有意义。
                     * @return SimilarPersonId 疑似同一人的PersonId。 
当 UniquePersonControl 参数不为0且人员库中有疑似的同一人，此参数才有意义。
                     * 
                     */
                    std::string GetSimilarPersonId() const;

                    /**
                     * 判断参数 SimilarPersonId 是否已赋值
                     * @return SimilarPersonId 是否已赋值
                     * 
                     */
                    bool SimilarPersonIdHasBeenSet() const;

                    /**
                     * 获取人脸识别所用的算法模型版本。
                     * @return FaceModelVersion 人脸识别所用的算法模型版本。
                     * 
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 判断参数 FaceModelVersion 是否已赋值
                     * @return FaceModelVersion 是否已赋值
                     * 
                     */
                    bool FaceModelVersionHasBeenSet() const;

                private:

                    /**
                     * 人脸图片唯一标识。
                     */
                    std::string m_faceId;
                    bool m_faceIdHasBeenSet;

                    /**
                     * 检测出的人脸框的位置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FaceRect m_faceRect;
                    bool m_faceRectHasBeenSet;

                    /**
                     * 疑似同一人的PersonId。 
当 UniquePersonControl 参数不为0且人员库中有疑似的同一人，此参数才有意义。
                     */
                    std::string m_similarPersonId;
                    bool m_similarPersonIdHasBeenSet;

                    /**
                     * 人脸识别所用的算法模型版本。
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_CREATEPERSONRESPONSE_H_

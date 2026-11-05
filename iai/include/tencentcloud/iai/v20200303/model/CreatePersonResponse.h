/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_CREATEPERSONRESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_CREATEPERSONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/FaceRect.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
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
                     * 获取<p>人脸图片唯一标识。</p>
                     * @return FaceId <p>人脸图片唯一标识。</p>
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
                     * 获取<p>检测出的人脸框的位置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FaceRect <p>检测出的人脸框的位置。</p>
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
                     * 获取<p>疑似同一人的PersonId。 </p><ul><li>当 UniquePersonControl 参数不为0且人员库中有疑似的同一人，此参数才有意义。</li></ul>
                     * @return SimilarPersonId <p>疑似同一人的PersonId。 </p><ul><li>当 UniquePersonControl 参数不为0且人员库中有疑似的同一人，此参数才有意义。</li></ul>
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
                     * 获取<p>人脸识别所用的算法模型版本。</p>
                     * @return FaceModelVersion <p>人脸识别所用的算法模型版本。</p>
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
                     * <p>人脸图片唯一标识。</p>
                     */
                    std::string m_faceId;
                    bool m_faceIdHasBeenSet;

                    /**
                     * <p>检测出的人脸框的位置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FaceRect m_faceRect;
                    bool m_faceRectHasBeenSet;

                    /**
                     * <p>疑似同一人的PersonId。 </p><ul><li>当 UniquePersonControl 参数不为0且人员库中有疑似的同一人，此参数才有意义。</li></ul>
                     */
                    std::string m_similarPersonId;
                    bool m_similarPersonIdHasBeenSet;

                    /**
                     * <p>人脸识别所用的算法模型版本。</p>
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_CREATEPERSONRESPONSE_H_

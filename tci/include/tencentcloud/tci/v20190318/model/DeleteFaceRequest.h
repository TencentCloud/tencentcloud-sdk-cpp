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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_DELETEFACEREQUEST_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_DELETEFACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * DeleteFace请求参数结构体
                */
                class DeleteFaceRequest : public AbstractModel
                {
                public:
                    DeleteFaceRequest();
                    ~DeleteFaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取人脸标识符数组
                     * @return FaceIdSet 人脸标识符数组
                     * 
                     */
                    std::vector<std::string> GetFaceIdSet() const;

                    /**
                     * 设置人脸标识符数组
                     * @param _faceIdSet 人脸标识符数组
                     * 
                     */
                    void SetFaceIdSet(const std::vector<std::string>& _faceIdSet);

                    /**
                     * 判断参数 FaceIdSet 是否已赋值
                     * @return FaceIdSet 是否已赋值
                     * 
                     */
                    bool FaceIdSetHasBeenSet() const;

                    /**
                     * 获取人员唯一标识符
                     * @return PersonId 人员唯一标识符
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置人员唯一标识符
                     * @param _personId 人员唯一标识符
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取人员库唯一标识符
                     * @return LibraryId 人员库唯一标识符
                     * 
                     */
                    std::string GetLibraryId() const;

                    /**
                     * 设置人员库唯一标识符
                     * @param _libraryId 人员库唯一标识符
                     * 
                     */
                    void SetLibraryId(const std::string& _libraryId);

                    /**
                     * 判断参数 LibraryId 是否已赋值
                     * @return LibraryId 是否已赋值
                     * 
                     */
                    bool LibraryIdHasBeenSet() const;

                private:

                    /**
                     * 人脸标识符数组
                     */
                    std::vector<std::string> m_faceIdSet;
                    bool m_faceIdSetHasBeenSet;

                    /**
                     * 人员唯一标识符
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 人员库唯一标识符
                     */
                    std::string m_libraryId;
                    bool m_libraryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_DELETEFACEREQUEST_H_

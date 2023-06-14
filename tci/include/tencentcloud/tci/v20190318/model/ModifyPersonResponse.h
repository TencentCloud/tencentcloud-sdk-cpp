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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_MODIFYPERSONRESPONSE_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_MODIFYPERSONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/FaceInfo.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * ModifyPerson返回参数结构体
                */
                class ModifyPersonResponse : public AbstractModel
                {
                public:
                    ModifyPersonResponse();
                    ~ModifyPersonResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取人脸信息
                     * @return FaceInfoSet 人脸信息
                     * 
                     */
                    std::vector<FaceInfo> GetFaceInfoSet() const;

                    /**
                     * 判断参数 FaceInfoSet 是否已赋值
                     * @return FaceInfoSet 是否已赋值
                     * 
                     */
                    bool FaceInfoSetHasBeenSet() const;

                    /**
                     * 获取人员所属人员库标识符
                     * @return LibraryId 人员所属人员库标识符
                     * 
                     */
                    std::string GetLibraryId() const;

                    /**
                     * 判断参数 LibraryId 是否已赋值
                     * @return LibraryId 是否已赋值
                     * 
                     */
                    bool LibraryIdHasBeenSet() const;

                    /**
                     * 获取人员唯一标识符
                     * @return PersonId 人员唯一标识符
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取人员名称
                     * @return PersonName 人员名称
                     * 
                     */
                    std::string GetPersonName() const;

                    /**
                     * 判断参数 PersonName 是否已赋值
                     * @return PersonName 是否已赋值
                     * 
                     */
                    bool PersonNameHasBeenSet() const;

                private:

                    /**
                     * 人脸信息
                     */
                    std::vector<FaceInfo> m_faceInfoSet;
                    bool m_faceInfoSetHasBeenSet;

                    /**
                     * 人员所属人员库标识符
                     */
                    std::string m_libraryId;
                    bool m_libraryIdHasBeenSet;

                    /**
                     * 人员唯一标识符
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 人员名称
                     */
                    std::string m_personName;
                    bool m_personNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_MODIFYPERSONRESPONSE_H_

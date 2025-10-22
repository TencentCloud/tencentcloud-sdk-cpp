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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_DELETEFACEREQUEST_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_DELETEFACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
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
                     * 获取人员ID
                     * @return PersonId 人员ID
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置人员ID
                     * @param _personId 人员ID
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
                     * 获取待删除的人脸ID列表
                     * @return FaceIds 待删除的人脸ID列表
                     * 
                     */
                    std::vector<std::string> GetFaceIds() const;

                    /**
                     * 设置待删除的人脸ID列表
                     * @param _faceIds 待删除的人脸ID列表
                     * 
                     */
                    void SetFaceIds(const std::vector<std::string>& _faceIds);

                    /**
                     * 判断参数 FaceIds 是否已赋值
                     * @return FaceIds 是否已赋值
                     * 
                     */
                    bool FaceIdsHasBeenSet() const;

                private:

                    /**
                     * 人员ID
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 待删除的人脸ID列表
                     */
                    std::vector<std::string> m_faceIds;
                    bool m_faceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_DELETEFACEREQUEST_H_

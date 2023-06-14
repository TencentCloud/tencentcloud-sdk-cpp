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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_CREATEFACEPICTURERESPONSE_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_CREATEFACEPICTURERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CreateFacePicture返回参数结构体
                */
                class CreateFacePictureResponse : public AbstractModel
                {
                public:
                    CreateFacePictureResponse();
                    ~CreateFacePictureResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取人物ID
                     * @return PersonId 人物ID
                     * 
                     */
                    int64_t GetPersonId() const;

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取0.正常建档 1.重复身份 2.未检测到人脸 3.检测到多个人脸 4.人脸大小过小 5.人脸质量不达标 6.其他错误
                     * @return Status 0.正常建档 1.重复身份 2.未检测到人脸 3.检测到多个人脸 4.人脸大小过小 5.人脸质量不达标 6.其他错误
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取图片url
                     * @return PictureUrl 图片url
                     * 
                     */
                    std::string GetPictureUrl() const;

                    /**
                     * 判断参数 PictureUrl 是否已赋值
                     * @return PictureUrl 是否已赋值
                     * 
                     */
                    bool PictureUrlHasBeenSet() const;

                private:

                    /**
                     * 人物ID
                     */
                    int64_t m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 0.正常建档 1.重复身份 2.未检测到人脸 3.检测到多个人脸 4.人脸大小过小 5.人脸质量不达标 6.其他错误
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 图片url
                     */
                    std::string m_pictureUrl;
                    bool m_pictureUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_CREATEFACEPICTURERESPONSE_H_

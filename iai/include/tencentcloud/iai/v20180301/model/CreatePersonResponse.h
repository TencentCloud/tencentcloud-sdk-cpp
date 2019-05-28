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


                    /**
                     * 获取人脸图片唯一标识。
                     * @return FaceId 人脸图片唯一标识。
                     */
                    std::string GetFaceId() const;

                    /**
                     * 判断参数 FaceId 是否已赋值
                     * @return FaceId 是否已赋值
                     */
                    bool FaceIdHasBeenSet() const;

                private:

                    /**
                     * 人脸图片唯一标识。
                     */
                    std::string m_faceId;
                    bool m_faceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_CREATEPERSONRESPONSE_H_

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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_CHECKFACEPHOTORESPONSE_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_CHECKFACEPHOTORESPONSE_H_

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
                * CheckFacePhoto返回参数结构体
                */
                class CheckFacePhotoResponse : public AbstractModel
                {
                public:
                    CheckFacePhotoResponse();
                    ~CheckFacePhotoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取人脸检查结果，0：通过检查，1：图片模糊
                     * @return CheckResult 人脸检查结果，0：通过检查，1：图片模糊
                     * 
                     */
                    int64_t GetCheckResult() const;

                    /**
                     * 判断参数 CheckResult 是否已赋值
                     * @return CheckResult 是否已赋值
                     * 
                     */
                    bool CheckResultHasBeenSet() const;

                private:

                    /**
                     * 人脸检查结果，0：通过检查，1：图片模糊
                     */
                    int64_t m_checkResult;
                    bool m_checkResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_CHECKFACEPHOTORESPONSE_H_

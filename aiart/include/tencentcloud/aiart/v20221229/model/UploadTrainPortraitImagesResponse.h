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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_UPLOADTRAINPORTRAITIMAGESRESPONSE_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_UPLOADTRAINPORTRAITIMAGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aiart
    {
        namespace V20221229
        {
            namespace Model
            {
                /**
                * UploadTrainPortraitImages返回参数结构体
                */
                class UploadTrainPortraitImagesResponse : public AbstractModel
                {
                public:
                    UploadTrainPortraitImagesResponse();
                    ~UploadTrainPortraitImagesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用于提示对应上传的Urls训练图片是否符合要求，如果未通过需要重新上传。如果基础图像不符合要求会直接通过ErrorCode提示。如果您选择了快速模式，该参数返回为空数组。
                     * @return ResultDetails 用于提示对应上传的Urls训练图片是否符合要求，如果未通过需要重新上传。如果基础图像不符合要求会直接通过ErrorCode提示。如果您选择了快速模式，该参数返回为空数组。
                     * 
                     */
                    std::vector<std::string> GetResultDetails() const;

                    /**
                     * 判断参数 ResultDetails 是否已赋值
                     * @return ResultDetails 是否已赋值
                     * 
                     */
                    bool ResultDetailsHasBeenSet() const;

                private:

                    /**
                     * 用于提示对应上传的Urls训练图片是否符合要求，如果未通过需要重新上传。如果基础图像不符合要求会直接通过ErrorCode提示。如果您选择了快速模式，该参数返回为空数组。
                     */
                    std::vector<std::string> m_resultDetails;
                    bool m_resultDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_UPLOADTRAINPORTRAITIMAGESRESPONSE_H_

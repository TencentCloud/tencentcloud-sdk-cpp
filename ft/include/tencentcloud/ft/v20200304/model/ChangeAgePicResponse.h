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

#ifndef TENCENTCLOUD_FT_V20200304_MODEL_CHANGEAGEPICRESPONSE_H_
#define TENCENTCLOUD_FT_V20200304_MODEL_CHANGEAGEPICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ft
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * ChangeAgePic返回参数结构体
                */
                class ChangeAgePicResponse : public AbstractModel
                {
                public:
                    ChangeAgePicResponse();
                    ~ChangeAgePicResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取base64编码图片
                     * @return ResultImage base64编码图片
                     */
                    std::string GetResultImage() const;

                    /**
                     * 判断参数 ResultImage 是否已赋值
                     * @return ResultImage 是否已赋值
                     */
                    bool ResultImageHasBeenSet() const;

                private:

                    /**
                     * base64编码图片
                     */
                    std::string m_resultImage;
                    bool m_resultImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FT_V20200304_MODEL_CHANGEAGEPICRESPONSE_H_

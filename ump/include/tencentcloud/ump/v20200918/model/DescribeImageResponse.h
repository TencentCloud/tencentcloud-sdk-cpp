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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_DESCRIBEIMAGERESPONSE_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_DESCRIBEIMAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * DescribeImage返回参数结构体
                */
                class DescribeImageResponse : public AbstractModel
                {
                public:
                    DescribeImageResponse();
                    ~DescribeImageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取cos 临时 url，异步上传图片，client需要轮询
                     * @return ImageUrl cos 临时 url，异步上传图片，client需要轮询
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                private:

                    /**
                     * cos 临时 url，异步上传图片，client需要轮询
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_DESCRIBEIMAGERESPONSE_H_

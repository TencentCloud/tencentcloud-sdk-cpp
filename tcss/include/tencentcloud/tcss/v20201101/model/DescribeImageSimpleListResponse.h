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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGESIMPLELISTRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGESIMPLELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ImageSimpleInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeImageSimpleList返回参数结构体
                */
                class DescribeImageSimpleListResponse : public AbstractModel
                {
                public:
                    DescribeImageSimpleListResponse();
                    ~DescribeImageSimpleListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像列表
                     * @return ImageList 镜像列表
                     * 
                     */
                    std::vector<ImageSimpleInfo> GetImageList() const;

                    /**
                     * 判断参数 ImageList 是否已赋值
                     * @return ImageList 是否已赋值
                     * 
                     */
                    bool ImageListHasBeenSet() const;

                    /**
                     * 获取镜像数
                     * @return ImageCnt 镜像数
                     * 
                     */
                    uint64_t GetImageCnt() const;

                    /**
                     * 判断参数 ImageCnt 是否已赋值
                     * @return ImageCnt 是否已赋值
                     * 
                     */
                    bool ImageCntHasBeenSet() const;

                private:

                    /**
                     * 镜像列表
                     */
                    std::vector<ImageSimpleInfo> m_imageList;
                    bool m_imageListHasBeenSet;

                    /**
                     * 镜像数
                     */
                    uint64_t m_imageCnt;
                    bool m_imageCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGESIMPLELISTRESPONSE_H_

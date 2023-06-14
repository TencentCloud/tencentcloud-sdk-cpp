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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DELETECUSTOMIMAGESREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DELETECUSTOMIMAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * DeleteCustomImages请求参数结构体
                */
                class DeleteCustomImagesRequest : public AbstractModel
                {
                public:
                    DeleteCustomImagesRequest();
                    ~DeleteCustomImagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取准备删除的镜像ID列表
                     * @return ImageIds 准备删除的镜像ID列表
                     * 
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置准备删除的镜像ID列表
                     * @param _imageIds 准备删除的镜像ID列表
                     * 
                     */
                    void SetImageIds(const std::vector<std::string>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     * 
                     */
                    bool ImageIdsHasBeenSet() const;

                private:

                    /**
                     * 准备删除的镜像ID列表
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DELETECUSTOMIMAGESREQUEST_H_

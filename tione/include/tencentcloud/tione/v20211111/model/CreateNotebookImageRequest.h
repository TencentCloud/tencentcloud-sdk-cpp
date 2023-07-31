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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CREATENOTEBOOKIMAGEREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CREATENOTEBOOKIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ImageInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * CreateNotebookImage请求参数结构体
                */
                class CreateNotebookImageRequest : public AbstractModel
                {
                public:
                    CreateNotebookImageRequest();
                    ~CreateNotebookImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要保存的kernel数组
                     * @return Kernels 要保存的kernel数组
                     * 
                     */
                    std::vector<std::string> GetKernels() const;

                    /**
                     * 设置要保存的kernel数组
                     * @param _kernels 要保存的kernel数组
                     * 
                     */
                    void SetKernels(const std::vector<std::string>& _kernels);

                    /**
                     * 判断参数 Kernels 是否已赋值
                     * @return Kernels 是否已赋值
                     * 
                     */
                    bool KernelsHasBeenSet() const;

                    /**
                     * 获取镜像信息
                     * @return ImageInfo 镜像信息
                     * 
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置镜像信息
                     * @param _imageInfo 镜像信息
                     * 
                     */
                    void SetImageInfo(const ImageInfo& _imageInfo);

                    /**
                     * 判断参数 ImageInfo 是否已赋值
                     * @return ImageInfo 是否已赋值
                     * 
                     */
                    bool ImageInfoHasBeenSet() const;

                    /**
                     * 获取notebook id
                     * @return NotebookId notebook id
                     * 
                     */
                    std::string GetNotebookId() const;

                    /**
                     * 设置notebook id
                     * @param _notebookId notebook id
                     * 
                     */
                    void SetNotebookId(const std::string& _notebookId);

                    /**
                     * 判断参数 NotebookId 是否已赋值
                     * @return NotebookId 是否已赋值
                     * 
                     */
                    bool NotebookIdHasBeenSet() const;

                private:

                    /**
                     * 要保存的kernel数组
                     */
                    std::vector<std::string> m_kernels;
                    bool m_kernelsHasBeenSet;

                    /**
                     * 镜像信息
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * notebook id
                     */
                    std::string m_notebookId;
                    bool m_notebookIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CREATENOTEBOOKIMAGEREQUEST_H_

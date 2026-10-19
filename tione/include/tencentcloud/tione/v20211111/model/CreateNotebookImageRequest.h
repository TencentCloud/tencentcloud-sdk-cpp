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
                     * 获取<p>镜像信息</p>
                     * @return ImageInfo <p>镜像信息</p>
                     * 
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置<p>镜像信息</p>
                     * @param _imageInfo <p>镜像信息</p>
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
                     * 获取<p>notebook id</p>
                     * @return NotebookId <p>notebook id</p>
                     * 
                     */
                    std::string GetNotebookId() const;

                    /**
                     * 设置<p>notebook id</p>
                     * @param _notebookId <p>notebook id</p>
                     * 
                     */
                    void SetNotebookId(const std::string& _notebookId);

                    /**
                     * 判断参数 NotebookId 是否已赋值
                     * @return NotebookId 是否已赋值
                     * 
                     */
                    bool NotebookIdHasBeenSet() const;

                    /**
                     * 获取<p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * @return TiProjectId <p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * 
                     */
                    std::string GetTiProjectId() const;

                    /**
                     * 设置<p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * @param _tiProjectId <p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * 
                     */
                    void SetTiProjectId(const std::string& _tiProjectId);

                    /**
                     * 判断参数 TiProjectId 是否已赋值
                     * @return TiProjectId 是否已赋值
                     * 
                     */
                    bool TiProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>要保存的kernel数组</p>
                     * @return Kernels <p>要保存的kernel数组</p>
                     * 
                     */
                    std::vector<std::string> GetKernels() const;

                    /**
                     * 设置<p>要保存的kernel数组</p>
                     * @param _kernels <p>要保存的kernel数组</p>
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
                     * 获取<p>是否保存到镜像中心</p>
                     * @return RegisterToImageCenter <p>是否保存到镜像中心</p>
                     * 
                     */
                    bool GetRegisterToImageCenter() const;

                    /**
                     * 设置<p>是否保存到镜像中心</p>
                     * @param _registerToImageCenter <p>是否保存到镜像中心</p>
                     * 
                     */
                    void SetRegisterToImageCenter(const bool& _registerToImageCenter);

                    /**
                     * 判断参数 RegisterToImageCenter 是否已赋值
                     * @return RegisterToImageCenter 是否已赋值
                     * 
                     */
                    bool RegisterToImageCenterHasBeenSet() const;

                private:

                    /**
                     * <p>镜像信息</p>
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * <p>notebook id</p>
                     */
                    std::string m_notebookId;
                    bool m_notebookIdHasBeenSet;

                    /**
                     * <p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     */
                    std::string m_tiProjectId;
                    bool m_tiProjectIdHasBeenSet;

                    /**
                     * <p>要保存的kernel数组</p>
                     */
                    std::vector<std::string> m_kernels;
                    bool m_kernelsHasBeenSet;

                    /**
                     * <p>是否保存到镜像中心</p>
                     */
                    bool m_registerToImageCenter;
                    bool m_registerToImageCenterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CREATENOTEBOOKIMAGEREQUEST_H_

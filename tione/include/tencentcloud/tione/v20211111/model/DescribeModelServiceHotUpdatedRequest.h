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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELSERVICEHOTUPDATEDREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELSERVICEHOTUPDATEDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ImageInfo.h>
#include <tencentcloud/tione/v20211111/model/ModelInfo.h>
#include <tencentcloud/tione/v20211111/model/VolumeMount.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeModelServiceHotUpdated请求参数结构体
                */
                class DescribeModelServiceHotUpdatedRequest : public AbstractModel
                {
                public:
                    DescribeModelServiceHotUpdatedRequest();
                    ~DescribeModelServiceHotUpdatedRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像信息，配置服务运行所需的镜像地址等信息
                     * @return ImageInfo 镜像信息，配置服务运行所需的镜像地址等信息
                     * 
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置镜像信息，配置服务运行所需的镜像地址等信息
                     * @param _imageInfo 镜像信息，配置服务运行所需的镜像地址等信息
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
                     * 获取模型信息，需要挂载模型时填写
                     * @return ModelInfo 模型信息，需要挂载模型时填写
                     * 
                     */
                    ModelInfo GetModelInfo() const;

                    /**
                     * 设置模型信息，需要挂载模型时填写
                     * @param _modelInfo 模型信息，需要挂载模型时填写
                     * 
                     */
                    void SetModelInfo(const ModelInfo& _modelInfo);

                    /**
                     * 判断参数 ModelInfo 是否已赋值
                     * @return ModelInfo 是否已赋值
                     * 
                     */
                    bool ModelInfoHasBeenSet() const;

                    /**
                     * 获取挂载信息
                     * @return VolumeMount 挂载信息
                     * 
                     */
                    VolumeMount GetVolumeMount() const;

                    /**
                     * 设置挂载信息
                     * @param _volumeMount 挂载信息
                     * 
                     */
                    void SetVolumeMount(const VolumeMount& _volumeMount);

                    /**
                     * 判断参数 VolumeMount 是否已赋值
                     * @return VolumeMount 是否已赋值
                     * 
                     */
                    bool VolumeMountHasBeenSet() const;

                private:

                    /**
                     * 镜像信息，配置服务运行所需的镜像地址等信息
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * 模型信息，需要挂载模型时填写
                     */
                    ModelInfo m_modelInfo;
                    bool m_modelInfoHasBeenSet;

                    /**
                     * 挂载信息
                     */
                    VolumeMount m_volumeMount;
                    bool m_volumeMountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELSERVICEHOTUPDATEDREQUEST_H_

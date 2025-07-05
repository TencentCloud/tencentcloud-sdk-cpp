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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYASSETIMAGEREGISTRYSCANSTOPONEKEYREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYASSETIMAGEREGISTRYSCANSTOPONEKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ImageInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifyAssetImageRegistryScanStopOneKey请求参数结构体
                */
                class ModifyAssetImageRegistryScanStopOneKeyRequest : public AbstractModel
                {
                public:
                    ModifyAssetImageRegistryScanStopOneKeyRequest();
                    ~ModifyAssetImageRegistryScanStopOneKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否扫描全部镜像
                     * @return All 是否扫描全部镜像
                     * 
                     */
                    bool GetAll() const;

                    /**
                     * 设置是否扫描全部镜像
                     * @param _all 是否扫描全部镜像
                     * 
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * 
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取扫描的镜像列表
                     * @return Images 扫描的镜像列表
                     * 
                     */
                    std::vector<ImageInfo> GetImages() const;

                    /**
                     * 设置扫描的镜像列表
                     * @param _images 扫描的镜像列表
                     * 
                     */
                    void SetImages(const std::vector<ImageInfo>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取扫描的镜像列表Id
                     * @return Id 扫描的镜像列表Id
                     * 
                     */
                    std::vector<uint64_t> GetId() const;

                    /**
                     * 设置扫描的镜像列表Id
                     * @param _id 扫描的镜像列表Id
                     * 
                     */
                    void SetId(const std::vector<uint64_t>& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取停止的任务ID
                     * @return TaskID 停止的任务ID
                     * 
                     */
                    uint64_t GetTaskID() const;

                    /**
                     * 设置停止的任务ID
                     * @param _taskID 停止的任务ID
                     * 
                     */
                    void SetTaskID(const uint64_t& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                private:

                    /**
                     * 是否扫描全部镜像
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * 扫描的镜像列表
                     */
                    std::vector<ImageInfo> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * 扫描的镜像列表Id
                     */
                    std::vector<uint64_t> m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 停止的任务ID
                     */
                    uint64_t m_taskID;
                    bool m_taskIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYASSETIMAGEREGISTRYSCANSTOPONEKEYREQUEST_H_

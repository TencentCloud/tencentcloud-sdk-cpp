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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SYNCASSETIMAGEREGISTRYASSETREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SYNCASSETIMAGEREGISTRYASSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * SyncAssetImageRegistryAsset请求参数结构体
                */
                class SyncAssetImageRegistryAssetRequest : public AbstractModel
                {
                public:
                    SyncAssetImageRegistryAssetRequest();
                    ~SyncAssetImageRegistryAssetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否同步所有镜像仓库
                     * @return All 是否同步所有镜像仓库
                     * 
                     */
                    bool GetAll() const;

                    /**
                     * 设置是否同步所有镜像仓库
                     * @param _all 是否同步所有镜像仓库
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
                     * 获取需要同步的部分镜像仓库
                     * @return RegistryIds 需要同步的部分镜像仓库
                     * 
                     */
                    std::vector<uint64_t> GetRegistryIds() const;

                    /**
                     * 设置需要同步的部分镜像仓库
                     * @param _registryIds 需要同步的部分镜像仓库
                     * 
                     */
                    void SetRegistryIds(const std::vector<uint64_t>& _registryIds);

                    /**
                     * 判断参数 RegistryIds 是否已赋值
                     * @return RegistryIds 是否已赋值
                     * 
                     */
                    bool RegistryIdsHasBeenSet() const;

                private:

                    /**
                     * 是否同步所有镜像仓库
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * 需要同步的部分镜像仓库
                     */
                    std::vector<uint64_t> m_registryIds;
                    bool m_registryIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SYNCASSETIMAGEREGISTRYASSETREQUEST_H_

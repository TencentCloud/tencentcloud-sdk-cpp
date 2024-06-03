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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DELETEAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DELETEAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DeleteApplication请求参数结构体
                */
                class DeleteApplicationRequest : public AbstractModel
                {
                public:
                    DeleteApplicationRequest();
                    ~DeleteApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return ApplicationId 应用ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID
                     * @param _applicationId 应用ID
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取是否删除镜像仓库
                     * @return SyncDeleteImageRepository 是否删除镜像仓库
                     * 
                     */
                    bool GetSyncDeleteImageRepository() const;

                    /**
                     * 设置是否删除镜像仓库
                     * @param _syncDeleteImageRepository 是否删除镜像仓库
                     * 
                     */
                    void SetSyncDeleteImageRepository(const bool& _syncDeleteImageRepository);

                    /**
                     * 判断参数 SyncDeleteImageRepository 是否已赋值
                     * @return SyncDeleteImageRepository 是否已赋值
                     * 
                     */
                    bool SyncDeleteImageRepositoryHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 是否删除镜像仓库
                     */
                    bool m_syncDeleteImageRepository;
                    bool m_syncDeleteImageRepositoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DELETEAPPLICATIONREQUEST_H_

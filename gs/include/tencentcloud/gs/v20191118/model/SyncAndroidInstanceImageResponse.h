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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_SYNCANDROIDINSTANCEIMAGERESPONSE_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_SYNCANDROIDINSTANCEIMAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gs/v20191118/model/SyncAndroidInstanceImage.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * SyncAndroidInstanceImage返回参数结构体
                */
                class SyncAndroidInstanceImageResponse : public AbstractModel
                {
                public:
                    SyncAndroidInstanceImageResponse();
                    ~SyncAndroidInstanceImageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取同步安卓实例镜像列表
                     * @return SyncAndroidInstanceImages 同步安卓实例镜像列表
                     * 
                     */
                    std::vector<SyncAndroidInstanceImage> GetSyncAndroidInstanceImages() const;

                    /**
                     * 判断参数 SyncAndroidInstanceImages 是否已赋值
                     * @return SyncAndroidInstanceImages 是否已赋值
                     * 
                     */
                    bool SyncAndroidInstanceImagesHasBeenSet() const;

                private:

                    /**
                     * 同步安卓实例镜像列表
                     */
                    std::vector<SyncAndroidInstanceImage> m_syncAndroidInstanceImages;
                    bool m_syncAndroidInstanceImagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_SYNCANDROIDINSTANCEIMAGERESPONSE_H_

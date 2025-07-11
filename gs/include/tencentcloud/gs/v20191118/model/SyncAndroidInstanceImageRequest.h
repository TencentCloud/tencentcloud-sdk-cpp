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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_SYNCANDROIDINSTANCEIMAGEREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_SYNCANDROIDINSTANCEIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * SyncAndroidInstanceImage请求参数结构体
                */
                class SyncAndroidInstanceImageRequest : public AbstractModel
                {
                public:
                    SyncAndroidInstanceImageRequest();
                    ~SyncAndroidInstanceImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安卓实例镜像 ID
                     * @return AndroidInstanceImageId 安卓实例镜像 ID
                     * 
                     */
                    std::string GetAndroidInstanceImageId() const;

                    /**
                     * 设置安卓实例镜像 ID
                     * @param _androidInstanceImageId 安卓实例镜像 ID
                     * 
                     */
                    void SetAndroidInstanceImageId(const std::string& _androidInstanceImageId);

                    /**
                     * 判断参数 AndroidInstanceImageId 是否已赋值
                     * @return AndroidInstanceImageId 是否已赋值
                     * 
                     */
                    bool AndroidInstanceImageIdHasBeenSet() const;

                    /**
                     * 获取目的同步可用区列表
                     * @return DestinationZones 目的同步可用区列表
                     * 
                     */
                    std::vector<std::string> GetDestinationZones() const;

                    /**
                     * 设置目的同步可用区列表
                     * @param _destinationZones 目的同步可用区列表
                     * 
                     */
                    void SetDestinationZones(const std::vector<std::string>& _destinationZones);

                    /**
                     * 判断参数 DestinationZones 是否已赋值
                     * @return DestinationZones 是否已赋值
                     * 
                     */
                    bool DestinationZonesHasBeenSet() const;

                private:

                    /**
                     * 安卓实例镜像 ID
                     */
                    std::string m_androidInstanceImageId;
                    bool m_androidInstanceImageIdHasBeenSet;

                    /**
                     * 目的同步可用区列表
                     */
                    std::vector<std::string> m_destinationZones;
                    bool m_destinationZonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_SYNCANDROIDINSTANCEIMAGEREQUEST_H_

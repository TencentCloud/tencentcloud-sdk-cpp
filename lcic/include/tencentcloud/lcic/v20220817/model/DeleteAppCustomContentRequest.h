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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DELETEAPPCUSTOMCONTENTREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DELETEAPPCUSTOMCONTENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DeleteAppCustomContent请求参数结构体
                */
                class DeleteAppCustomContentRequest : public AbstractModel
                {
                public:
                    DeleteAppCustomContentRequest();
                    ~DeleteAppCustomContentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID。
                     * @return SdkAppId 应用ID。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用ID。
                     * @param _sdkAppId 应用ID。
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取指定需要删除的已设置的scene场景自定义元素，如果为空则删除应用下已设置的所有自定义元素。
                     * @return Scenes 指定需要删除的已设置的scene场景自定义元素，如果为空则删除应用下已设置的所有自定义元素。
                     * 
                     */
                    std::vector<std::string> GetScenes() const;

                    /**
                     * 设置指定需要删除的已设置的scene场景自定义元素，如果为空则删除应用下已设置的所有自定义元素。
                     * @param _scenes 指定需要删除的已设置的scene场景自定义元素，如果为空则删除应用下已设置的所有自定义元素。
                     * 
                     */
                    void SetScenes(const std::vector<std::string>& _scenes);

                    /**
                     * 判断参数 Scenes 是否已赋值
                     * @return Scenes 是否已赋值
                     * 
                     */
                    bool ScenesHasBeenSet() const;

                private:

                    /**
                     * 应用ID。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 指定需要删除的已设置的scene场景自定义元素，如果为空则删除应用下已设置的所有自定义元素。
                     */
                    std::vector<std::string> m_scenes;
                    bool m_scenesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DELETEAPPCUSTOMCONTENTREQUEST_H_

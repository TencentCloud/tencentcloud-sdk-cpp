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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_STOPGAMESERVERSESSIONPLACEMENTREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_STOPGAMESERVERSESSIONPLACEMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * StopGameServerSessionPlacement请求参数结构体
                */
                class StopGameServerSessionPlacementRequest : public AbstractModel
                {
                public:
                    StopGameServerSessionPlacementRequest();
                    ~StopGameServerSessionPlacementRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取游戏服务器会话放置的唯一标识符
                     * @return PlacementId 游戏服务器会话放置的唯一标识符
                     * 
                     */
                    std::string GetPlacementId() const;

                    /**
                     * 设置游戏服务器会话放置的唯一标识符
                     * @param _placementId 游戏服务器会话放置的唯一标识符
                     * 
                     */
                    void SetPlacementId(const std::string& _placementId);

                    /**
                     * 判断参数 PlacementId 是否已赋值
                     * @return PlacementId 是否已赋值
                     * 
                     */
                    bool PlacementIdHasBeenSet() const;

                private:

                    /**
                     * 游戏服务器会话放置的唯一标识符
                     */
                    std::string m_placementId;
                    bool m_placementIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_STOPGAMESERVERSESSIONPLACEMENTREQUEST_H_

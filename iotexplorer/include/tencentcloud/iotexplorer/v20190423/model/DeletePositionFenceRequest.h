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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETEPOSITIONFENCEREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETEPOSITIONFENCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DeletePositionFence请求参数结构体
                */
                class DeletePositionFenceRequest : public AbstractModel
                {
                public:
                    DeletePositionFenceRequest();
                    ~DeletePositionFenceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取位置空间Id
                     * @return SpaceId 位置空间Id
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置位置空间Id
                     * @param _spaceId 位置空间Id
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取围栏Id
                     * @return FenceId 围栏Id
                     * 
                     */
                    int64_t GetFenceId() const;

                    /**
                     * 设置围栏Id
                     * @param _fenceId 围栏Id
                     * 
                     */
                    void SetFenceId(const int64_t& _fenceId);

                    /**
                     * 判断参数 FenceId 是否已赋值
                     * @return FenceId 是否已赋值
                     * 
                     */
                    bool FenceIdHasBeenSet() const;

                private:

                    /**
                     * 位置空间Id
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * 围栏Id
                     */
                    int64_t m_fenceId;
                    bool m_fenceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETEPOSITIONFENCEREQUEST_H_

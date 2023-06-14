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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETEPOSITIONSPACEREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETEPOSITIONSPACEREQUEST_H_

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
                * DeletePositionSpace请求参数结构体
                */
                class DeletePositionSpaceRequest : public AbstractModel
                {
                public:
                    DeletePositionSpaceRequest();
                    ~DeletePositionSpaceRequest() = default;
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

                private:

                    /**
                     * 位置空间Id
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETEPOSITIONSPACEREQUEST_H_

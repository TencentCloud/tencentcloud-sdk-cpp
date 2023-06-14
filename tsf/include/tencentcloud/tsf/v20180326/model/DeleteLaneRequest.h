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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DELETELANEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DELETELANEREQUEST_H_

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
                * DeleteLane请求参数结构体
                */
                class DeleteLaneRequest : public AbstractModel
                {
                public:
                    DeleteLaneRequest();
                    ~DeleteLaneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取泳道Idl
                     * @return LaneId 泳道Idl
                     * 
                     */
                    std::string GetLaneId() const;

                    /**
                     * 设置泳道Idl
                     * @param _laneId 泳道Idl
                     * 
                     */
                    void SetLaneId(const std::string& _laneId);

                    /**
                     * 判断参数 LaneId 是否已赋值
                     * @return LaneId 是否已赋值
                     * 
                     */
                    bool LaneIdHasBeenSet() const;

                private:

                    /**
                     * 泳道Idl
                     */
                    std::string m_laneId;
                    bool m_laneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DELETELANEREQUEST_H_

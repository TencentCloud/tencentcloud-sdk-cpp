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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEKSCONTAINERINSTANCEEVENTRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEKSCONTAINERINSTANCEEVENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Event.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeEKSContainerInstanceEvent返回参数结构体
                */
                class DescribeEKSContainerInstanceEventResponse : public AbstractModel
                {
                public:
                    DescribeEKSContainerInstanceEventResponse();
                    ~DescribeEKSContainerInstanceEventResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取事件集合
                     * @return Events 事件集合
                     * 
                     */
                    std::vector<Event> GetEvents() const;

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取容器实例id
                     * @return EksCiId 容器实例id
                     * 
                     */
                    std::string GetEksCiId() const;

                    /**
                     * 判断参数 EksCiId 是否已赋值
                     * @return EksCiId 是否已赋值
                     * 
                     */
                    bool EksCiIdHasBeenSet() const;

                private:

                    /**
                     * 事件集合
                     */
                    std::vector<Event> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * 容器实例id
                     */
                    std::string m_eksCiId;
                    bool m_eksCiIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEKSCONTAINERINSTANCEEVENTRESPONSE_H_

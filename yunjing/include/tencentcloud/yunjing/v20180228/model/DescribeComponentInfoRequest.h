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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBECOMPONENTINFOREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBECOMPONENTINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeComponentInfo请求参数结构体
                */
                class DescribeComponentInfoRequest : public AbstractModel
                {
                public:
                    DescribeComponentInfoRequest();
                    ~DescribeComponentInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取组件ID。
                     * @return ComponentId 组件ID。
                     * 
                     */
                    uint64_t GetComponentId() const;

                    /**
                     * 设置组件ID。
                     * @param _componentId 组件ID。
                     * 
                     */
                    void SetComponentId(const uint64_t& _componentId);

                    /**
                     * 判断参数 ComponentId 是否已赋值
                     * @return ComponentId 是否已赋值
                     * 
                     */
                    bool ComponentIdHasBeenSet() const;

                private:

                    /**
                     * 组件ID。
                     */
                    uint64_t m_componentId;
                    bool m_componentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBECOMPONENTINFOREQUEST_H_

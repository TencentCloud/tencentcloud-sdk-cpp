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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBECOMPONENTINFORESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBECOMPONENTINFORESPONSE_H_

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
                * DescribeComponentInfo返回参数结构体
                */
                class DescribeComponentInfoResponse : public AbstractModel
                {
                public:
                    DescribeComponentInfoResponse();
                    ~DescribeComponentInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取组件ID。
                     * @return Id 组件ID。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取组件名称。
                     * @return ComponentName 组件名称。
                     * 
                     */
                    std::string GetComponentName() const;

                    /**
                     * 判断参数 ComponentName 是否已赋值
                     * @return ComponentName 是否已赋值
                     * 
                     */
                    bool ComponentNameHasBeenSet() const;

                    /**
                     * 获取组件类型。
<li>WEB：web组件</li>
<li>SYSTEM：系统组件</li>
                     * @return ComponentType 组件类型。
<li>WEB：web组件</li>
<li>SYSTEM：系统组件</li>
                     * 
                     */
                    std::string GetComponentType() const;

                    /**
                     * 判断参数 ComponentType 是否已赋值
                     * @return ComponentType 是否已赋值
                     * 
                     */
                    bool ComponentTypeHasBeenSet() const;

                    /**
                     * 获取组件官网。
                     * @return Homepage 组件官网。
                     * 
                     */
                    std::string GetHomepage() const;

                    /**
                     * 判断参数 Homepage 是否已赋值
                     * @return Homepage 是否已赋值
                     * 
                     */
                    bool HomepageHasBeenSet() const;

                    /**
                     * 获取组件描述。
                     * @return Description 组件描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 组件ID。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 组件名称。
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * 组件类型。
<li>WEB：web组件</li>
<li>SYSTEM：系统组件</li>
                     */
                    std::string m_componentType;
                    bool m_componentTypeHasBeenSet;

                    /**
                     * 组件官网。
                     */
                    std::string m_homepage;
                    bool m_homepageHasBeenSet;

                    /**
                     * 组件描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBECOMPONENTINFORESPONSE_H_

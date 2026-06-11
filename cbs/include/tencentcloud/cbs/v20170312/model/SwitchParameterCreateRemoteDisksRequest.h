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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_SWITCHPARAMETERCREATEREMOTEDISKSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_SWITCHPARAMETERCREATEREMOTEDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Placement.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * SwitchParameterCreateRemoteDisks请求参数结构体
                */
                class SwitchParameterCreateRemoteDisksRequest : public AbstractModel
                {
                public:
                    SwitchParameterCreateRemoteDisksRequest();
                    ~SwitchParameterCreateRemoteDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例所在的位置。通过该参数可以指定实例所属可用区、所属项目等属性。</p>
                     * @return Placement <p>实例所在的位置。通过该参数可以指定实例所属可用区、所属项目等属性。</p>
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置<p>实例所在的位置。通过该参数可以指定实例所属可用区、所属项目等属性。</p>
                     * @param _placement <p>实例所在的位置。通过该参数可以指定实例所属可用区、所属项目等属性。</p>
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                private:

                    /**
                     * <p>实例所在的位置。通过该参数可以指定实例所属可用区、所属项目等属性。</p>
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_SWITCHPARAMETERCREATEREMOTEDISKSREQUEST_H_

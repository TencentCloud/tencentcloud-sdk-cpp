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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_UNBINDAPIGROUPREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_UNBINDAPIGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/GatewayGroupIds.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * UnbindApiGroup请求参数结构体
                */
                class UnbindApiGroupRequest : public AbstractModel
                {
                public:
                    UnbindApiGroupRequest();
                    ~UnbindApiGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分组网关id列表
                     * @return GroupGatewayList 分组网关id列表
                     * 
                     */
                    std::vector<GatewayGroupIds> GetGroupGatewayList() const;

                    /**
                     * 设置分组网关id列表
                     * @param _groupGatewayList 分组网关id列表
                     * 
                     */
                    void SetGroupGatewayList(const std::vector<GatewayGroupIds>& _groupGatewayList);

                    /**
                     * 判断参数 GroupGatewayList 是否已赋值
                     * @return GroupGatewayList 是否已赋值
                     * 
                     */
                    bool GroupGatewayListHasBeenSet() const;

                private:

                    /**
                     * 分组网关id列表
                     */
                    std::vector<GatewayGroupIds> m_groupGatewayList;
                    bool m_groupGatewayListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_UNBINDAPIGROUPREQUEST_H_

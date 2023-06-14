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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DELETEWORKGROUPREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DELETEWORKGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DeleteWorkGroup请求参数结构体
                */
                class DeleteWorkGroupRequest : public AbstractModel
                {
                public:
                    DeleteWorkGroupRequest();
                    ~DeleteWorkGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要删除的工作组Id集合
                     * @return WorkGroupIds 要删除的工作组Id集合
                     * 
                     */
                    std::vector<int64_t> GetWorkGroupIds() const;

                    /**
                     * 设置要删除的工作组Id集合
                     * @param _workGroupIds 要删除的工作组Id集合
                     * 
                     */
                    void SetWorkGroupIds(const std::vector<int64_t>& _workGroupIds);

                    /**
                     * 判断参数 WorkGroupIds 是否已赋值
                     * @return WorkGroupIds 是否已赋值
                     * 
                     */
                    bool WorkGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 要删除的工作组Id集合
                     */
                    std::vector<int64_t> m_workGroupIds;
                    bool m_workGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DELETEWORKGROUPREQUEST_H_

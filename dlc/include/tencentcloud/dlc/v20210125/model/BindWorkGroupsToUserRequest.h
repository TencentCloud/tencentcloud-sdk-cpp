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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_BINDWORKGROUPSTOUSERREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_BINDWORKGROUPSTOUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/WorkGroupIdSetOfUserId.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * BindWorkGroupsToUser请求参数结构体
                */
                class BindWorkGroupsToUserRequest : public AbstractModel
                {
                public:
                    BindWorkGroupsToUserRequest();
                    ~BindWorkGroupsToUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取绑定的用户和工作组信息
                     * @return AddInfo 绑定的用户和工作组信息
                     * 
                     */
                    WorkGroupIdSetOfUserId GetAddInfo() const;

                    /**
                     * 设置绑定的用户和工作组信息
                     * @param _addInfo 绑定的用户和工作组信息
                     * 
                     */
                    void SetAddInfo(const WorkGroupIdSetOfUserId& _addInfo);

                    /**
                     * 判断参数 AddInfo 是否已赋值
                     * @return AddInfo 是否已赋值
                     * 
                     */
                    bool AddInfoHasBeenSet() const;

                private:

                    /**
                     * 绑定的用户和工作组信息
                     */
                    WorkGroupIdSetOfUserId m_addInfo;
                    bool m_addInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_BINDWORKGROUPSTOUSERREQUEST_H_

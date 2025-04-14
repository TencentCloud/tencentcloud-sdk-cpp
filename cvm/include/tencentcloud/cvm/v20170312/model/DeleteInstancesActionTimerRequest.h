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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DELETEINSTANCESACTIONTIMERREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DELETEINSTANCESACTIONTIMERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteInstancesActionTimer请求参数结构体
                */
                class DeleteInstancesActionTimerRequest : public AbstractModel
                {
                public:
                    DeleteInstancesActionTimerRequest();
                    ~DeleteInstancesActionTimerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取定时任务ID列表，可以通过[ DescribeInstancesActionTimer ](https://cloud.tencent.com/document/product/213/103950)接口查询。只能删除未执行的定时任务。
                     * @return ActionTimerIds 定时任务ID列表，可以通过[ DescribeInstancesActionTimer ](https://cloud.tencent.com/document/product/213/103950)接口查询。只能删除未执行的定时任务。
                     * 
                     */
                    std::vector<std::string> GetActionTimerIds() const;

                    /**
                     * 设置定时任务ID列表，可以通过[ DescribeInstancesActionTimer ](https://cloud.tencent.com/document/product/213/103950)接口查询。只能删除未执行的定时任务。
                     * @param _actionTimerIds 定时任务ID列表，可以通过[ DescribeInstancesActionTimer ](https://cloud.tencent.com/document/product/213/103950)接口查询。只能删除未执行的定时任务。
                     * 
                     */
                    void SetActionTimerIds(const std::vector<std::string>& _actionTimerIds);

                    /**
                     * 判断参数 ActionTimerIds 是否已赋值
                     * @return ActionTimerIds 是否已赋值
                     * 
                     */
                    bool ActionTimerIdsHasBeenSet() const;

                private:

                    /**
                     * 定时任务ID列表，可以通过[ DescribeInstancesActionTimer ](https://cloud.tencent.com/document/product/213/103950)接口查询。只能删除未执行的定时任务。
                     */
                    std::vector<std::string> m_actionTimerIds;
                    bool m_actionTimerIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DELETEINSTANCESACTIONTIMERREQUEST_H_

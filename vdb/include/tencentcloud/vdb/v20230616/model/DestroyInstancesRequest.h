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

#ifndef TENCENTCLOUD_VDB_V20230616_MODEL_DESTROYINSTANCESREQUEST_H_
#define TENCENTCLOUD_VDB_V20230616_MODEL_DESTROYINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vdb
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DestroyInstances请求参数结构体
                */
                class DestroyInstancesRequest : public AbstractModel
                {
                public:
                    DestroyInstancesRequest();
                    ~DestroyInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取以数组形式指定待销毁下线的实例 ID。
                     * @return InstanceIds 以数组形式指定待销毁下线的实例 ID。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置以数组形式指定待销毁下线的实例 ID。
                     * @param _instanceIds 以数组形式指定待销毁下线的实例 ID。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 以数组形式指定待销毁下线的实例 ID。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VDB_V20230616_MODEL_DESTROYINSTANCESREQUEST_H_

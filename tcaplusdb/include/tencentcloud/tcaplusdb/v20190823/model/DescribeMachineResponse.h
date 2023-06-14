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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEMACHINERESPONSE_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEMACHINERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/PoolInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DescribeMachine返回参数结构体
                */
                class DescribeMachineResponse : public AbstractModel
                {
                public:
                    DescribeMachineResponse();
                    ~DescribeMachineResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取独占机器资源列表
                     * @return PoolList 独占机器资源列表
                     * 
                     */
                    std::vector<PoolInfo> GetPoolList() const;

                    /**
                     * 判断参数 PoolList 是否已赋值
                     * @return PoolList 是否已赋值
                     * 
                     */
                    bool PoolListHasBeenSet() const;

                private:

                    /**
                     * 独占机器资源列表
                     */
                    std::vector<PoolInfo> m_poolList;
                    bool m_poolListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEMACHINERESPONSE_H_

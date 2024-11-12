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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRISKEVENTSSTATUSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRISKEVENTSSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyRiskEventsStatus返回参数结构体
                */
                class ModifyRiskEventsStatusResponse : public AbstractModel
                {
                public:
                    ModifyRiskEventsStatusResponse();
                    ~ModifyRiskEventsStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取此次操作是否是异步操作，0：操作已完成，1：正在异步操作中，前端需要通过DescribeRiskBatchStatus 查询操作是否完成
                     * @return IsSync 此次操作是否是异步操作，0：操作已完成，1：正在异步操作中，前端需要通过DescribeRiskBatchStatus 查询操作是否完成
                     * 
                     */
                    uint64_t GetIsSync() const;

                    /**
                     * 判断参数 IsSync 是否已赋值
                     * @return IsSync 是否已赋值
                     * 
                     */
                    bool IsSyncHasBeenSet() const;

                private:

                    /**
                     * 此次操作是否是异步操作，0：操作已完成，1：正在异步操作中，前端需要通过DescribeRiskBatchStatus 查询操作是否完成
                     */
                    uint64_t m_isSync;
                    bool m_isSyncHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRISKEVENTSSTATUSRESPONSE_H_

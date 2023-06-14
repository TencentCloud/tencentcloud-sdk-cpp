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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEDEVICESESSIONLISTRESPONSE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEDEVICESESSIONLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trro/v20220325/model/SessionInfo.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeDeviceSessionList返回参数结构体
                */
                class DescribeDeviceSessionListResponse : public AbstractModel
                {
                public:
                    DescribeDeviceSessionListResponse();
                    ~DescribeDeviceSessionListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总个数
                     * @return Total 总个数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取会话列表
                     * @return DeviceSessionList 会话列表
                     * 
                     */
                    std::vector<SessionInfo> GetDeviceSessionList() const;

                    /**
                     * 判断参数 DeviceSessionList 是否已赋值
                     * @return DeviceSessionList 是否已赋值
                     * 
                     */
                    bool DeviceSessionListHasBeenSet() const;

                    /**
                     * 获取本页数量
                     * @return Num 本页数量
                     * 
                     */
                    uint64_t GetNum() const;

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                private:

                    /**
                     * 总个数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 会话列表
                     */
                    std::vector<SessionInfo> m_deviceSessionList;
                    bool m_deviceSessionListHasBeenSet;

                    /**
                     * 本页数量
                     */
                    uint64_t m_num;
                    bool m_numHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEDEVICESESSIONLISTRESPONSE_H_

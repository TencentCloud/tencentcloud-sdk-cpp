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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESTAFFINFOLISTRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESTAFFINFOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/StaffInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeStaffInfoList返回参数结构体
                */
                class DescribeStaffInfoListResponse : public AbstractModel
                {
                public:
                    DescribeStaffInfoListResponse();
                    ~DescribeStaffInfoListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取坐席用户总数
                     * @return TotalCount 坐席用户总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取坐席用户信息列表
                     * @return StaffList 坐席用户信息列表
                     * 
                     */
                    std::vector<StaffInfo> GetStaffList() const;

                    /**
                     * 判断参数 StaffList 是否已赋值
                     * @return StaffList 是否已赋值
                     * 
                     */
                    bool StaffListHasBeenSet() const;

                private:

                    /**
                     * 坐席用户总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 坐席用户信息列表
                     */
                    std::vector<StaffInfo> m_staffList;
                    bool m_staffListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESTAFFINFOLISTRESPONSE_H_

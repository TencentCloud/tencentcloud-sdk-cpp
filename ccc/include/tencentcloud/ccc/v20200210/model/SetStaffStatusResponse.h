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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_SETSTAFFSTATUSRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_SETSTAFFSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/SetStaffStatusRspItem.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * SetStaffStatus返回参数结构体
                */
                class SetStaffStatusResponse : public AbstractModel
                {
                public:
                    SetStaffStatusResponse();
                    ~SetStaffStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设置座席状态应答列表
                     * @return StaffStatusList 设置座席状态应答列表
                     * 
                     */
                    std::vector<SetStaffStatusRspItem> GetStaffStatusList() const;

                    /**
                     * 判断参数 StaffStatusList 是否已赋值
                     * @return StaffStatusList 是否已赋值
                     * 
                     */
                    bool StaffStatusListHasBeenSet() const;

                private:

                    /**
                     * 设置座席状态应答列表
                     */
                    std::vector<SetStaffStatusRspItem> m_staffStatusList;
                    bool m_staffStatusListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_SETSTAFFSTATUSRESPONSE_H_

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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DELETESTAFFRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DELETESTAFFRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DeleteStaff返回参数结构体
                */
                class DeleteStaffResponse : public AbstractModel
                {
                public:
                    DeleteStaffResponse();
                    ~DeleteStaffResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取无法删除的状态为在线的客服列表
                     * @return OnlineStaffList 无法删除的状态为在线的客服列表
                     * 
                     */
                    std::vector<std::string> GetOnlineStaffList() const;

                    /**
                     * 判断参数 OnlineStaffList 是否已赋值
                     * @return OnlineStaffList 是否已赋值
                     * 
                     */
                    bool OnlineStaffListHasBeenSet() const;

                private:

                    /**
                     * 无法删除的状态为在线的客服列表
                     */
                    std::vector<std::string> m_onlineStaffList;
                    bool m_onlineStaffListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DELETESTAFFRESPONSE_H_

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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETEENVIRONMENTSRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETEENVIRONMENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DeleteEnvironments返回参数结构体
                */
                class DeleteEnvironmentsResponse : public AbstractModel
                {
                public:
                    DeleteEnvironmentsResponse();
                    ~DeleteEnvironmentsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取成功删除的环境（命名空间）数组。
                     * @return EnvironmentIds 成功删除的环境（命名空间）数组。
                     * 
                     */
                    std::vector<std::string> GetEnvironmentIds() const;

                    /**
                     * 判断参数 EnvironmentIds 是否已赋值
                     * @return EnvironmentIds 是否已赋值
                     * 
                     */
                    bool EnvironmentIdsHasBeenSet() const;

                private:

                    /**
                     * 成功删除的环境（命名空间）数组。
                     */
                    std::vector<std::string> m_environmentIds;
                    bool m_environmentIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETEENVIRONMENTSRESPONSE_H_

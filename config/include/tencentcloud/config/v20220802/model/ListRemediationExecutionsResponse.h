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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTREMEDIATIONEXECUTIONSRESPONSE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTREMEDIATIONEXECUTIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/RemediationExecutions.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * ListRemediationExecutions返回参数结构体
                */
                class ListRemediationExecutionsResponse : public AbstractModel
                {
                public:
                    ListRemediationExecutionsResponse();
                    ~ListRemediationExecutionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数
                     * @return Total 总数
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
                     * 获取修复记录
                     * @return RemediationExecutions 修复记录
                     * 
                     */
                    std::vector<RemediationExecutions> GetRemediationExecutions() const;

                    /**
                     * 判断参数 RemediationExecutions 是否已赋值
                     * @return RemediationExecutions 是否已赋值
                     * 
                     */
                    bool RemediationExecutionsHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 修复记录
                     */
                    std::vector<RemediationExecutions> m_remediationExecutions;
                    bool m_remediationExecutionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTREMEDIATIONEXECUTIONSRESPONSE_H_

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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYBATCHCUSTOMRULESTATUSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYBATCHCUSTOMRULESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyBatchCustomRuleStatus请求参数结构体
                */
                class ModifyBatchCustomRuleStatusRequest : public AbstractModel
                {
                public:
                    ModifyBatchCustomRuleStatusRequest();
                    ~ModifyBatchCustomRuleStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取批量Id
                     * @return Id 批量Id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置批量Id
                     * @param _id 批量Id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取开关状态 0-关、1-开

                     * @return Status 开关状态 0-关、1-开

                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置开关状态 0-关、1-开

                     * @param _status 开关状态 0-关、1-开

                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 批量Id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 开关状态 0-关、1-开

                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYBATCHCUSTOMRULESTATUSREQUEST_H_

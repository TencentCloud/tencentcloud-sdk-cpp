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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SYNCPROXYORGANIZATIONOPERATORSRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SYNCPROXYORGANIZATIONOPERATORSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/SyncFailReason.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * SyncProxyOrganizationOperators返回参数结构体
                */
                class SyncProxyOrganizationOperatorsResponse : public AbstractModel
                {
                public:
                    SyncProxyOrganizationOperatorsResponse();
                    ~SyncProxyOrganizationOperatorsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取 同步的状态,  全部同步失败接口是接口会直接报错

<ul><li> **1** :全部成功</li>
<li> **2** :部分成功</li></ul>
                     * @return Status  同步的状态,  全部同步失败接口是接口会直接报错

<ul><li> **1** :全部成功</li>
<li> **2** :部分成功</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取同步失败员工ID及其失败原因
                     * @return FailedList 同步失败员工ID及其失败原因
                     * 
                     */
                    std::vector<SyncFailReason> GetFailedList() const;

                    /**
                     * 判断参数 FailedList 是否已赋值
                     * @return FailedList 是否已赋值
                     * 
                     */
                    bool FailedListHasBeenSet() const;

                private:

                    /**
                     *  同步的状态,  全部同步失败接口是接口会直接报错

<ul><li> **1** :全部成功</li>
<li> **2** :部分成功</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 同步失败员工ID及其失败原因
                     */
                    std::vector<SyncFailReason> m_failedList;
                    bool m_failedListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SYNCPROXYORGANIZATIONOPERATORSRESPONSE_H_

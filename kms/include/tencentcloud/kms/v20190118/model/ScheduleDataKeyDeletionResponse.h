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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_SCHEDULEDATAKEYDELETIONRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_SCHEDULEDATAKEYDELETIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * ScheduleDataKeyDeletion返回参数结构体
                */
                class ScheduleDataKeyDeletionResponse : public AbstractModel
                {
                public:
                    ScheduleDataKeyDeletionResponse();
                    ~ScheduleDataKeyDeletionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取计划删除执行时间
                     * @return DeletionDate 计划删除执行时间
                     * 
                     */
                    uint64_t GetDeletionDate() const;

                    /**
                     * 判断参数 DeletionDate 是否已赋值
                     * @return DeletionDate 是否已赋值
                     * 
                     */
                    bool DeletionDateHasBeenSet() const;

                    /**
                     * 获取唯一标志被计划删除的数据密钥
                     * @return DataKeyId 唯一标志被计划删除的数据密钥
                     * 
                     */
                    std::string GetDataKeyId() const;

                    /**
                     * 判断参数 DataKeyId 是否已赋值
                     * @return DataKeyId 是否已赋值
                     * 
                     */
                    bool DataKeyIdHasBeenSet() const;

                private:

                    /**
                     * 计划删除执行时间
                     */
                    uint64_t m_deletionDate;
                    bool m_deletionDateHasBeenSet;

                    /**
                     * 唯一标志被计划删除的数据密钥
                     */
                    std::string m_dataKeyId;
                    bool m_dataKeyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_SCHEDULEDATAKEYDELETIONRESPONSE_H_

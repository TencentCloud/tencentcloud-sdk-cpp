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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DOMAINBATCHLOGSET_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DOMAINBATCHLOGSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 批量操作记录
                */
                class DomainBatchLogSet : public AbstractModel
                {
                public:
                    DomainBatchLogSet();
                    ~DomainBatchLogSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志ID
                     * @return LogId 日志ID
                     */
                    int64_t GetLogId() const;

                    /**
                     * 设置日志ID
                     * @param LogId 日志ID
                     */
                    void SetLogId(const int64_t& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     */
                    bool LogIdHasBeenSet() const;

                    /**
                     * 获取数量
                     * @return Number 数量
                     */
                    int64_t GetNumber() const;

                    /**
                     * 设置数量
                     * @param Number 数量
                     */
                    void SetNumber(const int64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取执行状态：
doing 执行中。
done 执行完成。
                     * @return Status 执行状态：
doing 执行中。
done 执行完成。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置执行状态：
doing 执行中。
done 执行完成。
                     * @param Status 执行状态：
doing 执行中。
done 执行完成。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取提交时间
                     * @return CreatedOn 提交时间
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置提交时间
                     * @param CreatedOn 提交时间
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     */
                    bool CreatedOnHasBeenSet() const;

                private:

                    /**
                     * 日志ID
                     */
                    int64_t m_logId;
                    bool m_logIdHasBeenSet;

                    /**
                     * 数量
                     */
                    int64_t m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 执行状态：
doing 执行中。
done 执行完成。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 提交时间
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DOMAINBATCHLOGSET_H_

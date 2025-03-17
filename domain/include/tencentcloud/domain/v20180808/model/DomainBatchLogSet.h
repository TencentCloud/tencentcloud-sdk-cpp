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
                     * 
                     */
                    int64_t GetLogId() const;

                    /**
                     * 设置日志ID
                     * @param _logId 日志ID
                     * 
                     */
                    void SetLogId(const int64_t& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     * 
                     */
                    bool LogIdHasBeenSet() const;

                    /**
                     * 获取数量
                     * @return Number 数量
                     * 
                     */
                    int64_t GetNumber() const;

                    /**
                     * 设置数量
                     * @param _number 数量
                     * 
                     */
                    void SetNumber(const int64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取执行状态：
doing 执行中。
done 执行完成。
                     * @return Status 执行状态：
doing 执行中。
done 执行完成。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置执行状态：
doing 执行中。
done 执行完成。
                     * @param _status 执行状态：
doing 执行中。
done 执行完成。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取提交时间
                     * @return CreatedOn 提交时间
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置提交时间
                     * @param _createdOn 提交时间
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取批量操作成功个数
                     * @return Success 批量操作成功个数
                     * 
                     */
                    int64_t GetSuccess() const;

                    /**
                     * 设置批量操作成功个数
                     * @param _success 批量操作成功个数
                     * 
                     */
                    void SetSuccess(const int64_t& _success);

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                    /**
                     * 获取批量操作处理中个数
                     * @return Doing 批量操作处理中个数
                     * 
                     */
                    int64_t GetDoing() const;

                    /**
                     * 设置批量操作处理中个数
                     * @param _doing 批量操作处理中个数
                     * 
                     */
                    void SetDoing(const int64_t& _doing);

                    /**
                     * 判断参数 Doing 是否已赋值
                     * @return Doing 是否已赋值
                     * 
                     */
                    bool DoingHasBeenSet() const;

                    /**
                     * 获取批量操作失败个数
                     * @return Failed 批量操作失败个数
                     * 
                     */
                    int64_t GetFailed() const;

                    /**
                     * 设置批量操作失败个数
                     * @param _failed 批量操作失败个数
                     * 
                     */
                    void SetFailed(const int64_t& _failed);

                    /**
                     * 判断参数 Failed 是否已赋值
                     * @return Failed 是否已赋值
                     * 
                     */
                    bool FailedHasBeenSet() const;

                    /**
                     * 获取是否付费
                     * @return PayStatus 是否付费
                     * 
                     */
                    bool GetPayStatus() const;

                    /**
                     * 设置是否付费
                     * @param _payStatus 是否付费
                     * 
                     */
                    void SetPayStatus(const bool& _payStatus);

                    /**
                     * 判断参数 PayStatus 是否已赋值
                     * @return PayStatus 是否已赋值
                     * 
                     */
                    bool PayStatusHasBeenSet() const;

                    /**
                     * 获取大订单ID
                     * @return BigDealId 大订单ID
                     * 
                     */
                    std::string GetBigDealId() const;

                    /**
                     * 设置大订单ID
                     * @param _bigDealId 大订单ID
                     * 
                     */
                    void SetBigDealId(const std::string& _bigDealId);

                    /**
                     * 判断参数 BigDealId 是否已赋值
                     * @return BigDealId 是否已赋值
                     * 
                     */
                    bool BigDealIdHasBeenSet() const;

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

                    /**
                     * 批量操作成功个数
                     */
                    int64_t m_success;
                    bool m_successHasBeenSet;

                    /**
                     * 批量操作处理中个数
                     */
                    int64_t m_doing;
                    bool m_doingHasBeenSet;

                    /**
                     * 批量操作失败个数
                     */
                    int64_t m_failed;
                    bool m_failedHasBeenSet;

                    /**
                     * 是否付费
                     */
                    bool m_payStatus;
                    bool m_payStatusHasBeenSet;

                    /**
                     * 大订单ID
                     */
                    std::string m_bigDealId;
                    bool m_bigDealIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DOMAINBATCHLOGSET_H_

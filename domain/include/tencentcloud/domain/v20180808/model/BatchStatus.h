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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_BATCHSTATUS_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_BATCHSTATUS_H_

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
                * 批量任务状态
                */
                class BatchStatus : public AbstractModel
                {
                public:
                    BatchStatus();
                    ~BatchStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取批量任务id
                     * @return LogId 批量任务id
                     * 
                     */
                    uint64_t GetLogId() const;

                    /**
                     * 设置批量任务id
                     * @param _logId 批量任务id
                     * 
                     */
                    void SetLogId(const uint64_t& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     * 
                     */
                    bool LogIdHasBeenSet() const;

                    /**
                     * 获取批量任务状态  doing：进行中  success：成功  failed：失败  partial_success：部分成功
                     * @return Status 批量任务状态  doing：进行中  success：成功  failed：失败  partial_success：部分成功
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置批量任务状态  doing：进行中  success：成功  failed：失败  partial_success：部分成功
                     * @param _status 批量任务状态  doing：进行中  success：成功  failed：失败  partial_success：部分成功
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
                     * 获取批量任务类型
new：注册域名
renew：续费域名
batch_transfer_prohibition_on：开启禁止转移锁
batch_transfer_prohibition_off：关闭禁止转移锁
batch_update_prohibition_on：开启禁止更新锁
batch_update_prohibition_off：关闭禁止更新锁
batch_modify_owner：域名转移
batch_modify_domain_info：域名信息修改
batch_transfer_in：域名转入
batch_cancel_transfer_out：域名取消转出
                     * @return BatchAction 批量任务类型
new：注册域名
renew：续费域名
batch_transfer_prohibition_on：开启禁止转移锁
batch_transfer_prohibition_off：关闭禁止转移锁
batch_update_prohibition_on：开启禁止更新锁
batch_update_prohibition_off：关闭禁止更新锁
batch_modify_owner：域名转移
batch_modify_domain_info：域名信息修改
batch_transfer_in：域名转入
batch_cancel_transfer_out：域名取消转出
                     * 
                     */
                    std::string GetBatchAction() const;

                    /**
                     * 设置批量任务类型
new：注册域名
renew：续费域名
batch_transfer_prohibition_on：开启禁止转移锁
batch_transfer_prohibition_off：关闭禁止转移锁
batch_update_prohibition_on：开启禁止更新锁
batch_update_prohibition_off：关闭禁止更新锁
batch_modify_owner：域名转移
batch_modify_domain_info：域名信息修改
batch_transfer_in：域名转入
batch_cancel_transfer_out：域名取消转出
                     * @param _batchAction 批量任务类型
new：注册域名
renew：续费域名
batch_transfer_prohibition_on：开启禁止转移锁
batch_transfer_prohibition_off：关闭禁止转移锁
batch_update_prohibition_on：开启禁止更新锁
batch_update_prohibition_off：关闭禁止更新锁
batch_modify_owner：域名转移
batch_modify_domain_info：域名信息修改
batch_transfer_in：域名转入
batch_cancel_transfer_out：域名取消转出
                     * 
                     */
                    void SetBatchAction(const std::string& _batchAction);

                    /**
                     * 判断参数 BatchAction 是否已赋值
                     * @return BatchAction 是否已赋值
                     * 
                     */
                    bool BatchActionHasBeenSet() const;

                private:

                    /**
                     * 批量任务id
                     */
                    uint64_t m_logId;
                    bool m_logIdHasBeenSet;

                    /**
                     * 批量任务状态  doing：进行中  success：成功  failed：失败  partial_success：部分成功
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 批量任务类型
new：注册域名
renew：续费域名
batch_transfer_prohibition_on：开启禁止转移锁
batch_transfer_prohibition_off：关闭禁止转移锁
batch_update_prohibition_on：开启禁止更新锁
batch_update_prohibition_off：关闭禁止更新锁
batch_modify_owner：域名转移
batch_modify_domain_info：域名信息修改
batch_transfer_in：域名转入
batch_cancel_transfer_out：域名取消转出
                     */
                    std::string m_batchAction;
                    bool m_batchActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_BATCHSTATUS_H_

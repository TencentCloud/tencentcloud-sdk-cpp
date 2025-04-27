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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DOMAINBATCHDETAILSET_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DOMAINBATCHDETAILSET_H_

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
                * 批量操作日志详情
                */
                class DomainBatchDetailSet : public AbstractModel
                {
                public:
                    DomainBatchDetailSet();
                    ~DomainBatchDetailSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取详情ID
                     * @return Id 详情ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置详情ID
                     * @param _id 详情ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取类型  
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
                     * @return Action 类型  
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
                    std::string GetAction() const;

                    /**
                     * 设置类型  
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
                     * @param _action 类型  
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
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取执行状态：
doing 执行中。
failed 操作失败。
success  操作成功。
                     * @return Status 执行状态：
doing 执行中。
failed 操作失败。
success  操作成功。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置执行状态：
doing 执行中。
failed 操作失败。
success  操作成功。
                     * @param _status 执行状态：
doing 执行中。
failed 操作失败。
success  操作成功。
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
                     * 获取失败原因，如果状态成功(Status:success),则该字段为空
                     * @return Reason 失败原因，如果状态成功(Status:success),则该字段为空
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置失败原因，如果状态成功(Status:success),则该字段为空
                     * @param _reason 失败原因，如果状态成功(Status:success),则该字段为空
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedOn 创建时间
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置创建时间
                     * @param _createdOn 创建时间
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
                     * 获取更新时间
                     * @return UpdatedOn 更新时间
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置更新时间
                     * @param _updatedOn 更新时间
                     * 
                     */
                    void SetUpdatedOn(const std::string& _updatedOn);

                    /**
                     * 判断参数 UpdatedOn 是否已赋值
                     * @return UpdatedOn 是否已赋值
                     * 
                     */
                    bool UpdatedOnHasBeenSet() const;

                    /**
                     * 获取订单号
                     * @return BigDealId 订单号
                     * 
                     */
                    std::string GetBigDealId() const;

                    /**
                     * 设置订单号
                     * @param _bigDealId 订单号
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
                     * 详情ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 类型  
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
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 执行状态：
doing 执行中。
failed 操作失败。
success  操作成功。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 失败原因，如果状态成功(Status:success),则该字段为空
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                    /**
                     * 订单号
                     */
                    std::string m_bigDealId;
                    bool m_bigDealIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DOMAINBATCHDETAILSET_H_

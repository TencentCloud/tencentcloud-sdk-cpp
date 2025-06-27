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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYJOBRECORD_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYJOBRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctem/v20231128/model/JobRecordProgress.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * 任务详情
                */
                class DisplayJobRecord : public AbstractModel
                {
                public:
                    DisplayJobRecord();
                    ~DisplayJobRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务Id
                     * @return Id 任务Id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置任务Id
                     * @param _id 任务Id
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
                     * 获取企业ID
                     * @return CustomerId 企业ID
                     * 
                     */
                    int64_t GetCustomerId() const;

                    /**
                     * 设置企业ID
                     * @param _customerId 企业ID
                     * 
                     */
                    void SetCustomerId(const int64_t& _customerId);

                    /**
                     * 判断参数 CustomerId 是否已赋值
                     * @return CustomerId 是否已赋值
                     * 
                     */
                    bool CustomerIdHasBeenSet() const;

                    /**
                     * 获取企业名称
                     * @return CustomerName 企业名称
                     * 
                     */
                    std::string GetCustomerName() const;

                    /**
                     * 设置企业名称
                     * @param _customerName 企业名称
                     * 
                     */
                    void SetCustomerName(const std::string& _customerName);

                    /**
                     * 判断参数 CustomerName 是否已赋值
                     * @return CustomerName 是否已赋值
                     * 
                     */
                    bool CustomerNameHasBeenSet() const;

                    /**
                     * 获取周期任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Crontab 周期任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCrontab() const;

                    /**
                     * 设置周期任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _crontab 周期任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCrontab(const std::string& _crontab);

                    /**
                     * 判断参数 Crontab 是否已赋值
                     * @return Crontab 是否已赋值
                     * 
                     */
                    bool CrontabHasBeenSet() const;

                    /**
                     * 获取状态：2-错误/已停止，3-进行中，1-已完成, 4-停止
                     * @return Status 状态：2-错误/已停止，3-进行中，1-已完成, 4-停止
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态：2-错误/已停止，3-进行中，1-已完成, 4-停止
                     * @param _status 状态：2-错误/已停止，3-进行中，1-已完成, 4-停止
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取新增数据
                     * @return NewCount 新增数据
                     * 
                     */
                    int64_t GetNewCount() const;

                    /**
                     * 设置新增数据
                     * @param _newCount 新增数据
                     * 
                     */
                    void SetNewCount(const int64_t& _newCount);

                    /**
                     * 判断参数 NewCount 是否已赋值
                     * @return NewCount 是否已赋值
                     * 
                     */
                    bool NewCountHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateAt 创建时间
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置创建时间
                     * @param _createAt 创建时间
                     * 
                     */
                    void SetCreateAt(const std::string& _createAt);

                    /**
                     * 判断参数 CreateAt 是否已赋值
                     * @return CreateAt 是否已赋值
                     * 
                     */
                    bool CreateAtHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateAt 更新时间
                     * 
                     */
                    std::string GetUpdateAt() const;

                    /**
                     * 设置更新时间
                     * @param _updateAt 更新时间
                     * 
                     */
                    void SetUpdateAt(const std::string& _updateAt);

                    /**
                     * 判断参数 UpdateAt 是否已赋值
                     * @return UpdateAt 是否已赋值
                     * 
                     */
                    bool UpdateAtHasBeenSet() const;

                    /**
                     * 获取子任务进度
                     * @return Progress 子任务进度
                     * 
                     */
                    JobRecordProgress GetProgress() const;

                    /**
                     * 设置子任务进度
                     * @param _progress 子任务进度
                     * 
                     */
                    void SetProgress(const JobRecordProgress& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取并发设置
                     * @return Qps 并发设置
                     * 
                     */
                    int64_t GetQps() const;

                    /**
                     * 设置并发设置
                     * @param _qps 并发设置
                     * 
                     */
                    void SetQps(const int64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取客户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 客户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置客户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin 客户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取客户appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 客户appid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置客户appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 客户appid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * 任务Id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 企业ID
                     */
                    int64_t m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * 企业名称
                     */
                    std::string m_customerName;
                    bool m_customerNameHasBeenSet;

                    /**
                     * 周期任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_crontab;
                    bool m_crontabHasBeenSet;

                    /**
                     * 状态：2-错误/已停止，3-进行中，1-已完成, 4-停止
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 新增数据
                     */
                    int64_t m_newCount;
                    bool m_newCountHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateAt;
                    bool m_updateAtHasBeenSet;

                    /**
                     * 子任务进度
                     */
                    JobRecordProgress m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 并发设置
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 客户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 客户appid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYJOBRECORD_H_

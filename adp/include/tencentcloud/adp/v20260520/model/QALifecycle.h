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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_QALIFECYCLE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_QALIFECYCLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ExpirationPolicy.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * QA 生命周期信息
                */
                class QALifecycle : public AbstractModel
                {
                public:
                    QALifecycle();
                    ~QALifecycle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>创建时间（Unix 秒）</p>
                     * @return CreateTime <p>创建时间（Unix 秒）</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间（Unix 秒）</p>
                     * @param _createTime <p>创建时间（Unix 秒）</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>过期策略（有效时间与超过有效时间后的行为）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpirationPolicy <p>过期策略（有效时间与超过有效时间后的行为）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExpirationPolicy GetExpirationPolicy() const;

                    /**
                     * 设置<p>过期策略（有效时间与超过有效时间后的行为）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expirationPolicy <p>过期策略（有效时间与超过有效时间后的行为）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpirationPolicy(const ExpirationPolicy& _expirationPolicy);

                    /**
                     * 判断参数 ExpirationPolicy 是否已赋值
                     * @return ExpirationPolicy 是否已赋值
                     * 
                     */
                    bool ExpirationPolicyHasBeenSet() const;

                    /**
                     * 获取<p>状态：1=待校验，2=未采纳，3=导入失败，4=审核中，5=审核失败，6=学习中，7=学习失败，8=导入完成，9=已过期，10=超量失效，11=超量失效恢复中，12=人工申诉中，13=人工申诉失败<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>QA_STATUS_UNKNOWN</td><td>0</td><td></td></tr><tr><td>QA_STATUS_PENDING_VERIFY</td><td>1</td><td>待校验</td></tr><tr><td>QA_STATUS_NOT_ACCEPTED</td><td>2</td><td>未采纳</td></tr><tr><td>QA_STATUS_IMPORT_FAIL</td><td>3</td><td>导入失败</td></tr><tr><td>QA_STATUS_AUDITING</td><td>4</td><td>审核中</td></tr><tr><td>QA_STATUS_AUDIT_FAIL</td><td>5</td><td>审核失败</td></tr><tr><td>QA_STATUS_LEARNING</td><td>6</td><td>学习中</td></tr><tr><td>QA_STATUS_LEARN_FAIL</td><td>7</td><td>学习失败</td></tr><tr><td>QA_STATUS_IMPORTED</td><td>8</td><td>导入完成</td></tr><tr><td>QA_STATUS_EXPIRED</td><td>9</td><td>已过期</td></tr><tr><td>QA_STATUS_QUOTA_INVALID</td><td>10</td><td>超量失效</td></tr><tr><td>QA_STATUS_QUOTA_RECOVERING</td><td>11</td><td>超量失效恢复中</td></tr><tr><td>QA_STATUS_MANUAL_APPEALING</td><td>12</td><td>人工申诉中</td></tr><tr><td>QA_STATUS_MANUAL_APPEAL_FAIL</td><td>13</td><td>人工申诉失败</td></tr></tbody></table></p>
                     * @return Status <p>状态：1=待校验，2=未采纳，3=导入失败，4=审核中，5=审核失败，6=学习中，7=学习失败，8=导入完成，9=已过期，10=超量失效，11=超量失效恢复中，12=人工申诉中，13=人工申诉失败<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>QA_STATUS_UNKNOWN</td><td>0</td><td></td></tr><tr><td>QA_STATUS_PENDING_VERIFY</td><td>1</td><td>待校验</td></tr><tr><td>QA_STATUS_NOT_ACCEPTED</td><td>2</td><td>未采纳</td></tr><tr><td>QA_STATUS_IMPORT_FAIL</td><td>3</td><td>导入失败</td></tr><tr><td>QA_STATUS_AUDITING</td><td>4</td><td>审核中</td></tr><tr><td>QA_STATUS_AUDIT_FAIL</td><td>5</td><td>审核失败</td></tr><tr><td>QA_STATUS_LEARNING</td><td>6</td><td>学习中</td></tr><tr><td>QA_STATUS_LEARN_FAIL</td><td>7</td><td>学习失败</td></tr><tr><td>QA_STATUS_IMPORTED</td><td>8</td><td>导入完成</td></tr><tr><td>QA_STATUS_EXPIRED</td><td>9</td><td>已过期</td></tr><tr><td>QA_STATUS_QUOTA_INVALID</td><td>10</td><td>超量失效</td></tr><tr><td>QA_STATUS_QUOTA_RECOVERING</td><td>11</td><td>超量失效恢复中</td></tr><tr><td>QA_STATUS_MANUAL_APPEALING</td><td>12</td><td>人工申诉中</td></tr><tr><td>QA_STATUS_MANUAL_APPEAL_FAIL</td><td>13</td><td>人工申诉失败</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态：1=待校验，2=未采纳，3=导入失败，4=审核中，5=审核失败，6=学习中，7=学习失败，8=导入完成，9=已过期，10=超量失效，11=超量失效恢复中，12=人工申诉中，13=人工申诉失败<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>QA_STATUS_UNKNOWN</td><td>0</td><td></td></tr><tr><td>QA_STATUS_PENDING_VERIFY</td><td>1</td><td>待校验</td></tr><tr><td>QA_STATUS_NOT_ACCEPTED</td><td>2</td><td>未采纳</td></tr><tr><td>QA_STATUS_IMPORT_FAIL</td><td>3</td><td>导入失败</td></tr><tr><td>QA_STATUS_AUDITING</td><td>4</td><td>审核中</td></tr><tr><td>QA_STATUS_AUDIT_FAIL</td><td>5</td><td>审核失败</td></tr><tr><td>QA_STATUS_LEARNING</td><td>6</td><td>学习中</td></tr><tr><td>QA_STATUS_LEARN_FAIL</td><td>7</td><td>学习失败</td></tr><tr><td>QA_STATUS_IMPORTED</td><td>8</td><td>导入完成</td></tr><tr><td>QA_STATUS_EXPIRED</td><td>9</td><td>已过期</td></tr><tr><td>QA_STATUS_QUOTA_INVALID</td><td>10</td><td>超量失效</td></tr><tr><td>QA_STATUS_QUOTA_RECOVERING</td><td>11</td><td>超量失效恢复中</td></tr><tr><td>QA_STATUS_MANUAL_APPEALING</td><td>12</td><td>人工申诉中</td></tr><tr><td>QA_STATUS_MANUAL_APPEAL_FAIL</td><td>13</td><td>人工申诉失败</td></tr></tbody></table></p>
                     * @param _status <p>状态：1=待校验，2=未采纳，3=导入失败，4=审核中，5=审核失败，6=学习中，7=学习失败，8=导入完成，9=已过期，10=超量失效，11=超量失效恢复中，12=人工申诉中，13=人工申诉失败<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>QA_STATUS_UNKNOWN</td><td>0</td><td></td></tr><tr><td>QA_STATUS_PENDING_VERIFY</td><td>1</td><td>待校验</td></tr><tr><td>QA_STATUS_NOT_ACCEPTED</td><td>2</td><td>未采纳</td></tr><tr><td>QA_STATUS_IMPORT_FAIL</td><td>3</td><td>导入失败</td></tr><tr><td>QA_STATUS_AUDITING</td><td>4</td><td>审核中</td></tr><tr><td>QA_STATUS_AUDIT_FAIL</td><td>5</td><td>审核失败</td></tr><tr><td>QA_STATUS_LEARNING</td><td>6</td><td>学习中</td></tr><tr><td>QA_STATUS_LEARN_FAIL</td><td>7</td><td>学习失败</td></tr><tr><td>QA_STATUS_IMPORTED</td><td>8</td><td>导入完成</td></tr><tr><td>QA_STATUS_EXPIRED</td><td>9</td><td>已过期</td></tr><tr><td>QA_STATUS_QUOTA_INVALID</td><td>10</td><td>超量失效</td></tr><tr><td>QA_STATUS_QUOTA_RECOVERING</td><td>11</td><td>超量失效恢复中</td></tr><tr><td>QA_STATUS_MANUAL_APPEALING</td><td>12</td><td>人工申诉中</td></tr><tr><td>QA_STATUS_MANUAL_APPEAL_FAIL</td><td>13</td><td>人工申诉失败</td></tr></tbody></table></p>
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
                     * 获取<p>状态描述</p>
                     * @return StatusDesc <p>状态描述</p>
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置<p>状态描述</p>
                     * @param _statusDesc <p>状态描述</p>
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取<p>状态附加信息</p>
                     * @return StatusMessage <p>状态附加信息</p>
                     * 
                     */
                    std::string GetStatusMessage() const;

                    /**
                     * 设置<p>状态附加信息</p>
                     * @param _statusMessage <p>状态附加信息</p>
                     * 
                     */
                    void SetStatusMessage(const std::string& _statusMessage);

                    /**
                     * 判断参数 StatusMessage 是否已赋值
                     * @return StatusMessage 是否已赋值
                     * 
                     */
                    bool StatusMessageHasBeenSet() const;

                    /**
                     * 获取<p>更新时间（Unix 秒）</p>
                     * @return UpdateTime <p>更新时间（Unix 秒）</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间（Unix 秒）</p>
                     * @param _updateTime <p>更新时间（Unix 秒）</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>创建时间（Unix 秒）</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>过期策略（有效时间与超过有效时间后的行为）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExpirationPolicy m_expirationPolicy;
                    bool m_expirationPolicyHasBeenSet;

                    /**
                     * <p>状态：1=待校验，2=未采纳，3=导入失败，4=审核中，5=审核失败，6=学习中，7=学习失败，8=导入完成，9=已过期，10=超量失效，11=超量失效恢复中，12=人工申诉中，13=人工申诉失败<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>QA_STATUS_UNKNOWN</td><td>0</td><td></td></tr><tr><td>QA_STATUS_PENDING_VERIFY</td><td>1</td><td>待校验</td></tr><tr><td>QA_STATUS_NOT_ACCEPTED</td><td>2</td><td>未采纳</td></tr><tr><td>QA_STATUS_IMPORT_FAIL</td><td>3</td><td>导入失败</td></tr><tr><td>QA_STATUS_AUDITING</td><td>4</td><td>审核中</td></tr><tr><td>QA_STATUS_AUDIT_FAIL</td><td>5</td><td>审核失败</td></tr><tr><td>QA_STATUS_LEARNING</td><td>6</td><td>学习中</td></tr><tr><td>QA_STATUS_LEARN_FAIL</td><td>7</td><td>学习失败</td></tr><tr><td>QA_STATUS_IMPORTED</td><td>8</td><td>导入完成</td></tr><tr><td>QA_STATUS_EXPIRED</td><td>9</td><td>已过期</td></tr><tr><td>QA_STATUS_QUOTA_INVALID</td><td>10</td><td>超量失效</td></tr><tr><td>QA_STATUS_QUOTA_RECOVERING</td><td>11</td><td>超量失效恢复中</td></tr><tr><td>QA_STATUS_MANUAL_APPEALING</td><td>12</td><td>人工申诉中</td></tr><tr><td>QA_STATUS_MANUAL_APPEAL_FAIL</td><td>13</td><td>人工申诉失败</td></tr></tbody></table></p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>状态描述</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>状态附加信息</p>
                     */
                    std::string m_statusMessage;
                    bool m_statusMessageHasBeenSet;

                    /**
                     * <p>更新时间（Unix 秒）</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_QALIFECYCLE_H_

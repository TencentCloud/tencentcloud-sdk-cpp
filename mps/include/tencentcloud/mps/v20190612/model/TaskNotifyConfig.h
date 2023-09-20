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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TASKNOTIFYCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TASKNOTIFYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AwsSQS.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 任务的事件通知配置。
                */
                class TaskNotifyConfig : public AbstractModel
                {
                public:
                    TaskNotifyConfig();
                    ~TaskNotifyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通知类型，可选值：
<li>CMQ：已下线，建议切换到TDMQ-CMQ</li>
<li>TDMQ-CMQ：消息队列</li>
<li>URL：指定URL时HTTP回调推送到 NotifyUrl 指定的地址，回调协议http+json，包体内容同解析事件通知接口的输出参数 </li>
<li>SCF：不推荐使用，需要在控制台额外配置SCF</li>
<li>AWS-SQS：AWS 队列，只适用于 AWS 任务，且要求同区域</li>
<font color="red"> 注：不填或为空时默认 CMQ，如需采用其他类型需填写对应类型值。 </font>
                     * @return NotifyType 通知类型，可选值：
<li>CMQ：已下线，建议切换到TDMQ-CMQ</li>
<li>TDMQ-CMQ：消息队列</li>
<li>URL：指定URL时HTTP回调推送到 NotifyUrl 指定的地址，回调协议http+json，包体内容同解析事件通知接口的输出参数 </li>
<li>SCF：不推荐使用，需要在控制台额外配置SCF</li>
<li>AWS-SQS：AWS 队列，只适用于 AWS 任务，且要求同区域</li>
<font color="red"> 注：不填或为空时默认 CMQ，如需采用其他类型需填写对应类型值。 </font>
                     * 
                     */
                    std::string GetNotifyType() const;

                    /**
                     * 设置通知类型，可选值：
<li>CMQ：已下线，建议切换到TDMQ-CMQ</li>
<li>TDMQ-CMQ：消息队列</li>
<li>URL：指定URL时HTTP回调推送到 NotifyUrl 指定的地址，回调协议http+json，包体内容同解析事件通知接口的输出参数 </li>
<li>SCF：不推荐使用，需要在控制台额外配置SCF</li>
<li>AWS-SQS：AWS 队列，只适用于 AWS 任务，且要求同区域</li>
<font color="red"> 注：不填或为空时默认 CMQ，如需采用其他类型需填写对应类型值。 </font>
                     * @param _notifyType 通知类型，可选值：
<li>CMQ：已下线，建议切换到TDMQ-CMQ</li>
<li>TDMQ-CMQ：消息队列</li>
<li>URL：指定URL时HTTP回调推送到 NotifyUrl 指定的地址，回调协议http+json，包体内容同解析事件通知接口的输出参数 </li>
<li>SCF：不推荐使用，需要在控制台额外配置SCF</li>
<li>AWS-SQS：AWS 队列，只适用于 AWS 任务，且要求同区域</li>
<font color="red"> 注：不填或为空时默认 CMQ，如需采用其他类型需填写对应类型值。 </font>
                     * 
                     */
                    void SetNotifyType(const std::string& _notifyType);

                    /**
                     * 判断参数 NotifyType 是否已赋值
                     * @return NotifyType 是否已赋值
                     * 
                     */
                    bool NotifyTypeHasBeenSet() const;

                    /**
                     * 获取工作流通知的模式，可取值有 Finish 和 Change，不填代表 Finish。
                     * @return NotifyMode 工作流通知的模式，可取值有 Finish 和 Change，不填代表 Finish。
                     * 
                     */
                    std::string GetNotifyMode() const;

                    /**
                     * 设置工作流通知的模式，可取值有 Finish 和 Change，不填代表 Finish。
                     * @param _notifyMode 工作流通知的模式，可取值有 Finish 和 Change，不填代表 Finish。
                     * 
                     */
                    void SetNotifyMode(const std::string& _notifyMode);

                    /**
                     * 判断参数 NotifyMode 是否已赋值
                     * @return NotifyMode 是否已赋值
                     * 
                     */
                    bool NotifyModeHasBeenSet() const;

                    /**
                     * 获取HTTP回调地址，NotifyType为URL时必填。
                     * @return NotifyUrl HTTP回调地址，NotifyType为URL时必填。
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置HTTP回调地址，NotifyType为URL时必填。
                     * @param _notifyUrl HTTP回调地址，NotifyType为URL时必填。
                     * 
                     */
                    void SetNotifyUrl(const std::string& _notifyUrl);

                    /**
                     * 判断参数 NotifyUrl 是否已赋值
                     * @return NotifyUrl 是否已赋值
                     * 
                     */
                    bool NotifyUrlHasBeenSet() const;

                    /**
                     * 获取CMQ或TDMQ-CMQ 的模型，有 Queue 和 Topic 两种。
                     * @return CmqModel CMQ或TDMQ-CMQ 的模型，有 Queue 和 Topic 两种。
                     * 
                     */
                    std::string GetCmqModel() const;

                    /**
                     * 设置CMQ或TDMQ-CMQ 的模型，有 Queue 和 Topic 两种。
                     * @param _cmqModel CMQ或TDMQ-CMQ 的模型，有 Queue 和 Topic 两种。
                     * 
                     */
                    void SetCmqModel(const std::string& _cmqModel);

                    /**
                     * 判断参数 CmqModel 是否已赋值
                     * @return CmqModel 是否已赋值
                     * 
                     */
                    bool CmqModelHasBeenSet() const;

                    /**
                     * 获取CMQ或TDMQ-CMQ 的园区，如 sh，bj 等。
                     * @return CmqRegion CMQ或TDMQ-CMQ 的园区，如 sh，bj 等。
                     * 
                     */
                    std::string GetCmqRegion() const;

                    /**
                     * 设置CMQ或TDMQ-CMQ 的园区，如 sh，bj 等。
                     * @param _cmqRegion CMQ或TDMQ-CMQ 的园区，如 sh，bj 等。
                     * 
                     */
                    void SetCmqRegion(const std::string& _cmqRegion);

                    /**
                     * 判断参数 CmqRegion 是否已赋值
                     * @return CmqRegion 是否已赋值
                     * 
                     */
                    bool CmqRegionHasBeenSet() const;

                    /**
                     * 获取当模型为 Topic 时有效，表示接收事件通知的 CMQ 或 TDMQ-CMQ 的主题名。
                     * @return TopicName 当模型为 Topic 时有效，表示接收事件通知的 CMQ 或 TDMQ-CMQ 的主题名。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置当模型为 Topic 时有效，表示接收事件通知的 CMQ 或 TDMQ-CMQ 的主题名。
                     * @param _topicName 当模型为 Topic 时有效，表示接收事件通知的 CMQ 或 TDMQ-CMQ 的主题名。
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取当模型为 Queue 时有效，表示接收事件通知的 CMQ 或 TDMQ-CMQ 的队列名。
                     * @return QueueName 当模型为 Queue 时有效，表示接收事件通知的 CMQ 或 TDMQ-CMQ 的队列名。
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置当模型为 Queue 时有效，表示接收事件通知的 CMQ 或 TDMQ-CMQ 的队列名。
                     * @param _queueName 当模型为 Queue 时有效，表示接收事件通知的 CMQ 或 TDMQ-CMQ 的队列名。
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取AWS SQS 回调，NotifyType为 AWS-SQS 时必填。

注意：此字段可能返回 null，表示取不到有效值。
                     * @return AwsSQS AWS SQS 回调，NotifyType为 AWS-SQS 时必填。

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AwsSQS GetAwsSQS() const;

                    /**
                     * 设置AWS SQS 回调，NotifyType为 AWS-SQS 时必填。

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _awsSQS AWS SQS 回调，NotifyType为 AWS-SQS 时必填。

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAwsSQS(const AwsSQS& _awsSQS);

                    /**
                     * 判断参数 AwsSQS 是否已赋值
                     * @return AwsSQS 是否已赋值
                     * 
                     */
                    bool AwsSQSHasBeenSet() const;

                    /**
                     * 获取用于生成回调签名的key。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotifyKey 用于生成回调签名的key。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNotifyKey() const;

                    /**
                     * 设置用于生成回调签名的key。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notifyKey 用于生成回调签名的key。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotifyKey(const std::string& _notifyKey);

                    /**
                     * 判断参数 NotifyKey 是否已赋值
                     * @return NotifyKey 是否已赋值
                     * 
                     */
                    bool NotifyKeyHasBeenSet() const;

                private:

                    /**
                     * 通知类型，可选值：
<li>CMQ：已下线，建议切换到TDMQ-CMQ</li>
<li>TDMQ-CMQ：消息队列</li>
<li>URL：指定URL时HTTP回调推送到 NotifyUrl 指定的地址，回调协议http+json，包体内容同解析事件通知接口的输出参数 </li>
<li>SCF：不推荐使用，需要在控制台额外配置SCF</li>
<li>AWS-SQS：AWS 队列，只适用于 AWS 任务，且要求同区域</li>
<font color="red"> 注：不填或为空时默认 CMQ，如需采用其他类型需填写对应类型值。 </font>
                     */
                    std::string m_notifyType;
                    bool m_notifyTypeHasBeenSet;

                    /**
                     * 工作流通知的模式，可取值有 Finish 和 Change，不填代表 Finish。
                     */
                    std::string m_notifyMode;
                    bool m_notifyModeHasBeenSet;

                    /**
                     * HTTP回调地址，NotifyType为URL时必填。
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * CMQ或TDMQ-CMQ 的模型，有 Queue 和 Topic 两种。
                     */
                    std::string m_cmqModel;
                    bool m_cmqModelHasBeenSet;

                    /**
                     * CMQ或TDMQ-CMQ 的园区，如 sh，bj 等。
                     */
                    std::string m_cmqRegion;
                    bool m_cmqRegionHasBeenSet;

                    /**
                     * 当模型为 Topic 时有效，表示接收事件通知的 CMQ 或 TDMQ-CMQ 的主题名。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 当模型为 Queue 时有效，表示接收事件通知的 CMQ 或 TDMQ-CMQ 的队列名。
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * AWS SQS 回调，NotifyType为 AWS-SQS 时必填。

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AwsSQS m_awsSQS;
                    bool m_awsSQSHasBeenSet;

                    /**
                     * 用于生成回调签名的key。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_notifyKey;
                    bool m_notifyKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TASKNOTIFYCONFIG_H_

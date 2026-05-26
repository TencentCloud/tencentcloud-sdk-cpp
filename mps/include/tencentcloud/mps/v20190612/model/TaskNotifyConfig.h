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
                     * 获取<p>通知类型，可选值：</p><li>CMQ：已下线，建议切换到TDMQ-CMQ</li><li>TDMQ-CMQ：消息队列</li><li>URL：指定URL时HTTP回调推送到 NotifyUrl 指定的地址，回调协议http+json，包体内容同解析事件通知接口的输出参数 </li><li>SCF：不推荐使用，需要在控制台额外配置SCF</li><li>AWS-SQS：AWS 队列，只适用于 AWS 任务，且要求同区域</li><font color="red"> 注：不填或为空时默认 TDMQ-CMQ，如需采用其他类型需填写对应类型值；如果使用TDMQ-CMQ消息队列，任务回包过大可能会写入队列失败 </font>
                     * @return NotifyType <p>通知类型，可选值：</p><li>CMQ：已下线，建议切换到TDMQ-CMQ</li><li>TDMQ-CMQ：消息队列</li><li>URL：指定URL时HTTP回调推送到 NotifyUrl 指定的地址，回调协议http+json，包体内容同解析事件通知接口的输出参数 </li><li>SCF：不推荐使用，需要在控制台额外配置SCF</li><li>AWS-SQS：AWS 队列，只适用于 AWS 任务，且要求同区域</li><font color="red"> 注：不填或为空时默认 TDMQ-CMQ，如需采用其他类型需填写对应类型值；如果使用TDMQ-CMQ消息队列，任务回包过大可能会写入队列失败 </font>
                     * 
                     */
                    std::string GetNotifyType() const;

                    /**
                     * 设置<p>通知类型，可选值：</p><li>CMQ：已下线，建议切换到TDMQ-CMQ</li><li>TDMQ-CMQ：消息队列</li><li>URL：指定URL时HTTP回调推送到 NotifyUrl 指定的地址，回调协议http+json，包体内容同解析事件通知接口的输出参数 </li><li>SCF：不推荐使用，需要在控制台额外配置SCF</li><li>AWS-SQS：AWS 队列，只适用于 AWS 任务，且要求同区域</li><font color="red"> 注：不填或为空时默认 TDMQ-CMQ，如需采用其他类型需填写对应类型值；如果使用TDMQ-CMQ消息队列，任务回包过大可能会写入队列失败 </font>
                     * @param _notifyType <p>通知类型，可选值：</p><li>CMQ：已下线，建议切换到TDMQ-CMQ</li><li>TDMQ-CMQ：消息队列</li><li>URL：指定URL时HTTP回调推送到 NotifyUrl 指定的地址，回调协议http+json，包体内容同解析事件通知接口的输出参数 </li><li>SCF：不推荐使用，需要在控制台额外配置SCF</li><li>AWS-SQS：AWS 队列，只适用于 AWS 任务，且要求同区域</li><font color="red"> 注：不填或为空时默认 TDMQ-CMQ，如需采用其他类型需填写对应类型值；如果使用TDMQ-CMQ消息队列，任务回包过大可能会写入队列失败 </font>
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
                     * 获取<p>工作流通知的模式，可取值有 Finish 和 Change，不填代表 Finish。</p>
                     * @return NotifyMode <p>工作流通知的模式，可取值有 Finish 和 Change，不填代表 Finish。</p>
                     * 
                     */
                    std::string GetNotifyMode() const;

                    /**
                     * 设置<p>工作流通知的模式，可取值有 Finish 和 Change，不填代表 Finish。</p>
                     * @param _notifyMode <p>工作流通知的模式，可取值有 Finish 和 Change，不填代表 Finish。</p>
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
                     * 获取<p>HTTP回调地址，NotifyType为URL时必填。</p>
                     * @return NotifyUrl <p>HTTP回调地址，NotifyType为URL时必填。</p>
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置<p>HTTP回调地址，NotifyType为URL时必填。</p>
                     * @param _notifyUrl <p>HTTP回调地址，NotifyType为URL时必填。</p>
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
                     * 获取<p>CMQ或TDMQ-CMQ 的模型，有 Queue 和 Topic 两种。</p>
                     * @return CmqModel <p>CMQ或TDMQ-CMQ 的模型，有 Queue 和 Topic 两种。</p>
                     * 
                     */
                    std::string GetCmqModel() const;

                    /**
                     * 设置<p>CMQ或TDMQ-CMQ 的模型，有 Queue 和 Topic 两种。</p>
                     * @param _cmqModel <p>CMQ或TDMQ-CMQ 的模型，有 Queue 和 Topic 两种。</p>
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
                     * 获取<p>CMQ或TDMQ-CMQ 的园区，如 sh，bj 等。</p>
                     * @return CmqRegion <p>CMQ或TDMQ-CMQ 的园区，如 sh，bj 等。</p>
                     * 
                     */
                    std::string GetCmqRegion() const;

                    /**
                     * 设置<p>CMQ或TDMQ-CMQ 的园区，如 sh，bj 等。</p>
                     * @param _cmqRegion <p>CMQ或TDMQ-CMQ 的园区，如 sh，bj 等。</p>
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
                     * 获取<p>当模型为 Topic 时有效，表示接收事件通知的 CMQ 或 TDMQ-CMQ 的主题名。</p>
                     * @return TopicName <p>当模型为 Topic 时有效，表示接收事件通知的 CMQ 或 TDMQ-CMQ 的主题名。</p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>当模型为 Topic 时有效，表示接收事件通知的 CMQ 或 TDMQ-CMQ 的主题名。</p>
                     * @param _topicName <p>当模型为 Topic 时有效，表示接收事件通知的 CMQ 或 TDMQ-CMQ 的主题名。</p>
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
                     * 获取<p>当模型为 Queue 时有效，表示接收事件通知的 CMQ 或 TDMQ-CMQ 的队列名。</p>
                     * @return QueueName <p>当模型为 Queue 时有效，表示接收事件通知的 CMQ 或 TDMQ-CMQ 的队列名。</p>
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置<p>当模型为 Queue 时有效，表示接收事件通知的 CMQ 或 TDMQ-CMQ 的队列名。</p>
                     * @param _queueName <p>当模型为 Queue 时有效，表示接收事件通知的 CMQ 或 TDMQ-CMQ 的队列名。</p>
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
                     * 获取<p>AWS SQS 回调，NotifyType为 AWS-SQS 时必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AwsSQS <p>AWS SQS 回调，NotifyType为 AWS-SQS 时必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AwsSQS GetAwsSQS() const;

                    /**
                     * 设置<p>AWS SQS 回调，NotifyType为 AWS-SQS 时必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _awsSQS <p>AWS SQS 回调，NotifyType为 AWS-SQS 时必填。</p>
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
                     * 获取<p>用于生成回调签名的key。</p>
                     * @return NotifyKey <p>用于生成回调签名的key。</p>
                     * 
                     */
                    std::string GetNotifyKey() const;

                    /**
                     * 设置<p>用于生成回调签名的key。</p>
                     * @param _notifyKey <p>用于生成回调签名的key。</p>
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
                     * <p>通知类型，可选值：</p><li>CMQ：已下线，建议切换到TDMQ-CMQ</li><li>TDMQ-CMQ：消息队列</li><li>URL：指定URL时HTTP回调推送到 NotifyUrl 指定的地址，回调协议http+json，包体内容同解析事件通知接口的输出参数 </li><li>SCF：不推荐使用，需要在控制台额外配置SCF</li><li>AWS-SQS：AWS 队列，只适用于 AWS 任务，且要求同区域</li><font color="red"> 注：不填或为空时默认 TDMQ-CMQ，如需采用其他类型需填写对应类型值；如果使用TDMQ-CMQ消息队列，任务回包过大可能会写入队列失败 </font>
                     */
                    std::string m_notifyType;
                    bool m_notifyTypeHasBeenSet;

                    /**
                     * <p>工作流通知的模式，可取值有 Finish 和 Change，不填代表 Finish。</p>
                     */
                    std::string m_notifyMode;
                    bool m_notifyModeHasBeenSet;

                    /**
                     * <p>HTTP回调地址，NotifyType为URL时必填。</p>
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * <p>CMQ或TDMQ-CMQ 的模型，有 Queue 和 Topic 两种。</p>
                     */
                    std::string m_cmqModel;
                    bool m_cmqModelHasBeenSet;

                    /**
                     * <p>CMQ或TDMQ-CMQ 的园区，如 sh，bj 等。</p>
                     */
                    std::string m_cmqRegion;
                    bool m_cmqRegionHasBeenSet;

                    /**
                     * <p>当模型为 Topic 时有效，表示接收事件通知的 CMQ 或 TDMQ-CMQ 的主题名。</p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>当模型为 Queue 时有效，表示接收事件通知的 CMQ 或 TDMQ-CMQ 的队列名。</p>
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * <p>AWS SQS 回调，NotifyType为 AWS-SQS 时必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AwsSQS m_awsSQS;
                    bool m_awsSQSHasBeenSet;

                    /**
                     * <p>用于生成回调签名的key。</p>
                     */
                    std::string m_notifyKey;
                    bool m_notifyKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TASKNOTIFYCONFIG_H_

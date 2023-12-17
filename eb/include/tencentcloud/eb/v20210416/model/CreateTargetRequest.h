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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_CREATETARGETREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_CREATETARGETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/TargetDescription.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * CreateTarget请求参数结构体
                */
                class CreateTargetRequest : public AbstractModel
                {
                public:
                    CreateTargetRequest();
                    ~CreateTargetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取事件集ID
                     * @return EventBusId 事件集ID
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置事件集ID
                     * @param _eventBusId 事件集ID
                     * 
                     */
                    void SetEventBusId(const std::string& _eventBusId);

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     * 
                     */
                    bool EventBusIdHasBeenSet() const;

                    /**
                     * 获取目标类型;取值范围:scf(云函数)/cls(日志服务)/amp(消息推送)/ckafka(消息推送)/es(大数据elastic-search)
                     * @return Type 目标类型;取值范围:scf(云函数)/cls(日志服务)/amp(消息推送)/ckafka(消息推送)/es(大数据elastic-search)
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置目标类型;取值范围:scf(云函数)/cls(日志服务)/amp(消息推送)/ckafka(消息推送)/es(大数据elastic-search)
                     * @param _type 目标类型;取值范围:scf(云函数)/cls(日志服务)/amp(消息推送)/ckafka(消息推送)/es(大数据elastic-search)
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取目标描述;scf类型示例:
{"ResourceDescription":"qcs::scf:ap-guangzhou:uin/2252646423:namespace/default/function/john-test-0326/$LATEST"};
cls类型示例:
{"ResourceDescription":"qcs::cls:ap-guangzhou:uin/12323442323:topic/7103f705-6c38-4b64-ac9d-428af0f2e732"}
ckafka类型示例:
{"ResourceDescription":"qcs::ckafka:ap-guangzhou:uin/1500000688:ckafkaId/uin/1500000688/ckafka-018q1nwj","CkafkaTargetParams":{"TopicName":"alert","RetryPolicy":{"RetryInterval":60,"MaxRetryAttempts":360}}}
amp类型-邮件/短信示例:
{"ResourceDescription":"qcs::eb-amp:ap-guangzhou:uin/100012505002:","AMPParams":{"NotificationTemplateId":10181,"Lang":"cn","NoticeReceivers":[{"UserType":"User","UserIds":["9424525"],"TimeWindow":{"From":"09:30:00","To":"23:30:00"},"Channels":["Email","SMS"]}]}}
es类型示例:
{"ResourceDescription":"qcs::es:ap-guangzhou:uin/1500000688:instance/es-7cplmhsd","ESTargetParams":{"EsVersion":"7.14.2","UserName":"elastic","Password":"xxxxx","NetMode":"privateLink","IndexPrefix":"auto-test","IndexSuffixMode":"default","RotationInterval":"none","IndexTemplateType":"","OutputMode":"default"}}
                     * @return TargetDescription 目标描述;scf类型示例:
{"ResourceDescription":"qcs::scf:ap-guangzhou:uin/2252646423:namespace/default/function/john-test-0326/$LATEST"};
cls类型示例:
{"ResourceDescription":"qcs::cls:ap-guangzhou:uin/12323442323:topic/7103f705-6c38-4b64-ac9d-428af0f2e732"}
ckafka类型示例:
{"ResourceDescription":"qcs::ckafka:ap-guangzhou:uin/1500000688:ckafkaId/uin/1500000688/ckafka-018q1nwj","CkafkaTargetParams":{"TopicName":"alert","RetryPolicy":{"RetryInterval":60,"MaxRetryAttempts":360}}}
amp类型-邮件/短信示例:
{"ResourceDescription":"qcs::eb-amp:ap-guangzhou:uin/100012505002:","AMPParams":{"NotificationTemplateId":10181,"Lang":"cn","NoticeReceivers":[{"UserType":"User","UserIds":["9424525"],"TimeWindow":{"From":"09:30:00","To":"23:30:00"},"Channels":["Email","SMS"]}]}}
es类型示例:
{"ResourceDescription":"qcs::es:ap-guangzhou:uin/1500000688:instance/es-7cplmhsd","ESTargetParams":{"EsVersion":"7.14.2","UserName":"elastic","Password":"xxxxx","NetMode":"privateLink","IndexPrefix":"auto-test","IndexSuffixMode":"default","RotationInterval":"none","IndexTemplateType":"","OutputMode":"default"}}
                     * 
                     */
                    TargetDescription GetTargetDescription() const;

                    /**
                     * 设置目标描述;scf类型示例:
{"ResourceDescription":"qcs::scf:ap-guangzhou:uin/2252646423:namespace/default/function/john-test-0326/$LATEST"};
cls类型示例:
{"ResourceDescription":"qcs::cls:ap-guangzhou:uin/12323442323:topic/7103f705-6c38-4b64-ac9d-428af0f2e732"}
ckafka类型示例:
{"ResourceDescription":"qcs::ckafka:ap-guangzhou:uin/1500000688:ckafkaId/uin/1500000688/ckafka-018q1nwj","CkafkaTargetParams":{"TopicName":"alert","RetryPolicy":{"RetryInterval":60,"MaxRetryAttempts":360}}}
amp类型-邮件/短信示例:
{"ResourceDescription":"qcs::eb-amp:ap-guangzhou:uin/100012505002:","AMPParams":{"NotificationTemplateId":10181,"Lang":"cn","NoticeReceivers":[{"UserType":"User","UserIds":["9424525"],"TimeWindow":{"From":"09:30:00","To":"23:30:00"},"Channels":["Email","SMS"]}]}}
es类型示例:
{"ResourceDescription":"qcs::es:ap-guangzhou:uin/1500000688:instance/es-7cplmhsd","ESTargetParams":{"EsVersion":"7.14.2","UserName":"elastic","Password":"xxxxx","NetMode":"privateLink","IndexPrefix":"auto-test","IndexSuffixMode":"default","RotationInterval":"none","IndexTemplateType":"","OutputMode":"default"}}
                     * @param _targetDescription 目标描述;scf类型示例:
{"ResourceDescription":"qcs::scf:ap-guangzhou:uin/2252646423:namespace/default/function/john-test-0326/$LATEST"};
cls类型示例:
{"ResourceDescription":"qcs::cls:ap-guangzhou:uin/12323442323:topic/7103f705-6c38-4b64-ac9d-428af0f2e732"}
ckafka类型示例:
{"ResourceDescription":"qcs::ckafka:ap-guangzhou:uin/1500000688:ckafkaId/uin/1500000688/ckafka-018q1nwj","CkafkaTargetParams":{"TopicName":"alert","RetryPolicy":{"RetryInterval":60,"MaxRetryAttempts":360}}}
amp类型-邮件/短信示例:
{"ResourceDescription":"qcs::eb-amp:ap-guangzhou:uin/100012505002:","AMPParams":{"NotificationTemplateId":10181,"Lang":"cn","NoticeReceivers":[{"UserType":"User","UserIds":["9424525"],"TimeWindow":{"From":"09:30:00","To":"23:30:00"},"Channels":["Email","SMS"]}]}}
es类型示例:
{"ResourceDescription":"qcs::es:ap-guangzhou:uin/1500000688:instance/es-7cplmhsd","ESTargetParams":{"EsVersion":"7.14.2","UserName":"elastic","Password":"xxxxx","NetMode":"privateLink","IndexPrefix":"auto-test","IndexSuffixMode":"default","RotationInterval":"none","IndexTemplateType":"","OutputMode":"default"}}
                     * 
                     */
                    void SetTargetDescription(const TargetDescription& _targetDescription);

                    /**
                     * 判断参数 TargetDescription 是否已赋值
                     * @return TargetDescription 是否已赋值
                     * 
                     */
                    bool TargetDescriptionHasBeenSet() const;

                    /**
                     * 获取事件规则ID
                     * @return RuleId 事件规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置事件规则ID
                     * @param _ruleId 事件规则ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * 事件集ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * 目标类型;取值范围:scf(云函数)/cls(日志服务)/amp(消息推送)/ckafka(消息推送)/es(大数据elastic-search)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 目标描述;scf类型示例:
{"ResourceDescription":"qcs::scf:ap-guangzhou:uin/2252646423:namespace/default/function/john-test-0326/$LATEST"};
cls类型示例:
{"ResourceDescription":"qcs::cls:ap-guangzhou:uin/12323442323:topic/7103f705-6c38-4b64-ac9d-428af0f2e732"}
ckafka类型示例:
{"ResourceDescription":"qcs::ckafka:ap-guangzhou:uin/1500000688:ckafkaId/uin/1500000688/ckafka-018q1nwj","CkafkaTargetParams":{"TopicName":"alert","RetryPolicy":{"RetryInterval":60,"MaxRetryAttempts":360}}}
amp类型-邮件/短信示例:
{"ResourceDescription":"qcs::eb-amp:ap-guangzhou:uin/100012505002:","AMPParams":{"NotificationTemplateId":10181,"Lang":"cn","NoticeReceivers":[{"UserType":"User","UserIds":["9424525"],"TimeWindow":{"From":"09:30:00","To":"23:30:00"},"Channels":["Email","SMS"]}]}}
es类型示例:
{"ResourceDescription":"qcs::es:ap-guangzhou:uin/1500000688:instance/es-7cplmhsd","ESTargetParams":{"EsVersion":"7.14.2","UserName":"elastic","Password":"xxxxx","NetMode":"privateLink","IndexPrefix":"auto-test","IndexSuffixMode":"default","RotationInterval":"none","IndexTemplateType":"","OutputMode":"default"}}
                     */
                    TargetDescription m_targetDescription;
                    bool m_targetDescriptionHasBeenSet;

                    /**
                     * 事件规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_CREATETARGETREQUEST_H_

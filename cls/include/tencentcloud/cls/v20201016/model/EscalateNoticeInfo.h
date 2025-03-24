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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ESCALATENOTICEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ESCALATENOTICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/NoticeReceiver.h>
#include <tencentcloud/cls/v20201016/model/WebCallback.h>
#include <tencentcloud/cls/v20201016/model/EscalateNoticeInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 升级通知
                */
                class EscalateNoticeInfo : public AbstractModel
                {
                public:
                    EscalateNoticeInfo();
                    ~EscalateNoticeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警通知模板接收者信息。
                     * @return NoticeReceivers 告警通知模板接收者信息。
                     * 
                     */
                    std::vector<NoticeReceiver> GetNoticeReceivers() const;

                    /**
                     * 设置告警通知模板接收者信息。
                     * @param _noticeReceivers 告警通知模板接收者信息。
                     * 
                     */
                    void SetNoticeReceivers(const std::vector<NoticeReceiver>& _noticeReceivers);

                    /**
                     * 判断参数 NoticeReceivers 是否已赋值
                     * @return NoticeReceivers 是否已赋值
                     * 
                     */
                    bool NoticeReceiversHasBeenSet() const;

                    /**
                     * 获取告警通知模板回调信息。
                     * @return WebCallbacks 告警通知模板回调信息。
                     * 
                     */
                    std::vector<WebCallback> GetWebCallbacks() const;

                    /**
                     * 设置告警通知模板回调信息。
                     * @param _webCallbacks 告警通知模板回调信息。
                     * 
                     */
                    void SetWebCallbacks(const std::vector<WebCallback>& _webCallbacks);

                    /**
                     * 判断参数 WebCallbacks 是否已赋值
                     * @return WebCallbacks 是否已赋值
                     * 
                     */
                    bool WebCallbacksHasBeenSet() const;

                    /**
                     * 获取告警升级开关。`true`：开启告警升级、`false`：关闭告警升级，默认：false
                     * @return Escalate 告警升级开关。`true`：开启告警升级、`false`：关闭告警升级，默认：false
                     * 
                     */
                    bool GetEscalate() const;

                    /**
                     * 设置告警升级开关。`true`：开启告警升级、`false`：关闭告警升级，默认：false
                     * @param _escalate 告警升级开关。`true`：开启告警升级、`false`：关闭告警升级，默认：false
                     * 
                     */
                    void SetEscalate(const bool& _escalate);

                    /**
                     * 判断参数 Escalate 是否已赋值
                     * @return Escalate 是否已赋值
                     * 
                     */
                    bool EscalateHasBeenSet() const;

                    /**
                     * 获取告警升级间隔。单位：分钟，范围`[1，14400]`
                     * @return Interval 告警升级间隔。单位：分钟，范围`[1，14400]`
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置告警升级间隔。单位：分钟，范围`[1，14400]`
                     * @param _interval 告警升级间隔。单位：分钟，范围`[1，14400]`
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取升级条件。`1`：无人认领且未恢复、`2`：未恢复，默认为1
- 无人认领且未恢复：告警没有恢复并且没有人认领则升级
- 未恢复：当前告警持续未恢复则升级

                     * @return Type 升级条件。`1`：无人认领且未恢复、`2`：未恢复，默认为1
- 无人认领且未恢复：告警没有恢复并且没有人认领则升级
- 未恢复：当前告警持续未恢复则升级

                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置升级条件。`1`：无人认领且未恢复、`2`：未恢复，默认为1
- 无人认领且未恢复：告警没有恢复并且没有人认领则升级
- 未恢复：当前告警持续未恢复则升级

                     * @param _type 升级条件。`1`：无人认领且未恢复、`2`：未恢复，默认为1
- 无人认领且未恢复：告警没有恢复并且没有人认领则升级
- 未恢复：当前告警持续未恢复则升级

                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取告警升级后下一个环节的通知渠道配置，最多可配置5个环节。
                     * @return EscalateNotice 告警升级后下一个环节的通知渠道配置，最多可配置5个环节。
                     * 
                     */
                    EscalateNoticeInfo GetEscalateNotice() const;

                    /**
                     * 设置告警升级后下一个环节的通知渠道配置，最多可配置5个环节。
                     * @param _escalateNotice 告警升级后下一个环节的通知渠道配置，最多可配置5个环节。
                     * 
                     */
                    void SetEscalateNotice(const EscalateNoticeInfo& _escalateNotice);

                    /**
                     * 判断参数 EscalateNotice 是否已赋值
                     * @return EscalateNotice 是否已赋值
                     * 
                     */
                    bool EscalateNoticeHasBeenSet() const;

                private:

                    /**
                     * 告警通知模板接收者信息。
                     */
                    std::vector<NoticeReceiver> m_noticeReceivers;
                    bool m_noticeReceiversHasBeenSet;

                    /**
                     * 告警通知模板回调信息。
                     */
                    std::vector<WebCallback> m_webCallbacks;
                    bool m_webCallbacksHasBeenSet;

                    /**
                     * 告警升级开关。`true`：开启告警升级、`false`：关闭告警升级，默认：false
                     */
                    bool m_escalate;
                    bool m_escalateHasBeenSet;

                    /**
                     * 告警升级间隔。单位：分钟，范围`[1，14400]`
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 升级条件。`1`：无人认领且未恢复、`2`：未恢复，默认为1
- 无人认领且未恢复：告警没有恢复并且没有人认领则升级
- 未恢复：当前告警持续未恢复则升级

                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 告警升级后下一个环节的通知渠道配置，最多可配置5个环节。
                     */
                    EscalateNoticeInfo m_escalateNotice;
                    bool m_escalateNoticeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ESCALATENOTICEINFO_H_

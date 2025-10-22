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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MONITORNOTICERULE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MONITORNOTICERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 云监控通知渠道组信息
                */
                class MonitorNoticeRule : public AbstractModel
                {
                public:
                    MonitorNoticeRule();
                    ~MonitorNoticeRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取腾讯云可观测平台通知模板 ID
                     * @return NoticeId 腾讯云可观测平台通知模板 ID
                     * 
                     */
                    std::string GetNoticeId() const;

                    /**
                     * 设置腾讯云可观测平台通知模板 ID
                     * @param _noticeId 腾讯云可观测平台通知模板 ID
                     * 
                     */
                    void SetNoticeId(const std::string& _noticeId);

                    /**
                     * 判断参数 NoticeId 是否已赋值
                     * @return NoticeId 是否已赋值
                     * 
                     */
                    bool NoticeIdHasBeenSet() const;

                    /**
                     * 获取腾讯云可观测平台内容模板ID，不传默认内容模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContentTmplId 腾讯云可观测平台内容模板ID，不传默认内容模板
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContentTmplId() const;

                    /**
                     * 设置腾讯云可观测平台内容模板ID，不传默认内容模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contentTmplId 腾讯云可观测平台内容模板ID，不传默认内容模板
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContentTmplId(const std::string& _contentTmplId);

                    /**
                     * 判断参数 ContentTmplId 是否已赋值
                     * @return ContentTmplId 是否已赋值
                     * 
                     */
                    bool ContentTmplIdHasBeenSet() const;

                    /**
                     * 获取告警级别,0:警告(Warn); 1:提醒(Info); 2:紧急 (Critical)
                     * @return AlarmLevels 告警级别,0:警告(Warn); 1:提醒(Info); 2:紧急 (Critical)
                     * 
                     */
                    std::vector<uint64_t> GetAlarmLevels() const;

                    /**
                     * 设置告警级别,0:警告(Warn); 1:提醒(Info); 2:紧急 (Critical)
                     * @param _alarmLevels 告警级别,0:警告(Warn); 1:提醒(Info); 2:紧急 (Critical)
                     * 
                     */
                    void SetAlarmLevels(const std::vector<uint64_t>& _alarmLevels);

                    /**
                     * 判断参数 AlarmLevels 是否已赋值
                     * @return AlarmLevels 是否已赋值
                     * 
                     */
                    bool AlarmLevelsHasBeenSet() const;

                private:

                    /**
                     * 腾讯云可观测平台通知模板 ID
                     */
                    std::string m_noticeId;
                    bool m_noticeIdHasBeenSet;

                    /**
                     * 腾讯云可观测平台内容模板ID，不传默认内容模板
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contentTmplId;
                    bool m_contentTmplIdHasBeenSet;

                    /**
                     * 告警级别,0:警告(Warn); 1:提醒(Info); 2:紧急 (Critical)
                     */
                    std::vector<uint64_t> m_alarmLevels;
                    bool m_alarmLevelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MONITORNOTICERULE_H_

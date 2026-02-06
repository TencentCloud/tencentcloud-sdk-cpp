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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_QCLOUDYEHEWECHATNOTICETMPLITEM_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_QCLOUDYEHEWECHATNOTICETMPLITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 官网通知内容模板元素
                */
                class QCloudYeheWeChatNoticeTmplItem : public AbstractModel
                {
                public:
                    QCloudYeheWeChatNoticeTmplItem();
                    ~QCloudYeheWeChatNoticeTmplItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警内容模板
                     * @return AlarmContentTmpl 告警内容模板
                     * 
                     */
                    std::string GetAlarmContentTmpl() const;

                    /**
                     * 设置告警内容模板
                     * @param _alarmContentTmpl 告警内容模板
                     * 
                     */
                    void SetAlarmContentTmpl(const std::string& _alarmContentTmpl);

                    /**
                     * 判断参数 AlarmContentTmpl 是否已赋值
                     * @return AlarmContentTmpl 是否已赋值
                     * 
                     */
                    bool AlarmContentTmplHasBeenSet() const;

                    /**
                     * 获取告警对象模板
                     * @return AlarmObjectTmpl 告警对象模板
                     * 
                     */
                    std::string GetAlarmObjectTmpl() const;

                    /**
                     * 设置告警对象模板
                     * @param _alarmObjectTmpl 告警对象模板
                     * 
                     */
                    void SetAlarmObjectTmpl(const std::string& _alarmObjectTmpl);

                    /**
                     * 判断参数 AlarmObjectTmpl 是否已赋值
                     * @return AlarmObjectTmpl 是否已赋值
                     * 
                     */
                    bool AlarmObjectTmplHasBeenSet() const;

                    /**
                     * 获取告警地域模板
                     * @return AlarmRegionTmpl 告警地域模板
                     * 
                     */
                    std::string GetAlarmRegionTmpl() const;

                    /**
                     * 设置告警地域模板
                     * @param _alarmRegionTmpl 告警地域模板
                     * 
                     */
                    void SetAlarmRegionTmpl(const std::string& _alarmRegionTmpl);

                    /**
                     * 判断参数 AlarmRegionTmpl 是否已赋值
                     * @return AlarmRegionTmpl 是否已赋值
                     * 
                     */
                    bool AlarmRegionTmplHasBeenSet() const;

                    /**
                     * 获取告警时间模板
                     * @return AlarmTimeTmpl 告警时间模板
                     * 
                     */
                    std::string GetAlarmTimeTmpl() const;

                    /**
                     * 设置告警时间模板
                     * @param _alarmTimeTmpl 告警时间模板
                     * 
                     */
                    void SetAlarmTimeTmpl(const std::string& _alarmTimeTmpl);

                    /**
                     * 判断参数 AlarmTimeTmpl 是否已赋值
                     * @return AlarmTimeTmpl 是否已赋值
                     * 
                     */
                    bool AlarmTimeTmplHasBeenSet() const;

                private:

                    /**
                     * 告警内容模板
                     */
                    std::string m_alarmContentTmpl;
                    bool m_alarmContentTmplHasBeenSet;

                    /**
                     * 告警对象模板
                     */
                    std::string m_alarmObjectTmpl;
                    bool m_alarmObjectTmplHasBeenSet;

                    /**
                     * 告警地域模板
                     */
                    std::string m_alarmRegionTmpl;
                    bool m_alarmRegionTmplHasBeenSet;

                    /**
                     * 告警时间模板
                     */
                    std::string m_alarmTimeTmpl;
                    bool m_alarmTimeTmplHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_QCLOUDYEHEWECHATNOTICETMPLITEM_H_

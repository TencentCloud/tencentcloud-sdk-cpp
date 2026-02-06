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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGERDUTYROBOTNOTICETMPL_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGERDUTYROBOTNOTICETMPL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/PagerDutyRobotNoticeTmplHeader.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 告警通知自定义PagerDutyRobot内容模板
                */
                class PagerDutyRobotNoticeTmpl : public AbstractModel
                {
                public:
                    PagerDutyRobotNoticeTmpl();
                    ~PagerDutyRobotNoticeTmpl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取请求体模板 仅支持json
                     * @return Body 请求体模板 仅支持json
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 设置请求体模板 仅支持json
                     * @param _body 请求体模板 仅支持json
                     * 
                     */
                    void SetBody(const std::string& _body);

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * 
                     */
                    bool BodyHasBeenSet() const;

                    /**
                     * 获取请求头 暂时未支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Headers 请求头 暂时未支持
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PagerDutyRobotNoticeTmplHeader> GetHeaders() const;

                    /**
                     * 设置请求头 暂时未支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headers 请求头 暂时未支持
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeaders(const std::vector<PagerDutyRobotNoticeTmplHeader>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取标题模板
                     * @return TitleTmpl 标题模板
                     * 
                     */
                    std::string GetTitleTmpl() const;

                    /**
                     * 设置标题模板
                     * @param _titleTmpl 标题模板
                     * 
                     */
                    void SetTitleTmpl(const std::string& _titleTmpl);

                    /**
                     * 判断参数 TitleTmpl 是否已赋值
                     * @return TitleTmpl 是否已赋值
                     * 
                     */
                    bool TitleTmplHasBeenSet() const;

                private:

                    /**
                     * 请求体模板 仅支持json
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * 请求头 暂时未支持
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PagerDutyRobotNoticeTmplHeader> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * 标题模板
                     */
                    std::string m_titleTmpl;
                    bool m_titleTmplHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_PAGERDUTYROBOTNOTICETMPL_H_

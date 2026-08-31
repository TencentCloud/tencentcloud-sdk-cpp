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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_FEISHUROBOTNOTICETMPL_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_FEISHUROBOTNOTICETMPL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/RobotNoticeTitleColor.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 飞书机器人内容模板配置
                */
                class FeiShuRobotNoticeTmpl : public AbstractModel
                {
                public:
                    FeiShuRobotNoticeTmpl();
                    ~FeiShuRobotNoticeTmpl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>内容模板</p>
                     * @return ContentTmpl <p>内容模板</p>
                     * 
                     */
                    std::string GetContentTmpl() const;

                    /**
                     * 设置<p>内容模板</p>
                     * @param _contentTmpl <p>内容模板</p>
                     * 
                     */
                    void SetContentTmpl(const std::string& _contentTmpl);

                    /**
                     * 判断参数 ContentTmpl 是否已赋值
                     * @return ContentTmpl 是否已赋值
                     * 
                     */
                    bool ContentTmplHasBeenSet() const;

                    /**
                     * 获取<p>标题模板</p>
                     * @return TitleTmpl <p>标题模板</p>
                     * 
                     */
                    std::string GetTitleTmpl() const;

                    /**
                     * 设置<p>标题模板</p>
                     * @param _titleTmpl <p>标题模板</p>
                     * 
                     */
                    void SetTitleTmpl(const std::string& _titleTmpl);

                    /**
                     * 判断参数 TitleTmpl 是否已赋值
                     * @return TitleTmpl 是否已赋值
                     * 
                     */
                    bool TitleTmplHasBeenSet() const;

                    /**
                     * 获取<p>通知内容模版标题自定义颜色</p>
                     * @return TitleColor <p>通知内容模版标题自定义颜色</p>
                     * 
                     */
                    RobotNoticeTitleColor GetTitleColor() const;

                    /**
                     * 设置<p>通知内容模版标题自定义颜色</p>
                     * @param _titleColor <p>通知内容模版标题自定义颜色</p>
                     * 
                     */
                    void SetTitleColor(const RobotNoticeTitleColor& _titleColor);

                    /**
                     * 判断参数 TitleColor 是否已赋值
                     * @return TitleColor 是否已赋值
                     * 
                     */
                    bool TitleColorHasBeenSet() const;

                private:

                    /**
                     * <p>内容模板</p>
                     */
                    std::string m_contentTmpl;
                    bool m_contentTmplHasBeenSet;

                    /**
                     * <p>标题模板</p>
                     */
                    std::string m_titleTmpl;
                    bool m_titleTmplHasBeenSet;

                    /**
                     * <p>通知内容模版标题自定义颜色</p>
                     */
                    RobotNoticeTitleColor m_titleColor;
                    bool m_titleColorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_FEISHUROBOTNOTICETMPL_H_

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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_TEAMSROBOTNOTICETMPL_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_TEAMSROBOTNOTICETMPL_H_

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
                * 企业微信机器人内容模板配置
                */
                class TeamsRobotNoticeTmpl : public AbstractModel
                {
                public:
                    TeamsRobotNoticeTmpl();
                    ~TeamsRobotNoticeTmpl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内容模板
                     * @return ContentTmpl 内容模板
                     * 
                     */
                    std::string GetContentTmpl() const;

                    /**
                     * 设置内容模板
                     * @param _contentTmpl 内容模板
                     * 
                     */
                    void SetContentTmpl(const std::string& _contentTmpl);

                    /**
                     * 判断参数 ContentTmpl 是否已赋值
                     * @return ContentTmpl 是否已赋值
                     * 
                     */
                    bool ContentTmplHasBeenSet() const;

                private:

                    /**
                     * 内容模板
                     */
                    std::string m_contentTmpl;
                    bool m_contentTmplHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_TEAMSROBOTNOTICETMPL_H_

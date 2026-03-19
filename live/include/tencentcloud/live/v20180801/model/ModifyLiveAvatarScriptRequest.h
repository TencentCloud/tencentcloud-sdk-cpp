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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEAVATARSCRIPTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEAVATARSCRIPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * ModifyLiveAvatarScript请求参数结构体
                */
                class ModifyLiveAvatarScriptRequest : public AbstractModel
                {
                public:
                    ModifyLiveAvatarScriptRequest();
                    ~ModifyLiveAvatarScriptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数字人直播间话术 ID。
                     * @return ScriptId 数字人直播间话术 ID。
                     * 
                     */
                    std::string GetScriptId() const;

                    /**
                     * 设置数字人直播间话术 ID。
                     * @param _scriptId 数字人直播间话术 ID。
                     * 
                     */
                    void SetScriptId(const std::string& _scriptId);

                    /**
                     * 判断参数 ScriptId 是否已赋值
                     * @return ScriptId 是否已赋值
                     * 
                     */
                    bool ScriptIdHasBeenSet() const;

                    /**
                     * 获取话术标题，限制500字节。
                     * @return Title 话术标题，限制500字节。
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置话术标题，限制500字节。
                     * @param _title 话术标题，限制500字节。
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取话术内容，限制1000字节。
                     * @return Content 话术内容，限制1000字节。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置话术内容，限制1000字节。
                     * @param _content 话术内容，限制1000字节。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取修改已有话术的位置。
比如已有话术三条，位置分别为100，200，300。
可将第三条话术改到第一条和第二条中间，则可指定第三条话术的位置为 150。
每次指定尽量取两条话术的中间位置，如50,150等，为后面顺序调整预留位置。
                     * @return SpecifyPosition 修改已有话术的位置。
比如已有话术三条，位置分别为100，200，300。
可将第三条话术改到第一条和第二条中间，则可指定第三条话术的位置为 150。
每次指定尽量取两条话术的中间位置，如50,150等，为后面顺序调整预留位置。
                     * 
                     */
                    int64_t GetSpecifyPosition() const;

                    /**
                     * 设置修改已有话术的位置。
比如已有话术三条，位置分别为100，200，300。
可将第三条话术改到第一条和第二条中间，则可指定第三条话术的位置为 150。
每次指定尽量取两条话术的中间位置，如50,150等，为后面顺序调整预留位置。
                     * @param _specifyPosition 修改已有话术的位置。
比如已有话术三条，位置分别为100，200，300。
可将第三条话术改到第一条和第二条中间，则可指定第三条话术的位置为 150。
每次指定尽量取两条话术的中间位置，如50,150等，为后面顺序调整预留位置。
                     * 
                     */
                    void SetSpecifyPosition(const int64_t& _specifyPosition);

                    /**
                     * 判断参数 SpecifyPosition 是否已赋值
                     * @return SpecifyPosition 是否已赋值
                     * 
                     */
                    bool SpecifyPositionHasBeenSet() const;

                    /**
                     * 获取操作者。
                     * @return Operator 操作者。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。
                     * @param _operator 操作者。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 数字人直播间话术 ID。
                     */
                    std::string m_scriptId;
                    bool m_scriptIdHasBeenSet;

                    /**
                     * 话术标题，限制500字节。
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 话术内容，限制1000字节。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 修改已有话术的位置。
比如已有话术三条，位置分别为100，200，300。
可将第三条话术改到第一条和第二条中间，则可指定第三条话术的位置为 150。
每次指定尽量取两条话术的中间位置，如50,150等，为后面顺序调整预留位置。
                     */
                    int64_t m_specifyPosition;
                    bool m_specifyPositionHasBeenSet;

                    /**
                     * 操作者。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEAVATARSCRIPTREQUEST_H_

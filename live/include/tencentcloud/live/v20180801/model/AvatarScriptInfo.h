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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARSCRIPTINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARSCRIPTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 数字人直播间话术信息。
                */
                class AvatarScriptInfo : public AbstractModel
                {
                public:
                    AvatarScriptInfo();
                    ~AvatarScriptInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取话术标题。
                     * @return Title 话术标题。
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置话术标题。
                     * @param _title 话术标题。
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
                     * 获取话术内容。
                     * @return Content 话术内容。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置话术内容。
                     * @param _content 话术内容。
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
                     * 获取话术状态。
PENDING --未生成。
PROCESSING --生成中。
READY --已生成。
                     * @return Status 话术状态。
PENDING --未生成。
PROCESSING --生成中。
READY --已生成。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置话术状态。
PENDING --未生成。
PROCESSING --生成中。
READY --已生成。
                     * @param _status 话术状态。
PENDING --未生成。
PROCESSING --生成中。
READY --已生成。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取时长。单位：毫秒。
                     * @return Duration 时长。单位：毫秒。
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置时长。单位：毫秒。
                     * @param _duration 时长。单位：毫秒。
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取话术位置。
                     * @return Position 话术位置。
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置话术位置。
                     * @param _position 话术位置。
                     * 
                     */
                    void SetPosition(const int64_t& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取话术创建时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     * @return CreateTime 话术创建时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置话术创建时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     * @param _createTime 话术创建时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取话术最后更新时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     * @return UpdateTime 话术最后更新时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置话术最后更新时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     * @param _updateTime 话术最后更新时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 数字人直播间话术 ID。
                     */
                    std::string m_scriptId;
                    bool m_scriptIdHasBeenSet;

                    /**
                     * 话术标题。
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 话术内容。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 话术状态。
PENDING --未生成。
PROCESSING --生成中。
READY --已生成。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 时长。单位：毫秒。
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 话术位置。
                     */
                    int64_t m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 话术创建时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 话术最后更新时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARSCRIPTINFO_H_

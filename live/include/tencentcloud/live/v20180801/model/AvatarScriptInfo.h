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
                     * 获取<p>数字人直播间话术 ID。</p>
                     * @return ScriptId <p>数字人直播间话术 ID。</p>
                     * 
                     */
                    std::string GetScriptId() const;

                    /**
                     * 设置<p>数字人直播间话术 ID。</p>
                     * @param _scriptId <p>数字人直播间话术 ID。</p>
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
                     * 获取<p>数字人直播间产品 ID。</p>
                     * @return ProductId <p>数字人直播间产品 ID。</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>数字人直播间产品 ID。</p>
                     * @param _productId <p>数字人直播间产品 ID。</p>
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取<p>话术标题。</p>
                     * @return Title <p>话术标题。</p>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置<p>话术标题。</p>
                     * @param _title <p>话术标题。</p>
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
                     * 获取<p>话术内容。</p>
                     * @return Content <p>话术内容。</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>话术内容。</p>
                     * @param _content <p>话术内容。</p>
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
                     * 获取<p>话术状态。PENDING --未生成。PROCESSING --生成中。READY --已生成。FAILED-失败</p><p>枚举值：</p><ul><li>FAILED： 失败</li></ul>
                     * @return Status <p>话术状态。PENDING --未生成。PROCESSING --生成中。READY --已生成。FAILED-失败</p><p>枚举值：</p><ul><li>FAILED： 失败</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>话术状态。PENDING --未生成。PROCESSING --生成中。READY --已生成。FAILED-失败</p><p>枚举值：</p><ul><li>FAILED： 失败</li></ul>
                     * @param _status <p>话术状态。PENDING --未生成。PROCESSING --生成中。READY --已生成。FAILED-失败</p><p>枚举值：</p><ul><li>FAILED： 失败</li></ul>
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
                     * 获取<p>时长。单位：毫秒。</p>
                     * @return Duration <p>时长。单位：毫秒。</p>
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置<p>时长。单位：毫秒。</p>
                     * @param _duration <p>时长。单位：毫秒。</p>
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
                     * 获取<p>话术位置。</p>
                     * @return Position <p>话术位置。</p>
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置<p>话术位置。</p>
                     * @param _position <p>话术位置。</p>
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
                     * 获取<p>话术创建时间，UTC时间。<br>注意：UTC时间和北京时间相差八小时。</p>
                     * @return CreateTime <p>话术创建时间，UTC时间。<br>注意：UTC时间和北京时间相差八小时。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>话术创建时间，UTC时间。<br>注意：UTC时间和北京时间相差八小时。</p>
                     * @param _createTime <p>话术创建时间，UTC时间。<br>注意：UTC时间和北京时间相差八小时。</p>
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
                     * 获取<p>话术最后更新时间，UTC时间。<br>注意：UTC时间和北京时间相差八小时。</p>
                     * @return UpdateTime <p>话术最后更新时间，UTC时间。<br>注意：UTC时间和北京时间相差八小时。</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>话术最后更新时间，UTC时间。<br>注意：UTC时间和北京时间相差八小时。</p>
                     * @param _updateTime <p>话术最后更新时间，UTC时间。<br>注意：UTC时间和北京时间相差八小时。</p>
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
                     * <p>数字人直播间话术 ID。</p>
                     */
                    std::string m_scriptId;
                    bool m_scriptIdHasBeenSet;

                    /**
                     * <p>数字人直播间产品 ID。</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>话术标题。</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>话术内容。</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>话术状态。PENDING --未生成。PROCESSING --生成中。READY --已生成。FAILED-失败</p><p>枚举值：</p><ul><li>FAILED： 失败</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>时长。单位：毫秒。</p>
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>话术位置。</p>
                     */
                    int64_t m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * <p>话术创建时间，UTC时间。<br>注意：UTC时间和北京时间相差八小时。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>话术最后更新时间，UTC时间。<br>注意：UTC时间和北京时间相差八小时。</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARSCRIPTINFO_H_

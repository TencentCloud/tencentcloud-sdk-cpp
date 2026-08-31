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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CLOUDEFFECTINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CLOUDEFFECTINFO_H_

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
                * 云端特效信息。
                */
                class CloudEffectInfo : public AbstractModel
                {
                public:
                    CloudEffectInfo();
                    ~CloudEffectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>云端特效 ID。</p>
                     * @return Id <p>云端特效 ID。</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>云端特效 ID。</p>
                     * @param _id <p>云端特效 ID。</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>云端特效描述词。</p>
                     * @return Prompt <p>云端特效描述词。</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>云端特效描述词。</p>
                     * @param _prompt <p>云端特效描述词。</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取<p>云端特效标签。</p>
                     * @return Flag <p>云端特效标签。</p>
                     * 
                     */
                    std::string GetFlag() const;

                    /**
                     * 设置<p>云端特效标签。</p>
                     * @param _flag <p>云端特效标签。</p>
                     * 
                     */
                    void SetFlag(const std::string& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     * 
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取<p>云端特效生成状态。<br>生成中 - GENERATING。<br>处理中 - PROCESSING。<br>生成失败 - FAILED。<br>已完成 - FINISH。</p>
                     * @return Status <p>云端特效生成状态。<br>生成中 - GENERATING。<br>处理中 - PROCESSING。<br>生成失败 - FAILED。<br>已完成 - FINISH。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>云端特效生成状态。<br>生成中 - GENERATING。<br>处理中 - PROCESSING。<br>生成失败 - FAILED。<br>已完成 - FINISH。</p>
                     * @param _status <p>云端特效生成状态。<br>生成中 - GENERATING。<br>处理中 - PROCESSING。<br>生成失败 - FAILED。<br>已完成 - FINISH。</p>
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
                     * 获取<p>特效信息，生成失败时，此处返回失败原因。</p>
                     * @return Message <p>特效信息，生成失败时，此处返回失败原因。</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>特效信息，生成失败时，此处返回失败原因。</p>
                     * @param _message <p>特效信息，生成失败时，此处返回失败原因。</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>云端特效预览图片。</p>
                     * @return PreviewImageUrl <p>云端特效预览图片。</p>
                     * 
                     */
                    std::string GetPreviewImageUrl() const;

                    /**
                     * 设置<p>云端特效预览图片。</p>
                     * @param _previewImageUrl <p>云端特效预览图片。</p>
                     * 
                     */
                    void SetPreviewImageUrl(const std::string& _previewImageUrl);

                    /**
                     * 判断参数 PreviewImageUrl 是否已赋值
                     * @return PreviewImageUrl 是否已赋值
                     * 
                     */
                    bool PreviewImageUrlHasBeenSet() const;

                    /**
                     * 获取<p>云端特效类型。<br>PGC : 官方精品特效。<br>AIGC : AI生成的特效。<br>UGC : 用户上传特效。</p>
                     * @return Type <p>云端特效类型。<br>PGC : 官方精品特效。<br>AIGC : AI生成的特效。<br>UGC : 用户上传特效。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>云端特效类型。<br>PGC : 官方精品特效。<br>AIGC : AI生成的特效。<br>UGC : 用户上传特效。</p>
                     * @param _type <p>云端特效类型。<br>PGC : 官方精品特效。<br>AIGC : AI生成的特效。<br>UGC : 用户上传特效。</p>
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
                     * 获取<p>云端特效创建时间。</p>
                     * @return CreateTime <p>云端特效创建时间。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>云端特效创建时间。</p>
                     * @param _createTime <p>云端特效创建时间。</p>
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
                     * 获取<p>云端特效更新时间。</p>
                     * @return UpdateTime <p>云端特效更新时间。</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>云端特效更新时间。</p>
                     * @param _updateTime <p>云端特效更新时间。</p>
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
                     * <p>云端特效 ID。</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>云端特效描述词。</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>云端特效标签。</p>
                     */
                    std::string m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * <p>云端特效生成状态。<br>生成中 - GENERATING。<br>处理中 - PROCESSING。<br>生成失败 - FAILED。<br>已完成 - FINISH。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>特效信息，生成失败时，此处返回失败原因。</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>云端特效预览图片。</p>
                     */
                    std::string m_previewImageUrl;
                    bool m_previewImageUrlHasBeenSet;

                    /**
                     * <p>云端特效类型。<br>PGC : 官方精品特效。<br>AIGC : AI生成的特效。<br>UGC : 用户上传特效。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>云端特效创建时间。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>云端特效更新时间。</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CLOUDEFFECTINFO_H_

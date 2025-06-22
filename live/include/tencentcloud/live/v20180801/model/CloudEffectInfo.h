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
                     * 获取云端特效 ID。
                     * @return Id 云端特效 ID。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置云端特效 ID。
                     * @param _id 云端特效 ID。
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
                     * 获取云端特效描述词。
                     * @return Prompt 云端特效描述词。
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置云端特效描述词。
                     * @param _prompt 云端特效描述词。
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
                     * 获取云端特效标签。
                     * @return Flag 云端特效标签。
                     * 
                     */
                    std::string GetFlag() const;

                    /**
                     * 设置云端特效标签。
                     * @param _flag 云端特效标签。
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
                     * 获取云端特效预览图片。
                     * @return PreviewImageUrl 云端特效预览图片。
                     * 
                     */
                    std::string GetPreviewImageUrl() const;

                    /**
                     * 设置云端特效预览图片。
                     * @param _previewImageUrl 云端特效预览图片。
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
                     * 获取云端特效类型。
PGC : 官方精品特效。
AIGC : AI生成的特效。
UGC : 用户上传特效。
                     * @return Type 云端特效类型。
PGC : 官方精品特效。
AIGC : AI生成的特效。
UGC : 用户上传特效。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置云端特效类型。
PGC : 官方精品特效。
AIGC : AI生成的特效。
UGC : 用户上传特效。
                     * @param _type 云端特效类型。
PGC : 官方精品特效。
AIGC : AI生成的特效。
UGC : 用户上传特效。
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
                     * 获取云端特效创建时间。
                     * @return CreateTime 云端特效创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置云端特效创建时间。
                     * @param _createTime 云端特效创建时间。
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
                     * 获取云端特效更新时间。
                     * @return UpdateTime 云端特效更新时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置云端特效更新时间。
                     * @param _updateTime 云端特效更新时间。
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
                     * 云端特效 ID。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 云端特效描述词。
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * 云端特效标签。
                     */
                    std::string m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * 云端特效预览图片。
                     */
                    std::string m_previewImageUrl;
                    bool m_previewImageUrlHasBeenSet;

                    /**
                     * 云端特效类型。
PGC : 官方精品特效。
AIGC : AI生成的特效。
UGC : 用户上传特效。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 云端特效创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 云端特效更新时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CLOUDEFFECTINFO_H_

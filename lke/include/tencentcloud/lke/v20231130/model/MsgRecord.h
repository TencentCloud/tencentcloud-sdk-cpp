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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_MSGRECORD_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_MSGRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/MsgRecordReference.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 消息详情
                */
                class MsgRecord : public AbstractModel
                {
                public:
                    MsgRecord();
                    ~MsgRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内容
                     * @return Content 内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置内容
                     * @param _content 内容
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
                     * 获取记录ID
                     * @return RecordId 记录ID
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置记录ID
                     * @param _recordId 记录ID
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取关联记录ID
                     * @return RelatedRecordId 关联记录ID
                     * 
                     */
                    std::string GetRelatedRecordId() const;

                    /**
                     * 设置关联记录ID
                     * @param _relatedRecordId 关联记录ID
                     * 
                     */
                    void SetRelatedRecordId(const std::string& _relatedRecordId);

                    /**
                     * 判断参数 RelatedRecordId 是否已赋值
                     * @return RelatedRecordId 是否已赋值
                     * 
                     */
                    bool RelatedRecordIdHasBeenSet() const;

                    /**
                     * 获取是否来自自己
                     * @return IsFromSelf 是否来自自己
                     * 
                     */
                    bool GetIsFromSelf() const;

                    /**
                     * 设置是否来自自己
                     * @param _isFromSelf 是否来自自己
                     * 
                     */
                    void SetIsFromSelf(const bool& _isFromSelf);

                    /**
                     * 判断参数 IsFromSelf 是否已赋值
                     * @return IsFromSelf 是否已赋值
                     * 
                     */
                    bool IsFromSelfHasBeenSet() const;

                    /**
                     * 获取发送者名称
                     * @return FromName 发送者名称
                     * 
                     */
                    std::string GetFromName() const;

                    /**
                     * 设置发送者名称
                     * @param _fromName 发送者名称
                     * 
                     */
                    void SetFromName(const std::string& _fromName);

                    /**
                     * 判断参数 FromName 是否已赋值
                     * @return FromName 是否已赋值
                     * 
                     */
                    bool FromNameHasBeenSet() const;

                    /**
                     * 获取发送者头像
                     * @return FromAvatar 发送者头像
                     * 
                     */
                    std::string GetFromAvatar() const;

                    /**
                     * 设置发送者头像
                     * @param _fromAvatar 发送者头像
                     * 
                     */
                    void SetFromAvatar(const std::string& _fromAvatar);

                    /**
                     * 判断参数 FromAvatar 是否已赋值
                     * @return FromAvatar 是否已赋值
                     * 
                     */
                    bool FromAvatarHasBeenSet() const;

                    /**
                     * 获取时间戳
                     * @return Timestamp 时间戳
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置时间戳
                     * @param _timestamp 时间戳
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取是否已读
                     * @return HasRead 是否已读
                     * 
                     */
                    bool GetHasRead() const;

                    /**
                     * 设置是否已读
                     * @param _hasRead 是否已读
                     * 
                     */
                    void SetHasRead(const bool& _hasRead);

                    /**
                     * 判断参数 HasRead 是否已赋值
                     * @return HasRead 是否已赋值
                     * 
                     */
                    bool HasReadHasBeenSet() const;

                    /**
                     * 获取评价
                     * @return Score 评价
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置评价
                     * @param _score 评价
                     * 
                     */
                    void SetScore(const uint64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取是否评分
                     * @return CanRating 是否评分
                     * 
                     */
                    bool GetCanRating() const;

                    /**
                     * 设置是否评分
                     * @param _canRating 是否评分
                     * 
                     */
                    void SetCanRating(const bool& _canRating);

                    /**
                     * 判断参数 CanRating 是否已赋值
                     * @return CanRating 是否已赋值
                     * 
                     */
                    bool CanRatingHasBeenSet() const;

                    /**
                     * 获取记录类型
                     * @return Type 记录类型
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置记录类型
                     * @param _type 记录类型
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取引用来源
                     * @return References 引用来源
                     * 
                     */
                    std::vector<MsgRecordReference> GetReferences() const;

                    /**
                     * 设置引用来源
                     * @param _references 引用来源
                     * 
                     */
                    void SetReferences(const std::vector<MsgRecordReference>& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                    /**
                     * 获取评价原因
                     * @return Reasons 评价原因
                     * 
                     */
                    std::vector<std::string> GetReasons() const;

                    /**
                     * 设置评价原因
                     * @param _reasons 评价原因
                     * 
                     */
                    void SetReasons(const std::vector<std::string>& _reasons);

                    /**
                     * 判断参数 Reasons 是否已赋值
                     * @return Reasons 是否已赋值
                     * 
                     */
                    bool ReasonsHasBeenSet() const;

                    /**
                     * 获取是否大模型
                     * @return IsLlmGenerated 是否大模型
                     * 
                     */
                    bool GetIsLlmGenerated() const;

                    /**
                     * 设置是否大模型
                     * @param _isLlmGenerated 是否大模型
                     * 
                     */
                    void SetIsLlmGenerated(const bool& _isLlmGenerated);

                    /**
                     * 判断参数 IsLlmGenerated 是否已赋值
                     * @return IsLlmGenerated 是否已赋值
                     * 
                     */
                    bool IsLlmGeneratedHasBeenSet() const;

                private:

                    /**
                     * 内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 记录ID
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 关联记录ID
                     */
                    std::string m_relatedRecordId;
                    bool m_relatedRecordIdHasBeenSet;

                    /**
                     * 是否来自自己
                     */
                    bool m_isFromSelf;
                    bool m_isFromSelfHasBeenSet;

                    /**
                     * 发送者名称
                     */
                    std::string m_fromName;
                    bool m_fromNameHasBeenSet;

                    /**
                     * 发送者头像
                     */
                    std::string m_fromAvatar;
                    bool m_fromAvatarHasBeenSet;

                    /**
                     * 时间戳
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 是否已读
                     */
                    bool m_hasRead;
                    bool m_hasReadHasBeenSet;

                    /**
                     * 评价
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 是否评分
                     */
                    bool m_canRating;
                    bool m_canRatingHasBeenSet;

                    /**
                     * 记录类型
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 引用来源
                     */
                    std::vector<MsgRecordReference> m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * 评价原因
                     */
                    std::vector<std::string> m_reasons;
                    bool m_reasonsHasBeenSet;

                    /**
                     * 是否大模型
                     */
                    bool m_isLlmGenerated;
                    bool m_isLlmGeneratedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MSGRECORD_H_

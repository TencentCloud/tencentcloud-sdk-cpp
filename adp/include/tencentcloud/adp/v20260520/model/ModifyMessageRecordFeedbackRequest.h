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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYMESSAGERECORDFEEDBACKREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYMESSAGERECORDFEEDBACKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ModifyMessageRecordFeedback请求参数结构体
                */
                class ModifyMessageRecordFeedbackRequest : public AbstractModel
                {
                public:
                    ModifyMessageRecordFeedbackRequest();
                    ~ModifyMessageRecordFeedbackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>需要反馈的消息记录ID</p>
                     * @return RecordId <p>需要反馈的消息记录ID</p>
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置<p>需要反馈的消息记录ID</p>
                     * @param _recordId <p>需要反馈的消息记录ID</p>
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
                     * 获取<p>消息记录所属应用的授权AppKey</p>
                     * @return AppKey <p>消息记录所属应用的授权AppKey</p>
                     * 
                     */
                    std::string GetAppKey() const;

                    /**
                     * 设置<p>消息记录所属应用的授权AppKey</p>
                     * @param _appKey <p>消息记录所属应用的授权AppKey</p>
                     * 
                     */
                    void SetAppKey(const std::string& _appKey);

                    /**
                     * 判断参数 AppKey 是否已赋值
                     * @return AppKey 是否已赋值
                     * 
                     */
                    bool AppKeyHasBeenSet() const;

                    /**
                     * 获取<p>反馈分值</p><p>枚举值：</p><ul><li>0： 取消点赞或点踩</li><li>1： 点赞</li><li>2： 点踩</li></ul>
                     * @return Score <p>反馈分值</p><p>枚举值：</p><ul><li>0： 取消点赞或点踩</li><li>1： 点赞</li><li>2： 点踩</li></ul>
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置<p>反馈分值</p><p>枚举值：</p><ul><li>0： 取消点赞或点踩</li><li>1： 点赞</li><li>2： 点踩</li></ul>
                     * @param _score <p>反馈分值</p><p>枚举值：</p><ul><li>0： 取消点赞或点踩</li><li>1： 点赞</li><li>2： 点踩</li></ul>
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
                     * 获取<p>反馈的原因列表</p>
                     * @return ReasonList <p>反馈的原因列表</p>
                     * 
                     */
                    std::vector<std::string> GetReasonList() const;

                    /**
                     * 设置<p>反馈的原因列表</p>
                     * @param _reasonList <p>反馈的原因列表</p>
                     * 
                     */
                    void SetReasonList(const std::vector<std::string>& _reasonList);

                    /**
                     * 判断参数 ReasonList 是否已赋值
                     * @return ReasonList 是否已赋值
                     * 
                     */
                    bool ReasonListHasBeenSet() const;

                    /**
                     * 获取<p>反馈的补充内容</p>
                     * @return FeedbackContent <p>反馈的补充内容</p>
                     * 
                     */
                    std::string GetFeedbackContent() const;

                    /**
                     * 设置<p>反馈的补充内容</p>
                     * @param _feedbackContent <p>反馈的补充内容</p>
                     * 
                     */
                    void SetFeedbackContent(const std::string& _feedbackContent);

                    /**
                     * 判断参数 FeedbackContent 是否已赋值
                     * @return FeedbackContent 是否已赋值
                     * 
                     */
                    bool FeedbackContentHasBeenSet() const;

                    /**
                     * 获取<p>消息记录所属的应用ID</p>
                     * @return AppId <p>消息记录所属的应用ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>消息记录所属的应用ID</p>
                     * @param _appId <p>消息记录所属的应用ID</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * <p>需要反馈的消息记录ID</p>
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>消息记录所属应用的授权AppKey</p>
                     */
                    std::string m_appKey;
                    bool m_appKeyHasBeenSet;

                    /**
                     * <p>反馈分值</p><p>枚举值：</p><ul><li>0： 取消点赞或点踩</li><li>1： 点赞</li><li>2： 点踩</li></ul>
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>反馈的原因列表</p>
                     */
                    std::vector<std::string> m_reasonList;
                    bool m_reasonListHasBeenSet;

                    /**
                     * <p>反馈的补充内容</p>
                     */
                    std::string m_feedbackContent;
                    bool m_feedbackContentHasBeenSet;

                    /**
                     * <p>消息记录所属的应用ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYMESSAGERECORDFEEDBACKREQUEST_H_

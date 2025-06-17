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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_RATEMSGRECORDREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_RATEMSGRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * RateMsgRecord请求参数结构体
                */
                class RateMsgRecordRequest : public AbstractModel
                {
                public:
                    RateMsgRecordRequest();
                    ~RateMsgRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用appKey
                     * @return BotAppKey 应用appKey
                     * 
                     */
                    std::string GetBotAppKey() const;

                    /**
                     * 设置应用appKey
                     * @param _botAppKey 应用appKey
                     * 
                     */
                    void SetBotAppKey(const std::string& _botAppKey);

                    /**
                     * 判断参数 BotAppKey 是否已赋值
                     * @return BotAppKey 是否已赋值
                     * 
                     */
                    bool BotAppKeyHasBeenSet() const;

                    /**
                     * 获取消息ID 【大模型回复答案的RecordID】
                     * @return RecordId 消息ID 【大模型回复答案的RecordID】
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置消息ID 【大模型回复答案的RecordID】
                     * @param _recordId 消息ID 【大模型回复答案的RecordID】
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
                     * 获取1点赞2点踩
                     * @return Score 1点赞2点踩
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置1点赞2点踩
                     * @param _score 1点赞2点踩
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
                     * 获取原因
                     * @return Reasons 原因
                     * 
                     */
                    std::vector<std::string> GetReasons() const;

                    /**
                     * 设置原因
                     * @param _reasons 原因
                     * 
                     */
                    void SetReasons(const std::vector<std::string>& _reasons);

                    /**
                     * 判断参数 Reasons 是否已赋值
                     * @return Reasons 是否已赋值
                     * 
                     */
                    bool ReasonsHasBeenSet() const;

                private:

                    /**
                     * 应用appKey
                     */
                    std::string m_botAppKey;
                    bool m_botAppKeyHasBeenSet;

                    /**
                     * 消息ID 【大模型回复答案的RecordID】
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 1点赞2点踩
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 原因
                     */
                    std::vector<std::string> m_reasons;
                    bool m_reasonsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_RATEMSGRECORDREQUEST_H_

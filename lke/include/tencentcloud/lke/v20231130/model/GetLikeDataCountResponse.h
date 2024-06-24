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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_GETLIKEDATACOUNTRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_GETLIKEDATACOUNTRESPONSE_H_

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
                * GetLikeDataCount返回参数结构体
                */
                class GetLikeDataCountResponse : public AbstractModel
                {
                public:
                    GetLikeDataCountResponse();
                    ~GetLikeDataCountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取可评价消息数
                     * @return Total 可评价消息数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取评价数
                     * @return AppraisalTotal 评价数
                     * 
                     */
                    uint64_t GetAppraisalTotal() const;

                    /**
                     * 判断参数 AppraisalTotal 是否已赋值
                     * @return AppraisalTotal 是否已赋值
                     * 
                     */
                    bool AppraisalTotalHasBeenSet() const;

                    /**
                     * 获取参评率
                     * @return ParticipationRate 参评率
                     * 
                     */
                    double GetParticipationRate() const;

                    /**
                     * 判断参数 ParticipationRate 是否已赋值
                     * @return ParticipationRate 是否已赋值
                     * 
                     */
                    bool ParticipationRateHasBeenSet() const;

                    /**
                     * 获取点赞数
                     * @return LikeTotal 点赞数
                     * 
                     */
                    uint64_t GetLikeTotal() const;

                    /**
                     * 判断参数 LikeTotal 是否已赋值
                     * @return LikeTotal 是否已赋值
                     * 
                     */
                    bool LikeTotalHasBeenSet() const;

                    /**
                     * 获取点赞率
                     * @return LikeRate 点赞率
                     * 
                     */
                    double GetLikeRate() const;

                    /**
                     * 判断参数 LikeRate 是否已赋值
                     * @return LikeRate 是否已赋值
                     * 
                     */
                    bool LikeRateHasBeenSet() const;

                    /**
                     * 获取点踩数
                     * @return DislikeTotal 点踩数
                     * 
                     */
                    uint64_t GetDislikeTotal() const;

                    /**
                     * 判断参数 DislikeTotal 是否已赋值
                     * @return DislikeTotal 是否已赋值
                     * 
                     */
                    bool DislikeTotalHasBeenSet() const;

                    /**
                     * 获取点踩率
                     * @return DislikeRate 点踩率
                     * 
                     */
                    double GetDislikeRate() const;

                    /**
                     * 判断参数 DislikeRate 是否已赋值
                     * @return DislikeRate 是否已赋值
                     * 
                     */
                    bool DislikeRateHasBeenSet() const;

                private:

                    /**
                     * 可评价消息数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 评价数
                     */
                    uint64_t m_appraisalTotal;
                    bool m_appraisalTotalHasBeenSet;

                    /**
                     * 参评率
                     */
                    double m_participationRate;
                    bool m_participationRateHasBeenSet;

                    /**
                     * 点赞数
                     */
                    uint64_t m_likeTotal;
                    bool m_likeTotalHasBeenSet;

                    /**
                     * 点赞率
                     */
                    double m_likeRate;
                    bool m_likeRateHasBeenSet;

                    /**
                     * 点踩数
                     */
                    uint64_t m_dislikeTotal;
                    bool m_dislikeTotalHasBeenSet;

                    /**
                     * 点踩率
                     */
                    double m_dislikeRate;
                    bool m_dislikeRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_GETLIKEDATACOUNTRESPONSE_H_

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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DELETEREJECTEDQUESTIONREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DELETEREJECTEDQUESTIONREQUEST_H_

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
                * DeleteRejectedQuestion请求参数结构体
                */
                class DeleteRejectedQuestionRequest : public AbstractModel
                {
                public:
                    DeleteRejectedQuestionRequest();
                    ~DeleteRejectedQuestionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return BotBizId 应用ID
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置应用ID
                     * @param _botBizId 应用ID
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取拒答问题来源的数据源唯一id



                     * @return RejectedBizIds 拒答问题来源的数据源唯一id



                     * 
                     */
                    std::vector<std::string> GetRejectedBizIds() const;

                    /**
                     * 设置拒答问题来源的数据源唯一id



                     * @param _rejectedBizIds 拒答问题来源的数据源唯一id



                     * 
                     */
                    void SetRejectedBizIds(const std::vector<std::string>& _rejectedBizIds);

                    /**
                     * 判断参数 RejectedBizIds 是否已赋值
                     * @return RejectedBizIds 是否已赋值
                     * 
                     */
                    bool RejectedBizIdsHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * 拒答问题来源的数据源唯一id



                     */
                    std::vector<std::string> m_rejectedBizIds;
                    bool m_rejectedBizIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DELETEREJECTEDQUESTIONREQUEST_H_

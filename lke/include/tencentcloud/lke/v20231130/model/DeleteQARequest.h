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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DELETEQAREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DELETEQAREQUEST_H_

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
                * DeleteQA请求参数结构体
                */
                class DeleteQARequest : public AbstractModel
                {
                public:
                    DeleteQARequest();
                    ~DeleteQARequest() = default;
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
                     * 获取问答ID
                     * @return QaBizIds 问答ID
                     * 
                     */
                    std::vector<std::string> GetQaBizIds() const;

                    /**
                     * 设置问答ID
                     * @param _qaBizIds 问答ID
                     * 
                     */
                    void SetQaBizIds(const std::vector<std::string>& _qaBizIds);

                    /**
                     * 判断参数 QaBizIds 是否已赋值
                     * @return QaBizIds 是否已赋值
                     * 
                     */
                    bool QaBizIdsHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * 问答ID
                     */
                    std::vector<std::string> m_qaBizIds;
                    bool m_qaBizIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DELETEQAREQUEST_H_

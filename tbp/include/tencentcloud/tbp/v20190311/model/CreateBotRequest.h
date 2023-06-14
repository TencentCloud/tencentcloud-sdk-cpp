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

#ifndef TENCENTCLOUD_TBP_V20190311_MODEL_CREATEBOTREQUEST_H_
#define TENCENTCLOUD_TBP_V20190311_MODEL_CREATEBOTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbp
    {
        namespace V20190311
        {
            namespace Model
            {
                /**
                * CreateBot请求参数结构体
                */
                class CreateBotRequest : public AbstractModel
                {
                public:
                    CreateBotRequest();
                    ~CreateBotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取机器人名称
                     * @return BotName 机器人名称
                     * 
                     */
                    std::string GetBotName() const;

                    /**
                     * 设置机器人名称
                     * @param _botName 机器人名称
                     * 
                     */
                    void SetBotName(const std::string& _botName);

                    /**
                     * 判断参数 BotName 是否已赋值
                     * @return BotName 是否已赋值
                     * 
                     */
                    bool BotNameHasBeenSet() const;

                    /**
                     * 获取机器人中文名称
                     * @return BotCnName 机器人中文名称
                     * 
                     */
                    std::string GetBotCnName() const;

                    /**
                     * 设置机器人中文名称
                     * @param _botCnName 机器人中文名称
                     * 
                     */
                    void SetBotCnName(const std::string& _botCnName);

                    /**
                     * 判断参数 BotCnName 是否已赋值
                     * @return BotCnName 是否已赋值
                     * 
                     */
                    bool BotCnNameHasBeenSet() const;

                private:

                    /**
                     * 机器人名称
                     */
                    std::string m_botName;
                    bool m_botNameHasBeenSet;

                    /**
                     * 机器人中文名称
                     */
                    std::string m_botCnName;
                    bool m_botCnNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBP_V20190311_MODEL_CREATEBOTREQUEST_H_

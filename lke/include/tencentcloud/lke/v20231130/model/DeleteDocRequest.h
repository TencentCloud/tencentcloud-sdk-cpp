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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DELETEDOCREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DELETEDOCREQUEST_H_

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
                * DeleteDoc请求参数结构体
                */
                class DeleteDocRequest : public AbstractModel
                {
                public:
                    DeleteDocRequest();
                    ~DeleteDocRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文档业务ID列表
                     * @return DocBizIds 文档业务ID列表
                     * 
                     */
                    std::vector<std::string> GetDocBizIds() const;

                    /**
                     * 设置文档业务ID列表
                     * @param _docBizIds 文档业务ID列表
                     * 
                     */
                    void SetDocBizIds(const std::vector<std::string>& _docBizIds);

                    /**
                     * 判断参数 DocBizIds 是否已赋值
                     * @return DocBizIds 是否已赋值
                     * 
                     */
                    bool DocBizIdsHasBeenSet() const;

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

                private:

                    /**
                     * 文档业务ID列表
                     */
                    std::vector<std::string> m_docBizIds;
                    bool m_docBizIdsHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DELETEDOCREQUEST_H_

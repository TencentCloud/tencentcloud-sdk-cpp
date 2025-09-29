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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_RETRYDOCPARSEREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_RETRYDOCPARSEREQUEST_H_

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
                * RetryDocParse请求参数结构体
                */
                class RetryDocParseRequest : public AbstractModel
                {
                public:
                    RetryDocParseRequest();
                    ~RetryDocParseRequest() = default;
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
                     * 获取废弃
                     * @return DocBizId 废弃
                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置废弃
                     * @param _docBizId 废弃
                     * 
                     */
                    void SetDocBizId(const std::string& _docBizId);

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * 
                     */
                    bool DocBizIdHasBeenSet() const;

                    /**
                     * 获取集合最大上限50个，DocBizIds有值使用DocBizIds，为空时则使用DocBizId(兼容废弃字段)
                     * @return DocBizIds 集合最大上限50个，DocBizIds有值使用DocBizIds，为空时则使用DocBizId(兼容废弃字段)
                     * 
                     */
                    std::vector<std::string> GetDocBizIds() const;

                    /**
                     * 设置集合最大上限50个，DocBizIds有值使用DocBizIds，为空时则使用DocBizId(兼容废弃字段)
                     * @param _docBizIds 集合最大上限50个，DocBizIds有值使用DocBizIds，为空时则使用DocBizId(兼容废弃字段)
                     * 
                     */
                    void SetDocBizIds(const std::vector<std::string>& _docBizIds);

                    /**
                     * 判断参数 DocBizIds 是否已赋值
                     * @return DocBizIds 是否已赋值
                     * 
                     */
                    bool DocBizIdsHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * 废弃
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * 集合最大上限50个，DocBizIds有值使用DocBizIds，为空时则使用DocBizId(兼容废弃字段)
                     */
                    std::vector<std::string> m_docBizIds;
                    bool m_docBizIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_RETRYDOCPARSEREQUEST_H_

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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_RETRYRELEASEREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_RETRYRELEASEREQUEST_H_

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
                * RetryRelease请求参数结构体
                */
                class RetryReleaseRequest : public AbstractModel
                {
                public:
                    RetryReleaseRequest();
                    ~RetryReleaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID（获取方法参看如何获取   [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)）
                     * @return BotBizId 应用ID（获取方法参看如何获取   [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)）
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置应用ID（获取方法参看如何获取   [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)）
                     * @param _botBizId 应用ID（获取方法参看如何获取   [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)）
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
                     * 获取发布单ID（可以通过[ListRelease](https://cloud.tencent.com/document/product/1759/105077)获得）
                     * @return ReleaseBizId 发布单ID（可以通过[ListRelease](https://cloud.tencent.com/document/product/1759/105077)获得）
                     * 
                     */
                    std::string GetReleaseBizId() const;

                    /**
                     * 设置发布单ID（可以通过[ListRelease](https://cloud.tencent.com/document/product/1759/105077)获得）
                     * @param _releaseBizId 发布单ID（可以通过[ListRelease](https://cloud.tencent.com/document/product/1759/105077)获得）
                     * 
                     */
                    void SetReleaseBizId(const std::string& _releaseBizId);

                    /**
                     * 判断参数 ReleaseBizId 是否已赋值
                     * @return ReleaseBizId 是否已赋值
                     * 
                     */
                    bool ReleaseBizIdHasBeenSet() const;

                private:

                    /**
                     * 应用ID（获取方法参看如何获取   [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)）
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * 发布单ID（可以通过[ListRelease](https://cloud.tencent.com/document/product/1759/105077)获得）
                     */
                    std::string m_releaseBizId;
                    bool m_releaseBizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_RETRYRELEASEREQUEST_H_

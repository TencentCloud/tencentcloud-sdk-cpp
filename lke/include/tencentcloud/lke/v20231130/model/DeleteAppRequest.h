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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DELETEAPPREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DELETEAPPREQUEST_H_

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
                * DeleteApp请求参数结构体
                */
                class DeleteAppRequest : public AbstractModel
                {
                public:
                    DeleteAppRequest();
                    ~DeleteAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID，获取方法参看如何获取   [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)。
                     * @return AppBizId 应用ID，获取方法参看如何获取   [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)。
                     * 
                     */
                    std::string GetAppBizId() const;

                    /**
                     * 设置应用ID，获取方法参看如何获取   [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)。
                     * @param _appBizId 应用ID，获取方法参看如何获取   [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)。
                     * 
                     */
                    void SetAppBizId(const std::string& _appBizId);

                    /**
                     * 判断参数 AppBizId 是否已赋值
                     * @return AppBizId 是否已赋值
                     * 
                     */
                    bool AppBizIdHasBeenSet() const;

                    /**
                     * 获取应用类型；`"knowledge_qa"` 知识问答应用（包含标准模式 单工作流 Multi-Agent 等模式）
                     * @return AppType 应用类型；`"knowledge_qa"` 知识问答应用（包含标准模式 单工作流 Multi-Agent 等模式）
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置应用类型；`"knowledge_qa"` 知识问答应用（包含标准模式 单工作流 Multi-Agent 等模式）
                     * @param _appType 应用类型；`"knowledge_qa"` 知识问答应用（包含标准模式 单工作流 Multi-Agent 等模式）
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                private:

                    /**
                     * 应用ID，获取方法参看如何获取   [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)。
                     */
                    std::string m_appBizId;
                    bool m_appBizIdHasBeenSet;

                    /**
                     * 应用类型；`"knowledge_qa"` 知识问答应用（包含标准模式 单工作流 Multi-Agent 等模式）
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DELETEAPPREQUEST_H_

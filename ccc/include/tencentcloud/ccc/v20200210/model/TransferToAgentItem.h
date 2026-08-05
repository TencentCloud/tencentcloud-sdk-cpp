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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_TRANSFERTOAGENTITEM_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_TRANSFERTOAGENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 转接智能体配置
                */
                class TransferToAgentItem : public AbstractModel
                {
                public:
                    TransferToAgentItem();
                    ~TransferToAgentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>转智能体的function calling 名称</p>
                     * @return TransferToAgentName <p>转智能体的function calling 名称</p>
                     * 
                     */
                    std::string GetTransferToAgentName() const;

                    /**
                     * 设置<p>转智能体的function calling 名称</p>
                     * @param _transferToAgentName <p>转智能体的function calling 名称</p>
                     * 
                     */
                    void SetTransferToAgentName(const std::string& _transferToAgentName);

                    /**
                     * 判断参数 TransferToAgentName 是否已赋值
                     * @return TransferToAgentName 是否已赋值
                     * 
                     */
                    bool TransferToAgentNameHasBeenSet() const;

                    /**
                     * 获取<p>转智能体描述</p>
                     * @return TransferToAgentDesc <p>转智能体描述</p>
                     * 
                     */
                    std::string GetTransferToAgentDesc() const;

                    /**
                     * 设置<p>转智能体描述</p>
                     * @param _transferToAgentDesc <p>转智能体描述</p>
                     * 
                     */
                    void SetTransferToAgentDesc(const std::string& _transferToAgentDesc);

                    /**
                     * 判断参数 TransferToAgentDesc 是否已赋值
                     * @return TransferToAgentDesc 是否已赋值
                     * 
                     */
                    bool TransferToAgentDescHasBeenSet() const;

                    /**
                     * 获取<p>目标智能体ID</p>
                     * @return TransferToAgentId <p>目标智能体ID</p>
                     * 
                     */
                    uint64_t GetTransferToAgentId() const;

                    /**
                     * 设置<p>目标智能体ID</p>
                     * @param _transferToAgentId <p>目标智能体ID</p>
                     * 
                     */
                    void SetTransferToAgentId(const uint64_t& _transferToAgentId);

                    /**
                     * 判断参数 TransferToAgentId 是否已赋值
                     * @return TransferToAgentId 是否已赋值
                     * 
                     */
                    bool TransferToAgentIdHasBeenSet() const;

                private:

                    /**
                     * <p>转智能体的function calling 名称</p>
                     */
                    std::string m_transferToAgentName;
                    bool m_transferToAgentNameHasBeenSet;

                    /**
                     * <p>转智能体描述</p>
                     */
                    std::string m_transferToAgentDesc;
                    bool m_transferToAgentDescHasBeenSet;

                    /**
                     * <p>目标智能体ID</p>
                     */
                    uint64_t m_transferToAgentId;
                    bool m_transferToAgentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_TRANSFERTOAGENTITEM_H_

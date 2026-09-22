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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CONNECTORREFINPUT_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CONNECTORREFINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * 连接器引用入参
                */
                class ConnectorRefInput : public AbstractModel
                {
                public:
                    ConnectorRefInput();
                    ~ConnectorRefInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取connector 主表 ID（雪花 ID 数字串）
                     * @return ConnectorId connector 主表 ID（雪花 ID 数字串）
                     * 
                     */
                    std::string GetConnectorId() const;

                    /**
                     * 设置connector 主表 ID（雪花 ID 数字串）
                     * @param _connectorId connector 主表 ID（雪花 ID 数字串）
                     * 
                     */
                    void SetConnectorId(const std::string& _connectorId);

                    /**
                     * 判断参数 ConnectorId 是否已赋值
                     * @return ConnectorId 是否已赋值
                     * 
                     */
                    bool ConnectorIdHasBeenSet() const;

                private:

                    /**
                     * connector 主表 ID（雪花 ID 数字串）
                     */
                    std::string m_connectorId;
                    bool m_connectorIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CONNECTORREFINPUT_H_

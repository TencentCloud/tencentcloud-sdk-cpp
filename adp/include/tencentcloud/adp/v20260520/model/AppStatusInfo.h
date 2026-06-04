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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPSTATUSINFO_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPSTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 应用状态信息 - 运行时状态信息(用户不可修改)
                */
                class AppStatusInfo : public AbstractModel
                {
                public:
                    AppStatusInfo();
                    ~AppStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用状态 (OFFLINE:未上线, RUNNING:运行中, DISABLED:停用)。枚举值: 1:未上线, 2:运行中, 3:停用
                     * @return Status 应用状态 (OFFLINE:未上线, RUNNING:运行中, DISABLED:停用)。枚举值: 1:未上线, 2:运行中, 3:停用
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置应用状态 (OFFLINE:未上线, RUNNING:运行中, DISABLED:停用)。枚举值: 1:未上线, 2:运行中, 3:停用
                     * @param _status 应用状态 (OFFLINE:未上线, RUNNING:运行中, DISABLED:停用)。枚举值: 1:未上线, 2:运行中, 3:停用
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取状态描述
                     * @return StatusDescription 状态描述
                     * 
                     */
                    std::string GetStatusDescription() const;

                    /**
                     * 设置状态描述
                     * @param _statusDescription 状态描述
                     * 
                     */
                    void SetStatusDescription(const std::string& _statusDescription);

                    /**
                     * 判断参数 StatusDescription 是否已赋值
                     * @return StatusDescription 是否已赋值
                     * 
                     */
                    bool StatusDescriptionHasBeenSet() const;

                private:

                    /**
                     * 应用状态 (OFFLINE:未上线, RUNNING:运行中, DISABLED:停用)。枚举值: 1:未上线, 2:运行中, 3:停用
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态描述
                     */
                    std::string m_statusDescription;
                    bool m_statusDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPSTATUSINFO_H_

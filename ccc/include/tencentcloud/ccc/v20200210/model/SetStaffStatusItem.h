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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_SETSTAFFSTATUSITEM_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_SETSTAFFSTATUSITEM_H_

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
                * 创建 staff 的信息 item
                */
                class SetStaffStatusItem : public AbstractModel
                {
                public:
                    SetStaffStatusItem();
                    ~SetStaffStatusItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取座席账号
                     * @return StaffUserId 座席账号
                     * 
                     */
                    std::string GetStaffUserId() const;

                    /**
                     * 设置座席账号
                     * @param _staffUserId 座席账号
                     * 
                     */
                    void SetStaffUserId(const std::string& _staffUserId);

                    /**
                     * 判断参数 StaffUserId 是否已赋值
                     * @return StaffUserId 是否已赋值
                     * 
                     */
                    bool StaffUserIdHasBeenSet() const;

                    /**
                     * 获取状态，free 示闲 notReady 示忙 rest 小休	
                     * @return Status 状态，free 示闲 notReady 示忙 rest 小休	
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态，free 示闲 notReady 示忙 rest 小休	
                     * @param _status 状态，free 示闲 notReady 示忙 rest 小休	
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取如果设置小休状态，这里是原因
                     * @return Reason 如果设置小休状态，这里是原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置如果设置小休状态，这里是原因
                     * @param _reason 如果设置小休状态，这里是原因
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * 座席账号
                     */
                    std::string m_staffUserId;
                    bool m_staffUserIdHasBeenSet;

                    /**
                     * 状态，free 示闲 notReady 示忙 rest 小休	
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 如果设置小休状态，这里是原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_SETSTAFFSTATUSITEM_H_

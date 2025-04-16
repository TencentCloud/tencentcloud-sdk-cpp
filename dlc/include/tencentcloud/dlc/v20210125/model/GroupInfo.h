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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_GROUPINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_GROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 数据脱敏用户组信息
                */
                class GroupInfo : public AbstractModel
                {
                public:
                    GroupInfo();
                    ~GroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户组ID
                     * @return WorkGroupId 用户组ID
                     * 
                     */
                    int64_t GetWorkGroupId() const;

                    /**
                     * 设置用户组ID
                     * @param _workGroupId 用户组ID
                     * 
                     */
                    void SetWorkGroupId(const int64_t& _workGroupId);

                    /**
                     * 判断参数 WorkGroupId 是否已赋值
                     * @return WorkGroupId 是否已赋值
                     * 
                     */
                    bool WorkGroupIdHasBeenSet() const;

                    /**
                     * 获取策略类型
                     * @return StrategyType 策略类型
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置策略类型
                     * @param _strategyType 策略类型
                     * 
                     */
                    void SetStrategyType(const std::string& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                private:

                    /**
                     * 用户组ID
                     */
                    int64_t m_workGroupId;
                    bool m_workGroupIdHasBeenSet;

                    /**
                     * 策略类型
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_GROUPINFO_H_

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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRANSOMDEFENSESTRATEGYSTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRANSOMDEFENSESTRATEGYSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyRansomDefenseStrategyStatus请求参数结构体
                */
                class ModifyRansomDefenseStrategyStatusRequest : public AbstractModel
                {
                public:
                    ModifyRansomDefenseStrategyStatusRequest();
                    ~ModifyRansomDefenseStrategyStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否对全部策略生效: 0否，1是
                     * @return IsAll 是否对全部策略生效: 0否，1是
                     * 
                     */
                    uint64_t GetIsAll() const;

                    /**
                     * 设置是否对全部策略生效: 0否，1是
                     * @param _isAll 是否对全部策略生效: 0否，1是
                     * 
                     */
                    void SetIsAll(const uint64_t& _isAll);

                    /**
                     * 判断参数 IsAll 是否已赋值
                     * @return IsAll 是否已赋值
                     * 
                     */
                    bool IsAllHasBeenSet() const;

                    /**
                     * 获取0关闭，1开启，9删除
                     * @return Status 0关闭，1开启，9删除
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0关闭，1开启，9删除
                     * @param _status 0关闭，1开启，9删除
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取策略ID列表
                     * @return IdList 策略ID列表
                     * 
                     */
                    std::vector<uint64_t> GetIdList() const;

                    /**
                     * 设置策略ID列表
                     * @param _idList 策略ID列表
                     * 
                     */
                    void SetIdList(const std::vector<uint64_t>& _idList);

                    /**
                     * 判断参数 IdList 是否已赋值
                     * @return IdList 是否已赋值
                     * 
                     */
                    bool IdListHasBeenSet() const;

                private:

                    /**
                     * 是否对全部策略生效: 0否，1是
                     */
                    uint64_t m_isAll;
                    bool m_isAllHasBeenSet;

                    /**
                     * 0关闭，1开启，9删除
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 策略ID列表
                     */
                    std::vector<uint64_t> m_idList;
                    bool m_idListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRANSOMDEFENSESTRATEGYSTATUSREQUEST_H_

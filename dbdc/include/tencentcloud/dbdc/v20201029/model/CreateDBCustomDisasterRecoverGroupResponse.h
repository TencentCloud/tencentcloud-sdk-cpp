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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_CREATEDBCUSTOMDISASTERRECOVERGROUPRESPONSE_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_CREATEDBCUSTOMDISASTERRECOVERGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * CreateDBCustomDisasterRecoverGroup返回参数结构体
                */
                class CreateDBCustomDisasterRecoverGroupResponse : public AbstractModel
                {
                public:
                    CreateDBCustomDisasterRecoverGroupResponse();
                    ~CreateDBCustomDisasterRecoverGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>置放群组ID</p>
                     * @return DisasterRecoverGroupId <p>置放群组ID</p>
                     * 
                     */
                    std::string GetDisasterRecoverGroupId() const;

                    /**
                     * 判断参数 DisasterRecoverGroupId 是否已赋值
                     * @return DisasterRecoverGroupId 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>置放群组名称</p>
                     * @return Name <p>置放群组名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>置放群组类型</p><p>枚举值：</p><ul><li>HOST： 物理机</li></ul>
                     * @return Type <p>置放群组类型</p><p>枚举值：</p><ul><li>HOST： 物理机</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>状态</p><p>枚举值：</p><ul><li>Creating： 创建中</li></ul>
                     * @return Status <p>状态</p><p>枚举值：</p><ul><li>Creating： 创建中</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>置放群组内可容纳的节点数量</p>
                     * @return NodeQuotaTotal <p>置放群组内可容纳的节点数量</p>
                     * 
                     */
                    int64_t GetNodeQuotaTotal() const;

                    /**
                     * 判断参数 NodeQuotaTotal 是否已赋值
                     * @return NodeQuotaTotal 是否已赋值
                     * 
                     */
                    bool NodeQuotaTotalHasBeenSet() const;

                    /**
                     * 获取<p>置放群组内已有节点数量</p>
                     * @return CurrentNum <p>置放群组内已有节点数量</p>
                     * 
                     */
                    int64_t GetCurrentNum() const;

                    /**
                     * 判断参数 CurrentNum 是否已赋值
                     * @return CurrentNum 是否已赋值
                     * 
                     */
                    bool CurrentNumHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreatedTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>置放群组策略</p><p>枚举值：</p><ul><li>SPREAD： 分散置放群组</li></ul>
                     * @return Strategy <p>置放群组策略</p><p>枚举值：</p><ul><li>SPREAD： 分散置放群组</li></ul>
                     * 
                     */
                    std::string GetStrategy() const;

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                private:

                    /**
                     * <p>置放群组ID</p>
                     */
                    std::string m_disasterRecoverGroupId;
                    bool m_disasterRecoverGroupIdHasBeenSet;

                    /**
                     * <p>置放群组名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>置放群组类型</p><p>枚举值：</p><ul><li>HOST： 物理机</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>状态</p><p>枚举值：</p><ul><li>Creating： 创建中</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>置放群组内可容纳的节点数量</p>
                     */
                    int64_t m_nodeQuotaTotal;
                    bool m_nodeQuotaTotalHasBeenSet;

                    /**
                     * <p>置放群组内已有节点数量</p>
                     */
                    int64_t m_currentNum;
                    bool m_currentNumHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>置放群组策略</p><p>枚举值：</p><ul><li>SPREAD： 分散置放群组</li></ul>
                     */
                    std::string m_strategy;
                    bool m_strategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_CREATEDBCUSTOMDISASTERRECOVERGROUPRESPONSE_H_

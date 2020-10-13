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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATRULEOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATRULEOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeNatRuleOverview返回参数结构体
                */
                class DescribeNatRuleOverviewResponse : public AbstractModel
                {
                public:
                    DescribeNatRuleOverviewResponse();
                    ~DescribeNatRuleOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取弹性IP列表
                     * @return EipList 弹性IP列表
                     */
                    std::vector<std::string> GetEipList() const;

                    /**
                     * 判断参数 EipList 是否已赋值
                     * @return EipList 是否已赋值
                     */
                    bool EipListHasBeenSet() const;

                    /**
                     * 获取端口转发规则数量
                     * @return DnatNum 端口转发规则数量
                     */
                    int64_t GetDnatNum() const;

                    /**
                     * 判断参数 DnatNum 是否已赋值
                     * @return DnatNum 是否已赋值
                     */
                    bool DnatNumHasBeenSet() const;

                    /**
                     * 获取访问控制规则总数
                     * @return TotalNum 访问控制规则总数
                     */
                    int64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取访问规则剩余条数
                     * @return RemainNum 访问规则剩余条数
                     */
                    int64_t GetRemainNum() const;

                    /**
                     * 判断参数 RemainNum 是否已赋值
                     * @return RemainNum 是否已赋值
                     */
                    bool RemainNumHasBeenSet() const;

                    /**
                     * 获取阻断规则条数
                     * @return BlockNum 阻断规则条数
                     */
                    int64_t GetBlockNum() const;

                    /**
                     * 判断参数 BlockNum 是否已赋值
                     * @return BlockNum 是否已赋值
                     */
                    bool BlockNumHasBeenSet() const;

                    /**
                     * 获取启用规则条数
                     * @return EnableNum 启用规则条数
                     */
                    int64_t GetEnableNum() const;

                    /**
                     * 判断参数 EnableNum 是否已赋值
                     * @return EnableNum 是否已赋值
                     */
                    bool EnableNumHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 弹性IP列表
                     */
                    std::vector<std::string> m_eipList;
                    bool m_eipListHasBeenSet;

                    /**
                     * 端口转发规则数量
                     */
                    int64_t m_dnatNum;
                    bool m_dnatNumHasBeenSet;

                    /**
                     * 访问控制规则总数
                     */
                    int64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * 访问规则剩余条数
                     */
                    int64_t m_remainNum;
                    bool m_remainNumHasBeenSet;

                    /**
                     * 阻断规则条数
                     */
                    int64_t m_blockNum;
                    bool m_blockNumHasBeenSet;

                    /**
                     * 启用规则条数
                     */
                    int64_t m_enableNum;
                    bool m_enableNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATRULEOVERVIEWRESPONSE_H_

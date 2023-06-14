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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListDimension.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeBindingPolicyObjectList请求参数结构体
                */
                class DescribeBindingPolicyObjectListRequest : public AbstractModel
                {
                public:
                    DescribeBindingPolicyObjectListRequest();
                    ~DescribeBindingPolicyObjectListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取固定值，为"monitor"
                     * @return Module 固定值，为"monitor"
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置固定值，为"monitor"
                     * @param _module 固定值，为"monitor"
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取策略组id，如果有形如 policy-xxxx 的 id，请填到 PolicyId 字段中，本字段填 0
                     * @return GroupId 策略组id，如果有形如 policy-xxxx 的 id，请填到 PolicyId 字段中，本字段填 0
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置策略组id，如果有形如 policy-xxxx 的 id，请填到 PolicyId 字段中，本字段填 0
                     * @param _groupId 策略组id，如果有形如 policy-xxxx 的 id，请填到 PolicyId 字段中，本字段填 0
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取告警策略id，形如 policy-xxxx，如果填入，则GroupId可以填0
                     * @return PolicyId 告警策略id，形如 policy-xxxx，如果填入，则GroupId可以填0
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置告警策略id，形如 policy-xxxx，如果填入，则GroupId可以填0
                     * @param _policyId 告警策略id，形如 policy-xxxx，如果填入，则GroupId可以填0
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取每次返回的数量，取值1~100，默认20
                     * @return Limit 每次返回的数量，取值1~100，默认20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每次返回的数量，取值1~100，默认20
                     * @param _limit 每次返回的数量，取值1~100，默认20
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，从0开始计数，默认0。举例来说，参数 Offset=0&Limit=20 返回第 0 到 19 项，Offset=20&Limit=20 返回第 20 到 39 项，以此类推
                     * @return Offset 偏移量，从0开始计数，默认0。举例来说，参数 Offset=0&Limit=20 返回第 0 到 19 项，Offset=20&Limit=20 返回第 20 到 39 项，以此类推
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，从0开始计数，默认0。举例来说，参数 Offset=0&Limit=20 返回第 0 到 19 项，Offset=20&Limit=20 返回第 20 到 39 项，以此类推
                     * @param _offset 偏移量，从0开始计数，默认0。举例来说，参数 Offset=0&Limit=20 返回第 0 到 19 项，Offset=20&Limit=20 返回第 20 到 39 项，以此类推
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取筛选对象的维度信息
                     * @return Dimensions 筛选对象的维度信息
                     * 
                     */
                    std::vector<DescribeBindingPolicyObjectListDimension> GetDimensions() const;

                    /**
                     * 设置筛选对象的维度信息
                     * @param _dimensions 筛选对象的维度信息
                     * 
                     */
                    void SetDimensions(const std::vector<DescribeBindingPolicyObjectListDimension>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                private:

                    /**
                     * 固定值，为"monitor"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 策略组id，如果有形如 policy-xxxx 的 id，请填到 PolicyId 字段中，本字段填 0
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 告警策略id，形如 policy-xxxx，如果填入，则GroupId可以填0
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 每次返回的数量，取值1~100，默认20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，从0开始计数，默认0。举例来说，参数 Offset=0&Limit=20 返回第 0 到 19 项，Offset=20&Limit=20 返回第 20 到 39 项，以此类推
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 筛选对象的维度信息
                     */
                    std::vector<DescribeBindingPolicyObjectListDimension> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTREQUEST_H_

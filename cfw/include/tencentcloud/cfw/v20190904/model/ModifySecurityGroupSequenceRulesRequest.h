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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSECURITYGROUPSEQUENCERULESREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSECURITYGROUPSEQUENCERULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/SecurityGroupOrderIndexData.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifySecurityGroupSequenceRules请求参数结构体
                */
                class ModifySecurityGroupSequenceRulesRequest : public AbstractModel
                {
                public:
                    ModifySecurityGroupSequenceRulesRequest();
                    ~ModifySecurityGroupSequenceRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取方向，0：出站，1：入站，默认1
                     * @return Direction 方向，0：出站，1：入站，默认1
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置方向，0：出站，1：入站，默认1
                     * @param _direction 方向，0：出站，1：入站，默认1
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取企业安全组规则快速排序数据
                     * @return Data 企业安全组规则快速排序数据
                     * 
                     */
                    std::vector<SecurityGroupOrderIndexData> GetData() const;

                    /**
                     * 设置企业安全组规则快速排序数据
                     * @param _data 企业安全组规则快速排序数据
                     * 
                     */
                    void SetData(const std::vector<SecurityGroupOrderIndexData>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 方向，0：出站，1：入站，默认1
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 企业安全组规则快速排序数据
                     */
                    std::vector<SecurityGroupOrderIndexData> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSECURITYGROUPSEQUENCERULESREQUEST_H_

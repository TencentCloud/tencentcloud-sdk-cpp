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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATESECURITYGROUPRULESREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATESECURITYGROUPRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/SecurityGroupListData.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * CreateSecurityGroupRules请求参数结构体
                */
                class CreateSecurityGroupRulesRequest : public AbstractModel
                {
                public:
                    CreateSecurityGroupRulesRequest();
                    ~CreateSecurityGroupRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取添加的企业安全组规则数据
                     * @return Data 添加的企业安全组规则数据
                     * 
                     */
                    std::vector<SecurityGroupListData> GetData() const;

                    /**
                     * 设置添加的企业安全组规则数据
                     * @param _data 添加的企业安全组规则数据
                     * 
                     */
                    void SetData(const std::vector<SecurityGroupListData>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

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
                     * 获取0：后插，1：前插，2：中插，默认0
                     * @return Type 0：后插，1：前插，2：中插，默认0
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置0：后插，1：前插，2：中插，默认0
                     * @param _type 0：后插，1：前插，2：中插，默认0
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取添加后是否启用规则，0：不启用，1：启用，默认1
                     * @return Enable 添加后是否启用规则，0：不启用，1：启用，默认1
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置添加后是否启用规则，0：不启用，1：启用，默认1
                     * @param _enable 添加后是否启用规则，0：不启用，1：启用，默认1
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * 添加的企业安全组规则数据
                     */
                    std::vector<SecurityGroupListData> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 方向，0：出站，1：入站，默认1
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 0：后插，1：前插，2：中插，默认0
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 添加后是否启用规则，0：不启用，1：启用，默认1
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATESECURITYGROUPRULESREQUEST_H_

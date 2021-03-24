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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATESECURITYGROUPAPIRULESREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATESECURITYGROUPAPIRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/SecurityGroupApiRuleData.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * CreateSecurityGroupApiRules请求参数结构体
                */
                class CreateSecurityGroupApiRulesRequest : public AbstractModel
                {
                public:
                    CreateSecurityGroupApiRulesRequest();
                    ~CreateSecurityGroupApiRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取创建规则数据
                     * @return Data 创建规则数据
                     */
                    std::vector<SecurityGroupApiRuleData> GetData() const;

                    /**
                     * 设置创建规则数据
                     * @param Data 创建规则数据
                     */
                    void SetData(const std::vector<SecurityGroupApiRuleData>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取方向，0：出站，1：入站
                     * @return Direction 方向，0：出站，1：入站
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置方向，0：出站，1：入站
                     * @param Direction 方向，0：出站，1：入站
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取插入类型，0：后插，1：前插，2：中插
                     * @return Type 插入类型，0：后插，1：前插，2：中插
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置插入类型，0：后插，1：前插，2：中插
                     * @param Type 插入类型，0：后插，1：前插，2：中插
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取腾讯云地域的英文简写
                     * @return Area 腾讯云地域的英文简写
                     */
                    std::string GetArea() const;

                    /**
                     * 设置腾讯云地域的英文简写
                     * @param Area 腾讯云地域的英文简写
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * 创建规则数据
                     */
                    std::vector<SecurityGroupApiRuleData> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 方向，0：出站，1：入站
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 插入类型，0：后插，1：前插，2：中插
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 腾讯云地域的英文简写
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATESECURITYGROUPAPIRULESREQUEST_H_

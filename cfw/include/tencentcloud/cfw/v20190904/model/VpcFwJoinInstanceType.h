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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_VPCFWJOININSTANCETYPE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_VPCFWJOININSTANCETYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * VPC防火墙接入的网络实例类型及数量
                */
                class VpcFwJoinInstanceType : public AbstractModel
                {
                public:
                    VpcFwJoinInstanceType();
                    ~VpcFwJoinInstanceType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取接入实例类型，VPC、DIRECTCONNECT、 VPNGW 等
                     * @return JoinType 接入实例类型，VPC、DIRECTCONNECT、 VPNGW 等
                     * 
                     */
                    std::string GetJoinType() const;

                    /**
                     * 设置接入实例类型，VPC、DIRECTCONNECT、 VPNGW 等
                     * @param _joinType 接入实例类型，VPC、DIRECTCONNECT、 VPNGW 等
                     * 
                     */
                    void SetJoinType(const std::string& _joinType);

                    /**
                     * 判断参数 JoinType 是否已赋值
                     * @return JoinType 是否已赋值
                     * 
                     */
                    bool JoinTypeHasBeenSet() const;

                    /**
                     * 获取接入的对应网络实例类型的数量
                     * @return Num 接入的对应网络实例类型的数量
                     * 
                     */
                    int64_t GetNum() const;

                    /**
                     * 设置接入的对应网络实例类型的数量
                     * @param _num 接入的对应网络实例类型的数量
                     * 
                     */
                    void SetNum(const int64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                private:

                    /**
                     * 接入实例类型，VPC、DIRECTCONNECT、 VPNGW 等
                     */
                    std::string m_joinType;
                    bool m_joinTypeHasBeenSet;

                    /**
                     * 接入的对应网络实例类型的数量
                     */
                    int64_t m_num;
                    bool m_numHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_VPCFWJOININSTANCETYPE_H_

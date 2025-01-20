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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTETABLEINPUTPOLICYS_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTETABLEINPUTPOLICYS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/CcnRouteTableInputPolicy.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 云联网路由接收策略列表
                */
                class CcnRouteTableInputPolicys : public AbstractModel
                {
                public:
                    CcnRouteTableInputPolicys();
                    ~CcnRouteTableInputPolicys() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略列表。
                     * @return Policys 策略列表。
                     * 
                     */
                    std::vector<CcnRouteTableInputPolicy> GetPolicys() const;

                    /**
                     * 设置策略列表。
                     * @param _policys 策略列表。
                     * 
                     */
                    void SetPolicys(const std::vector<CcnRouteTableInputPolicy>& _policys);

                    /**
                     * 判断参数 Policys 是否已赋值
                     * @return Policys 是否已赋值
                     * 
                     */
                    bool PolicysHasBeenSet() const;

                    /**
                     * 获取版本号。
                     * @return PolicyVersion 版本号。
                     * 
                     */
                    uint64_t GetPolicyVersion() const;

                    /**
                     * 设置版本号。
                     * @param _policyVersion 版本号。
                     * 
                     */
                    void SetPolicyVersion(const uint64_t& _policyVersion);

                    /**
                     * 判断参数 PolicyVersion 是否已赋值
                     * @return PolicyVersion 是否已赋值
                     * 
                     */
                    bool PolicyVersionHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 策略列表。
                     */
                    std::vector<CcnRouteTableInputPolicy> m_policys;
                    bool m_policysHasBeenSet;

                    /**
                     * 版本号。
                     */
                    uint64_t m_policyVersion;
                    bool m_policyVersionHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTETABLEINPUTPOLICYS_H_

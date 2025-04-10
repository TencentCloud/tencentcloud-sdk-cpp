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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_SOURCEINSTANCEVPCINFO_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_SOURCEINSTANCEVPCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 微服务引擎实例的VPC信息
                */
                class SourceInstanceVpcInfo : public AbstractModel
                {
                public:
                    SourceInstanceVpcInfo();
                    ~SourceInstanceVpcInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取微服务引擎VPC信息
                     * @return VpcID 微服务引擎VPC信息
                     * 
                     */
                    std::string GetVpcID() const;

                    /**
                     * 设置微服务引擎VPC信息
                     * @param _vpcID 微服务引擎VPC信息
                     * 
                     */
                    void SetVpcID(const std::string& _vpcID);

                    /**
                     * 判断参数 VpcID 是否已赋值
                     * @return VpcID 是否已赋值
                     * 
                     */
                    bool VpcIDHasBeenSet() const;

                    /**
                     * 获取微服务引擎子网信息
                     * @return SubnetID 微服务引擎子网信息
                     * 
                     */
                    std::string GetSubnetID() const;

                    /**
                     * 设置微服务引擎子网信息
                     * @param _subnetID 微服务引擎子网信息
                     * 
                     */
                    void SetSubnetID(const std::string& _subnetID);

                    /**
                     * 判断参数 SubnetID 是否已赋值
                     * @return SubnetID 是否已赋值
                     * 
                     */
                    bool SubnetIDHasBeenSet() const;

                private:

                    /**
                     * 微服务引擎VPC信息
                     */
                    std::string m_vpcID;
                    bool m_vpcIDHasBeenSet;

                    /**
                     * 微服务引擎子网信息
                     */
                    std::string m_subnetID;
                    bool m_subnetIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_SOURCEINSTANCEVPCINFO_H_

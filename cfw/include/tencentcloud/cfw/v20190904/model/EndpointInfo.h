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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_ENDPOINTINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_ENDPOINTINFO_H_

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
                * 私有连接端点信息
                */
                class EndpointInfo : public AbstractModel
                {
                public:
                    EndpointInfo();
                    ~EndpointInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取引流私有连接端点id
                     * @return EndpointId 引流私有连接端点id
                     * 
                     */
                    std::string GetEndpointId() const;

                    /**
                     * 设置引流私有连接端点id
                     * @param _endpointId 引流私有连接端点id
                     * 
                     */
                    void SetEndpointId(const std::string& _endpointId);

                    /**
                     * 判断参数 EndpointId 是否已赋值
                     * @return EndpointId 是否已赋值
                     * 
                     */
                    bool EndpointIdHasBeenSet() const;

                    /**
                     * 获取引流VpcId
                     * @return VpcId 引流VpcId
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置引流VpcId
                     * @param _vpcId 引流VpcId
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取所属地域
                     * @return Region 所属地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置所属地域
                     * @param _region 所属地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取引流Vpc的Cidr
                     * @return VpcCidr 引流Vpc的Cidr
                     * 
                     */
                    std::string GetVpcCidr() const;

                    /**
                     * 设置引流Vpc的Cidr
                     * @param _vpcCidr 引流Vpc的Cidr
                     * 
                     */
                    void SetVpcCidr(const std::string& _vpcCidr);

                    /**
                     * 判断参数 VpcCidr 是否已赋值
                     * @return VpcCidr 是否已赋值
                     * 
                     */
                    bool VpcCidrHasBeenSet() const;

                private:

                    /**
                     * 引流私有连接端点id
                     */
                    std::string m_endpointId;
                    bool m_endpointIdHasBeenSet;

                    /**
                     * 引流VpcId
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 所属地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 引流Vpc的Cidr
                     */
                    std::string m_vpcCidr;
                    bool m_vpcCidrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ENDPOINTINFO_H_

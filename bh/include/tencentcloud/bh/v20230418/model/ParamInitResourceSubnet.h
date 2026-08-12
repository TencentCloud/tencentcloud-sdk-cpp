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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_PARAMINITRESOURCESUBNET_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_PARAMINITRESOURCESUBNET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 开通堡垒机的子网
                */
                class ParamInitResourceSubnet : public AbstractModel
                {
                public:
                    ParamInitResourceSubnet();
                    ~ParamInitResourceSubnet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>xa0子网id</p>
                     * @return SubnetId <p>xa0子网id</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>xa0子网id</p>
                     * @param _subnetId <p>xa0子网id</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>子网名称</p>
                     * @return SubnetName <p>子网名称</p>
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置<p>子网名称</p>
                     * @param _subnetName <p>子网名称</p>
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取<p>子网可用区</p>
                     * @return Zone <p>子网可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>子网可用区</p>
                     * @param _zone <p>子网可用区</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>子网cidr</p>
                     * @return SubnetCidrBlock <p>子网cidr</p>
                     * 
                     */
                    std::string GetSubnetCidrBlock() const;

                    /**
                     * 设置<p>子网cidr</p>
                     * @param _subnetCidrBlock <p>子网cidr</p>
                     * 
                     */
                    void SetSubnetCidrBlock(const std::string& _subnetCidrBlock);

                    /**
                     * 判断参数 SubnetCidrBlock 是否已赋值
                     * @return SubnetCidrBlock 是否已赋值
                     * 
                     */
                    bool SubnetCidrBlockHasBeenSet() const;

                private:

                    /**
                     * <p>xa0子网id</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>子网名称</p>
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * <p>子网可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>子网cidr</p>
                     */
                    std::string m_subnetCidrBlock;
                    bool m_subnetCidrBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_PARAMINITRESOURCESUBNET_H_

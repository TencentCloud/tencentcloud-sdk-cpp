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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEDISASTERRECOVERYVPCMAPPINGREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEDISASTERRECOVERYVPCMAPPINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * CreateDisasterRecoveryVpcMapping请求参数结构体
                */
                class CreateDisasterRecoveryVpcMappingRequest : public AbstractModel
                {
                public:
                    CreateDisasterRecoveryVpcMappingRequest();
                    ~CreateDisasterRecoveryVpcMappingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源端VPC ID
                     * @return SourceVpcId 源端VPC ID
                     * 
                     */
                    std::string GetSourceVpcId() const;

                    /**
                     * 设置源端VPC ID
                     * @param _sourceVpcId 源端VPC ID
                     * 
                     */
                    void SetSourceVpcId(const std::string& _sourceVpcId);

                    /**
                     * 判断参数 SourceVpcId 是否已赋值
                     * @return SourceVpcId 是否已赋值
                     * 
                     */
                    bool SourceVpcIdHasBeenSet() const;

                    /**
                     * 获取源端子网ID
                     * @return SourceSubnetId 源端子网ID
                     * 
                     */
                    std::string GetSourceSubnetId() const;

                    /**
                     * 设置源端子网ID
                     * @param _sourceSubnetId 源端子网ID
                     * 
                     */
                    void SetSourceSubnetId(const std::string& _sourceSubnetId);

                    /**
                     * 判断参数 SourceSubnetId 是否已赋值
                     * @return SourceSubnetId 是否已赋值
                     * 
                     */
                    bool SourceSubnetIdHasBeenSet() const;

                    /**
                     * 获取目标端VPC ID
                     * @return TargetVpcId 目标端VPC ID
                     * 
                     */
                    std::string GetTargetVpcId() const;

                    /**
                     * 设置目标端VPC ID
                     * @param _targetVpcId 目标端VPC ID
                     * 
                     */
                    void SetTargetVpcId(const std::string& _targetVpcId);

                    /**
                     * 判断参数 TargetVpcId 是否已赋值
                     * @return TargetVpcId 是否已赋值
                     * 
                     */
                    bool TargetVpcIdHasBeenSet() const;

                    /**
                     * 获取目标端子网ID
                     * @return TargetSubnetId 目标端子网ID
                     * 
                     */
                    std::string GetTargetSubnetId() const;

                    /**
                     * 设置目标端子网ID
                     * @param _targetSubnetId 目标端子网ID
                     * 
                     */
                    void SetTargetSubnetId(const std::string& _targetSubnetId);

                    /**
                     * 判断参数 TargetSubnetId 是否已赋值
                     * @return TargetSubnetId 是否已赋值
                     * 
                     */
                    bool TargetSubnetIdHasBeenSet() const;

                    /**
                     * 获取站点对ID
                     * @return SitePairId 站点对ID
                     * 
                     */
                    std::string GetSitePairId() const;

                    /**
                     * 设置站点对ID
                     * @param _sitePairId 站点对ID
                     * 
                     */
                    void SetSitePairId(const std::string& _sitePairId);

                    /**
                     * 判断参数 SitePairId 是否已赋值
                     * @return SitePairId 是否已赋值
                     * 
                     */
                    bool SitePairIdHasBeenSet() const;

                private:

                    /**
                     * 源端VPC ID
                     */
                    std::string m_sourceVpcId;
                    bool m_sourceVpcIdHasBeenSet;

                    /**
                     * 源端子网ID
                     */
                    std::string m_sourceSubnetId;
                    bool m_sourceSubnetIdHasBeenSet;

                    /**
                     * 目标端VPC ID
                     */
                    std::string m_targetVpcId;
                    bool m_targetVpcIdHasBeenSet;

                    /**
                     * 目标端子网ID
                     */
                    std::string m_targetSubnetId;
                    bool m_targetSubnetIdHasBeenSet;

                    /**
                     * 站点对ID
                     */
                    std::string m_sitePairId;
                    bool m_sitePairIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEDISASTERRECOVERYVPCMAPPINGREQUEST_H_

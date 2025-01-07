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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEUSERSAMLCONFIGRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEUSERSAMLCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * DescribeUserSAMLConfig返回参数结构体
                */
                class DescribeUserSAMLConfigResponse : public AbstractModel
                {
                public:
                    DescribeUserSAMLConfigResponse();
                    ~DescribeUserSAMLConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取SAML元数据文档
                     * @return SAMLMetadata SAML元数据文档
                     * 
                     */
                    std::string GetSAMLMetadata() const;

                    /**
                     * 判断参数 SAMLMetadata 是否已赋值
                     * @return SAMLMetadata 是否已赋值
                     * 
                     */
                    bool SAMLMetadataHasBeenSet() const;

                    /**
                     * 获取状态：0:未设置，11:已开启，2:已禁用
                     * @return Status 状态：0:未设置，11:已开启，2:已禁用
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取辅助域名
                     * @return AuxiliaryDomain 辅助域名
                     * 
                     */
                    std::string GetAuxiliaryDomain() const;

                    /**
                     * 判断参数 AuxiliaryDomain 是否已赋值
                     * @return AuxiliaryDomain 是否已赋值
                     * 
                     */
                    bool AuxiliaryDomainHasBeenSet() const;

                private:

                    /**
                     * SAML元数据文档
                     */
                    std::string m_sAMLMetadata;
                    bool m_sAMLMetadataHasBeenSet;

                    /**
                     * 状态：0:未设置，11:已开启，2:已禁用
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 辅助域名
                     */
                    std::string m_auxiliaryDomain;
                    bool m_auxiliaryDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEUSERSAMLCONFIGRESPONSE_H_

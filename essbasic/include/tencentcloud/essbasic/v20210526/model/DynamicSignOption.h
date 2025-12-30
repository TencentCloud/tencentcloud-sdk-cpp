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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DYNAMICSIGNOPTION_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DYNAMICSIGNOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 动态签署领取链接配置，当全部签署方均为动态签署方时生效。
                */
                class DynamicSignOption : public AbstractModel
                {
                public:
                    DynamicSignOption();
                    ~DynamicSignOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取多份合同批量签署时，动态签署领取要求：<ul><li><b>0（默认值）</b>: 可以领取部分合同进入签署。</li><li><b>1 </b>: 必须全部领取进入签署，生成链接的所有合同必须相同经办人完成合同的领取签署。</li></ul>
                     * @return DynamicReceiveType 多份合同批量签署时，动态签署领取要求：<ul><li><b>0（默认值）</b>: 可以领取部分合同进入签署。</li><li><b>1 </b>: 必须全部领取进入签署，生成链接的所有合同必须相同经办人完成合同的领取签署。</li></ul>
                     * 
                     */
                    uint64_t GetDynamicReceiveType() const;

                    /**
                     * 设置多份合同批量签署时，动态签署领取要求：<ul><li><b>0（默认值）</b>: 可以领取部分合同进入签署。</li><li><b>1 </b>: 必须全部领取进入签署，生成链接的所有合同必须相同经办人完成合同的领取签署。</li></ul>
                     * @param _dynamicReceiveType 多份合同批量签署时，动态签署领取要求：<ul><li><b>0（默认值）</b>: 可以领取部分合同进入签署。</li><li><b>1 </b>: 必须全部领取进入签署，生成链接的所有合同必须相同经办人完成合同的领取签署。</li></ul>
                     * 
                     */
                    void SetDynamicReceiveType(const uint64_t& _dynamicReceiveType);

                    /**
                     * 判断参数 DynamicReceiveType 是否已赋值
                     * @return DynamicReceiveType 是否已赋值
                     * 
                     */
                    bool DynamicReceiveTypeHasBeenSet() const;

                    /**
                     * 获取动态签署方时，预设的企业OpenId，预设企业OpenId后，只允许对应的企业员工进行领取签署。
                     * @return OrganizationOpenId 动态签署方时，预设的企业OpenId，预设企业OpenId后，只允许对应的企业员工进行领取签署。
                     * 
                     */
                    std::string GetOrganizationOpenId() const;

                    /**
                     * 设置动态签署方时，预设的企业OpenId，预设企业OpenId后，只允许对应的企业员工进行领取签署。
                     * @param _organizationOpenId 动态签署方时，预设的企业OpenId，预设企业OpenId后，只允许对应的企业员工进行领取签署。
                     * 
                     */
                    void SetOrganizationOpenId(const std::string& _organizationOpenId);

                    /**
                     * 判断参数 OrganizationOpenId 是否已赋值
                     * @return OrganizationOpenId 是否已赋值
                     * 
                     */
                    bool OrganizationOpenIdHasBeenSet() const;

                private:

                    /**
                     * 多份合同批量签署时，动态签署领取要求：<ul><li><b>0（默认值）</b>: 可以领取部分合同进入签署。</li><li><b>1 </b>: 必须全部领取进入签署，生成链接的所有合同必须相同经办人完成合同的领取签署。</li></ul>
                     */
                    uint64_t m_dynamicReceiveType;
                    bool m_dynamicReceiveTypeHasBeenSet;

                    /**
                     * 动态签署方时，预设的企业OpenId，预设企业OpenId后，只允许对应的企业员工进行领取签署。
                     */
                    std::string m_organizationOpenId;
                    bool m_organizationOpenIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DYNAMICSIGNOPTION_H_

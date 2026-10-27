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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_IPCONTROLDETAIL_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_IPCONTROLDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * IP控制策略详情
                */
                class IpControlDetail : public AbstractModel
                {
                public:
                    IpControlDetail();
                    ~IpControlDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>配置的IP。支持单IP和CIDR，暂不支持IP范围</p>
                     * @return Ip <p>配置的IP。支持单IP和CIDR，暂不支持IP范围</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>配置的IP。支持单IP和CIDR，暂不支持IP范围</p>
                     * @param _ip <p>配置的IP。支持单IP和CIDR，暂不支持IP范围</p>
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取<p>IP的描述</p>
                     * @return Description <p>IP的描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>IP的描述</p>
                     * @param _description <p>IP的描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>配置的IP。支持单IP和CIDR，暂不支持IP范围</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>IP的描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_IPCONTROLDETAIL_H_

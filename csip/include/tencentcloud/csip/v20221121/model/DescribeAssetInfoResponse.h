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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETINFORESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/FieldConfig.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAssetInfo返回参数结构体
                */
                class DescribeAssetInfoResponse : public AbstractModel
                {
                public:
                    DescribeAssetInfoResponse();
                    ~DescribeAssetInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取基本信息
                     * @return Basic 基本信息
                     * 
                     */
                    std::vector<FieldConfig> GetBasic() const;

                    /**
                     * 判断参数 Basic 是否已赋值
                     * @return Basic 是否已赋值
                     * 
                     */
                    bool BasicHasBeenSet() const;

                    /**
                     * 获取网络信息
                     * @return Network 网络信息
                     * 
                     */
                    std::vector<FieldConfig> GetNetwork() const;

                    /**
                     * 判断参数 Network 是否已赋值
                     * @return Network 是否已赋值
                     * 
                     */
                    bool NetworkHasBeenSet() const;

                    /**
                     * 获取防护信息
                     * @return Protection 防护信息
                     * 
                     */
                    std::vector<FieldConfig> GetProtection() const;

                    /**
                     * 判断参数 Protection 是否已赋值
                     * @return Protection 是否已赋值
                     * 
                     */
                    bool ProtectionHasBeenSet() const;

                private:

                    /**
                     * 基本信息
                     */
                    std::vector<FieldConfig> m_basic;
                    bool m_basicHasBeenSet;

                    /**
                     * 网络信息
                     */
                    std::vector<FieldConfig> m_network;
                    bool m_networkHasBeenSet;

                    /**
                     * 防护信息
                     */
                    std::vector<FieldConfig> m_protection;
                    bool m_protectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETINFORESPONSE_H_

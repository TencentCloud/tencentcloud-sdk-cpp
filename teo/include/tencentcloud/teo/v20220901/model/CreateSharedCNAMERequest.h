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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATESHAREDCNAMEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATESHAREDCNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateSharedCNAME请求参数结构体
                */
                class CreateSharedCNAMERequest : public AbstractModel
                {
                public:
                    CreateSharedCNAMERequest();
                    ~CreateSharedCNAMERequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取共享 CNAME 所属站点的 ID。	
                     * @return ZoneId 共享 CNAME 所属站点的 ID。	
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置共享 CNAME 所属站点的 ID。	
                     * @param _zoneId 共享 CNAME 所属站点的 ID。	
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取共享 CNAME 前缀。请输入合法的域名前缀，例如"test-api"、"test-api.com"，限制输入 50 个字符。

共享 CNAME 完整格式为：`<自定义前缀>+<zoneid中的12位随机字符串>+share.dnse[0-5].com`。

例如前缀传入 example.com，EO 会为您创建共享 CNAME：example.com.sai2ig51kaa5.share.dnse2.com。
                     * @return SharedCNAMEPrefix 共享 CNAME 前缀。请输入合法的域名前缀，例如"test-api"、"test-api.com"，限制输入 50 个字符。

共享 CNAME 完整格式为：`<自定义前缀>+<zoneid中的12位随机字符串>+share.dnse[0-5].com`。

例如前缀传入 example.com，EO 会为您创建共享 CNAME：example.com.sai2ig51kaa5.share.dnse2.com。
                     * 
                     */
                    std::string GetSharedCNAMEPrefix() const;

                    /**
                     * 设置共享 CNAME 前缀。请输入合法的域名前缀，例如"test-api"、"test-api.com"，限制输入 50 个字符。

共享 CNAME 完整格式为：`<自定义前缀>+<zoneid中的12位随机字符串>+share.dnse[0-5].com`。

例如前缀传入 example.com，EO 会为您创建共享 CNAME：example.com.sai2ig51kaa5.share.dnse2.com。
                     * @param _sharedCNAMEPrefix 共享 CNAME 前缀。请输入合法的域名前缀，例如"test-api"、"test-api.com"，限制输入 50 个字符。

共享 CNAME 完整格式为：`<自定义前缀>+<zoneid中的12位随机字符串>+share.dnse[0-5].com`。

例如前缀传入 example.com，EO 会为您创建共享 CNAME：example.com.sai2ig51kaa5.share.dnse2.com。
                     * 
                     */
                    void SetSharedCNAMEPrefix(const std::string& _sharedCNAMEPrefix);

                    /**
                     * 判断参数 SharedCNAMEPrefix 是否已赋值
                     * @return SharedCNAMEPrefix 是否已赋值
                     * 
                     */
                    bool SharedCNAMEPrefixHasBeenSet() const;

                    /**
                     * 获取描述。可输入 1-50 个任意字符。
                     * @return Description 描述。可输入 1-50 个任意字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述。可输入 1-50 个任意字符。
                     * @param _description 描述。可输入 1-50 个任意字符。
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
                     * 共享 CNAME 所属站点的 ID。	
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 共享 CNAME 前缀。请输入合法的域名前缀，例如"test-api"、"test-api.com"，限制输入 50 个字符。

共享 CNAME 完整格式为：`<自定义前缀>+<zoneid中的12位随机字符串>+share.dnse[0-5].com`。

例如前缀传入 example.com，EO 会为您创建共享 CNAME：example.com.sai2ig51kaa5.share.dnse2.com。
                     */
                    std::string m_sharedCNAMEPrefix;
                    bool m_sharedCNAMEPrefixHasBeenSet;

                    /**
                     * 描述。可输入 1-50 个任意字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATESHAREDCNAMEREQUEST_H_

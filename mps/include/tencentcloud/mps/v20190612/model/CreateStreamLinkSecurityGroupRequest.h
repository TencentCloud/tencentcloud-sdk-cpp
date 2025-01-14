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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATESTREAMLINKSECURITYGROUPREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATESTREAMLINKSECURITYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateStreamLinkSecurityGroup请求参数结构体
                */
                class CreateStreamLinkSecurityGroupRequest : public AbstractModel
                {
                public:
                    CreateStreamLinkSecurityGroupRequest();
                    ~CreateStreamLinkSecurityGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安全组名称，限制大小写、数字和下划线，Region下唯一。
                     * @return Name 安全组名称，限制大小写、数字和下划线，Region下唯一。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置安全组名称，限制大小写、数字和下划线，Region下唯一。
                     * @param _name 安全组名称，限制大小写、数字和下划线，Region下唯一。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取白名单列表，数量限制[1, 10]。
                     * @return Whitelist 白名单列表，数量限制[1, 10]。
                     * 
                     */
                    std::vector<std::string> GetWhitelist() const;

                    /**
                     * 设置白名单列表，数量限制[1, 10]。
                     * @param _whitelist 白名单列表，数量限制[1, 10]。
                     * 
                     */
                    void SetWhitelist(const std::vector<std::string>& _whitelist);

                    /**
                     * 判断参数 Whitelist 是否已赋值
                     * @return Whitelist 是否已赋值
                     * 
                     */
                    bool WhitelistHasBeenSet() const;

                private:

                    /**
                     * 安全组名称，限制大小写、数字和下划线，Region下唯一。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 白名单列表，数量限制[1, 10]。
                     */
                    std::vector<std::string> m_whitelist;
                    bool m_whitelistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATESTREAMLINKSECURITYGROUPREQUEST_H_

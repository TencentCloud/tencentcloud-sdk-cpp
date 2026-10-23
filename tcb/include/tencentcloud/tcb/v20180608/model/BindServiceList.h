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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_BINDSERVICELIST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_BINDSERVICELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/BindService.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 密钥对绑定的mcp服务列表和apis服务列表
                */
                class BindServiceList : public AbstractModel
                {
                public:
                    BindServiceList();
                    ~BindServiceList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取密钥对绑定的mcp服务列表
                     * @return Mcp 密钥对绑定的mcp服务列表
                     * 
                     */
                    std::vector<BindService> GetMcp() const;

                    /**
                     * 设置密钥对绑定的mcp服务列表
                     * @param _mcp 密钥对绑定的mcp服务列表
                     * 
                     */
                    void SetMcp(const std::vector<BindService>& _mcp);

                    /**
                     * 判断参数 Mcp 是否已赋值
                     * @return Mcp 是否已赋值
                     * 
                     */
                    bool McpHasBeenSet() const;

                    /**
                     * 获取密钥对绑定的apis服务列表
                     * @return Apis 密钥对绑定的apis服务列表
                     * 
                     */
                    std::vector<BindService> GetApis() const;

                    /**
                     * 设置密钥对绑定的apis服务列表
                     * @param _apis 密钥对绑定的apis服务列表
                     * 
                     */
                    void SetApis(const std::vector<BindService>& _apis);

                    /**
                     * 判断参数 Apis 是否已赋值
                     * @return Apis 是否已赋值
                     * 
                     */
                    bool ApisHasBeenSet() const;

                    /**
                     * 获取登记哪个资源下的哪个场景使用了密钥对
                     * @return Other 登记哪个资源下的哪个场景使用了密钥对
                     * 
                     */
                    std::vector<BindService> GetOther() const;

                    /**
                     * 设置登记哪个资源下的哪个场景使用了密钥对
                     * @param _other 登记哪个资源下的哪个场景使用了密钥对
                     * 
                     */
                    void SetOther(const std::vector<BindService>& _other);

                    /**
                     * 判断参数 Other 是否已赋值
                     * @return Other 是否已赋值
                     * 
                     */
                    bool OtherHasBeenSet() const;

                private:

                    /**
                     * 密钥对绑定的mcp服务列表
                     */
                    std::vector<BindService> m_mcp;
                    bool m_mcpHasBeenSet;

                    /**
                     * 密钥对绑定的apis服务列表
                     */
                    std::vector<BindService> m_apis;
                    bool m_apisHasBeenSet;

                    /**
                     * 登记哪个资源下的哪个场景使用了密钥对
                     */
                    std::vector<BindService> m_other;
                    bool m_otherHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_BINDSERVICELIST_H_

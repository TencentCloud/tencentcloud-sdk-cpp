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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYENVACCESSCONTROLRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYENVACCESSCONTROLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/AccessSourceSetting.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * ModifyEnvAccessControl返回参数结构体
                */
                class ModifyEnvAccessControlResponse : public AbstractModel
                {
                public:
                    ModifyEnvAccessControlResponse();
                    ~ModifyEnvAccessControlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>本次请求影响的权限数量</p>
                     * @return AffectedRows <p>本次请求影响的权限数量</p>
                     * 
                     */
                    int64_t GetAffectedRows() const;

                    /**
                     * 判断参数 AffectedRows 是否已赋值
                     * @return AffectedRows 是否已赋值
                     * 
                     */
                    bool AffectedRowsHasBeenSet() const;

                    /**
                     * 获取<p>修改之后，当前的生效的配置</p><p>SourceType = PUBLIC 表示公网链路访问配置<br>SourceType = VPC 表示 VPC 链路访问配置<br>SourceType = WOA 表示办公网链路访问配置</p>
                     * @return Current <p>修改之后，当前的生效的配置</p><p>SourceType = PUBLIC 表示公网链路访问配置<br>SourceType = VPC 表示 VPC 链路访问配置<br>SourceType = WOA 表示办公网链路访问配置</p>
                     * 
                     */
                    std::vector<AccessSourceSetting> GetCurrent() const;

                    /**
                     * 判断参数 Current 是否已赋值
                     * @return Current 是否已赋值
                     * 
                     */
                    bool CurrentHasBeenSet() const;

                private:

                    /**
                     * <p>本次请求影响的权限数量</p>
                     */
                    int64_t m_affectedRows;
                    bool m_affectedRowsHasBeenSet;

                    /**
                     * <p>修改之后，当前的生效的配置</p><p>SourceType = PUBLIC 表示公网链路访问配置<br>SourceType = VPC 表示 VPC 链路访问配置<br>SourceType = WOA 表示办公网链路访问配置</p>
                     */
                    std::vector<AccessSourceSetting> m_current;
                    bool m_currentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYENVACCESSCONTROLRESPONSE_H_

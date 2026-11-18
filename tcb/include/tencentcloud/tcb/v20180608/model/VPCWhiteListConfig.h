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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_VPCWHITELISTCONFIG_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_VPCWHITELISTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/VPCInfo.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * VPC 白名单列表配置
                */
                class VPCWhiteListConfig : public AbstractModel
                {
                public:
                    VPCWhiteListConfig();
                    ~VPCWhiteListConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>VPC 白名单配置状态</p><p>枚举值：</p><ul><li>OPEN： 开启白名单，VPCs 必填，覆盖写入</li><li>CLOSE： 关闭白名单，VPCs 填入时，覆盖写入</li></ul>
                     * @return Action <p>VPC 白名单配置状态</p><p>枚举值：</p><ul><li>OPEN： 开启白名单，VPCs 必填，覆盖写入</li><li>CLOSE： 关闭白名单，VPCs 填入时，覆盖写入</li></ul>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>VPC 白名单配置状态</p><p>枚举值：</p><ul><li>OPEN： 开启白名单，VPCs 必填，覆盖写入</li><li>CLOSE： 关闭白名单，VPCs 填入时，覆盖写入</li></ul>
                     * @param _action <p>VPC 白名单配置状态</p><p>枚举值：</p><ul><li>OPEN： 开启白名单，VPCs 必填，覆盖写入</li><li>CLOSE： 关闭白名单，VPCs 填入时，覆盖写入</li></ul>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>VPC 信息</p>
                     * @return VPCs <p>VPC 信息</p>
                     * 
                     */
                    std::vector<VPCInfo> GetVPCs() const;

                    /**
                     * 设置<p>VPC 信息</p>
                     * @param _vPCs <p>VPC 信息</p>
                     * 
                     */
                    void SetVPCs(const std::vector<VPCInfo>& _vPCs);

                    /**
                     * 判断参数 VPCs 是否已赋值
                     * @return VPCs 是否已赋值
                     * 
                     */
                    bool VPCsHasBeenSet() const;

                private:

                    /**
                     * <p>VPC 白名单配置状态</p><p>枚举值：</p><ul><li>OPEN： 开启白名单，VPCs 必填，覆盖写入</li><li>CLOSE： 关闭白名单，VPCs 填入时，覆盖写入</li></ul>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>VPC 信息</p>
                     */
                    std::vector<VPCInfo> m_vPCs;
                    bool m_vPCsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_VPCWHITELISTCONFIG_H_

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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYCHCNETWORKMODEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYCHCNETWORKMODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyChcNetworkMode请求参数结构体
                */
                class ModifyChcNetworkModeRequest : public AbstractModel
                {
                public:
                    ModifyChcNetworkModeRequest();
                    ~ModifyChcNetworkModeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>CHC物理服务器id列表，如[&quot;chc-1a2b3c4d&quot;]</p>
                     * @return ChcIds <p>CHC物理服务器id列表，如[&quot;chc-1a2b3c4d&quot;]</p>
                     * 
                     */
                    std::vector<std::string> GetChcIds() const;

                    /**
                     * 设置<p>CHC物理服务器id列表，如[&quot;chc-1a2b3c4d&quot;]</p>
                     * @param _chcIds <p>CHC物理服务器id列表，如[&quot;chc-1a2b3c4d&quot;]</p>
                     * 
                     */
                    void SetChcIds(const std::vector<std::string>& _chcIds);

                    /**
                     * 判断参数 ChcIds 是否已赋值
                     * @return ChcIds 是否已赋值
                     * 
                     */
                    bool ChcIdsHasBeenSet() const;

                    /**
                     * 获取<p>所要切换的网络模式</p><p>枚举值：</p><ul><li>DEPLOY： 部署网络模式</li><li>BUSINESS： 业务网络模式</li></ul>
                     * @return NetworkMode <p>所要切换的网络模式</p><p>枚举值：</p><ul><li>DEPLOY： 部署网络模式</li><li>BUSINESS： 业务网络模式</li></ul>
                     * 
                     */
                    std::string GetNetworkMode() const;

                    /**
                     * 设置<p>所要切换的网络模式</p><p>枚举值：</p><ul><li>DEPLOY： 部署网络模式</li><li>BUSINESS： 业务网络模式</li></ul>
                     * @param _networkMode <p>所要切换的网络模式</p><p>枚举值：</p><ul><li>DEPLOY： 部署网络模式</li><li>BUSINESS： 业务网络模式</li></ul>
                     * 
                     */
                    void SetNetworkMode(const std::string& _networkMode);

                    /**
                     * 判断参数 NetworkMode 是否已赋值
                     * @return NetworkMode 是否已赋值
                     * 
                     */
                    bool NetworkModeHasBeenSet() const;

                private:

                    /**
                     * <p>CHC物理服务器id列表，如[&quot;chc-1a2b3c4d&quot;]</p>
                     */
                    std::vector<std::string> m_chcIds;
                    bool m_chcIdsHasBeenSet;

                    /**
                     * <p>所要切换的网络模式</p><p>枚举值：</p><ul><li>DEPLOY： 部署网络模式</li><li>BUSINESS： 业务网络模式</li></ul>
                     */
                    std::string m_networkMode;
                    bool m_networkModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYCHCNETWORKMODEREQUEST_H_

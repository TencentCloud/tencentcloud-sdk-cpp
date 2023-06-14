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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULENETWORKREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULENETWORKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ModifyModuleNetwork请求参数结构体
                */
                class ModifyModuleNetworkRequest : public AbstractModel
                {
                public:
                    ModifyModuleNetworkRequest();
                    ~ModifyModuleNetworkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块Id
                     * @return ModuleId 模块Id
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置模块Id
                     * @param _moduleId 模块Id
                     * 
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

                    /**
                     * 获取默认出带宽上限
                     * @return DefaultBandwidth 默认出带宽上限
                     * 
                     */
                    int64_t GetDefaultBandwidth() const;

                    /**
                     * 设置默认出带宽上限
                     * @param _defaultBandwidth 默认出带宽上限
                     * 
                     */
                    void SetDefaultBandwidth(const int64_t& _defaultBandwidth);

                    /**
                     * 判断参数 DefaultBandwidth 是否已赋值
                     * @return DefaultBandwidth 是否已赋值
                     * 
                     */
                    bool DefaultBandwidthHasBeenSet() const;

                    /**
                     * 获取默认入带宽上限
                     * @return DefaultBandwidthIn 默认入带宽上限
                     * 
                     */
                    int64_t GetDefaultBandwidthIn() const;

                    /**
                     * 设置默认入带宽上限
                     * @param _defaultBandwidthIn 默认入带宽上限
                     * 
                     */
                    void SetDefaultBandwidthIn(const int64_t& _defaultBandwidthIn);

                    /**
                     * 判断参数 DefaultBandwidthIn 是否已赋值
                     * @return DefaultBandwidthIn 是否已赋值
                     * 
                     */
                    bool DefaultBandwidthInHasBeenSet() const;

                private:

                    /**
                     * 模块Id
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * 默认出带宽上限
                     */
                    int64_t m_defaultBandwidth;
                    bool m_defaultBandwidthHasBeenSet;

                    /**
                     * 默认入带宽上限
                     */
                    int64_t m_defaultBandwidthIn;
                    bool m_defaultBandwidthInHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULENETWORKREQUEST_H_

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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYINSTANCESTORAGEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYINSTANCESTORAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * ModifyInstanceStorage请求参数结构体
                */
                class ModifyInstanceStorageRequest : public AbstractModel
                {
                public:
                    ModifyInstanceStorageRequest();
                    ~ModifyInstanceStorageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return RegistryId <p>实例ID</p>
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _registryId <p>实例ID</p>
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取<p>目标存储资源地域</p>
                     * @return TargetRegion <p>目标存储资源地域</p>
                     * 
                     */
                    std::string GetTargetRegion() const;

                    /**
                     * 设置<p>目标存储资源地域</p>
                     * @param _targetRegion <p>目标存储资源地域</p>
                     * 
                     */
                    void SetTargetRegion(const std::string& _targetRegion);

                    /**
                     * 判断参数 TargetRegion 是否已赋值
                     * @return TargetRegion 是否已赋值
                     * 
                     */
                    bool TargetRegionHasBeenSet() const;

                    /**
                     * 获取<p>目标存储资源名称</p>
                     * @return TargetStorageName <p>目标存储资源名称</p>
                     * 
                     */
                    std::string GetTargetStorageName() const;

                    /**
                     * 设置<p>目标存储资源名称</p>
                     * @param _targetStorageName <p>目标存储资源名称</p>
                     * 
                     */
                    void SetTargetStorageName(const std::string& _targetStorageName);

                    /**
                     * 判断参数 TargetStorageName 是否已赋值
                     * @return TargetStorageName 是否已赋值
                     * 
                     */
                    bool TargetStorageNameHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>目标存储资源地域</p>
                     */
                    std::string m_targetRegion;
                    bool m_targetRegionHasBeenSet;

                    /**
                     * <p>目标存储资源名称</p>
                     */
                    std::string m_targetStorageName;
                    bool m_targetStorageNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYINSTANCESTORAGEREQUEST_H_

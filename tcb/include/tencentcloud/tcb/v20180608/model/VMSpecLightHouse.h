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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_VMSPECLIGHTHOUSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_VMSPECLIGHTHOUSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * vm规格
                */
                class VMSpecLightHouse : public AbstractModel
                {
                public:
                    VMSpecLightHouse();
                    ~VMSpecLightHouse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取LH主机的BundleId
                     * @return BundleId LH主机的BundleId
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置LH主机的BundleId
                     * @param _bundleId LH主机的BundleId
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取主机配置详情json
                     * @return BundleConfig 主机配置详情json
                     * 
                     */
                    std::string GetBundleConfig() const;

                    /**
                     * 设置主机配置详情json
                     * @param _bundleConfig 主机配置详情json
                     * 
                     */
                    void SetBundleConfig(const std::string& _bundleConfig);

                    /**
                     * 判断参数 BundleConfig 是否已赋值
                     * @return BundleConfig 是否已赋值
                     * 
                     */
                    bool BundleConfigHasBeenSet() const;

                private:

                    /**
                     * LH主机的BundleId
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * 主机配置详情json
                     */
                    std::string m_bundleConfig;
                    bool m_bundleConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_VMSPECLIGHTHOUSE_H_

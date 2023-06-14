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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_STANDALONEGATEWAYPACKAGEINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_STANDALONEGATEWAYPACKAGEINFO_H_

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
                * 小租户网关套餐配置
                */
                class StandaloneGatewayPackageInfo : public AbstractModel
                {
                public:
                    StandaloneGatewayPackageInfo();
                    ~StandaloneGatewayPackageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CPU核心数
                     * @return CPU CPU核心数
                     * 
                     */
                    double GetCPU() const;

                    /**
                     * 设置CPU核心数
                     * @param _cPU CPU核心数
                     * 
                     */
                    void SetCPU(const double& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取内存大小，单位MB
                     * @return Mem 内存大小，单位MB
                     * 
                     */
                    uint64_t GetMem() const;

                    /**
                     * 设置内存大小，单位MB
                     * @param _mem 内存大小，单位MB
                     * 
                     */
                    void SetMem(const uint64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取套餐包版本名称
                     * @return PackageVersion 套餐包版本名称
                     * 
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 设置套餐包版本名称
                     * @param _packageVersion 套餐包版本名称
                     * 
                     */
                    void SetPackageVersion(const std::string& _packageVersion);

                    /**
                     * 判断参数 PackageVersion 是否已赋值
                     * @return PackageVersion 是否已赋值
                     * 
                     */
                    bool PackageVersionHasBeenSet() const;

                private:

                    /**
                     * CPU核心数
                     */
                    double m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 内存大小，单位MB
                     */
                    uint64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 套餐包版本名称
                     */
                    std::string m_packageVersion;
                    bool m_packageVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_STANDALONEGATEWAYPACKAGEINFO_H_

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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CONVERTOPERATINGSYSTEMSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CONVERTOPERATINGSYSTEMSREQUEST_H_

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
                * ConvertOperatingSystems请求参数结构体
                */
                class ConvertOperatingSystemsRequest : public AbstractModel
                {
                public:
                    ConvertOperatingSystemsRequest();
                    ~ConvertOperatingSystemsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行操作系统转换的实例 ID
                     * @return InstanceIds 执行操作系统转换的实例 ID
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置执行操作系统转换的实例 ID
                     * @param _instanceIds 执行操作系统转换的实例 ID
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取是否最小规模转换
                     * @return MinimalConversion 是否最小规模转换
                     * 
                     */
                    bool GetMinimalConversion() const;

                    /**
                     * 设置是否最小规模转换
                     * @param _minimalConversion 是否最小规模转换
                     * 
                     */
                    void SetMinimalConversion(const bool& _minimalConversion);

                    /**
                     * 判断参数 MinimalConversion 是否已赋值
                     * @return MinimalConversion 是否已赋值
                     * 
                     */
                    bool MinimalConversionHasBeenSet() const;

                    /**
                     * 获取是否只预检
                     * @return DryRun 是否只预检
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否只预检
                     * @param _dryRun 是否只预检
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取转换的目标操作系统类型。仅支持 TencentOS。
                     * @return TargetOSType 转换的目标操作系统类型。仅支持 TencentOS。
                     * 
                     */
                    std::string GetTargetOSType() const;

                    /**
                     * 设置转换的目标操作系统类型。仅支持 TencentOS。
                     * @param _targetOSType 转换的目标操作系统类型。仅支持 TencentOS。
                     * 
                     */
                    void SetTargetOSType(const std::string& _targetOSType);

                    /**
                     * 判断参数 TargetOSType 是否已赋值
                     * @return TargetOSType 是否已赋值
                     * 
                     */
                    bool TargetOSTypeHasBeenSet() const;

                private:

                    /**
                     * 执行操作系统转换的实例 ID
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 是否最小规模转换
                     */
                    bool m_minimalConversion;
                    bool m_minimalConversionHasBeenSet;

                    /**
                     * 是否只预检
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * 转换的目标操作系统类型。仅支持 TencentOS。
                     */
                    std::string m_targetOSType;
                    bool m_targetOSTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CONVERTOPERATINGSYSTEMSREQUEST_H_

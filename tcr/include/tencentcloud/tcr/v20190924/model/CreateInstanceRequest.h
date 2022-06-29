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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/TagSpecification.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateInstance请求参数结构体
                */
                class CreateInstanceRequest : public AbstractModel
                {
                public:
                    CreateInstanceRequest();
                    ~CreateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业版实例名称
                     * @return RegistryName 企业版实例名称
                     */
                    std::string GetRegistryName() const;

                    /**
                     * 设置企业版实例名称
                     * @param RegistryName 企业版实例名称
                     */
                    void SetRegistryName(const std::string& _registryName);

                    /**
                     * 判断参数 RegistryName 是否已赋值
                     * @return RegistryName 是否已赋值
                     */
                    bool RegistryNameHasBeenSet() const;

                    /**
                     * 获取企业版实例类型（basic 基础版；standard 标准版；premium 高级版）
                     * @return RegistryType 企业版实例类型（basic 基础版；standard 标准版；premium 高级版）
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置企业版实例类型（basic 基础版；standard 标准版；premium 高级版）
                     * @param RegistryType 企业版实例类型（basic 基础版；standard 标准版；premium 高级版）
                     */
                    void SetRegistryType(const std::string& _registryType);

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取云标签描述
                     * @return TagSpecification 云标签描述
                     */
                    TagSpecification GetTagSpecification() const;

                    /**
                     * 设置云标签描述
                     * @param TagSpecification 云标签描述
                     */
                    void SetTagSpecification(const TagSpecification& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取实例计费类型，0表示按量计费，1表示预付费，默认为按量计费
                     * @return RegistryChargeType 实例计费类型，0表示按量计费，1表示预付费，默认为按量计费
                     */
                    int64_t GetRegistryChargeType() const;

                    /**
                     * 设置实例计费类型，0表示按量计费，1表示预付费，默认为按量计费
                     * @param RegistryChargeType 实例计费类型，0表示按量计费，1表示预付费，默认为按量计费
                     */
                    void SetRegistryChargeType(const int64_t& _registryChargeType);

                    /**
                     * 判断参数 RegistryChargeType 是否已赋值
                     * @return RegistryChargeType 是否已赋值
                     */
                    bool RegistryChargeTypeHasBeenSet() const;

                    /**
                     * 获取是否同步TCR云标签至生成的COS Bucket
                     * @return SyncTag 是否同步TCR云标签至生成的COS Bucket
                     */
                    bool GetSyncTag() const;

                    /**
                     * 设置是否同步TCR云标签至生成的COS Bucket
                     * @param SyncTag 是否同步TCR云标签至生成的COS Bucket
                     */
                    void SetSyncTag(const bool& _syncTag);

                    /**
                     * 判断参数 SyncTag 是否已赋值
                     * @return SyncTag 是否已赋值
                     */
                    bool SyncTagHasBeenSet() const;

                private:

                    /**
                     * 企业版实例名称
                     */
                    std::string m_registryName;
                    bool m_registryNameHasBeenSet;

                    /**
                     * 企业版实例类型（basic 基础版；standard 标准版；premium 高级版）
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * 云标签描述
                     */
                    TagSpecification m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * 实例计费类型，0表示按量计费，1表示预付费，默认为按量计费
                     */
                    int64_t m_registryChargeType;
                    bool m_registryChargeTypeHasBeenSet;

                    /**
                     * 是否同步TCR云标签至生成的COS Bucket
                     */
                    bool m_syncTag;
                    bool m_syncTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATEINSTANCEREQUEST_H_

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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_CREATEVOLUMEREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_CREATEVOLUMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * CreateVolume请求参数结构体
                */
                class CreateVolumeRequest : public AbstractModel
                {
                public:
                    CreateVolumeRequest();
                    ~CreateVolumeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID。
                     * @return EnvironmentId 环境ID。
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境ID。
                     * @param _environmentId 环境ID。
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取名称。
                     * @return Name 名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称。
                     * @param _name 名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取缓存卷类型，取值范围：
* SHARED：多点挂载共享存储
                     * @return Type 缓存卷类型，取值范围：
* SHARED：多点挂载共享存储
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置缓存卷类型，取值范围：
* SHARED：多点挂载共享存储
                     * @param _type 缓存卷类型，取值范围：
* SHARED：多点挂载共享存储
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取缓存卷规格，取值范围：

- SD：通用标准型
- HP：通用性能型
- TB：turbo标准型
- TP：turbo性能型
                     * @return Spec 缓存卷规格，取值范围：

- SD：通用标准型
- HP：通用性能型
- TB：turbo标准型
- TP：turbo性能型
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置缓存卷规格，取值范围：

- SD：通用标准型
- HP：通用性能型
- TB：turbo标准型
- TP：turbo性能型
                     * @param _spec 缓存卷规格，取值范围：

- SD：通用标准型
- HP：通用性能型
- TB：turbo标准型
- TP：turbo性能型
                     * 
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取描述。
                     * @return Description 描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述。
                     * @param _description 描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取缓存卷大小（GB），Turbo系列需要指定。
                     * @return Capacity 缓存卷大小（GB），Turbo系列需要指定。
                     * 
                     */
                    uint64_t GetCapacity() const;

                    /**
                     * 设置缓存卷大小（GB），Turbo系列需要指定。
                     * @param _capacity 缓存卷大小（GB），Turbo系列需要指定。
                     * 
                     */
                    void SetCapacity(const uint64_t& _capacity);

                    /**
                     * 判断参数 Capacity 是否已赋值
                     * @return Capacity 是否已赋值
                     * 
                     */
                    bool CapacityHasBeenSet() const;

                private:

                    /**
                     * 环境ID。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 缓存卷类型，取值范围：
* SHARED：多点挂载共享存储
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 缓存卷规格，取值范围：

- SD：通用标准型
- HP：通用性能型
- TB：turbo标准型
- TP：turbo性能型
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * 描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 缓存卷大小（GB），Turbo系列需要指定。
                     */
                    uint64_t m_capacity;
                    bool m_capacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_CREATEVOLUMEREQUEST_H_

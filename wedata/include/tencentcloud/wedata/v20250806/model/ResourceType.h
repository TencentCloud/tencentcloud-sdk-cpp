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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCETYPE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCETYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/IntegrationResource.h>
#include <tencentcloud/wedata/v20250806/model/ResourceGroupSpecification.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 开通的资源组信息
                */
                class ResourceType : public AbstractModel
                {
                public:
                    ResourceType();
                    ~ResourceType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源组类型

- Schedule --- 调度资源组
- Integration --- 集成资源组
- DataService -- 数据服务资源组
                     * @return ResourceGroupType 资源组类型

- Schedule --- 调度资源组
- Integration --- 集成资源组
- DataService -- 数据服务资源组
                     * 
                     */
                    std::string GetResourceGroupType() const;

                    /**
                     * 设置资源组类型

- Schedule --- 调度资源组
- Integration --- 集成资源组
- DataService -- 数据服务资源组
                     * @param _resourceGroupType 资源组类型

- Schedule --- 调度资源组
- Integration --- 集成资源组
- DataService -- 数据服务资源组
                     * 
                     */
                    void SetResourceGroupType(const std::string& _resourceGroupType);

                    /**
                     * 判断参数 ResourceGroupType 是否已赋值
                     * @return ResourceGroupType 是否已赋值
                     * 
                     */
                    bool ResourceGroupTypeHasBeenSet() const;

                    /**
                     * 获取集成资源组，细分实时资源组和离线资源组(集成、调度、数据服务资源组不可以同时购买)
                     * @return Integration 集成资源组，细分实时资源组和离线资源组(集成、调度、数据服务资源组不可以同时购买)
                     * 
                     */
                    IntegrationResource GetIntegration() const;

                    /**
                     * 设置集成资源组，细分实时资源组和离线资源组(集成、调度、数据服务资源组不可以同时购买)
                     * @param _integration 集成资源组，细分实时资源组和离线资源组(集成、调度、数据服务资源组不可以同时购买)
                     * 
                     */
                    void SetIntegration(const IntegrationResource& _integration);

                    /**
                     * 判断参数 Integration 是否已赋值
                     * @return Integration 是否已赋值
                     * 
                     */
                    bool IntegrationHasBeenSet() const;

                    /**
                     * 获取调度资源组(集成、调度、数据服务资源组不可以同时购买)

- s_test(测试规格)
- s_small(基础规格)
- s_medium(普及规格)
- s_large(专业规格)



                     * @return Schedule 调度资源组(集成、调度、数据服务资源组不可以同时购买)

- s_test(测试规格)
- s_small(基础规格)
- s_medium(普及规格)
- s_large(专业规格)



                     * 
                     */
                    ResourceGroupSpecification GetSchedule() const;

                    /**
                     * 设置调度资源组(集成、调度、数据服务资源组不可以同时购买)

- s_test(测试规格)
- s_small(基础规格)
- s_medium(普及规格)
- s_large(专业规格)



                     * @param _schedule 调度资源组(集成、调度、数据服务资源组不可以同时购买)

- s_test(测试规格)
- s_small(基础规格)
- s_medium(普及规格)
- s_large(专业规格)



                     * 
                     */
                    void SetSchedule(const ResourceGroupSpecification& _schedule);

                    /**
                     * 判断参数 Schedule 是否已赋值
                     * @return Schedule 是否已赋值
                     * 
                     */
                    bool ScheduleHasBeenSet() const;

                    /**
                     * 获取数据服务资源组(集成、调度、数据服务资源组不可以同时购买)

- ds_t(测试规格)
- ds_s(基础规格)
- ds_m(普及规格)
- ds_l(专业规格)
                     * @return DataService 数据服务资源组(集成、调度、数据服务资源组不可以同时购买)

- ds_t(测试规格)
- ds_s(基础规格)
- ds_m(普及规格)
- ds_l(专业规格)
                     * 
                     */
                    ResourceGroupSpecification GetDataService() const;

                    /**
                     * 设置数据服务资源组(集成、调度、数据服务资源组不可以同时购买)

- ds_t(测试规格)
- ds_s(基础规格)
- ds_m(普及规格)
- ds_l(专业规格)
                     * @param _dataService 数据服务资源组(集成、调度、数据服务资源组不可以同时购买)

- ds_t(测试规格)
- ds_s(基础规格)
- ds_m(普及规格)
- ds_l(专业规格)
                     * 
                     */
                    void SetDataService(const ResourceGroupSpecification& _dataService);

                    /**
                     * 判断参数 DataService 是否已赋值
                     * @return DataService 是否已赋值
                     * 
                     */
                    bool DataServiceHasBeenSet() const;

                private:

                    /**
                     * 资源组类型

- Schedule --- 调度资源组
- Integration --- 集成资源组
- DataService -- 数据服务资源组
                     */
                    std::string m_resourceGroupType;
                    bool m_resourceGroupTypeHasBeenSet;

                    /**
                     * 集成资源组，细分实时资源组和离线资源组(集成、调度、数据服务资源组不可以同时购买)
                     */
                    IntegrationResource m_integration;
                    bool m_integrationHasBeenSet;

                    /**
                     * 调度资源组(集成、调度、数据服务资源组不可以同时购买)

- s_test(测试规格)
- s_small(基础规格)
- s_medium(普及规格)
- s_large(专业规格)



                     */
                    ResourceGroupSpecification m_schedule;
                    bool m_scheduleHasBeenSet;

                    /**
                     * 数据服务资源组(集成、调度、数据服务资源组不可以同时购买)

- ds_t(测试规格)
- ds_s(基础规格)
- ds_m(普及规格)
- ds_l(专业规格)
                     */
                    ResourceGroupSpecification m_dataService;
                    bool m_dataServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCETYPE_H_

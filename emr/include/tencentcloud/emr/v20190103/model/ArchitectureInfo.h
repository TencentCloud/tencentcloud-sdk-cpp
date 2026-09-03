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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_ARCHITECTUREINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_ARCHITECTUREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 架构信息
                */
                class ArchitectureInfo : public AbstractModel
                {
                public:
                    ArchitectureInfo();
                    ~ArchitectureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>架构类型</p>
                     * @return Architecture <p>架构类型</p>
                     * 
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 设置<p>架构类型</p>
                     * @param _architecture <p>架构类型</p>
                     * 
                     */
                    void SetArchitecture(const std::string& _architecture);

                    /**
                     * 判断参数 Architecture 是否已赋值
                     * @return Architecture 是否已赋值
                     * 
                     */
                    bool ArchitectureHasBeenSet() const;

                    /**
                     * 获取<p>架构类型名称</p>
                     * @return ArchitectureName <p>架构类型名称</p>
                     * 
                     */
                    std::string GetArchitectureName() const;

                    /**
                     * 设置<p>架构类型名称</p>
                     * @param _architectureName <p>架构类型名称</p>
                     * 
                     */
                    void SetArchitectureName(const std::string& _architectureName);

                    /**
                     * 判断参数 ArchitectureName 是否已赋值
                     * @return ArchitectureName 是否已赋值
                     * 
                     */
                    bool ArchitectureNameHasBeenSet() const;

                    /**
                     * 获取<p>架构类型展示顺序</p>
                     * @return Order <p>架构类型展示顺序</p>
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置<p>架构类型展示顺序</p>
                     * @param _order <p>架构类型展示顺序</p>
                     * 
                     */
                    void SetOrder(const int64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>架构包含的机型族</p>
                     * @return InstanceFamilies <p>架构包含的机型族</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceFamilies() const;

                    /**
                     * 设置<p>架构包含的机型族</p>
                     * @param _instanceFamilies <p>架构包含的机型族</p>
                     * 
                     */
                    void SetInstanceFamilies(const std::vector<std::string>& _instanceFamilies);

                    /**
                     * 判断参数 InstanceFamilies 是否已赋值
                     * @return InstanceFamilies 是否已赋值
                     * 
                     */
                    bool InstanceFamiliesHasBeenSet() const;

                private:

                    /**
                     * <p>架构类型</p>
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * <p>架构类型名称</p>
                     */
                    std::string m_architectureName;
                    bool m_architectureNameHasBeenSet;

                    /**
                     * <p>架构类型展示顺序</p>
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>架构包含的机型族</p>
                     */
                    std::vector<std::string> m_instanceFamilies;
                    bool m_instanceFamiliesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_ARCHITECTUREINFO_H_

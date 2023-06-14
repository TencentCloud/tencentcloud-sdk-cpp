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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCEFAMILYTYPECONFIG_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCEFAMILYTYPECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 实例系列类型配置
                */
                class InstanceFamilyTypeConfig : public AbstractModel
                {
                public:
                    InstanceFamilyTypeConfig();
                    ~InstanceFamilyTypeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例机型系列类型Id
                     * @return InstanceFamilyType 实例机型系列类型Id
                     * 
                     */
                    std::string GetInstanceFamilyType() const;

                    /**
                     * 设置实例机型系列类型Id
                     * @param _instanceFamilyType 实例机型系列类型Id
                     * 
                     */
                    void SetInstanceFamilyType(const std::string& _instanceFamilyType);

                    /**
                     * 判断参数 InstanceFamilyType 是否已赋值
                     * @return InstanceFamilyType 是否已赋值
                     * 
                     */
                    bool InstanceFamilyTypeHasBeenSet() const;

                    /**
                     * 获取实例机型系列类型名称
                     * @return InstanceFamilyTypeName 实例机型系列类型名称
                     * 
                     */
                    std::string GetInstanceFamilyTypeName() const;

                    /**
                     * 设置实例机型系列类型名称
                     * @param _instanceFamilyTypeName 实例机型系列类型名称
                     * 
                     */
                    void SetInstanceFamilyTypeName(const std::string& _instanceFamilyTypeName);

                    /**
                     * 判断参数 InstanceFamilyTypeName 是否已赋值
                     * @return InstanceFamilyTypeName 是否已赋值
                     * 
                     */
                    bool InstanceFamilyTypeNameHasBeenSet() const;

                private:

                    /**
                     * 实例机型系列类型Id
                     */
                    std::string m_instanceFamilyType;
                    bool m_instanceFamilyTypeHasBeenSet;

                    /**
                     * 实例机型系列类型名称
                     */
                    std::string m_instanceFamilyTypeName;
                    bool m_instanceFamilyTypeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCEFAMILYTYPECONFIG_H_

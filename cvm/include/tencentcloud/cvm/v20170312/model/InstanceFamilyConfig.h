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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCEFAMILYCONFIG_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCEFAMILYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 描述实例的机型族配置信息
形如：{'InstanceFamilyName': '标准型S1', 'InstanceFamily': 'S1'}、{'InstanceFamilyName': '网络优化型N1', 'InstanceFamily': 'N1'}、{'InstanceFamilyName': '高IO型I1', 'InstanceFamily': 'I1'}等。
                */
                class InstanceFamilyConfig : public AbstractModel
                {
                public:
                    InstanceFamilyConfig();
                    ~InstanceFamilyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机型族名称的中文全称。
                     * @return InstanceFamilyName 机型族名称的中文全称。
                     * 
                     */
                    std::string GetInstanceFamilyName() const;

                    /**
                     * 设置机型族名称的中文全称。
                     * @param _instanceFamilyName 机型族名称的中文全称。
                     * 
                     */
                    void SetInstanceFamilyName(const std::string& _instanceFamilyName);

                    /**
                     * 判断参数 InstanceFamilyName 是否已赋值
                     * @return InstanceFamilyName 是否已赋值
                     * 
                     */
                    bool InstanceFamilyNameHasBeenSet() const;

                    /**
                     * 获取机型族名称的英文简称。
                     * @return InstanceFamily 机型族名称的英文简称。
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置机型族名称的英文简称。
                     * @param _instanceFamily 机型族名称的英文简称。
                     * 
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     * 
                     */
                    bool InstanceFamilyHasBeenSet() const;

                private:

                    /**
                     * 机型族名称的中文全称。
                     */
                    std::string m_instanceFamilyName;
                    bool m_instanceFamilyNameHasBeenSet;

                    /**
                     * 机型族名称的英文简称。
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCEFAMILYCONFIG_H_

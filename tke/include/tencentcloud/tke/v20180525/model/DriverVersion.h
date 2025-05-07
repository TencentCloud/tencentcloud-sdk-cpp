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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DRIVERVERSION_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DRIVERVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * GPU驱动和CUDA的版本信息
                */
                class DriverVersion : public AbstractModel
                {
                public:
                    DriverVersion();
                    ~DriverVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取GPU驱动或者CUDA的名字
                     * @return Name GPU驱动或者CUDA的名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置GPU驱动或者CUDA的名字
                     * @param _name GPU驱动或者CUDA的名字
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
                     * 获取GPU驱动或者CUDA的版本
                     * @return Version GPU驱动或者CUDA的版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置GPU驱动或者CUDA的版本
                     * @param _version GPU驱动或者CUDA的版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * GPU驱动或者CUDA的名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * GPU驱动或者CUDA的版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DRIVERVERSION_H_

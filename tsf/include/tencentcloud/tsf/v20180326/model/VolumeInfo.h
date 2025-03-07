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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_VOLUMEINFO_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_VOLUMEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ConfigMapOption.h>
#include <tencentcloud/tsf/v20180326/model/EmptyDirOption.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 容器卷挂载信息
                */
                class VolumeInfo : public AbstractModel
                {
                public:
                    VolumeInfo();
                    ~VolumeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据卷类型
                     * @return VolumeType 数据卷类型
                     * 
                     */
                    std::string GetVolumeType() const;

                    /**
                     * 设置数据卷类型
                     * @param _volumeType 数据卷类型
                     * 
                     */
                    void SetVolumeType(const std::string& _volumeType);

                    /**
                     * 判断参数 VolumeType 是否已赋值
                     * @return VolumeType 是否已赋值
                     * 
                     */
                    bool VolumeTypeHasBeenSet() const;

                    /**
                     * 获取数据卷名称
                     * @return VolumeName 数据卷名称
                     * 
                     */
                    std::string GetVolumeName() const;

                    /**
                     * 设置数据卷名称
                     * @param _volumeName 数据卷名称
                     * 
                     */
                    void SetVolumeName(const std::string& _volumeName);

                    /**
                     * 判断参数 VolumeName 是否已赋值
                     * @return VolumeName 是否已赋值
                     * 
                     */
                    bool VolumeNameHasBeenSet() const;

                    /**
                     * 获取数据卷配置
                     * @return VolumeConfig 数据卷配置
                     * 
                     */
                    std::string GetVolumeConfig() const;

                    /**
                     * 设置数据卷配置
                     * @param _volumeConfig 数据卷配置
                     * 
                     */
                    void SetVolumeConfig(const std::string& _volumeConfig);

                    /**
                     * 判断参数 VolumeConfig 是否已赋值
                     * @return VolumeConfig 是否已赋值
                     * 
                     */
                    bool VolumeConfigHasBeenSet() const;

                    /**
                     * 获取-
                     * @return ConfigMapOptions -
                     * 
                     */
                    std::vector<ConfigMapOption> GetConfigMapOptions() const;

                    /**
                     * 设置-
                     * @param _configMapOptions -
                     * 
                     */
                    void SetConfigMapOptions(const std::vector<ConfigMapOption>& _configMapOptions);

                    /**
                     * 判断参数 ConfigMapOptions 是否已赋值
                     * @return ConfigMapOptions 是否已赋值
                     * 
                     */
                    bool ConfigMapOptionsHasBeenSet() const;

                    /**
                     * 获取-
                     * @return EmptyDirOption -
                     * 
                     */
                    EmptyDirOption GetEmptyDirOption() const;

                    /**
                     * 设置-
                     * @param _emptyDirOption -
                     * 
                     */
                    void SetEmptyDirOption(const EmptyDirOption& _emptyDirOption);

                    /**
                     * 判断参数 EmptyDirOption 是否已赋值
                     * @return EmptyDirOption 是否已赋值
                     * 
                     */
                    bool EmptyDirOptionHasBeenSet() const;

                private:

                    /**
                     * 数据卷类型
                     */
                    std::string m_volumeType;
                    bool m_volumeTypeHasBeenSet;

                    /**
                     * 数据卷名称
                     */
                    std::string m_volumeName;
                    bool m_volumeNameHasBeenSet;

                    /**
                     * 数据卷配置
                     */
                    std::string m_volumeConfig;
                    bool m_volumeConfigHasBeenSet;

                    /**
                     * -
                     */
                    std::vector<ConfigMapOption> m_configMapOptions;
                    bool m_configMapOptionsHasBeenSet;

                    /**
                     * -
                     */
                    EmptyDirOption m_emptyDirOption;
                    bool m_emptyDirOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_VOLUMEINFO_H_

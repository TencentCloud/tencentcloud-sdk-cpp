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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_MOUNTEDSETTINGCONF_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_MOUNTEDSETTINGCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20201221/model/Pair.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * 挂载配置信息
                */
                class MountedSettingConf : public AbstractModel
                {
                public:
                    MountedSettingConf();
                    ~MountedSettingConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置名称
                     * @return ConfigDataName 配置名称
                     * 
                     */
                    std::string GetConfigDataName() const;

                    /**
                     * 设置配置名称
                     * @param _configDataName 配置名称
                     * 
                     */
                    void SetConfigDataName(const std::string& _configDataName);

                    /**
                     * 判断参数 ConfigDataName 是否已赋值
                     * @return ConfigDataName 是否已赋值
                     * 
                     */
                    bool ConfigDataNameHasBeenSet() const;

                    /**
                     * 获取挂载路径
                     * @return MountedPath 挂载路径
                     * 
                     */
                    std::string GetMountedPath() const;

                    /**
                     * 设置挂载路径
                     * @param _mountedPath 挂载路径
                     * 
                     */
                    void SetMountedPath(const std::string& _mountedPath);

                    /**
                     * 判断参数 MountedPath 是否已赋值
                     * @return MountedPath 是否已赋值
                     * 
                     */
                    bool MountedPathHasBeenSet() const;

                    /**
                     * 获取配置内容
                     * @return Data 配置内容
                     * 
                     */
                    std::vector<Pair> GetData() const;

                    /**
                     * 设置配置内容
                     * @param _data 配置内容
                     * 
                     */
                    void SetData(const std::vector<Pair>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 配置名称
                     */
                    std::string m_configDataName;
                    bool m_configDataNameHasBeenSet;

                    /**
                     * 挂载路径
                     */
                    std::string m_mountedPath;
                    bool m_mountedPathHasBeenSet;

                    /**
                     * 配置内容
                     */
                    std::vector<Pair> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_MOUNTEDSETTINGCONF_H_

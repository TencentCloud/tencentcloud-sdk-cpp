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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CONTAINERMOUNT_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CONTAINERMOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 容器挂载信息
                */
                class ContainerMount : public AbstractModel
                {
                public:
                    ContainerMount();
                    ~ContainerMount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取挂载类型 bind
                     * @return Type 挂载类型 bind
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置挂载类型 bind
                     * @param _type 挂载类型 bind
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
                     * 获取宿主机路径
                     * @return Source 宿主机路径
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置宿主机路径
                     * @param _source 宿主机路径
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取容器内路径
                     * @return Destination 容器内路径
                     * 
                     */
                    std::string GetDestination() const;

                    /**
                     * 设置容器内路径
                     * @param _destination 容器内路径
                     * 
                     */
                    void SetDestination(const std::string& _destination);

                    /**
                     * 判断参数 Destination 是否已赋值
                     * @return Destination 是否已赋值
                     * 
                     */
                    bool DestinationHasBeenSet() const;

                    /**
                     * 获取模式
                     * @return Mode 模式
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置模式
                     * @param _mode 模式
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取读写权限
                     * @return RW 读写权限
                     * 
                     */
                    bool GetRW() const;

                    /**
                     * 设置读写权限
                     * @param _rW 读写权限
                     * 
                     */
                    void SetRW(const bool& _rW);

                    /**
                     * 判断参数 RW 是否已赋值
                     * @return RW 是否已赋值
                     * 
                     */
                    bool RWHasBeenSet() const;

                    /**
                     * 获取传播类型
                     * @return Propagation 传播类型
                     * 
                     */
                    std::string GetPropagation() const;

                    /**
                     * 设置传播类型
                     * @param _propagation 传播类型
                     * 
                     */
                    void SetPropagation(const std::string& _propagation);

                    /**
                     * 判断参数 Propagation 是否已赋值
                     * @return Propagation 是否已赋值
                     * 
                     */
                    bool PropagationHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取驱动
                     * @return Driver 驱动
                     * 
                     */
                    std::string GetDriver() const;

                    /**
                     * 设置驱动
                     * @param _driver 驱动
                     * 
                     */
                    void SetDriver(const std::string& _driver);

                    /**
                     * 判断参数 Driver 是否已赋值
                     * @return Driver 是否已赋值
                     * 
                     */
                    bool DriverHasBeenSet() const;

                private:

                    /**
                     * 挂载类型 bind
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 宿主机路径
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 容器内路径
                     */
                    std::string m_destination;
                    bool m_destinationHasBeenSet;

                    /**
                     * 模式
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 读写权限
                     */
                    bool m_rW;
                    bool m_rWHasBeenSet;

                    /**
                     * 传播类型
                     */
                    std::string m_propagation;
                    bool m_propagationHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 驱动
                     */
                    std::string m_driver;
                    bool m_driverHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CONTAINERMOUNT_H_

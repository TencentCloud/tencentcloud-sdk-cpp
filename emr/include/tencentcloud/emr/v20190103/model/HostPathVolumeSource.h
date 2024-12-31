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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_HOSTPATHVOLUMESOURCE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_HOSTPATHVOLUMESOURCE_H_

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
                * 主机路径
                */
                class HostPathVolumeSource : public AbstractModel
                {
                public:
                    HostPathVolumeSource();
                    ~HostPathVolumeSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机路径
                     * @return Path 主机路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置主机路径
                     * @param _path 主机路径
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取主机路径类型，当前默认DirectoryOrCreate
                     * @return Type 主机路径类型，当前默认DirectoryOrCreate
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置主机路径类型，当前默认DirectoryOrCreate
                     * @param _type 主机路径类型，当前默认DirectoryOrCreate
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 主机路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 主机路径类型，当前默认DirectoryOrCreate
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_HOSTPATHVOLUMESOURCE_H_

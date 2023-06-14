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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_STORAGEMOUNTCONF_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_STORAGEMOUNTCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * 数据卷挂载信息
                */
                class StorageMountConf : public AbstractModel
                {
                public:
                    StorageMountConf();
                    ~StorageMountConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据卷名
                     * @return VolumeName 数据卷名
                     * 
                     */
                    std::string GetVolumeName() const;

                    /**
                     * 设置数据卷名
                     * @param _volumeName 数据卷名
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
                     * 获取数据卷绑定路径
                     * @return MountPath 数据卷绑定路径
                     * 
                     */
                    std::string GetMountPath() const;

                    /**
                     * 设置数据卷绑定路径
                     * @param _mountPath 数据卷绑定路径
                     * 
                     */
                    void SetMountPath(const std::string& _mountPath);

                    /**
                     * 判断参数 MountPath 是否已赋值
                     * @return MountPath 是否已赋值
                     * 
                     */
                    bool MountPathHasBeenSet() const;

                private:

                    /**
                     * 数据卷名
                     */
                    std::string m_volumeName;
                    bool m_volumeNameHasBeenSet;

                    /**
                     * 数据卷绑定路径
                     */
                    std::string m_mountPath;
                    bool m_mountPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_STORAGEMOUNTCONF_H_

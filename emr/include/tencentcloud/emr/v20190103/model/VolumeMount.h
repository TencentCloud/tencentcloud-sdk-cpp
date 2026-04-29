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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_VOLUMEMOUNT_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_VOLUMEMOUNT_H_

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
                * 挂载卷
                */
                class VolumeMount : public AbstractModel
                {
                public:
                    VolumeMount();
                    ~VolumeMount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取挂载卷名称
                     * @return MountName 挂载卷名称
                     * 
                     */
                    std::string GetMountName() const;

                    /**
                     * 设置挂载卷名称
                     * @param _mountName 挂载卷名称
                     * 
                     */
                    void SetMountName(const std::string& _mountName);

                    /**
                     * 判断参数 MountName 是否已赋值
                     * @return MountName 是否已赋值
                     * 
                     */
                    bool MountNameHasBeenSet() const;

                    /**
                     * 获取挂载路径
                     * @return MountPath 挂载路径
                     * 
                     */
                    std::string GetMountPath() const;

                    /**
                     * 设置挂载路径
                     * @param _mountPath 挂载路径
                     * 
                     */
                    void SetMountPath(const std::string& _mountPath);

                    /**
                     * 判断参数 MountPath 是否已赋值
                     * @return MountPath 是否已赋值
                     * 
                     */
                    bool MountPathHasBeenSet() const;

                    /**
                     * 获取挂载类型
                     * @return SubPathMode 挂载类型
                     * 
                     */
                    std::string GetSubPathMode() const;

                    /**
                     * 设置挂载类型
                     * @param _subPathMode 挂载类型
                     * 
                     */
                    void SetSubPathMode(const std::string& _subPathMode);

                    /**
                     * 判断参数 SubPathMode 是否已赋值
                     * @return SubPathMode 是否已赋值
                     * 
                     */
                    bool SubPathModeHasBeenSet() const;

                    /**
                     * 获取子路径
                     * @return SubPath 子路径
                     * 
                     */
                    std::string GetSubPath() const;

                    /**
                     * 设置子路径
                     * @param _subPath 子路径
                     * 
                     */
                    void SetSubPath(const std::string& _subPath);

                    /**
                     * 判断参数 SubPath 是否已赋值
                     * @return SubPath 是否已赋值
                     * 
                     */
                    bool SubPathHasBeenSet() const;

                    /**
                     * 获取挂载模式，仅支持ReadWrite和OnlyRead
                     * @return MountMode 挂载模式，仅支持ReadWrite和OnlyRead
                     * 
                     */
                    std::string GetMountMode() const;

                    /**
                     * 设置挂载模式，仅支持ReadWrite和OnlyRead
                     * @param _mountMode 挂载模式，仅支持ReadWrite和OnlyRead
                     * 
                     */
                    void SetMountMode(const std::string& _mountMode);

                    /**
                     * 判断参数 MountMode 是否已赋值
                     * @return MountMode 是否已赋值
                     * 
                     */
                    bool MountModeHasBeenSet() const;

                private:

                    /**
                     * 挂载卷名称
                     */
                    std::string m_mountName;
                    bool m_mountNameHasBeenSet;

                    /**
                     * 挂载路径
                     */
                    std::string m_mountPath;
                    bool m_mountPathHasBeenSet;

                    /**
                     * 挂载类型
                     */
                    std::string m_subPathMode;
                    bool m_subPathModeHasBeenSet;

                    /**
                     * 子路径
                     */
                    std::string m_subPath;
                    bool m_subPathHasBeenSet;

                    /**
                     * 挂载模式，仅支持ReadWrite和OnlyRead
                     */
                    std::string m_mountMode;
                    bool m_mountModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_VOLUMEMOUNT_H_

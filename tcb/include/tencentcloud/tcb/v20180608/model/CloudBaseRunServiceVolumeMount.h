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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNSERVICEVOLUMEMOUNT_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNSERVICEVOLUMEMOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 对标 EKS VolumeMount
                */
                class CloudBaseRunServiceVolumeMount : public AbstractModel
                {
                public:
                    CloudBaseRunServiceVolumeMount();
                    ~CloudBaseRunServiceVolumeMount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Volume 名称
                     * @return Name Volume 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Volume 名称
                     * @param _name Volume 名称
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
                     * 获取是否只读
                     * @return ReadOnly 是否只读
                     * 
                     */
                    bool GetReadOnly() const;

                    /**
                     * 设置是否只读
                     * @param _readOnly 是否只读
                     * 
                     */
                    void SetReadOnly(const bool& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     * 
                     */
                    bool ReadOnlyHasBeenSet() const;

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
                     * 获取传播挂载方式
                     * @return MountPropagation 传播挂载方式
                     * 
                     */
                    std::string GetMountPropagation() const;

                    /**
                     * 设置传播挂载方式
                     * @param _mountPropagation 传播挂载方式
                     * 
                     */
                    void SetMountPropagation(const std::string& _mountPropagation);

                    /**
                     * 判断参数 MountPropagation 是否已赋值
                     * @return MountPropagation 是否已赋值
                     * 
                     */
                    bool MountPropagationHasBeenSet() const;

                private:

                    /**
                     * Volume 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 挂载路径
                     */
                    std::string m_mountPath;
                    bool m_mountPathHasBeenSet;

                    /**
                     * 是否只读
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * 子路径
                     */
                    std::string m_subPath;
                    bool m_subPathHasBeenSet;

                    /**
                     * 传播挂载方式
                     */
                    std::string m_mountPropagation;
                    bool m_mountPropagationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNSERVICEVOLUMEMOUNT_H_

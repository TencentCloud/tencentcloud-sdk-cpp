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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_MODIFYVOLUMEREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_MODIFYVOLUMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * ModifyVolume请求参数结构体
                */
                class ModifyVolumeRequest : public AbstractModel
                {
                public:
                    ModifyVolumeRequest();
                    ~ModifyVolumeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取缓存卷ID。
                     * @return VolumeId 缓存卷ID。
                     * 
                     */
                    std::string GetVolumeId() const;

                    /**
                     * 设置缓存卷ID。
                     * @param _volumeId 缓存卷ID。
                     * 
                     */
                    void SetVolumeId(const std::string& _volumeId);

                    /**
                     * 判断参数 VolumeId 是否已赋值
                     * @return VolumeId 是否已赋值
                     * 
                     */
                    bool VolumeIdHasBeenSet() const;

                    /**
                     * 获取名称。
                     * @return Name 名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称。
                     * @param _name 名称。
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
                     * 获取描述。
                     * @return Description 描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述。
                     * @param _description 描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 缓存卷ID。
                     */
                    std::string m_volumeId;
                    bool m_volumeIdHasBeenSet;

                    /**
                     * 名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_MODIFYVOLUMEREQUEST_H_

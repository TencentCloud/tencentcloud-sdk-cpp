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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_VOLUMEMOUNT_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_VOLUMEMOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/CFSConfig.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 外部挂载信息
                */
                class VolumeMount : public AbstractModel
                {
                public:
                    VolumeMount();
                    ~VolumeMount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cfs的配置信息
                     * @return CFSConfig cfs的配置信息
                     * 
                     */
                    CFSConfig GetCFSConfig() const;

                    /**
                     * 设置cfs的配置信息
                     * @param _cFSConfig cfs的配置信息
                     * 
                     */
                    void SetCFSConfig(const CFSConfig& _cFSConfig);

                    /**
                     * 判断参数 CFSConfig 是否已赋值
                     * @return CFSConfig 是否已赋值
                     * 
                     */
                    bool CFSConfigHasBeenSet() const;

                    /**
                     * 获取挂载源类型，CFS、COS，默认为CFS
                     * @return VolumeSourceType 挂载源类型，CFS、COS，默认为CFS
                     * 
                     */
                    std::string GetVolumeSourceType() const;

                    /**
                     * 设置挂载源类型，CFS、COS，默认为CFS
                     * @param _volumeSourceType 挂载源类型，CFS、COS，默认为CFS
                     * 
                     */
                    void SetVolumeSourceType(const std::string& _volumeSourceType);

                    /**
                     * 判断参数 VolumeSourceType 是否已赋值
                     * @return VolumeSourceType 是否已赋值
                     * 
                     */
                    bool VolumeSourceTypeHasBeenSet() const;

                private:

                    /**
                     * cfs的配置信息
                     */
                    CFSConfig m_cFSConfig;
                    bool m_cFSConfigHasBeenSet;

                    /**
                     * 挂载源类型，CFS、COS，默认为CFS
                     */
                    std::string m_volumeSourceType;
                    bool m_volumeSourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_VOLUMEMOUNT_H_

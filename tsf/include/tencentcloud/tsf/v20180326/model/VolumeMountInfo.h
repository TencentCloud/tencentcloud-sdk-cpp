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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_VOLUMEMOUNTINFO_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_VOLUMEMOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 容器卷挂载点信息
                */
                class VolumeMountInfo : public AbstractModel
                {
                public:
                    VolumeMountInfo();
                    ~VolumeMountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取挂载数据卷名称
                     * @return VolumeMountName 挂载数据卷名称
                     * 
                     */
                    std::string GetVolumeMountName() const;

                    /**
                     * 设置挂载数据卷名称
                     * @param _volumeMountName 挂载数据卷名称
                     * 
                     */
                    void SetVolumeMountName(const std::string& _volumeMountName);

                    /**
                     * 判断参数 VolumeMountName 是否已赋值
                     * @return VolumeMountName 是否已赋值
                     * 
                     */
                    bool VolumeMountNameHasBeenSet() const;

                    /**
                     * 获取挂载路径
                     * @return VolumeMountPath 挂载路径
                     * 
                     */
                    std::string GetVolumeMountPath() const;

                    /**
                     * 设置挂载路径
                     * @param _volumeMountPath 挂载路径
                     * 
                     */
                    void SetVolumeMountPath(const std::string& _volumeMountPath);

                    /**
                     * 判断参数 VolumeMountPath 是否已赋值
                     * @return VolumeMountPath 是否已赋值
                     * 
                     */
                    bool VolumeMountPathHasBeenSet() const;

                    /**
                     * 获取挂载子路径
                     * @return VolumeMountSubPath 挂载子路径
                     * 
                     */
                    std::string GetVolumeMountSubPath() const;

                    /**
                     * 设置挂载子路径
                     * @param _volumeMountSubPath 挂载子路径
                     * 
                     */
                    void SetVolumeMountSubPath(const std::string& _volumeMountSubPath);

                    /**
                     * 判断参数 VolumeMountSubPath 是否已赋值
                     * @return VolumeMountSubPath 是否已赋值
                     * 
                     */
                    bool VolumeMountSubPathHasBeenSet() const;

                    /**
                     * 获取读写，1：读 2：读写
                     * @return ReadOrWrite 读写，1：读 2：读写
                     * 
                     */
                    std::string GetReadOrWrite() const;

                    /**
                     * 设置读写，1：读 2：读写
                     * @param _readOrWrite 读写，1：读 2：读写
                     * 
                     */
                    void SetReadOrWrite(const std::string& _readOrWrite);

                    /**
                     * 判断参数 ReadOrWrite 是否已赋值
                     * @return ReadOrWrite 是否已赋值
                     * 
                     */
                    bool ReadOrWriteHasBeenSet() const;

                private:

                    /**
                     * 挂载数据卷名称
                     */
                    std::string m_volumeMountName;
                    bool m_volumeMountNameHasBeenSet;

                    /**
                     * 挂载路径
                     */
                    std::string m_volumeMountPath;
                    bool m_volumeMountPathHasBeenSet;

                    /**
                     * 挂载子路径
                     */
                    std::string m_volumeMountSubPath;
                    bool m_volumeMountSubPathHasBeenSet;

                    /**
                     * 读写，1：读 2：读写
                     */
                    std::string m_readOrWrite;
                    bool m_readOrWriteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_VOLUMEMOUNTINFO_H_

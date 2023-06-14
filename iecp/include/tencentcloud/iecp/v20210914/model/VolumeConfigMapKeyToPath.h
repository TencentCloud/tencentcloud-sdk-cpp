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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_VOLUMECONFIGMAPKEYTOPATH_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_VOLUMECONFIGMAPKEYTOPATH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * ConfigMap的key挂载到路径
                */
                class VolumeConfigMapKeyToPath : public AbstractModel
                {
                public:
                    VolumeConfigMapKeyToPath();
                    ~VolumeConfigMapKeyToPath() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取健名
                     * @return Key 健名
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置健名
                     * @param _key 健名
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取对应本地路径
                     * @return Path 对应本地路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置对应本地路径
                     * @param _path 对应本地路径
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
                     * 获取对应权限模式
                     * @return Mode 对应权限模式
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置对应权限模式
                     * @param _mode 对应权限模式
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * 健名
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 对应本地路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 对应权限模式
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_VOLUMECONFIGMAPKEYTOPATH_H_

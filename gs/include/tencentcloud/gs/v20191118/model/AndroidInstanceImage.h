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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDINSTANCEIMAGE_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDINSTANCEIMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * 安卓实例镜像信息
                */
                class AndroidInstanceImage : public AbstractModel
                {
                public:
                    AndroidInstanceImage();
                    ~AndroidInstanceImage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像 ID
                     * @return AndroidInstanceImageId 镜像 ID
                     * 
                     */
                    std::string GetAndroidInstanceImageId() const;

                    /**
                     * 设置镜像 ID
                     * @param _androidInstanceImageId 镜像 ID
                     * 
                     */
                    void SetAndroidInstanceImageId(const std::string& _androidInstanceImageId);

                    /**
                     * 判断参数 AndroidInstanceImageId 是否已赋值
                     * @return AndroidInstanceImageId 是否已赋值
                     * 
                     */
                    bool AndroidInstanceImageIdHasBeenSet() const;

                    /**
                     * 获取镜像名称，由业务方自定义，仅用于展示
                     * @return AndroidInstanceImageName 镜像名称，由业务方自定义，仅用于展示
                     * 
                     */
                    std::string GetAndroidInstanceImageName() const;

                    /**
                     * 设置镜像名称，由业务方自定义，仅用于展示
                     * @param _androidInstanceImageName 镜像名称，由业务方自定义，仅用于展示
                     * 
                     */
                    void SetAndroidInstanceImageName(const std::string& _androidInstanceImageName);

                    /**
                     * 判断参数 AndroidInstanceImageName 是否已赋值
                     * @return AndroidInstanceImageName 是否已赋值
                     * 
                     */
                    bool AndroidInstanceImageNameHasBeenSet() const;

                    /**
                     * 获取镜像状态
                     * @return AndroidInstanceImageState 镜像状态
                     * 
                     */
                    std::string GetAndroidInstanceImageState() const;

                    /**
                     * 设置镜像状态
                     * @param _androidInstanceImageState 镜像状态
                     * 
                     */
                    void SetAndroidInstanceImageState(const std::string& _androidInstanceImageState);

                    /**
                     * 判断参数 AndroidInstanceImageState 是否已赋值
                     * @return AndroidInstanceImageState 是否已赋值
                     * 
                     */
                    bool AndroidInstanceImageStateHasBeenSet() const;

                    /**
                     * 获取镜像可用区
                     * @return AndroidInstanceImageZone 镜像可用区
                     * 
                     */
                    std::string GetAndroidInstanceImageZone() const;

                    /**
                     * 设置镜像可用区
                     * @param _androidInstanceImageZone 镜像可用区
                     * 
                     */
                    void SetAndroidInstanceImageZone(const std::string& _androidInstanceImageZone);

                    /**
                     * 判断参数 AndroidInstanceImageZone 是否已赋值
                     * @return AndroidInstanceImageZone 是否已赋值
                     * 
                     */
                    bool AndroidInstanceImageZoneHasBeenSet() const;

                    /**
                     * 获取安卓10
                     * @return AndroidVersion 安卓10
                     * 
                     */
                    std::string GetAndroidVersion() const;

                    /**
                     * 设置安卓10
                     * @param _androidVersion 安卓10
                     * 
                     */
                    void SetAndroidVersion(const std::string& _androidVersion);

                    /**
                     * 判断参数 AndroidVersion 是否已赋值
                     * @return AndroidVersion 是否已赋值
                     * 
                     */
                    bool AndroidVersionHasBeenSet() const;

                private:

                    /**
                     * 镜像 ID
                     */
                    std::string m_androidInstanceImageId;
                    bool m_androidInstanceImageIdHasBeenSet;

                    /**
                     * 镜像名称，由业务方自定义，仅用于展示
                     */
                    std::string m_androidInstanceImageName;
                    bool m_androidInstanceImageNameHasBeenSet;

                    /**
                     * 镜像状态
                     */
                    std::string m_androidInstanceImageState;
                    bool m_androidInstanceImageStateHasBeenSet;

                    /**
                     * 镜像可用区
                     */
                    std::string m_androidInstanceImageZone;
                    bool m_androidInstanceImageZoneHasBeenSet;

                    /**
                     * 安卓10
                     */
                    std::string m_androidVersion;
                    bool m_androidVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDINSTANCEIMAGE_H_

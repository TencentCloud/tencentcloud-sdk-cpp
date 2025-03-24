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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_SYNCANDROIDINSTANCEIMAGE_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_SYNCANDROIDINSTANCEIMAGE_H_

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
                * 同步安卓实例镜像信息
                */
                class SyncAndroidInstanceImage : public AbstractModel
                {
                public:
                    SyncAndroidInstanceImage();
                    ~SyncAndroidInstanceImage() = default;
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

                private:

                    /**
                     * 镜像 ID
                     */
                    std::string m_androidInstanceImageId;
                    bool m_androidInstanceImageIdHasBeenSet;

                    /**
                     * 镜像可用区
                     */
                    std::string m_androidInstanceImageZone;
                    bool m_androidInstanceImageZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_SYNCANDROIDINSTANCEIMAGE_H_

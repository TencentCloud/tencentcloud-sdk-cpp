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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MATERIALIMPORTEDEVENT_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MATERIALIMPORTEDEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/ImportMediaInfo.h>
#include <tencentcloud/cme/v20191029/model/Entity.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 媒体导入事件
                */
                class MaterialImportedEvent : public AbstractModel
                {
                public:
                    MaterialImportedEvent();
                    ~MaterialImportedEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取导入的媒体信息列表。
                     * @return MediaInfoSet 导入的媒体信息列表。
                     * 
                     */
                    std::vector<ImportMediaInfo> GetMediaInfoSet() const;

                    /**
                     * 设置导入的媒体信息列表。
                     * @param _mediaInfoSet 导入的媒体信息列表。
                     * 
                     */
                    void SetMediaInfoSet(const std::vector<ImportMediaInfo>& _mediaInfoSet);

                    /**
                     * 判断参数 MediaInfoSet 是否已赋值
                     * @return MediaInfoSet 是否已赋值
                     * 
                     */
                    bool MediaInfoSetHasBeenSet() const;

                    /**
                     * 获取媒体归属。
                     * @return Owner 媒体归属。
                     * 
                     */
                    Entity GetOwner() const;

                    /**
                     * 设置媒体归属。
                     * @param _owner 媒体归属。
                     * 
                     */
                    void SetOwner(const Entity& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取媒体分类路径。
                     * @return ClassPath 媒体分类路径。
                     * 
                     */
                    std::string GetClassPath() const;

                    /**
                     * 设置媒体分类路径。
                     * @param _classPath 媒体分类路径。
                     * 
                     */
                    void SetClassPath(const std::string& _classPath);

                    /**
                     * 判断参数 ClassPath 是否已赋值
                     * @return ClassPath 是否已赋值
                     * 
                     */
                    bool ClassPathHasBeenSet() const;

                private:

                    /**
                     * 导入的媒体信息列表。
                     */
                    std::vector<ImportMediaInfo> m_mediaInfoSet;
                    bool m_mediaInfoSetHasBeenSet;

                    /**
                     * 媒体归属。
                     */
                    Entity m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 媒体分类路径。
                     */
                    std::string m_classPath;
                    bool m_classPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MATERIALIMPORTEDEVENT_H_

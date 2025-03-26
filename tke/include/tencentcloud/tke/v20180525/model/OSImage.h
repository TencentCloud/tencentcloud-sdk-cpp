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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_OSIMAGE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_OSIMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 操作系统描述
                */
                class OSImage : public AbstractModel
                {
                public:
                    OSImage();
                    ~OSImage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取os聚合名称
                     * @return SeriesName os聚合名称
                     * 
                     */
                    std::string GetSeriesName() const;

                    /**
                     * 设置os聚合名称
                     * @param _seriesName os聚合名称
                     * 
                     */
                    void SetSeriesName(const std::string& _seriesName);

                    /**
                     * 判断参数 SeriesName 是否已赋值
                     * @return SeriesName 是否已赋值
                     * 
                     */
                    bool SeriesNameHasBeenSet() const;

                    /**
                     * 获取os别名
                     * @return Alias os别名
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置os别名
                     * @param _alias os别名
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取os名称
                     * @return OsName os名称
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置os名称
                     * @param _osName os名称
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取操作系统类型(分为定制和非定制，取值分别为:DOCKER_CUSTOMIZE、GENERAL)
                     * @return OsCustomizeType 操作系统类型(分为定制和非定制，取值分别为:DOCKER_CUSTOMIZE、GENERAL)
                     * 
                     */
                    std::string GetOsCustomizeType() const;

                    /**
                     * 设置操作系统类型(分为定制和非定制，取值分别为:DOCKER_CUSTOMIZE、GENERAL)
                     * @param _osCustomizeType 操作系统类型(分为定制和非定制，取值分别为:DOCKER_CUSTOMIZE、GENERAL)
                     * 
                     */
                    void SetOsCustomizeType(const std::string& _osCustomizeType);

                    /**
                     * 判断参数 OsCustomizeType 是否已赋值
                     * @return OsCustomizeType 是否已赋值
                     * 
                     */
                    bool OsCustomizeTypeHasBeenSet() const;

                    /**
                     * 获取os是否下线(online表示在线,offline表示下线)
                     * @return Status os是否下线(online表示在线,offline表示下线)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置os是否下线(online表示在线,offline表示下线)
                     * @param _status os是否下线(online表示在线,offline表示下线)
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取镜像id
                     * @return ImageId 镜像id
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像id
                     * @param _imageId 镜像id
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                private:

                    /**
                     * os聚合名称
                     */
                    std::string m_seriesName;
                    bool m_seriesNameHasBeenSet;

                    /**
                     * os别名
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * os名称
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * 操作系统类型(分为定制和非定制，取值分别为:DOCKER_CUSTOMIZE、GENERAL)
                     */
                    std::string m_osCustomizeType;
                    bool m_osCustomizeTypeHasBeenSet;

                    /**
                     * os是否下线(online表示在线,offline表示下线)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 镜像id
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_OSIMAGE_H_

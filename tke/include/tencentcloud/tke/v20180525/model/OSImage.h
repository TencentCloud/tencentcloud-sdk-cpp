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
                     * 获取<p>os聚合名称</p>
                     * @return SeriesName <p>os聚合名称</p>
                     * 
                     */
                    std::string GetSeriesName() const;

                    /**
                     * 设置<p>os聚合名称</p>
                     * @param _seriesName <p>os聚合名称</p>
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
                     * 获取<p>os别名</p>
                     * @return Alias <p>os别名</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>os别名</p>
                     * @param _alias <p>os别名</p>
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
                     * 获取<p>os名称</p>
                     * @return OsName <p>os名称</p>
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置<p>os名称</p>
                     * @param _osName <p>os名称</p>
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
                     * 获取<p>操作系统类型(分为定制和非定制，取值分别为:DOCKER_CUSTOMIZE、GENERAL)</p>
                     * @return OsCustomizeType <p>操作系统类型(分为定制和非定制，取值分别为:DOCKER_CUSTOMIZE、GENERAL)</p>
                     * 
                     */
                    std::string GetOsCustomizeType() const;

                    /**
                     * 设置<p>操作系统类型(分为定制和非定制，取值分别为:DOCKER_CUSTOMIZE、GENERAL)</p>
                     * @param _osCustomizeType <p>操作系统类型(分为定制和非定制，取值分别为:DOCKER_CUSTOMIZE、GENERAL)</p>
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
                     * 获取<p>os是否下线(online表示在线,offline表示下线)</p>
                     * @return Status <p>os是否下线(online表示在线,offline表示下线)</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>os是否下线(online表示在线,offline表示下线)</p>
                     * @param _status <p>os是否下线(online表示在线,offline表示下线)</p>
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
                     * 获取<p>镜像id</p>
                     * @return ImageId <p>镜像id</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>镜像id</p>
                     * @param _imageId <p>镜像id</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>架构</p>
                     * @return Arch <p>架构</p>
                     * 
                     */
                    std::string GetArch() const;

                    /**
                     * 设置<p>架构</p>
                     * @param _arch <p>架构</p>
                     * 
                     */
                    void SetArch(const std::string& _arch);

                    /**
                     * 判断参数 Arch 是否已赋值
                     * @return Arch 是否已赋值
                     * 
                     */
                    bool ArchHasBeenSet() const;

                private:

                    /**
                     * <p>os聚合名称</p>
                     */
                    std::string m_seriesName;
                    bool m_seriesNameHasBeenSet;

                    /**
                     * <p>os别名</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>os名称</p>
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * <p>操作系统类型(分为定制和非定制，取值分别为:DOCKER_CUSTOMIZE、GENERAL)</p>
                     */
                    std::string m_osCustomizeType;
                    bool m_osCustomizeTypeHasBeenSet;

                    /**
                     * <p>os是否下线(online表示在线,offline表示下线)</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>镜像id</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>架构</p>
                     */
                    std::string m_arch;
                    bool m_archHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_OSIMAGE_H_
